/*
 * XREFs of sub_1800F7634 @ 0x1800F7634
 * Callers:
 *     sub_1800F7758 @ 0x1800F7758 (sub_1800F7758.c)
 * Callees:
 *     <none>
 */

void sub_1800F7634()
{
  if ( lpMem )
  {
    HeapFree(hHeap, 0, lpMem);
    lpMem = 0LL;
  }
  if ( lpBaseAddress )
  {
    UnmapViewOfFile(lpBaseAddress);
    lpBaseAddress = 0LL;
  }
  if ( hObject )
  {
    CloseHandle(hObject);
    hObject = 0LL;
  }
  if ( dword_18019E630 )
  {
    RtlDeleteResource(&Resource);
    dword_18019E630 = 0;
  }
}
