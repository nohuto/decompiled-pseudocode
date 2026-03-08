/*
 * XREFs of ??$read@U_POINTFIX@@@?$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z @ 0x1C0180398
 * Callers:
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@AEAV?$umptr_r@U_POINTL@@@@@Z @ 0x1C0180F30 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@AEAV-$umptr_r@U_POINTL@@@@@Z.c)
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C01811A8 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C018148C (-growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ?internal_get_bytecount@?$umptr@U_POINTL@@@@IEBA_KAEB_K0@Z @ 0x1C01800B4 (-internal_get_bytecount@-$umptr@U_POINTL@@@@IEBA_KAEB_K0@Z.c)
 *     ?internal_get_offset@?$umptr@U_POINTL@@@@IEBA_KAEB_J@Z @ 0x1C01800FC (-internal_get_offset@-$umptr@U_POINTL@@@@IEBA_KAEB_J@Z.c)
 */

char umptr_r<_POINTL>::read<_POINTFIX>(__int64 a1, void *a2, ...)
{
  unsigned __int64 offset; // rbx
  __int64 v4; // r11
  size_t bytecount; // r8
  __int64 v6; // r11
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF
  ULONGLONG v10; // [rsp+50h] [rbp+18h] BYREF
  va_list va; // [rsp+50h] [rbp+18h]
  unsigned __int64 v12; // [rsp+58h] [rbp+20h] BYREF
  va_list va1; // [rsp+58h] [rbp+20h]
  va_list va2; // [rsp+60h] [rbp+28h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  v9[0] = 0LL;
  offset = umptr<_POINTL>::internal_get_offset(a1, v9);
  v12 = offset;
  bytecount = umptr<_POINTL>::internal_get_bytecount(v4, (ULONGLONG *)va, (unsigned __int64 *)va1);
  if ( *(_BYTE *)(v6 + 25) || *(_BYTE *)(v6 + 24) )
    return 0;
  memmove(a2, (const void *)(*(_QWORD *)v6 + 8 * offset), bytecount);
  return 1;
}
