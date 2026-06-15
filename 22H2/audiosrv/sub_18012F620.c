/*
 * XREFs of sub_18012F620 @ 0x18012F620
 * Callers:
 *     <none>
 * Callees:
 *     nullsub_1 @ 0x18000B840 (nullsub_1.c)
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_18012F558 @ 0x18012F558 (sub_18012F558.c)
 *     sub_180132148 @ 0x180132148 (sub_180132148.c)
 *     sub_180132378 @ 0x180132378 (sub_180132378.c)
 */

// Hidden C++ exception states: #wind=1
void *__fastcall sub_18012F620(void *a1, char a2)
{
  int v4; // edx
  int v5; // ecx
  __int64 v6; // rdi
  int v7; // r8d

  sub_18012F558((__int64)a1);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      nullsub_1();
    }
    else
    {
      v6 = sub_180132148();
      if ( byte_18019FBA1 )
      {
        sub_180033A70(a1);
      }
      else
      {
        if ( v6 && a1 )
          RtlFreeMemoryBlockLookaside(v6, a1);
        if ( (byte_18019F981 & 4) != 0 )
          sub_180132378(v5, v4, v7, 6, v6, 0, 0, 0);
      }
    }
  }
  return a1;
}
