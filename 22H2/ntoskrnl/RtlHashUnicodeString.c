/*
 * XREFs of RtlHashUnicodeString @ 0x1406AFA80
 * Callers:
 *     PiUEventHashStringIntoBucket @ 0x140360B78 (PiUEventHashStringIntoBucket.c)
 *     KsepCacheHwIdHash @ 0x14037FB70 (KsepCacheHwIdHash.c)
 *     PiDmInitializeComparisonObject @ 0x1406AF984 (PiDmInitializeComparisonObject.c)
 *     SepGetCachedHandlesEntry @ 0x14070EF64 (SepGetCachedHandlesEntry.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x140737C68 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDmObjectCreate @ 0x1407461B0 (PiDmObjectCreate.c)
 *     PipFindDeviceOverrideEntry @ 0x14076381C (PipFindDeviceOverrideEntry.c)
 *     PnpGenerateDeviceIdsHash @ 0x14076A9F4 (PnpGenerateDeviceIdsHash.c)
 *     KsepCacheDeviceHash @ 0x140772860 (KsepCacheDeviceHash.c)
 *     PiDevCfgResolveVariable @ 0x14077B470 (PiDevCfgResolveVariable.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B4730 (PiCreateDriverSwDeviceCallback.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408E4770 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x1408E5D8C (PopPluginQuerySocSubsystemBlockingTime.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x1408E5EDC (PopPluginQuerySocSubsystemMetadata.c)
 *     PipInitDeviceOverrideCache @ 0x140A5CBAC (PipInitDeviceOverrideCache.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlHashUnicodeString(
        PCUNICODE_STRING String,
        BOOLEAN CaseInSensitive,
        ULONG HashAlgorithm,
        PULONG HashValue)
{
  ULONG v4; // r10d
  wchar_t *Buffer; // r11
  int v7; // r9d
  unsigned __int64 v8; // rax
  int v10; // ecx

  v4 = 0;
  if ( !String )
    return -1073741811;
  if ( !HashValue )
    return -1073741811;
  Buffer = String->Buffer;
  *HashValue = 0;
  v7 = String->Length >> 1;
  if ( HashAlgorithm > 1 )
    return -1073741811;
  if ( v7 )
  {
    if ( CaseInSensitive )
    {
      do
      {
        v8 = *Buffer++;
        --v7;
        if ( (unsigned int)v8 >= 0x61 )
        {
          if ( (unsigned int)v8 > 0x7A )
          {
            if ( Nls844UnicodeUpcaseTable )
            {
              if ( (unsigned __int16)v8 >= 0xC0u )
                LOWORD(v8) = *(_WORD *)(Nls844UnicodeUpcaseTable
                                      + 2
                                      * ((v8 & 0xF)
                                       + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                             + 2LL
                                                             * (((unsigned __int8)v8 >> 4)
                                                              + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                                  + 2 * (v8 >> 8))))))
                           + v8;
            }
          }
          else
          {
            LOWORD(v8) = v8 - 32;
          }
        }
        v4 = (unsigned __int16)v8 + 65599 * v4;
      }
      while ( v7 );
    }
    else
    {
      do
      {
        v10 = *Buffer++;
        v4 = v10 + 65599 * v4;
        --v7;
      }
      while ( v7 );
    }
  }
  *HashValue = v4;
  return 0;
}
