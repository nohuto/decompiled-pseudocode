/*
 * XREFs of SetDpiDepSysMet @ 0x1C0015FD0
 * Callers:
 *     InitLoadResources @ 0x1C0015CF0 (InitLoadResources.c)
 * Callees:
 *     <none>
 */

void *__fastcall SetDpiDepSysMet(int a1, int a2)
{
  __int64 v2; // rbx
  void *result; // rax
  unsigned int v4; // edx
  __int64 v5; // r8
  __int64 v6; // rcx

  v2 = a1;
  if ( a2 < 0 )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, 19LL, a2, a1, 0LL, 0LL, 0LL, 0);
    a2 = 1;
  }
  result = (void *)*((unsigned int *)gpsi + v2 + 571);
  *((_DWORD *)gpsi + v2 + 571) = a2;
  if ( a2 != (_DWORD)result )
  {
    v4 = 2;
    v5 = 60LL;
    do
    {
      result = gpsi;
      v6 = v5 + v2;
      ++v4;
      v5 += 30LL;
      *((_DWORD *)gpsi + v6 + 571) = -1;
    }
    while ( v4 < 0x12 );
  }
  return result;
}
