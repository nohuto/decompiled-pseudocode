/*
 * XREFs of StartAddress @ 0x180061C30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180061CC0 @ 0x180061CC0 (sub_180061CC0.c)
 *     sub_180061D94 @ 0x180061D94 (sub_180061D94.c)
 */

__int64 __fastcall StartAddress(unsigned int *Parameter)
{
  int v2; // eax
  __int64 v3; // r9
  __int64 v4; // rdi

  v2 = sub_180061CC0(*(_QWORD *)Parameter, Parameter[2]);
  v4 = 0LL;
  if ( v2 )
  {
    dword_18019FAA8 = v2;
    sub_180061D94(3LL, 0LL, 5000LL, v3);
    SetEvent(qword_18019E648);
  }
  if ( Parameter[2] )
  {
    do
    {
      HeapFree(hHeap, 0, *(LPVOID *)(*((_QWORD *)Parameter + 2) + 8 * v4));
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < Parameter[2] );
  }
  HeapFree(hHeap, 0, *((LPVOID *)Parameter + 2));
  HeapFree(hHeap, 0, Parameter);
  return 0LL;
}
