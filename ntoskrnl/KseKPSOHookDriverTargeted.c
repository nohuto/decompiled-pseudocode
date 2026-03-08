/*
 * XREFs of KseKPSOHookDriverTargeted @ 0x140580050
 * Callers:
 *     <none>
 * Callees:
 *     KsepLogError @ 0x140303450 (KsepLogError.c)
 *     KsepDebugPrint @ 0x14057E834 (KsepDebugPrint.c)
 *     RtlWriteRegistryValue @ 0x14069EDB0 (RtlWriteRegistryValue.c)
 */

__int64 KseKPSOHookDriverTargeted()
{
  NTSTATUS v0; // eax
  __int64 v1; // rcx
  char v2; // al
  int ValueData[6]; // [rsp+30h] [rbp-18h] BYREF

  ValueData[0] = 1;
  v0 = RtlWriteRegistryValue(2u, L"Session Manager\\Memory Management", L"KernelPadSectionsOverride", 4u, ValueData, 4u);
  if ( v0 < 0 )
  {
    v1 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v1 + 1] = v0;
    v2 = KsepDebugFlag;
    KsepHistoryErrors[2 * v1] = 1179791;
    if ( (v2 & 2) != 0 )
      KsepDebugPrint(12LL, "KernelPadSectionsOverride shim: failed to set KernelPadSectionsOverride value.\n");
    KsepLogError(12LL, (__int64)"KernelPadSectionsOverride shim: failed to set KernelPadSectionsOverride value.\n");
  }
  return 3221226348LL;
}
