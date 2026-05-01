/*
 * XREFs of ?_Unlock@?$basic_filebuf@DU?$char_traits@D@std@@@std@@UEAAXXZ @ 0x180127130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::filebuf::_Unlock(__int64 a1)
{
  FILE *v1; // rcx

  v1 = *(FILE **)(a1 + 128);
  if ( v1 )
    _unlock_file(v1);
}
