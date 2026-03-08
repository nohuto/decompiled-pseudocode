/*
 * XREFs of EngMapFile @ 0x1C028DE10
 * Callers:
 *     <none>
 * Callees:
 *     bMapFile @ 0x1C028E338 (bMapFile.c)
 */

PVOID __stdcall EngMapFile(LPWSTR pwsz, ULONG cjSize, ULONG_PTR *piFile)
{
  void *v4; // rbx
  PVOID *v6; // rdi

  v4 = 0LL;
  v6 = (PVOID *)Win32AllocPoolZInit(80LL, 1818846791LL);
  if ( v6 )
  {
    if ( (unsigned int)bMapFile(pwsz) )
    {
      *piFile = (ULONG_PTR)v6;
      return v6[1];
    }
    else
    {
      *piFile = 0LL;
      Win32FreePool(v6);
    }
  }
  return v4;
}
