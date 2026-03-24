/*
 * XREFs of ?RemovePublicObject@@YAHIPEAX@Z @ 0x1C021A9A8
 * Callers:
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C021B45C (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     FreeDdeXact @ 0x1C021C4B0 (FreeDdeXact.c)
 * Callees:
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C021A78C (-GiveObject@@YAHIPEAXK@Z.c)
 */

__int64 __fastcall RemovePublicObject(int a1, void *a2)
{
  void **v2; // rbx
  void **v3; // rdi

  if ( a1 != 2 && a1 != 9 && a1 != 130 )
    return 0LL;
  v2 = (void **)gpPublicObjectList;
  v3 = 0LL;
  if ( !gpPublicObjectList )
    return 0LL;
  do
  {
    if ( v2[1] == a2 )
      break;
    v3 = v2;
    v2 = (void **)*v2;
  }
  while ( v2 );
  if ( !v2 )
    return 0LL;
  if ( (*((_DWORD *)v2 + 4))-- == 1 )
  {
    GiveObject(a1, a2, *((_DWORD *)v2 + 5));
    if ( v3 )
      *v3 = *v2;
    else
      gpPublicObjectList = (__int64)*v2;
    Win32FreePool(v2);
  }
  return 1LL;
}
