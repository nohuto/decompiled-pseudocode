/*
 * XREFs of sub_180029348 @ 0x180029348
 * Callers:
 *     sub_180046760 @ 0x180046760 (sub_180046760.c)
 *     sub_18011FF10 @ 0x18011FF10 (sub_18011FF10.c)
 * Callees:
 *     sub_1800234A0 @ 0x1800234A0 (sub_1800234A0.c)
 *     sub_180028F24 @ 0x180028F24 (sub_180028F24.c)
 *     sub_1800296D4 @ 0x1800296D4 (sub_1800296D4.c)
 *     sub_180047F60 @ 0x180047F60 (sub_180047F60.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 *     sub_1801197D0 @ 0x1801197D0 (sub_1801197D0.c)
 *     sub_180119954 @ 0x180119954 (sub_180119954.c)
 *     sub_18011D248 @ 0x18011D248 (sub_18011D248.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180029348(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v6; // edi
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rcx
  LPVOID v10; // rcx
  int v11; // r13d
  int v12; // eax
  __int64 v13; // r12
  bool v14; // bl
  __int64 v15; // rax
  int v16; // edx
  int v17; // r8d
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v21; // rcx
  unsigned int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-41h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-39h] BYREF
  __int64 v31; // [rsp+58h] [rbp-31h] BYREF
  __int64 v32; // [rsp+60h] [rbp-29h] BYREF
  int v33; // [rsp+68h] [rbp-21h]
  __int64 v34; // [rsp+70h] [rbp-19h]
  __int64 v35; // [rsp+78h] [rbp-11h] BYREF
  int v36; // [rsp+80h] [rbp-9h]
  __int64 v37[2]; // [rsp+88h] [rbp-1h] BYREF

  v33 = a4;
  v34 = a2;
  v35 = a1;
  v36 = a4;
  v6 = 0;
  v29 = 0;
  v28 = *(_QWORD *)(a1 + 40);
  v32 = 0LL;
  v31 = 0LL;
  pv = 0LL;
  v7 = sub_1800296D4(&v31, &v32, &v28);
  v8 = v7;
  if ( v7 < 0 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v32) = v7;
      LODWORD(v28) = 181;
      v37[0] = (__int64)"Create_SpatialAudioDevicePropertyReader";
      sub_180109778((int)&dword_18019C480, (__int64)v37, (__int64)&v28, (__int64)&v32);
    }
  }
  else
  {
    v8 = (**(__int64 (__fastcall ***)(__int64, void *, LPVOID *))v31)(v31, &unk_18015B8B0, &pv);
  }
  v9 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v8 >= 0 && (*(int (__fastcall **)(LPVOID, unsigned int *))(*(_QWORD *)pv + 184LL))(pv, &v29) >= 0 )
    v6 = v29;
  v10 = pv;
  if ( pv )
  {
    pv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v6 )
  {
    if ( (unsigned int)sub_180047F60(a1) )
    {
      sub_18011D248(a1, &v28);
      if ( (_DWORD)v28 != 1 && (unsigned int)(v28 - 3) > 3 )
        v6 = 0;
    }
  }
  v11 = 0;
  v12 = *(_DWORD *)(a3 + 8);
  if ( v12 > 0 )
  {
    v13 = 0LL;
    do
    {
      if ( v13 < 0 || v11 >= v12 )
      {
        sub_1800BB2C8(3221225612LL);
        __debugbreak();
      }
      *(_OWORD *)v37 = *(_OWORD *)(v13 + *(_QWORD *)a3);
      v14 = v6 != 0;
      if ( v6 == 2 )
      {
        v28 = 0LL;
        v31 = 0LL;
        pv = 0LL;
        v29 = 0;
        v14 = 1;
        if ( (int)sub_180119954((unsigned int)&v35, v34, (unsigned int)v37, (unsigned int)&v28, (__int64)&v31) >= 0 )
        {
          v21 = v31;
          if ( v31 )
          {
            if ( (*(int (__fastcall **)(__int64, LPVOID *, unsigned int *, _QWORD))(*(_QWORD *)v31 + 24LL))(
                   v31,
                   &pv,
                   &v29,
                   0LL) >= 0 )
            {
              v22 = 0;
              if ( v29 )
              {
                while ( 1 )
                {
                  v21 = 2LL * v22;
                  v23 = *((_QWORD *)pv + 2 * v22) - 0x11E282116F64ADC7LL;
                  if ( *((_QWORD *)pv + 2 * v22) == 0x11E282116F64ADC7LL )
                    v23 = *((_QWORD *)pv + 2 * v22 + 1) + 0x5FE0F28D8D38F74LL;
                  if ( !v23 )
                    break;
                  v24 = *((_QWORD *)pv + 2 * v22) - 0x11E282116F64ADC6LL;
                  if ( *((_QWORD *)pv + 2 * v22) == 0x11E282116F64ADC6LL )
                    v24 = *((_QWORD *)pv + 2 * v22 + 1) + 0x5FE0F28D8D38F74LL;
                  if ( !v24 )
                    break;
                  if ( ++v22 >= v29 )
                  {
                    v14 = 1;
                    goto LABEL_44;
                  }
                }
                v14 = 0;
              }
            }
          }
LABEL_44:
          if ( v14
            && v28
            && ((unsigned __int8)sub_1801197D0(v21, v28, 48000LL, 6LL)
             || (unsigned __int8)sub_1801197D0(v25, v28, 48000LL, 8LL)
             || (unsigned __int8)sub_1801197D0(v26, v28, 44100LL, 6LL)
             || (unsigned __int8)sub_1801197D0(v27, v28, 44100LL, 8LL)) )
          {
            v14 = 0;
          }
        }
        CoTaskMemFree(pv);
        pv = 0LL;
        if ( v31 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
        if ( v28 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      v15 = sub_1800234A0((unsigned __int64 *)(a1 + 152), v33);
      v16 = 0;
      v17 = *(_DWORD *)(v15 + 8);
      if ( v17 <= 0 )
      {
LABEL_22:
        v16 = -1;
      }
      else
      {
        v18 = *(_QWORD *)v15;
        while ( 1 )
        {
          v19 = *(_QWORD *)(v18 + 16LL * v16) - v37[0];
          if ( !v19 )
            v19 = *(_QWORD *)(v18 + 16LL * v16 + 8) - v37[1];
          if ( !v19 )
            break;
          if ( ++v16 >= v17 )
            goto LABEL_22;
        }
      }
      sub_180028F24(v34, a3, v14, (unsigned __int64)&unk_18019D6E8 & -(__int64)v14, 1, v16 != -1);
      ++v11;
      v13 += 16LL;
      v12 = *(_DWORD *)(a3 + 8);
    }
    while ( v11 < v12 );
  }
  *(_DWORD *)(a3 + 16) = 28;
  return 0LL;
}
