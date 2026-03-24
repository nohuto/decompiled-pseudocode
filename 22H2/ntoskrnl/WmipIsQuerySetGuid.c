/*
 * XREFs of WmipIsQuerySetGuid @ 0x1406B77F8
 * Callers:
 *     WmipOpenBlock @ 0x1406B8098 (WmipOpenBlock.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14035F9C0 (KeReleaseMutex.c)
 */

char __fastcall WmipIsQuerySetGuid(__int64 a1)
{
  char v2; // di
  __int64 ***v3; // rbx
  __int64 **i; // rcx

  v2 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v3 = (__int64 ***)(a1 + 56);
  for ( i = *v3; i != (__int64 **)v3; i = (__int64 **)*i )
  {
    if ( ((_DWORD)i[2] & 0x89000) == 0 )
    {
      v2 = 1;
      break;
    }
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  return v2;
}
