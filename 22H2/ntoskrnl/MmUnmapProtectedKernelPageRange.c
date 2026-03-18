/*
 * XREFs of MmUnmapProtectedKernelPageRange @ 0x140A44234
 * Callers:
 *     PsDispatchIumService @ 0x1405A4EF4 (PsDispatchIumService.c)
 * Callees:
 *     MiInitializeTbFlushList @ 0x14020B2BC (MiInitializeTbFlushList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140279760 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F450 (MiInsertTbFlushEntry.c)
 *     MiGetPteAddress @ 0x1402DE00C (MiGetPteAddress.c)
 *     MiWritePteShadow @ 0x140356D4C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140356DAC (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 */

void __fastcall MmUnmapProtectedKernelPageRange(unsigned __int64 a1, __int64 a2)
{
  __int64 PteAddress; // rdi
  unsigned __int64 v5; // rbx
  int v6; // ebp
  __int64 v7; // r8
  bool v8; // zf
  int v9[48]; // [rsp+20h] [rbp-E8h] BYREF

  memset(v9, 0, 0xB8uLL);
  PteAddress = MiGetPteAddress(a1);
  MiInitializeTbFlushList((__int64)v9, 0, 20);
  if ( a2 )
  {
    while ( (MI_READ_PTE_LOCK_FREE(PteAddress) & 1) == 0 )
    {
LABEL_13:
      PteAddress += 8LL;
      if ( !--a2 )
        goto LABEL_14;
    }
    MiInsertTbFlushEntry((__int64)v9, PteAddress << 25 >> 16, 1LL, 0);
    v5 = ZeroPte;
    v6 = 0;
    if ( MiPteInShadowRange(PteAddress) )
    {
      if ( MiPteHasShadow() )
      {
        v6 = 1;
        if ( !HIBYTE(word_140C66DFC) )
        {
          v8 = (ZeroPte & 1) == 0;
          goto LABEL_9;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v8 = (ZeroPte & 1) == 0;
LABEL_9:
        if ( !v8 )
          v5 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)PteAddress = v5;
    if ( v6 )
      MiWritePteShadow(PteAddress, v5, v7);
    goto LABEL_13;
  }
LABEL_14:
  MiFlushTbList(v9);
}
