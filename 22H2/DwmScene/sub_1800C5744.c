/*
 * XREFs of sub_1800C5744 @ 0x1800C5744
 * Callers:
 *     sub_1800B9740 @ 0x1800B9740 (sub_1800B9740.c)
 *     sub_1800BE160 @ 0x1800BE160 (sub_1800BE160.c)
 * Callees:
 *     sub_1800752B4 @ 0x1800752B4 (sub_1800752B4.c)
 *     sub_1800AC5F0 @ 0x1800AC5F0 (sub_1800AC5F0.c)
 *     sub_1800B5F5C @ 0x1800B5F5C (sub_1800B5F5C.c)
 *     sub_1800FB798 @ 0x1800FB798 (sub_1800FB798.c)
 *     sub_1800FB7A4 @ 0x1800FB7A4 (sub_1800FB7A4.c)
 *     sub_1800FB7AC @ 0x1800FB7AC (sub_1800FB7AC.c)
 *     sub_1800FB7D0 @ 0x1800FB7D0 (sub_1800FB7D0.c)
 *     sub_1800FB7D8 @ 0x1800FB7D8 (sub_1800FB7D8.c)
 *     sub_1800FB81C @ 0x1800FB81C (sub_1800FB81C.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_UNKNOWN **__fastcall sub_1800C5744(__int64 a1, __int64 *a2)
{
  __int64 v3; // r14
  int v4; // xmm7_4
  int v5; // xmm8_4
  int v6; // xmm9_4
  double v7; // xmm0_8
  double v8; // xmm0_8
  double v9; // xmm0_8
  __int64 v10; // rdx
  _UNKNOWN **v11; // r13
  __int64 v12; // r12
  volatile signed __int32 *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rbp
  volatile signed __int32 *v16; // r15
  char v17; // al
  char v18; // bl
  double v19; // xmm0_8
  float v20; // xmm12_4
  double v21; // xmm0_8
  float v22; // xmm10_4
  double v23; // xmm0_8
  float v24; // xmm11_4
  char v25; // al
  int v26; // eax
  double v27; // xmm0_8
  int v28; // xmm14_4
  __int64 v29; // rdx
  __int64 v30; // rdx
  float v31; // xmm0_4
  float v32; // xmm0_4
  _UNKNOWN **result; // rax
  int v34; // [rsp+20h] [rbp-F8h]
  int v35; // [rsp+24h] [rbp-F4h]
  __int64 v36; // [rsp+28h] [rbp-F0h]
  char v37; // [rsp+128h] [rbp+10h]
  char v38; // [rsp+130h] [rbp+18h]
  unsigned int v39; // [rsp+138h] [rbp+20h]

  v3 = sub_1800752B4(a1, *(_DWORD *)(*a2 + 112));
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, &unk_18020A008, 0LL) )
  {
    v7 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, &unk_180209FA8);
    v4 = LODWORD(v7);
    v8 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, &unk_180209FC8);
    v5 = LODWORD(v8);
    v9 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, &unk_180209FE8);
    v6 = LODWORD(v9);
  }
  v39 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, &unk_180209F68, 0LL);
  v11 = &off_18020C730;
  v12 = sub_1800B5F5C(*a2, v10) + 16;
  do
  {
    v13 = *(volatile signed __int32 **)(v12 + 128);
    if ( v13 )
    {
      _InterlockedIncrement(v13 + 2);
      v13 = *(volatile signed __int32 **)(v12 + 128);
    }
    v14 = *(_QWORD *)(v12 + 120);
    v15 = v14;
    if ( v14 )
    {
      v16 = *(volatile signed __int32 **)v12;
      if ( *(_QWORD *)v12 )
      {
        _InterlockedIncrement(v16 + 2);
        v16 = *(volatile signed __int32 **)v12;
        v15 = v14;
      }
      v36 = *(_QWORD *)(v12 - 8);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, *(v11 - 2), 0LL);
      v18 = v17;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 88LL))(v3, *(v11 - 1));
      v19 = (*(double (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 88LL))(v3, *v11);
      v20 = *(float *)&v19;
      v21 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, v11[3]);
      v22 = *(float *)&v21;
      v23 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, v11[4]);
      v24 = *(float *)&v23;
      v37 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, v11[2], 0LL);
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, v11[5], 0LL);
      v38 = v25;
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, v11[6]);
      v34 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, v11[8], 0LL);
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, v11[9], 0LL);
      v35 = v26;
      v27 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, v11[10]);
      v28 = LODWORD(v27);
      *(float *)&v27 = o_roundf();
      sub_1800FB7AC(v15, (unsigned int)(int)*(float *)&v27);
      sub_1800FB81C(v15, v39);
      *(_BYTE *)(v15 + 72) = v18;
      if ( v20 != *(float *)(v14 + 340) )
      {
        *(float *)(v14 + 340) = v20;
        sub_1800AC5F0(v14, 2);
      }
      LOBYTE(v29) = v37;
      sub_1800FB7D0(v15, v29);
      if ( v22 != *(float *)(v14 + 320) )
      {
        *(float *)(v14 + 320) = v22;
        sub_1800AC5F0(v14, 2);
      }
      if ( v24 != *(float *)(v14 + 324) )
      {
        *(float *)(v14 + 324) = v24;
        sub_1800AC5F0(v14, 2);
      }
      LOBYTE(v30) = v38;
      sub_1800FB7A4(v15, v30);
      sub_1800FB798(v15);
      *(_DWORD *)(v15 + 1960) = v34;
      *(_DWORD *)(v15 + 1964) = v35;
      *(_DWORD *)(v15 + 1968) = v28;
      if ( v36 && *(_DWORD *)(v36 + 120) == 1 )
      {
        v31 = *(float *)(v36 + 112);
        if ( v31 != *(float *)(v14 + 328) )
        {
          *(float *)(v14 + 328) = v31;
          sub_1800AC5F0(v14, 2);
        }
      }
      else
      {
        v32 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, v11[1]);
        if ( v32 != *(float *)(v14 + 328) )
        {
          *(float *)(v14 + 328) = v32;
          sub_1800AC5F0(v14, 2);
        }
        (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, v11[7]);
      }
      sub_1800FB7D8(v15);
      *(_DWORD *)(v14 + 400) = v4;
      *(_DWORD *)(v14 + 404) = v5;
      *(_DWORD *)(v14 + 408) = v6;
      if ( v16 )
      {
        if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        }
      }
    }
    if ( v13 && _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
    v12 += 16LL;
    v11 += 13;
    result = &off_18020C868;
  }
  while ( (__int64)v11 < (__int64)&off_18020C868 );
  return result;
}
