/*
 * XREFs of sub_180065C84 @ 0x180065C84
 * Callers:
 *     sub_1800655F4 @ 0x1800655F4 (sub_1800655F4.c)
 *     sub_1800B52D0 @ 0x1800B52D0 (sub_1800B52D0.c)
 * Callees:
 *     sub_1800B4B04 @ 0x1800B4B04 (sub_1800B4B04.c)
 */

_QWORD *__fastcall sub_180065C84(HANDLE *a1, _QWORD *a2)
{
  HANDLE v2; // rdi
  DWORD v4; // eax
  HANDLE v5; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  v4 = WaitForSingleObjectEx(*a1, 0xFFFFFFFF, 0);
  v5 = 0LL;
  if ( v4 == 258 )
    goto LABEL_5;
  if ( v4 )
  {
    if ( v4 != 128 )
    {
      sub_1800B4B04(retaddr, 2892LL);
      JUMPOUT(0x1800B2FE4LL);
    }
LABEL_5:
    if ( (v4 & 0xFFFFFF7F) != 0 )
      goto LABEL_4;
  }
  v5 = v2;
LABEL_4:
  *a2 = v5;
  return a2;
}
