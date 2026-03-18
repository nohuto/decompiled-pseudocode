/*
 * XREFs of RtlHashUnicodeString @ 0x1406D94E0
 * Callers:
 *     PiUEventHashStringIntoBucket @ 0x14031CCD8 (PiUEventHashStringIntoBucket.c)
 *     KsepCacheHwIdHash @ 0x140369A80 (KsepCacheHwIdHash.c)
 *     CarLiveDumpCallBack @ 0x1405D5C30 (CarLiveDumpCallBack.c)
 *     PnpGenerateDeviceIdsHash @ 0x14079CA68 (PnpGenerateDeviceIdsHash.c)
 *     PipFindDeviceOverrideEntry @ 0x1407C1A14 (PipFindDeviceOverrideEntry.c)
 *     SepGetCachedHandlesEntry @ 0x1407F4CCC (SepGetCachedHandlesEntry.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14081CB70 (PiCreateDriverSwDeviceCallback.c)
 *     KsepCacheDeviceHash @ 0x140856850 (KsepCacheDeviceHash.c)
 *     PiDmObjectCreate @ 0x14086BC2C (PiDmObjectCreate.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x14087CDFC (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgResolveVariable @ 0x14087F0D0 (PiDevCfgResolveVariable.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140984CE0 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x140986528 (PopPluginQuerySocSubsystemBlockingTime.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x140986664 (PopPluginQuerySocSubsystemMetadata.c)
 *     PipInitDeviceOverrideCache @ 0x140B3F9C8 (PipInitDeviceOverrideCache.c)
 * Callees:
 *     NLS_UPCASE @ 0x14022D330 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 */

NTSTATUS __stdcall RtlHashUnicodeString(
        PCUNICODE_STRING String,
        BOOLEAN CaseInSensitive,
        ULONG HashAlgorithm,
        PULONG HashValue)
{
  ULONG v5; // ebx
  char v6; // dl
  __int64 v7; // rbp
  unsigned int v8; // r8d
  unsigned __int16 *v9; // r9
  ULONG v10; // r10d
  unsigned __int16 *v11; // rdi
  int v12; // r11d
  unsigned __int16 v13; // dx
  int v14; // r11d
  int v16; // eax

  v5 = 0;
  v7 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 154);
  if ( !v9 )
    return -1073741811;
  if ( !HashValue )
    return -1073741811;
  v11 = (unsigned __int16 *)*((_QWORD *)v9 + 1);
  *HashValue = v10;
  v12 = *v9 >> 1;
  if ( v8 > 1 )
    return -1073741811;
  if ( v12 )
  {
    if ( v6 )
    {
      do
      {
        v13 = *v11++;
        v5 = NLS_UPCASE(v7, v13) + 65599 * v5;
      }
      while ( v14 != 1 );
    }
    else
    {
      do
      {
        v16 = *v11++;
        v5 = v16 + 65599 * v5;
        --v12;
      }
      while ( v12 );
    }
  }
  *HashValue = v5;
  return v10;
}
