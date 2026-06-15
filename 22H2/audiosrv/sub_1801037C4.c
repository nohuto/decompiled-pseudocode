/*
 * XREFs of sub_1801037C4 @ 0x1801037C4
 * Callers:
 *     sub_180100ADC @ 0x180100ADC (sub_180100ADC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1801037C4(__int64 a1, __int64 a2)
{
  int v3; // ebx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-10h]
  __int64 v7; // [rsp+58h] [rbp+18h] BYREF

  v7 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v6 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, 0LL, &v7);
  if ( v3 < 0 )
    goto LABEL_11;
  v3 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v7 + 40LL))(v7, &unk_180172DC0, pvar);
  if ( v3 < 0 )
    goto LABEL_11;
  if ( LOWORD(pvar[0]) == 31 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, PROPVARIANT, _QWORD))(**(_QWORD **)(a1 + 224) + 40LL))(
           *(_QWORD *)(a1 + 224),
           pvar[1],
           0LL);
    if ( v3 < 0 )
      goto LABEL_11;
  }
  PropVariantClear(pvar);
  v3 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v7 + 40LL))(v7, &unk_180160798, pvar);
  if ( v3 < 0 )
    goto LABEL_11;
  if ( LOWORD(pvar[0]) == 31 )
    v3 = (*(__int64 (__fastcall **)(_QWORD, PROPVARIANT, _QWORD))(**(_QWORD **)(a1 + 224) + 56LL))(
           *(_QWORD *)(a1 + 224),
           pvar[1],
           0LL);
  if ( v3 < 0 )
  {
LABEL_11:
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 2u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x1Bu, (__int64)&unk_1801726D0, v3);
    }
  }
  PropVariantClear(pvar);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v3;
}
