/*
 * XREFs of sub_180117D48 @ 0x180117D48
 * Callers:
 *     sub_18001F9C0 @ 0x18001F9C0 (sub_18001F9C0.c)
 * Callees:
 *     sub_18001FEF0 @ 0x18001FEF0 (sub_18001FEF0.c)
 *     sub_180047420 @ 0x180047420 (sub_180047420.c)
 *     sub_180048714 @ 0x180048714 (sub_180048714.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1801174D4 @ 0x1801174D4 (sub_1801174D4.c)
 *     sub_180119B20 @ 0x180119B20 (sub_180119B20.c)
 *     sub_18011C8E8 @ 0x18011C8E8 (sub_18011C8E8.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180117D48(__int64 a1, int a2, int a3, _OWORD *a4, _QWORD *a5)
{
  int v9; // eax
  int v10; // ebx
  int v12; // edx
  int v13; // eax
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-20h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+8h]

  *(_QWORD *)&v14 = a1;
  BYTE8(v14) = 1;
  *(_OWORD *)pvar = 0LL;
  Src[0] = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
         *(_QWORD *)(a1 + 40),
         &unk_180172BB0,
         pvar) >= 0
    && LOWORD(pvar[0]) == 65
    && sub_180047420((__int64)pvar)
    && (int)sub_18001FEF0((__int64)Src[0]) >= 0
    && (unsigned __int8)sub_180119B20(a4, Src[0]) )
  {
    v9 = sub_180048714((unsigned __int16 *)Src[0], a5);
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
    v14 = 0LL;
    v15 = 0LL;
    (*(void (__fastcall **)(_QWORD, void *, __int128 *))(**(_QWORD **)(a1 + 40) + 48LL))(
      *(_QWORD *)(a1 + 40),
      &unk_180172BB0,
      &v14);
    return (unsigned int)v10;
  }
  PropVariantClear(pvar);
  v14 = 0LL;
  v15 = 0LL;
  (*(void (__fastcall **)(_QWORD, void *, __int128 *))(**(_QWORD **)(a1 + 40) + 48LL))(
    *(_QWORD *)(a1 + 40),
    &unk_180172BB0,
    &v14);
  if ( a2 )
  {
    v10 = sub_18011C8E8(a1, a5);
    if ( v10 < 0 )
    {
      v12 = 6492;
LABEL_14:
      sub_18004BD84(
        (int)retaddr,
        v12,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        v10);
      return (unsigned int)v10;
    }
    sub_180119B20(a4, *a5);
  }
  else
  {
    *(_OWORD *)pvar = 0LL;
    Src[0] = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
           *(_QWORD *)(a1 + 40),
           &unk_18015C4C8,
           pvar) >= 0
      && LOWORD(pvar[0]) == 65
      && sub_180047420((__int64)pvar)
      && (int)sub_18001FEF0((__int64)Src[0]) >= 0
      && (unsigned __int8)sub_180119B20(a4, Src[0]) )
    {
      v13 = sub_180048714((unsigned __int16 *)Src[0], a5);
      v10 = v13;
      if ( v13 >= 0 )
        v10 = 0;
      else
        sub_18004BD84(
          (int)retaddr,
          6509,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          v13);
      PropVariantClear(pvar);
      return (unsigned int)v10;
    }
    PropVariantClear(pvar);
    *(_OWORD *)pvar = *a4;
    *(_OWORD *)Src = a4[1];
    v10 = sub_1801174D4(a1, a3, (__int128 *)pvar, a5);
    if ( v10 < 0 )
    {
      v12 = 6516;
      goto LABEL_14;
    }
  }
  return 0LL;
}
