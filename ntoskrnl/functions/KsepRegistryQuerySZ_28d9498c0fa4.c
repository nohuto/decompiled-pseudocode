__int64 __fastcall KsepRegistryQuerySZ(
        HANDLE KeyHandle,
        PCWSTR SourceString,
        int a3,
        void *a4,
        unsigned __int64 a5,
        _QWORD *a6)
{
  _QWORD *v10; // rsi
  NTSTATUS v11; // eax
  unsigned int v12; // ebx
  _DWORD *Paged; // rax
  _DWORD *v15; // rbx
  unsigned int v16; // edi
  size_t v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  char v21; // al
  __int64 v22; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp+8h] BYREF

  ResultLength = 0;
  DestinationString = 0LL;
  if ( !KeyHandle )
  {
    v18 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v18 + 1] = -1073740768;
    KsepHistoryErrors[2 * v18] = 262993;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("KeyHandle != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x351u, 0LL);
  }
  if ( !a4 )
  {
    v19 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v19 + 1] = -1073740768;
    KsepHistoryErrors[2 * v19] = 262994;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("ValueBuffer != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x352u, 0LL);
  }
  v10 = a6;
  if ( !a6 )
  {
    v20 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v20 + 1] = -1073740768;
    KsepHistoryErrors[2 * v20] = 262995;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("ActualLength != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x353u, 0LL);
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  v11 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  v12 = v11;
  if ( v11 == -1073741789 )
  {
    Paged = KsepPoolAllocatePaged(ResultLength);
    v15 = Paged;
    if ( Paged )
    {
      v16 = ZwQueryValueKey(
              KeyHandle,
              &DestinationString,
              KeyValuePartialInformation,
              Paged,
              ResultLength,
              &ResultLength);
      if ( !v16 )
      {
        v17 = (unsigned int)v15[2];
        if ( v17 > a5 )
        {
          v16 = -1073741789;
        }
        else if ( v15[1] == a3 )
        {
          memmove(a4, v15 + 3, v17);
          *v10 = (unsigned int)v15[2];
        }
        else
        {
          v16 = -1073741788;
        }
      }
      KsepPoolFreePaged(v15);
      return v16;
    }
    else
    {
      return 3221225495LL;
    }
  }
  else
  {
    if ( v11 >= 0 )
    {
      v21 = KsepDebugFlag;
      v22 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      KsepHistoryErrors[2 * v22 + 1] = -1073740768;
      KsepHistoryErrors[2 * v22] = 263013;
      if ( (v21 & 4) != 0 )
        RtlAssert("!NT_SUCCESS(Status)", "minkernel\\ntos\\kshim\\kseregistry.c", 0x365u, 0LL);
    }
    return v12;
  }
}
