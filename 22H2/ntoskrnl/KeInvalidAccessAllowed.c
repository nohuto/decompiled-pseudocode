/*
 * XREFs of KeInvalidAccessAllowed @ 0x140341800
 * Callers:
 *     MmAccessFault @ 0x140235350 (MmAccessFault.c)
 *     MiSystemFault @ 0x140261080 (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x140261810 (MiCheckSystemPageTables.c)
 *     MiResolveProtoPteFault @ 0x140267DB0 (MiResolveProtoPteFault.c)
 *     MiResolveMappedFileFault @ 0x1402E05E0 (MiResolveMappedFileFault.c)
 *     MiValidFault @ 0x140333340 (MiValidFault.c)
 *     MiAllowGuardFault @ 0x1403416A0 (MiAllowGuardFault.c)
 *     MiRaisedIrqlFault @ 0x1403416F0 (MiRaisedIrqlFault.c)
 * Callees:
 *     KiIsTraceMemoryAccess @ 0x1403418A0 (KiIsTraceMemoryAccess.c)
 *     KiRspInIstStack @ 0x14035A590 (KiRspInIstStack.c)
 */

char __fastcall KeInvalidAccessAllowed(__int64 a1, char a2)
{
  char IsTraceMemoryAccess; // r11
  __int16 v5; // ax
  void *v6; // rdi
  __int64 v8; // rdx

  IsTraceMemoryAccess = 0;
  if ( !a1 )
    return 0;
  v5 = *(_WORD *)(a1 + 368);
  if ( v5 == 16 )
  {
    if ( (*(_DWORD *)(a1 + 376) & 0x200) != 0
      || !(unsigned int)KiRspInIstStack(3LL, *(_QWORD *)(a1 + 384)) && !(unsigned int)KiRspInIstStack(2LL, v8) )
    {
      v6 = &ExpInterlockedPopEntrySListFault;
      IsTraceMemoryAccess = KiIsTraceMemoryAccess(*(_QWORD *)(a1 + 360));
      goto LABEL_5;
    }
    return 0;
  }
  if ( v5 != 51 )
    return 0;
  v6 = (void *)qword_140D1F370;
LABEL_5:
  if ( (a2 & 1) == 0 && *(void **)(a1 + 360) == v6 )
    return 1;
  return IsTraceMemoryAccess;
}
