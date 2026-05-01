/*
 * XREFs of ?xsgetn@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAA_JPEAD_J@Z @ 0x180129560
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x180091307 (memcpy_0.c)
 *     ?_Reset_back@?$basic_filebuf@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x180126EDC (-_Reset_back@-$basic_filebuf@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::filebuf::xsgetn(__int64 a1, char *a2, __int64 a3)
{
  size_t v7; // rbp
  unsigned __int64 v8; // rax
  size_t v9; // rbx
  const void *v10; // rax
  size_t v11; // r15
  size_t v12; // rax

  if ( a3 <= 0 )
    return 0LL;
  if ( *(_QWORD *)(a1 + 104) )
    return std::streambuf::xsgetn();
  v7 = a3;
  v8 = std::streambuf::_Gnavail();
  v9 = a3;
  if ( v8 )
  {
    if ( v8 < a3 )
      v9 = v8;
    v10 = (const void *)std::streambuf::gptr(a1);
    memcpy_0(a2, v10, v9);
    a2 += v9;
    v7 = a3 - v9;
    std::streambuf::gbump(a1, (unsigned int)v9);
    v9 = a3 - v9;
  }
  if ( *(_QWORD *)(a1 + 128) )
  {
    std::filebuf::_Reset_back(a1);
    v11 = v9;
    if ( v9 > 0xFFF )
    {
      do
      {
        v12 = fread(a2, 1uLL, 0xFFFuLL, *(FILE **)(a1 + 128));
        v7 -= v12;
        a2 += v12;
        v11 = v7;
        if ( v12 != 4095 )
          return a3 - v7;
      }
      while ( v7 > 0xFFF );
    }
    v9 = v11;
    if ( v11 )
      v9 = v11 - fread(a2, 1uLL, v7, *(FILE **)(a1 + 128));
  }
  return a3 - v9;
}
