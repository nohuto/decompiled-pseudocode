/*
 * XREFs of sub_18002AEF8 @ 0x18002AEF8
 * Callers:
 *     sub_18002A7D0 @ 0x18002A7D0 (sub_18002A7D0.c)
 *     sub_18002A978 @ 0x18002A978 (sub_18002A978.c)
 *     sub_18002AF64 @ 0x18002AF64 (sub_18002AF64.c)
 *     sub_1800B9818 @ 0x1800B9818 (sub_1800B9818.c)
 *     sub_1800D0FCC @ 0x1800D0FCC (sub_1800D0FCC.c)
 *     sub_1800D6BCC @ 0x1800D6BCC (sub_1800D6BCC.c)
 *     sub_1800D83F0 @ 0x1800D83F0 (sub_1800D83F0.c)
 *     sub_1800EA9AC @ 0x1800EA9AC (sub_1800EA9AC.c)
 *     sub_1800EABCC @ 0x1800EABCC (sub_1800EABCC.c)
 * Callees:
 *     sub_1800D0B30 @ 0x1800D0B30 (sub_1800D0B30.c)
 */

__int64 __fastcall sub_18002AEF8(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned int v4; // ebx

  EnterCriticalSection(&CriticalSection);
  v3 = 0LL;
  if ( qword_18019EF58 )
  {
    sub_1800D0B30(qword_18019EF58, v2, a1);
    v3 = *a1;
  }
  else
  {
    *a1 = 0LL;
  }
  v4 = v3 == 0 ? 0x80004005 : 0;
  LeaveCriticalSection(&CriticalSection);
  return v4;
}
