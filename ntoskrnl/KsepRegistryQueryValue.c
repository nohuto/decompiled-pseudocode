/*
 * XREFs of KsepRegistryQueryValue @ 0x140974C2C
 * Callers:
 *     KsepDbQueryRegistryDeviceData @ 0x14080187C (KsepDbQueryRegistryDeviceData.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140303C7C (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x140303CA4 (KsepPoolAllocatePaged.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlAssert @ 0x1405A7CA0 (RtlAssert.c)
 */

__int64 __fastcall KsepRegistryQueryValue(
        HANDLE KeyHandle,
        PCWSTR SourceString,
        _DWORD *a3,
        void *a4,
        unsigned __int64 a5,
        size_t *a6)
{
  __int64 v10; // rax
  __int64 v11; // rax
  size_t *v12; // rsi
  __int64 v13; // rax
  NTSTATUS v14; // eax
  unsigned int v15; // ebx
  char v16; // al
  __int64 v17; // rcx
  _DWORD *Paged; // rax
  _DWORD *v20; // rbx
  unsigned int v21; // edi
  size_t v22; // r8
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp+8h] BYREF

  ResultLength = 0;
  DestinationString = 0LL;
  if ( !KeyHandle )
  {
    v10 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v10 + 1] = -1073740768;
    KsepHistoryErrors[2 * v10] = 263113;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("KeyHandle != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x3C9u, 0LL);
  }
  if ( !a4 )
  {
    v11 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v11 + 1] = -1073740768;
    KsepHistoryErrors[2 * v11] = 263114;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("ValueBuffer != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x3CAu, 0LL);
  }
  v12 = a6;
  if ( !a6 )
  {
    v13 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v13 + 1] = -1073740768;
    KsepHistoryErrors[2 * v13] = 263115;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("ActualLength != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x3CBu, 0LL);
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  v14 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  v15 = v14;
  if ( v14 == -1073741789 )
  {
    Paged = KsepPoolAllocatePaged(ResultLength);
    v20 = Paged;
    if ( Paged )
    {
      v21 = ZwQueryValueKey(
              KeyHandle,
              &DestinationString,
              KeyValuePartialInformation,
              Paged,
              ResultLength,
              &ResultLength);
      if ( !v21 )
      {
        v22 = (unsigned int)v20[2];
        if ( v22 <= a5 )
        {
          memmove(a4, v20 + 3, v22);
          *a3 = v20[1];
          *v12 = (unsigned int)v20[2];
        }
        else
        {
          *v12 = v22;
          v21 = -1073741789;
        }
      }
      KsepPoolFreePaged(v20);
      return v21;
    }
    else
    {
      return 3221225495LL;
    }
  }
  else
  {
    if ( v14 >= 0 )
    {
      v16 = KsepDebugFlag;
      v17 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      KsepHistoryErrors[2 * v17 + 1] = -1073740768;
      KsepHistoryErrors[2 * v17] = 263133;
      if ( (v16 & 4) != 0 )
        RtlAssert("!NT_SUCCESS(Status)", "minkernel\\ntos\\kshim\\kseregistry.c", 0x3DDu, 0LL);
    }
    return v15;
  }
}
