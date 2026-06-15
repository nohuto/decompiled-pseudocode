/*
 * XREFs of sub_1800B4860 @ 0x1800B4860
 * Callers:
 *     sub_1800B52D0 @ 0x1800B52D0 (sub_1800B52D0.c)
 * Callees:
 *     sub_18005262C @ 0x18005262C (sub_18005262C.c)
 *     sub_1800B4A3C @ 0x1800B4A3C (sub_1800B4A3C.c)
 */

BOOL __fastcall sub_1800B4860(void **a1)
{
  void **v1; // rdi
  void **v3; // r14
  char *v4; // rsi
  char *v5; // rbx
  HANDLE ProcessHeap; // rax

  v1 = a1 + 5;
  v3 = a1 + 15;
  while ( v1 != v3 )
  {
    v4 = (char *)*v1;
    while ( v4 )
    {
      v5 = v4;
      v4 = (char *)*((_QWORD *)v4 + 1);
      sub_1800B4A3C(v5 + 16);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v5);
    }
    *v1++ = 0LL;
  }
  sub_18005262C(a1 + 3);
  sub_18005262C(a1 + 2);
  return sub_18005262C(a1 + 1);
}
