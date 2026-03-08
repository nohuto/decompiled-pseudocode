/*
 * XREFs of ?DpiKsrEnumeratePersistedMemoryCallback@@YAJPEBU_GUID@@_KPEAX@Z @ 0x1C03A0FF0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall DpiKsrEnumeratePersistedMemoryCallback(const struct _GUID *a1, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // eax
  unsigned int v6; // eax
  size_t v7; // rbx
  char *Pool2; // rax
  char *v9; // rbp

  v3 = a3[1];
  if ( *a3 >= v3 )
  {
    v6 = 8 * v3;
    v7 = v6;
    Pool2 = (char *)ExAllocatePool2(256LL, 2 * v6 + 128, 1953656900LL);
    v9 = Pool2;
    if ( !Pool2 )
    {
      WdLogSingleEntry1(2LL, -1073741801LL);
      return 3221225495LL;
    }
    memmove(Pool2, a3, v7);
    memset(&v9[v7], 0, 0x80uLL);
  }
  *(_QWORD *)(*((_QWORD *)a3 + 33) + 8LL * (*a3)++) = a2;
  return 0LL;
}
