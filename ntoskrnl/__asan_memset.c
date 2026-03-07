void *__fastcall _asan_memset(void *a1, int Val, ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  KasanValidateAddress((ULONG_PTR)a1, BugCheckParameter2, 1u, retaddr);
  return memset(a1, Val, BugCheckParameter2);
}
