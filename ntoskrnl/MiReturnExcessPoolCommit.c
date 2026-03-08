/*
 * XREFs of MiReturnExcessPoolCommit @ 0x1403303F8
 * Callers:
 *     MiCommitPoolMemory @ 0x14032FC90 (MiCommitPoolMemory.c)
 * Callees:
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiReturnPhysicalPoolPages @ 0x1402D878C (MiReturnPhysicalPoolPages.c)
 *     MiReturnPoolCharges @ 0x1402D89F8 (MiReturnPoolCharges.c)
 *     MiFreeLargePageChain @ 0x14064CB6C (MiFreeLargePageChain.c)
 */

void __fastcall MiReturnExcessPoolCommit(__int64 a1)
{
  __int16 v1; // ax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  _OWORD v10[3]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  v1 = *(_WORD *)(a1 + 78);
  if ( (v1 & 2) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    v4 = *(_QWORD *)(a1 + 8);
    if ( v3 != v4 )
    {
      v9 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 48) + 174LL);
      MiReturnCommit(*(_QWORD *)(qword_140C67048 + 8 * v9), v4 - v3, v9);
    }
  }
  else if ( (v1 & 4) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( v5 )
      MiFreeLargePageChain(v5);
    v6 = *(_QWORD *)(a1 + 24);
    v7 = *(_QWORD *)(a1 + 8);
    if ( v6 != v7 )
    {
      v10[0] = (unsigned __int64)(v7 - v6);
      v10[2] = v10[0];
      v10[1] = 0LL;
      v11 = 0LL;
      MiReturnPoolCharges((unsigned __int64 *)v10, 0, 0LL);
    }
  }
  else if ( (v1 & 0x100) == 0 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    if ( v8 )
      MiReturnPhysicalPoolPages(v8, 0);
  }
}
