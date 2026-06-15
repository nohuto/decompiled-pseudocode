/*
 * XREFs of sub_180117A50 @ 0x180117A50
 * Callers:
 *     sub_180117FF4 @ 0x180117FF4 (sub_180117FF4.c)
 * Callees:
 *     sub_18001FEF0 @ 0x18001FEF0 (sub_18001FEF0.c)
 *     sub_180047420 @ 0x180047420 (sub_180047420.c)
 *     sub_180048714 @ 0x180048714 (sub_180048714.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180116EE8 @ 0x180116EE8 (sub_180116EE8.c)
 *     sub_180119B6C @ 0x180119B6C (sub_180119B6C.c)
 *     sub_18011C8E8 @ 0x18011C8E8 (sub_18011C8E8.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180117A50(__int64 a1, int a2, int a3, __int64 a4, _QWORD *a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  _QWORD *v12; // rsi
  int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
  int v16; // eax
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-41h] BYREF
  void *Src; // [rsp+30h] [rbp-31h]
  __int128 v19; // [rsp+38h] [rbp-29h] BYREF
  __int64 v20; // [rsp+48h] [rbp-19h]
  __int128 v21[4]; // [rsp+50h] [rbp-11h] BYREF
  __int64 v22; // [rsp+90h] [rbp+2Fh]
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+57h]
  char v24; // [rsp+C0h] [rbp+5Fh] BYREF

  *(_QWORD *)&v19 = a1;
  BYTE8(v19) = 1;
  *(_OWORD *)pvar = 0LL;
  Src = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
         *(_QWORD *)(a1 + 40),
         &unk_180172BB0,
         pvar) >= 0
    && LOWORD(pvar[0]) == 65
    && sub_180047420((__int64)pvar)
    && (int)sub_18001FEF0((__int64)Src) >= 0 )
  {
    v24 = 0;
    sub_180119B6C(a4, Src, &v24);
    if ( v24 )
    {
      v9 = sub_180048714((unsigned __int16 *)Src, a5);
      v10 = v9;
      if ( v9 >= 0 )
        v10 = 0;
      else
        sub_18004BD84(
          (int)retaddr,
          6481,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          v9);
      PropVariantClear(pvar);
      v19 = 0LL;
      v20 = 0LL;
      (*(void (__fastcall **)(_QWORD, void *, __int128 *))(**(_QWORD **)(a1 + 40) + 48LL))(
        *(_QWORD *)(a1 + 40),
        &unk_180172BB0,
        &v19);
      return v10;
    }
  }
  PropVariantClear(pvar);
  v19 = 0LL;
  v20 = 0LL;
  (*(void (__fastcall **)(_QWORD, void *, __int128 *))(**(_QWORD **)(a1 + 40) + 48LL))(
    *(_QWORD *)(a1 + 40),
    &unk_180172BB0,
    &v19);
  if ( a2 )
  {
    v12 = a5;
    v13 = sub_18011C8E8(a1, a5);
    v14 = v13;
    if ( v13 < 0 )
    {
      sub_18004BD84(
        (int)retaddr,
        6492,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        v13);
      return v14;
    }
    sub_180119B6C(a4, *v12, &v24);
  }
  else
  {
    *(_OWORD *)pvar = 0LL;
    Src = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
           *(_QWORD *)(a1 + 40),
           &unk_18015C4C8,
           pvar) >= 0
      && LOWORD(pvar[0]) == 65
      && sub_180047420((__int64)pvar)
      && (int)sub_18001FEF0((__int64)Src) >= 0 )
    {
      v24 = 0;
      sub_180119B6C(a4, Src, &v24);
      if ( v24 )
      {
        v15 = sub_180048714((unsigned __int16 *)Src, a5);
        v10 = v15;
        if ( v15 >= 0 )
          v10 = 0;
        else
          sub_18004BD84(
            (int)retaddr,
            6509,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            v15);
        PropVariantClear(pvar);
        return v10;
      }
    }
    PropVariantClear(pvar);
    v21[0] = *(_OWORD *)a4;
    v21[1] = *(_OWORD *)(a4 + 16);
    v21[2] = *(_OWORD *)(a4 + 32);
    v21[3] = *(_OWORD *)(a4 + 48);
    v22 = *(_QWORD *)(a4 + 64);
    v16 = sub_180116EE8(a1, a3, v21, a5);
    v10 = v16;
    if ( v16 < 0 )
    {
      sub_18004BD84(
        (int)retaddr,
        6516,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        v16);
      return v10;
    }
  }
  return 0LL;
}
