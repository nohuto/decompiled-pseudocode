/*
 * XREFs of MiIsFaultPteIntact @ 0x1402A30FC
 * Callers:
 *     MiFinishHardFault @ 0x140284200 (MiFinishHardFault.c)
 *     MiPrivateFixup @ 0x1402A180C (MiPrivateFixup.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402A2D3C (MiWaitForCollidedFaultComplete.c)
 *     MiIdealClusterPage @ 0x140667EB0 (MiIdealClusterPage.c)
 * Callees:
 *     MiCheckVirtualAddress @ 0x140225600 (MiCheckVirtualAddress.c)
 *     MiFindActualFaultingPte @ 0x1402A31F0 (MiFindActualFaultingPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPrototypePteVadLookup @ 0x140327240 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockVadTree @ 0x140330EC8 (MiUnlockVadTree.c)
 */

__int64 __fastcall MiIsFaultPteIntact(__int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 ActualFaultingPte; // rax
  unsigned int v8; // edi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v16[4]; // [rsp+28h] [rbp-20h] BYREF

  ActualFaultingPte = MiFindActualFaultingPte();
  v8 = 0;
  v9 = ActualFaultingPte;
  if ( ActualFaultingPte )
  {
    v10 = MI_READ_PTE_LOCK_FREE(ActualFaultingPte);
    v11 = v10;
    if ( v9 == a3 )
    {
LABEL_11:
      LOBYTE(v8) = v11 == *a4;
      return v8;
    }
    if ( (v10 & 0x400) != 0 )
    {
      if ( (unsigned int)MiIsPrototypePteVadLookup(v10) )
      {
        v16[0] = 0LL;
        v15 = 0;
        v12 = MiCheckVirtualAddress(a2, &v15, v16);
        if ( v16[0] )
        {
          LOBYTE(v14) = 17;
          MiUnlockVadTree(1LL, v14);
        }
      }
      else
      {
        if ( qword_140C657C0 )
        {
          if ( (v11 & 0x10) != 0 )
            v11 &= ~0x10uLL;
          else
            v11 &= ~qword_140C657C0;
        }
        v12 = v11 >> 16;
      }
      if ( v12 == a3 )
      {
        v11 = MI_READ_PTE_LOCK_FREE(v12);
        goto LABEL_11;
      }
    }
  }
  return 0LL;
}
