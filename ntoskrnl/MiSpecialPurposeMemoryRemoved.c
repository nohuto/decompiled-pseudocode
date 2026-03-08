/*
 * XREFs of MiSpecialPurposeMemoryRemoved @ 0x140A44BE4
 * Callers:
 *     MmRemovePhysicalMemory @ 0x140A2A520 (MmRemovePhysicalMemory.c)
 *     MiAddSpecialPurposeMemoryComplete @ 0x140A440DC (MiAddSpecialPurposeMemoryComplete.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     KeGenericCallDpcEx @ 0x1403C07D0 (KeGenericCallDpcEx.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x140A445E8 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiSpecialPurposeMemoryRemoved(__int64 a1)
{
  HANDLE *v1; // rsi
  HANDLE *SpecialPurposeMemoryTypeByPartition; // rax
  __int64 v4; // rdi
  HANDLE *v5; // rbx
  HANDLE *v6; // rcx
  HANDLE **v7; // rax
  struct _KTHREAD *CurrentThread; // rax
  bool v9; // zf
  __int128 v10; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11; // [rsp+30h] [rbp-10h]
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v1 = 0LL;
  BugCheckParameter2 = 0LL;
  v13 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( !*(_QWORD *)(a1 + 17040) )
  {
    SpecialPurposeMemoryTypeByPartition = (HANDLE *)MiFindSpecialPurposeMemoryTypeByPartition(
                                                      a1,
                                                      &v13,
                                                      (volatile signed __int64 **)&BugCheckParameter2);
    v4 = v13;
    v5 = SpecialPurposeMemoryTypeByPartition;
    if ( SpecialPurposeMemoryTypeByPartition
      && !*(_QWORD *)(a1 + 17040)
      && *(_QWORD *)(*(_QWORD *)(a1 + 200) + 40LL) <= 1uLL )
    {
      if ( SpecialPurposeMemoryTypeByPartition[9] )
      {
        HIDWORD(v11) = 0;
        *((_QWORD *)&v10 + 1) = v13;
        *(_QWORD *)&v10 = SpecialPurposeMemoryTypeByPartition;
        KeGenericCallDpcEx((__int64)MiSpecialPurposeMemoryCacheUpdateDpc, (__int64)&v10);
      }
      v6 = (HANDLE *)*v5;
      if ( *((HANDLE **)*v5 + 1) != v5 || (v7 = (HANDLE **)v5[1], *v7 != v5) )
        __fastfail(3u);
      *v7 = v6;
      v1 = v5;
      v6[1] = v7;
    }
    if ( BugCheckParameter2 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      CurrentThread = KeGetCurrentThread();
      v9 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v9
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      v4 = v13;
    }
    if ( v4 )
      PsDereferencePartition(*(_QWORD *)(v4 + 200));
    if ( v1 )
    {
      ZwClose(v1[7]);
      ExFreePoolWithTag(v1, 0);
    }
  }
}
