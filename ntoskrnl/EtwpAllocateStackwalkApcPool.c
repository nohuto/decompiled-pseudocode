/*
 * XREFs of EtwpAllocateStackwalkApcPool @ 0x1409E5C44
 * Callers:
 *     EtwpEnableGuid @ 0x14068EEBC (EtwpEnableGuid.c)
 *     EtwpInitializeClassicStackTracing @ 0x1409E5CE4 (EtwpInitializeClassicStackTracing.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpAllocateStackwalkApcPool(__int64 a1)
{
  struct _SLIST_ENTRY *Pool2; // rax
  struct _SLIST_ENTRY *v3; // rdi

  if ( *(_DWORD *)(a1 + 960) < *(_DWORD *)(a1 + 964) )
  {
    while ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 960)) <= *(_DWORD *)(a1 + 964) )
    {
      Pool2 = (struct _SLIST_ENTRY *)ExAllocatePool2(72LL, 144LL, 1098347589LL);
      v3 = Pool2;
      if ( !Pool2 )
        break;
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 944), Pool2 + 6);
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 928), v3 + 7);
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 960));
  }
  return 0LL;
}
