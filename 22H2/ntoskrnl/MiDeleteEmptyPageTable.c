/*
 * XREFs of MiDeleteEmptyPageTable @ 0x1403F4060
 * Callers:
 *     <none>
 * Callees:
 *     MiIsPageTableDeletable @ 0x1402859D0 (MiIsPageTableDeletable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiTerminateWsle @ 0x1402B7440 (MiTerminateWsle.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiFlushTbListEarly @ 0x1402DF198 (MiFlushTbListEarly.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 */

__int64 __fastcall MiDeleteEmptyPageTable(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // r14
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // r15
  unsigned __int64 v9; // rbx
  BOOL v10; // esi
  __int64 v11; // r8
  int v13; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+78h] [rbp+20h]

  v2 = (unsigned __int64 *)a1[21];
  v13 = 0;
  v5 = MI_READ_PTE_LOCK_FREE(a2);
  v7 = v5;
  if ( (v5 & 1) != 0 && (v5 & 0x80u) == 0LL )
  {
    if ( (unsigned int)MiIsPageTableDeletable((__int64)a1, a2, v6) )
    {
      v8 = a1[2];
      if ( (unsigned int)MiTerminateWsle(a1[3], (__int64)(a2 << 25) >> 16, 0, &v13) )
      {
        if ( v13 == 1 )
          MiInsertTbFlushEntry(v8, (__int64)(a2 << 25) >> 16, 1LL, 0);
        v9 = v7 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        v10 = 0;
        v14 = v9;
        if ( MiPteInShadowRange(a2) )
          v10 = MiPteHasShadow() != 0;
        *(_QWORD *)a2 = v9;
        if ( v10 )
          MiWritePteShadow(a2, v9, v11);
        MiFlushTbListEarly(v8, 0LL);
        _bittestandset64((signed __int64 *)v2 + 3, (a2 >> 3) & 0x1FF);
        if ( !*v2 )
          *v2 = a2;
      }
    }
  }
  return 0LL;
}
