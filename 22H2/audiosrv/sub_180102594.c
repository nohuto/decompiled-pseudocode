/*
 * XREFs of sub_180102594 @ 0x180102594
 * Callers:
 *     sub_1800FE110 @ 0x1800FE110 (sub_1800FE110.c)
 * Callees:
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800BD8A8 @ 0x1800BD8A8 (sub_1800BD8A8.c)
 *     sub_180100858 @ 0x180100858 (sub_180100858.c)
 *     sub_18010393C @ 0x18010393C (sub_18010393C.c)
 *     sub_180104244 @ 0x180104244 (sub_180104244.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180102594(__int64 a1, __int64 a2)
{
  int v4; // eax
  bool v5; // al
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-30h] BYREF
  char v7; // [rsp+38h] [rbp-28h]
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v9; // [rsp+50h] [rbp-10h]
  BYTE v10; // [rsp+80h] [rbp+20h] BYREF
  __int64 v11; // [rsp+90h] [rbp+30h] BYREF

  v11 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 16);
  v7 = 0;
  sub_180057764((__int64)&lpCriticalSection);
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD8A8(*((_QWORD *)off_18019C348 + 2), 0x20u, (__int64)&unk_1801726D0, a1, *(_DWORD *)(a1 + 56));
  }
  if ( (unsigned int)(*(_DWORD *)(a1 + 56) - 2) <= 2 )
  {
    *(_OWORD *)pvar = 0LL;
    v9 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, 0LL, &v11);
    if ( v4 < 0
      || (v4 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(
                 v11,
                 &unk_1801607B0,
                 pvar),
          v4 < 0) )
    {
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 2u )
      {
        sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x21u, (__int64)&unk_1801726D0, v4);
      }
    }
    else if ( LOWORD(pvar[0]) == 11 )
    {
      v5 = LOWORD(pvar[1]) == 0xFFFF;
      *(_BYTE *)(a1 + 61) = v5;
      if ( v5 )
      {
        if ( sub_180100858(a1, &v10) && *(_DWORD *)(a1 + 56) == 3 && (v10 & 0xFD) == 0 )
          sub_180104244(a1);
      }
      else if ( *(_DWORD *)(a1 + 56) == 4 )
      {
        sub_18010393C(a1);
      }
    }
    PropVariantClear(pvar);
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
}
