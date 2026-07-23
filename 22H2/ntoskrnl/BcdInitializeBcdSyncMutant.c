/*
 * XREFs of BcdInitializeBcdSyncMutant @ 0x140A73808
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 * Callees:
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwCreateMutant @ 0x1403FB0A0 (ZwCreateMutant.c)
 */

void BcdInitializeBcdSyncMutant(void)
{
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE MutantHandle; // [rsp+60h] [rbp+10h] BYREF

  MutantHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"8:";
  ObjectAttributes.SecurityDescriptor = BiBcdMutantDescriptor;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 592;
  if ( ZwCreateMutant(&MutantHandle, 0x1F0001u, &ObjectAttributes, 0) >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&BcdMutantHandle, (signed __int64)MutantHandle, 0LL) )
      ZwClose(MutantHandle);
  }
}
