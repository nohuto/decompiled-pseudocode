/*
 * XREFs of MiReturnExcessPoolCommit @ 0x14028BF14
 * Callers:
 *     MiCommitPoolMemory @ 0x14028B8AC (MiCommitPoolMemory.c)
 * Callees:
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiReturnPhysicalPoolPages @ 0x1402E9A84 (MiReturnPhysicalPoolPages.c)
 *     MiReturnPoolCharges @ 0x1402E9F00 (MiReturnPoolCharges.c)
 *     MiFreeLargePageChain @ 0x140556990 (MiFreeLargePageChain.c)
 */

__int64 __fastcall MiReturnExcessPoolCommit(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h]
  __int64 v8; // [rsp+38h] [rbp-20h]
  __int128 v9; // [rsp+40h] [rbp-18h]

  result = *(unsigned __int16 *)(a1 + 78);
  if ( (result & 2) != 0 )
  {
    result = *(_QWORD *)(a1 + 24);
    v3 = *(_QWORD *)(a1 + 8);
    if ( result != v3 )
      return MiReturnCommit(
               *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 48) + 174LL)),
               v3 - result);
  }
  else if ( (result & 4) != 0 )
  {
    if ( *(_QWORD *)(a1 + 16) )
      MiFreeLargePageChain();
    v4 = *(_QWORD *)(a1 + 24);
    result = *(_QWORD *)(a1 + 8);
    if ( v4 != result )
    {
      v7 = 0LL;
      v8 = result - v4;
      v6 = (unsigned __int64)(result - v4);
      v9 = 0LL;
      return MiReturnPoolCharges(&v6, 0LL);
    }
  }
  else if ( (result & 0x100) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( v5 )
      return MiReturnPhysicalPoolPages(v5, 0LL);
  }
  return result;
}
