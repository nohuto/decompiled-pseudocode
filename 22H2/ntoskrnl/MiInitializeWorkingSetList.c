/*
 * XREFs of MiInitializeWorkingSetList @ 0x1403526E4
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1406FBB04 (MmInitializeProcessAddressSpace.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407866BC (MiInitializeSystemWorkingSetList.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiAllocateWsle @ 0x140211C80 (MiAllocateWsle.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 */

char __fastcall MiInitializeWorkingSetList(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char v5; // al
  __int64 v6; // rax
  unsigned __int8 v7; // r14
  unsigned __int64 v8; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v11; // rdx

  v5 = a3 ^ *(_BYTE *)(a1 + 184);
  *(_QWORD *)(a1 + 16) = a2;
  LOBYTE(v6) = *(_BYTE *)(a1 + 184) ^ v5 & 7;
  *(_BYTE *)(a1 + 184) = v6;
  if ( (_DWORD)a3 )
  {
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_QWORD *)(a1 + 128) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    *(_QWORD *)(a1 + 144) = 0LL;
    if ( (_DWORD)a3 == 1 )
    {
      *(_BYTE *)(a1 + 184) = v6 | 0x80;
      v6 = *(_QWORD *)(a1 + 112) + 6LL;
      *(_QWORD *)(a1 + 152) = v6;
    }
    else
    {
      *(_QWORD *)(a1 + 152) = a4;
    }
  }
  else
  {
    *(_QWORD *)(a1 - 392) = 1LL;
    v7 = MiLockWorkingSetShared(a1, 0x7FFFFFFFF8LL, a3, a4);
    MiLockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL, 0LL);
    v8 = MEMORY[0xFFFFF6FB7DBEDF68];
    if ( MiPteInShadowRange(0xFFFFF6FB7DBEDF68uLL)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v8 & 1) != 0
      && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        Blink = Flink[246].Blink;
        v11 = v8 | 0x20;
        if ( ((unsigned __int8)Blink & 0x20) == 0 )
          v11 = v8;
        v8 = v11;
        if ( ((unsigned __int8)Blink & 0x42) != 0 )
          v8 = v11 | 0x42;
      }
    }
    MiAllocateWsle(
      a1,
      0xFFFFF6FB7DBEDF68uLL,
      (_QWORD *)(48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL),
      0,
      ZeroPte,
      0,
      0LL);
    MiUnlockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL);
    LOBYTE(v6) = MiUnlockWorkingSetShared(a1, v7);
  }
  return v6;
}
