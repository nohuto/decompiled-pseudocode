/*
 * XREFs of MiReserveDriverPtes @ 0x1407F6D70
 * Callers:
 *     MiSelectSystemImageAddress @ 0x1407F6D24 (MiSelectSystemImageAddress.c)
 *     MmMapLockedRestartPages @ 0x140A286F0 (MmMapLockedRestartPages.c)
 * Callees:
 *     MiReturnSystemVa @ 0x14020E9A0 (MiReturnSystemVa.c)
 *     MiObtainSystemVa @ 0x140210534 (MiObtainSystemVa.c)
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     RtlSetBits @ 0x14028BC50 (RtlSetBits.c)
 *     RtlSetAllBits @ 0x14028BD00 (RtlSetAllBits.c)
 *     RtlFindClearBitsAndSet @ 0x14030CEE0 (RtlFindClearBitsAndSet.c)
 *     MiMakeZeroedPageTables @ 0x14036C240 (MiMakeZeroedPageTables.c)
 *     MiUnlockDriverMappings @ 0x14036C434 (MiUnlockDriverMappings.c)
 *     MiLockDriverMappings @ 0x14036C498 (MiLockDriverMappings.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall MiReserveDriverPtes(int a1, __int64 a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // r13
  ULONG v6; // r14d
  unsigned __int64 v7; // rdi
  __int64 i; // rbx
  ULONG ClearBitsAndSet; // ecx
  ULONG v11; // r12d
  RTL_BITMAP *Pool; // r15
  int v13; // ebx
  unsigned __int64 v14; // rax
  __int64 PteAddress; // rsi
  RTL_BITMAP *v16; // rcx
  unsigned __int64 v17; // [rsp+20h] [rbp-58h]
  unsigned __int64 v19; // [rsp+98h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = a3;
  v6 = (unsigned int)(a1 + 15) >> 4;
  MiLockDriverMappings((__int64)CurrentThread);
  v7 = 0LL;
  if ( !a2 )
  {
    for ( i = MiState[v4 + 152]; i; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i + 36) & 1) == 0 && *(_DWORD *)(i + 16) >= v6 )
      {
        ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(i + 16), v6, *(_DWORD *)(i + 32));
        if ( ClearBitsAndSet != -1 )
        {
          v7 = *(_QWORD *)(i + 8) + ((unsigned __int64)ClearBitsAndSet << 7);
          *(_DWORD *)(i + 32) = v6 + ClearBitsAndSet;
          goto LABEL_8;
        }
      }
    }
  }
  v11 = (unsigned __int8)ExGenRandom(1);
  v19 = (16 * (v6 + v11) + 511) & 0xFFFFFE00;
  Pool = (RTL_BITMAP *)MiAllocatePool((_DWORD)InitializationPhase != 0 ? 256 : 64, (v19 >> 7) + 40, 0x70446D4Du);
  if ( !Pool )
  {
LABEL_8:
    MiUnlockDriverMappings((__int64)CurrentThread);
    return v7;
  }
  v13 = (_DWORD)v4 != 0 ? 1 : 12;
  v14 = MiObtainSystemVa(((16 * (v6 + v11) + 511) & 0xFFFFFE00) >> 9, v13);
  v17 = v14;
  if ( !v14 )
    goto LABEL_18;
  PteAddress = MiGetPteAddress(v14);
  if ( !(_DWORD)v4 && !(unsigned int)MiMakeZeroedPageTables(PteAddress, PteAddress + 8 * (v19 - 1), 1, v13) )
  {
    MiReturnSystemVa(v17, (__int64)((PteAddress << 25) + (v19 << 28)) >> 16, v13, 0LL);
LABEL_18:
    MiUnlockDriverMappings((__int64)CurrentThread);
    ExFreePoolWithTag(Pool, 0);
    return 0LL;
  }
  memset(&Pool[2].Buffer, 0, v19 >> 7);
  v16 = Pool + 1;
  Pool[1].SizeOfBitMap = ((16 * (v6 + v11) + 511) & 0xFFFFFE00) >> 4;
  Pool[1].Buffer = (unsigned int *)&Pool[2].Buffer;
  if ( a2 )
  {
    v11 = 0;
    RtlSetAllBits(v16);
    LODWORD(v7) = 2;
  }
  else
  {
    RtlSetBits(v16, v11, v6);
  }
  *(&Pool[2].SizeOfBitMap + 1) = v7;
  Pool->Buffer = (unsigned int *)PteAddress;
  Pool[2].SizeOfBitMap = v6 + v11;
  *(_QWORD *)&Pool->SizeOfBitMap = MiState[v4 + 152];
  MiState[v4 + 152] = (__int64)Pool;
  MiUnlockDriverMappings((__int64)CurrentThread);
  return PteAddress + ((unsigned __int64)v11 << 7);
}
