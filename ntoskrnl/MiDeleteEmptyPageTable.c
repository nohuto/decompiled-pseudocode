/*
 * XREFs of MiDeleteEmptyPageTable @ 0x1402EBB20
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbListEarly @ 0x140229404 (MiFlushTbListEarly.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiTerminateWsle @ 0x14032AAF0 (MiTerminateWsle.c)
 *     MiIsPageTableDeletable @ 0x140346AB4 (MiIsPageTableDeletable.c)
 */

__int64 __fastcall MiDeleteEmptyPageTable(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // r14
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v8; // r15
  unsigned __int64 v9; // rbx
  BOOL HasShadow; // esi
  __int64 v11; // r8
  int v12; // [rsp+60h] [rbp+8h] BYREF

  v2 = (unsigned __int64 *)a1[21];
  v12 = 0;
  v5 = MI_READ_PTE_LOCK_FREE(a2);
  v6 = v5;
  if ( (v5 & 1) != 0 && (v5 & 0x80u) == 0LL )
  {
    if ( (unsigned int)MiIsPageTableDeletable(a1, a2) )
    {
      v8 = a1[2];
      if ( (unsigned int)MiTerminateWsle(a1[3], (__int64)(a2 << 25) >> 16, 0LL, &v12) )
      {
        if ( v12 )
          MiInsertTbFlushEntry(v8, (__int64)(a2 << 25) >> 16, 1LL);
        v9 = v6 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        HasShadow = 0;
        if ( (unsigned int)MiPteInShadowRange(a2) )
          HasShadow = MiPteHasShadow();
        *(_QWORD *)a2 = v9;
        if ( HasShadow )
          MiWritePteShadow(a2, v9, v11);
        MiFlushTbListEarly(v8, 0);
        _bittestandset64((signed __int64 *)v2 + 5, (a2 >> 3) & 0x1FF);
        if ( !*v2 )
          *v2 = a2;
      }
    }
  }
  return 0LL;
}
