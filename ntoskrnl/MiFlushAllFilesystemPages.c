/*
 * XREFs of MiFlushAllFilesystemPages @ 0x140626E68
 * Callers:
 *     MiGetNextPageTablePte @ 0x140224090 (MiGetNextPageTablePte.c)
 *     MiLockPagedAddress @ 0x1402A1684 (MiLockPagedAddress.c)
 *     MiInPageSingleKernelStack @ 0x1402A7A08 (MiInPageSingleKernelStack.c)
 *     MiMakeSystemAddressValid @ 0x140321770 (MiMakeSystemAddressValid.c)
 *     MiWaitForInPageComplete @ 0x140342A90 (MiWaitForInPageComplete.c)
 *     MiMakeOutswappedPageResident @ 0x14061612C (MiMakeOutswappedPageResident.c)
 *     MiShutdownSystem @ 0x140AA8A00 (MiShutdownSystem.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     MiIsWorkingSetTrimThread @ 0x1402E7920 (MiIsWorkingSetTrimThread.c)
 *     CcForEachPartition @ 0x140305240 (CcForEachPartition.c)
 *     MiEmptyAllWorkingSets @ 0x1406322B8 (MiEmptyAllWorkingSets.c)
 */

__int64 MiFlushAllFilesystemPages()
{
  __int64 result; // rax
  __int64 (__fastcall *v1)(__int64); // r8
  int v2; // r9d
  int v3; // edi
  unsigned int i; // ebx

  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result <= 1u )
  {
    result = MiIsWorkingSetTrimThread();
    if ( !(_DWORD)result )
    {
      result = (__int64)MiModifiedPageWriter;
      if ( (char *)v1 != (char *)MiModifiedPageWriter )
      {
        result = (__int64)MiMappedPageWriter;
        if ( v1 != MiMappedPageWriter )
        {
          if ( v2 == 1 )
          {
            result = (unsigned int)_InterlockedIncrement(&dword_140C67AC8);
            if ( (_DWORD)result != 1 )
              return result;
            MiEmptyAllWorkingSets(MiSystemPartition);
          }
          _InterlockedAdd(&dword_140C6B3FC, 1u);
          result = qword_140C6F580;
          if ( qword_140C6F580 != qword_140C6F660 )
          {
            v3 = dword_140C6B394;
LABEL_10:
            for ( i = 0; i < 0xFF; ++i )
            {
              KeSetEvent(&stru_140C6B400, 0, 0);
              CcForEachPartition(
                (unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64))CcNotifyWriteBehindHelper,
                2LL,
                0,
                0);
              result = qword_140C6F580;
              if ( qword_140C6F580 == qword_140C6F660 )
                break;
              KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
              result = (unsigned int)dword_140C6B394;
              if ( v3 != dword_140C6B394 )
              {
                v3 = dword_140C6B394;
                goto LABEL_10;
              }
            }
          }
          _InterlockedDecrement(&dword_140C6B3FC);
        }
      }
    }
  }
  return result;
}
