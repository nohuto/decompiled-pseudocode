__int64 __fastcall SepFilterCheck(__int64 a1, __int64 *a2, __int64 a3, char a4, int *a5)
{
  __int64 v5; // r11
  __int64 v6; // r10
  char v7; // bp
  unsigned int v8; // edi
  int v9; // esi
  int v10; // r14d
  int *v11; // r15
  __int16 v12; // ax
  __int64 v13; // r13
  __int64 *p_P; // rbx
  int v15; // eax
  __int64 v17; // rax
  __int64 v18; // r12
  unsigned int v19; // edx
  unsigned int v20; // edi
  unsigned __int16 v21; // dx
  int v22; // eax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v24; // rax
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // rsi
  int *v28; // rcx
  void *v29; // rdx
  __int64 v30; // r8
  int v31; // eax
  _QWORD *v32; // rax
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // [rsp+20h] [rbp-98h]
  unsigned int v38; // [rsp+40h] [rbp-78h]
  int v39; // [rsp+60h] [rbp-58h]
  int v40; // [rsp+64h] [rbp-54h]
  PVOID P; // [rsp+68h] [rbp-50h] BYREF
  int v42; // [rsp+C0h] [rbp+8h]
  int v43; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v44; // [rsp+D0h] [rbp+18h]
  char v45; // [rsp+D8h] [rbp+20h]

  v45 = a4;
  v44 = a3;
  v5 = 0LL;
  v6 = a3;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = -1;
  v11 = a5;
  P = 0LL;
  v43 = 0;
  *a5 = -1;
  v12 = *(_WORD *)(a1 + 2);
  if ( (v12 & 0x10) != 0 )
  {
    if ( v12 >= 0 )
    {
      v13 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      v17 = *(unsigned int *)(a1 + 12);
      if ( (_DWORD)v17 )
        v13 = a1 + v17;
      else
        v13 = 0LL;
    }
  }
  else
  {
    v13 = 0LL;
  }
  p_P = (__int64 *)&P;
  if ( a2 )
    p_P = a2;
  LOBYTE(a1) = 0;
  v42 = a1;
  if ( v13 )
  {
    while ( 1 )
    {
      v18 = v13 + 8;
      v19 = 0;
      if ( !*(_WORD *)(v13 + 4) )
        break;
      while ( v19 < v8 || *(_BYTE *)v18 != 21 )
      {
        ++v19;
        v18 += *(unsigned __int16 *)(v18 + 2);
        if ( v19 >= *(unsigned __int16 *)(v13 + 4) )
          goto LABEL_21;
      }
      v20 = v19;
      if ( (*(_BYTE *)(v18 + 1) & 8) != 0 )
      {
        LOBYTE(v15) = v42;
      }
      else
      {
        v21 = 4 * (*(unsigned __int8 *)(v18 + 9) + 2);
        v22 = *(unsigned __int16 *)(v18 + 2) - v21;
        LOWORD(a5) = v21;
        v39 = v21;
        if ( v22 - 8 <= 0 || (v40 = *(_DWORD *)(v18 + 4), (v40 & 0xFF000000) != 0) )
        {
          v9 = -1073741705;
          break;
        }
        if ( a4 && !v7 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 48), 1u);
          LODWORD(a1) = v42;
          v5 = 0LL;
          v6 = v44;
          v7 = 1;
          v21 = (unsigned __int16)a5;
        }
        if ( !*p_P )
        {
          v9 = AuthzBasepInitializeResourceClaimsFromSacl(v13, p_P);
          if ( v9 < 0 )
            break;
          LODWORD(a1) = v42;
          v5 = 0LL;
          v6 = v44;
          v21 = (unsigned __int16)a5;
        }
        v24 = *(_QWORD **)(v6 + 1096);
        v43 = -1;
        v42 = a1;
        if ( v24 )
        {
          v25 = v24[72];
          v26 = v24[74];
          v5 = v24[73];
          v27 = v24[75];
        }
        else
        {
          v25 = 0LL;
          v26 = 0LL;
          v27 = 0LL;
        }
        v28 = (int *)(v21 + v18 + 8);
        v29 = *(void **)(v6 + 776);
        v38 = *(unsigned __int16 *)(v18 + 2) - v39 - 8;
        v37 = v26;
        v30 = *p_P;
        a5 = v28;
        v9 = AuthzBasepEvaluateAceCondition(v6, v29, v30, v25, v37, v5, v27, v28, v38, 1, 0, &v43);
        if ( v9 < 0 )
          break;
        if ( v43 != 1 )
        {
          v31 = (unsigned __int8)v42;
          if ( (*(_BYTE *)(v18 + 1) & 0x40) != 0 )
            v31 = 1;
          v42 = v31;
          v10 &= v40 | 0x1000000;
        }
        v6 = v44;
        if ( (*(_DWORD *)(v44 + 200) & 0x10) != 0 )
        {
          v32 = *(_QWORD **)(v44 + 1096);
          v43 = -1;
          if ( v32 )
          {
            v33 = v32[72];
            v34 = v32[74];
            v35 = v32[73];
            v36 = v32[75];
          }
          else
          {
            v33 = 0LL;
            v34 = 0LL;
            v35 = 0LL;
            v36 = 0LL;
          }
          v9 = AuthzBasepEvaluateAceCondition(
                 v44,
                 *(void **)(v44 + 776),
                 *p_P,
                 v33,
                 v34,
                 v35,
                 v36,
                 a5,
                 (unsigned int)*(unsigned __int16 *)(v18 + 2) - v39 - 8,
                 1,
                 1,
                 &v43);
          if ( v9 < 0 )
            break;
          LOBYTE(v15) = v42;
          a4 = v45;
          v6 = v44;
          if ( v43 != 1 )
          {
            v15 = (unsigned __int8)v42;
            if ( (*(_BYTE *)(v18 + 1) & 0x40) != 0 )
              v15 = 1;
            v42 = v15;
            v10 &= v40 | 0x1000000;
          }
        }
        else
        {
          LOBYTE(v15) = v42;
          a4 = v45;
        }
        v5 = 0LL;
      }
      v8 = v20 + 1;
      if ( !v18 )
        goto LABEL_7;
      LODWORD(a1) = v42;
    }
LABEL_21:
    LOBYTE(v15) = v42;
  }
  else
  {
    LOBYTE(v15) = 0;
  }
LABEL_7:
  if ( v10 != -1 )
  {
    *v11 = v10;
    *((_BYTE *)v11 + 4) = v15;
  }
  if ( v7 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v44 + 48));
    KeLeaveCriticalRegion();
  }
  if ( P )
    SepFreeResourceInfo(P);
  return (unsigned int)v9;
}
