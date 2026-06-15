/*
 * XREFs of sub_1800BDEB0 @ 0x1800BDEB0
 * Callers:
 *     sub_1800BDC50 @ 0x1800BDC50 (sub_1800BDC50.c)
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BEA04 @ 0x1800BEA04 (sub_1800BEA04.c)
 *     sub_1800BEA84 @ 0x1800BEA84 (sub_1800BEA84.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800BDEB0(__int64 a1)
{
  int v2; // esi
  int v3; // edi
  int v4; // r8d
  BOOL v5; // eax
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+40h] [rbp-10h]
  __int64 v9; // [rsp+70h] [rbp+20h] BYREF
  __int64 v10; // [rsp+78h] [rbp+28h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&dwCreationFlags + 40LL))(
         *(_QWORD *)&dwCreationFlags,
         *(_QWORD *)(a1 + 32),
         &v10);
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 32LL))(v10, 0LL, &v9);
    if ( v2 >= 0 )
    {
      *(_OWORD *)pvar = 0LL;
      v8 = 0LL;
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x15u, (__int64)&unk_18016DA10, *(const wchar_t **)(a1 + 32));
      }
      v3 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v9 + 40LL))(v9, &unk_180172E38, pvar);
      if ( v3 >= 0 && LOWORD(pvar[0]) == 11 )
      {
        if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
          && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
          && *((_BYTE *)off_18019C348 + 25) >= 4u )
        {
          sub_1800BEA04(
            *((_QWORD *)off_18019C348 + 2),
            22,
            (unsigned int)&unk_18016DA10,
            *(_QWORD *)(a1 + 32),
            (char)pvar[1]);
        }
        v5 = LOWORD(pvar[1]) == 0xFFFF;
        *(_DWORD *)(a1 + 24) = v5;
        if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
          && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
          && *((_BYTE *)off_18019C348 + 25) >= 4u )
        {
          sub_1800BEA84(*((_QWORD *)off_18019C348 + 2), 23, v4, *(_QWORD *)(a1 + 32), v5);
        }
      }
      PropVariantClear(pvar);
      if ( v3 < 0 )
        sub_18005E8F8((__int64)"CMuteSoftware::LoadMuteState", 666, v3);
    }
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return (unsigned int)v2;
}
