void __fastcall MiPerformFixups(
        ULONG_PTR BugCheckParameter3,
        __int64 *BugCheckParameter2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  char v6; // bp
  unsigned int v8; // esi
  __int64 v11; // rbx
  __int64 v12; // r11
  _OWORD *v13; // r9
  const struct _RTL_FUNCTION_OVERRIDE_INFORMATION *v14; // r10
  int v15; // r12d
  unsigned __int16 *v16; // rdx
  bool v17; // r8
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rax
  int v20; // ecx
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  int SystemRegionType; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  char v26; // al
  _DWORD *v27; // rcx
  bool v28; // zf
  bool DoesRequireFunctionOverrideFixups; // al
  char v30; // di
  int v31; // eax
  char v32; // al
  _OWORD *v33; // [rsp+40h] [rbp-88h]
  const struct _RTL_FUNCTION_OVERRIDE_INFORMATION *v34; // [rsp+48h] [rbp-80h]
  __int128 v35; // [rsp+50h] [rbp-78h] BYREF
  __int128 v36; // [rsp+60h] [rbp-68h]
  __int128 v37; // [rsp+70h] [rbp-58h]
  unsigned __int16 *v38; // [rsp+D0h] [rbp+8h]
  unsigned __int64 v39; // [rsp+D8h] [rbp+10h]
  __int64 v40; // [rsp+E8h] [rbp+20h]
  bool v41; // [rsp+F8h] [rbp+30h]

  v6 = a6;
  v8 = a3;
  if ( !a4 )
    v6 = a6 & 0xFE;
  v11 = *(_QWORD *)(BugCheckParameter2[12] + 32);
  if ( (v6 & 1) != 0 && a3 < *(_DWORD *)(v11 + 56) )
  {
    v12 = *BugCheckParameter2;
    v13 = *(_OWORD **)(v11 + 88);
    v14 = *(const struct _RTL_FUNCTION_OVERRIDE_INFORMATION **)(v11 + 96);
    v15 = a3 << 12;
    v40 = *BugCheckParameter2;
    v33 = v13;
    v34 = v14;
    while ( 1 )
    {
      v16 = 0LL;
      v17 = 0;
      v38 = 0LL;
      v41 = 0;
      v18 = *(_QWORD *)(*(_QWORD *)v11 + 8LL * v8);
      if ( v13 )
      {
        v16 = (unsigned __int16 *)*((_QWORD *)v13 + v8 + 7);
        v38 = v16;
      }
      if ( v14 )
      {
        DoesRequireFunctionOverrideFixups = RtlDoesRequireFunctionOverrideFixups(v14, v8);
        v16 = v38;
        v17 = DoesRequireFunctionOverrideFixups;
        v41 = DoesRequireFunctionOverrideFixups;
      }
      if ( v18 )
      {
        if ( v18 > 1 )
        {
          if ( *(_BYTE *)(v11 + 64) )
            MiApplyCompressedFixups((ULONG_PTR)BugCheckParameter2, BugCheckParameter3);
          else
            MiApplyRawFixups((ULONG_PTR)BugCheckParameter2);
          v12 = v40;
        }
        if ( (v18 & 1) != 0 )
        {
          MiApplyStraddleFixups(v11, (char *)BugCheckParameter3, v15, a4, a5, v6);
          v12 = v40;
        }
        v16 = v38;
LABEL_18:
        v19 = *(_QWORD *)(v12 + 32);
        v39 = v19;
        if ( (v6 & 4) != 0 )
        {
          if ( (v6 & 8) != 0 )
          {
            v19 += a5;
            goto LABEL_38;
          }
        }
        else if ( (v6 & 8) == 0 )
        {
          goto LABEL_20;
        }
        v19 += a4;
LABEL_38:
        v39 = v19;
LABEL_20:
        if ( v16 )
        {
          v21 = v33[1];
          v35 = *v33;
          v22 = v33[2];
          v36 = v21;
          v37 = v22;
          if ( a5 )
            *(_QWORD *)&v36 = 0LL;
          SystemRegionType = MiGetSystemRegionType(v19);
          if ( SystemRegionType == 12 )
          {
            v26 = v6;
          }
          else
          {
            v28 = SystemRegionType == 1;
            v26 = v6;
            if ( !v28 )
              v26 = v6 | 8;
          }
          MiApplyRetpolineFixups(BugCheckParameter3, v24, v25, v15, (__int64)&v35, v38, v26);
          v19 = v39;
          v12 = v40;
        }
        if ( v41 )
        {
          v30 = (v6 & 8) != 0;
          v31 = MiGetSystemRegionType(v19);
          if ( v39 > 0x7FFFFFFEFFFFLL )
          {
            if ( v31 == 12 )
            {
              v32 = 1;
LABEL_51:
              RtlApplyFunctionOverrideFixups(v34, v8, BugCheckParameter3, v30, v32);
              v12 = v40;
              goto LABEL_22;
            }
            if ( v31 == 1 )
            {
              v32 = 1;
              goto LABEL_51;
            }
            v30 = 1;
          }
          v32 = 0;
          goto LABEL_51;
        }
LABEL_22:
        v20 = *(_DWORD *)(v11 + 60);
        if ( (v20 & 0xFFFFF000) == v15 )
        {
          v27 = (_DWORD *)(BugCheckParameter3 + (v20 & 0xFFF));
          if ( (*(_BYTE *)(v12 + 14) & 0x40) != 0 )
            *v27 += a4;
          else
            *(_QWORD *)v27 += a4;
        }
        BugCheckParameter3 += 4096LL;
        if ( (BugCheckParameter3 & 0xFFF) == 0 )
          return;
        v13 = v33;
        ++v8;
        v14 = v34;
        v15 += 4096;
      }
      else
      {
        if ( v16 || v17 )
          goto LABEL_18;
        BugCheckParameter3 += 4096LL;
        if ( (BugCheckParameter3 & 0xFFF) == 0 )
          return;
        ++v8;
        v15 += 4096;
      }
    }
  }
}
