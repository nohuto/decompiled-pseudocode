/*
 * XREFs of RtlHashUnicodeString @ 0x14078C240
 * Callers:
 *     KsepCacheHwIdHash @ 0x14025B940 (KsepCacheHwIdHash.c)
 *     PiUEventHashStringIntoBucket @ 0x1402E08A0 (PiUEventHashStringIntoBucket.c)
 *     CarLiveDumpCallBack @ 0x1406054D0 (CarLiveDumpCallBack.c)
 *     SepGetCachedHandlesEntry @ 0x140696468 (SepGetCachedHandlesEntry.c)
 *     PiDevCfgResolveVariable @ 0x14069A1F8 (PiDevCfgResolveVariable.c)
 *     KsepCacheDeviceHash @ 0x1406EA8C0 (KsepCacheDeviceHash.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1407460F8 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PipFindDeviceOverrideEntry @ 0x14078A988 (PipFindDeviceOverrideEntry.c)
 *     PiDmObjectCreate @ 0x14078BF98 (PiDmObjectCreate.c)
 *     PnpGenerateDeviceIdsHash @ 0x14078D510 (PnpGenerateDeviceIdsHash.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14095A750 (PiCreateDriverSwDeviceCallback.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14098D0C0 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x14098E64C (PopPluginQuerySocSubsystemBlockingTime.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x14098E79C (PopPluginQuerySocSubsystemMetadata.c)
 *     PipInitDeviceOverrideCache @ 0x140B107D8 (PipInitDeviceOverrideCache.c)
 * Callees:
 *     NLS_UPCASE @ 0x1403477B0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 */

NTSTATUS __stdcall RtlHashUnicodeString(
        PCUNICODE_STRING String,
        BOOLEAN CaseInSensitive,
        ULONG HashAlgorithm,
        PULONG HashValue)
{
  ULONG v5; // ebx
  char v6; // dl
  __int64 v7; // rdi
  unsigned int v8; // r8d
  _DWORD *v9; // r9
  unsigned __int16 *v10; // r10
  unsigned __int16 *v11; // r11
  int v12; // r10d
  int v13; // r10d
  int v15; // ecx

  v5 = 0;
  v7 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 154);
  if ( !v10 )
    return -1073741811;
  if ( !v9 )
    return -1073741811;
  v11 = (unsigned __int16 *)*((_QWORD *)v10 + 1);
  *v9 = 0;
  v12 = *v10 >> 1;
  if ( v8 > 1 )
    return -1073741811;
  if ( v12 )
  {
    if ( v6 )
    {
      do
        v5 = NLS_UPCASE(v7, *v11) + 65599 * v5;
      while ( v13 != 1 );
    }
    else
    {
      do
      {
        v15 = *v11++;
        v5 = v15 + 65599 * v5;
        --v12;
      }
      while ( v12 );
    }
  }
  *HashValue = v5;
  return 0;
}
