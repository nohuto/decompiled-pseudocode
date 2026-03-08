/*
 * XREFs of IopQueueCopyWrite @ 0x140300780
 * Callers:
 *     <none>
 * Callees:
 *     IopSynchronousServiceTail @ 0x1407C33C0 (IopSynchronousServiceTail.c)
 */

__int64 __fastcall IopQueueCopyWrite(_QWORD *a1)
{
  __int64 v1; // r9
  char v3; // [rsp+20h] [rbp-28h]
  char v4; // [rsp+28h] [rbp-20h]

  v1 = *(_DWORD *)(*a1 + 16LL) >> 11;
  LOBYTE(v1) = (*(_DWORD *)(*a1 + 16LL) & 0x800) != 0;
  v4 = 0;
  v3 = 0;
  return IopSynchronousServiceTail(a1[1], *a1, a1[2], v1, v3, v4, 1);
}
