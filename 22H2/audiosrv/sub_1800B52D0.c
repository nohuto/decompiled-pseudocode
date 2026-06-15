/*
 * XREFs of sub_1800B52D0 @ 0x1800B52D0
 * Callers:
 *     sub_180069508 @ 0x180069508 (sub_180069508.c)
 * Callees:
 *     sub_180065C3C @ 0x180065C3C (sub_180065C3C.c)
 *     sub_180065C84 @ 0x180065C84 (sub_180065C84.c)
 *     sub_180068E94 @ 0x180068E94 (sub_180068E94.c)
 *     sub_1800B4860 @ 0x1800B4860 (sub_1800B4860.c)
 *     sub_1800B51A8 @ 0x1800B51A8 (sub_1800B51A8.c)
 *     sub_1800B5FF8 @ 0x1800B5FF8 (sub_1800B5FF8.c)
 */

int __fastcall sub_1800B52D0(HANDLE *lpMem)
{
  int result; // eax
  bool v3; // zf
  HANDLE ProcessHeap; // rax
  void *v5; // [rsp+48h] [rbp+10h] BYREF

  if ( sub_1800B51A8() )
  {
    result = *(_DWORD *)lpMem - 1;
    *(_DWORD *)lpMem = result;
  }
  else
  {
    sub_180065C84(lpMem + 1, &v5);
    v3 = *(_DWORD *)lpMem == 1;
    result = *(_DWORD *)lpMem - 1;
    *(_DWORD *)lpMem = result;
    if ( v3 )
    {
      sub_180065C3C(lpMem + 2, 0LL);
      sub_180065C3C(lpMem + 3, 0LL);
      sub_1800B5FF8(&v5, 0LL);
      sub_1800B4860(lpMem);
      ProcessHeap = GetProcessHeap();
      result = HeapFree(ProcessHeap, 0, lpMem);
    }
    if ( v5 )
      return sub_180068E94(v5);
  }
  return result;
}
