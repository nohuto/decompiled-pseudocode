/*
 * XREFs of EtwpProviderArrivalCallback @ 0x140775208
 * Callers:
 *     EtwpEnableGuid @ 0x14068EEBC (EtwpEnableGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x140693640 (EtwpAddRegEntryToGroup.c)
 *     EtwpTrackProviderRegistration @ 0x1406952D0 (EtwpTrackProviderRegistration.c)
 *     EtwpTrackProviderBinary @ 0x140857400 (EtwpTrackProviderBinary.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409F2804 (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x140775328 (EtwpLocateDbgIdForRegEntry.c)
 *     EtwpTrackDebugIdForSession @ 0x1407756FC (EtwpTrackDebugIdForSession.c)
 *     RtlPcToFilePath @ 0x1408A16F0 (RtlPcToFilePath.c)
 *     EtwpTrackBinaryForSession @ 0x1408A68C0 (EtwpTrackBinaryForSession.c)
 *     MmGetFileNameForAddress @ 0x1408A737E (MmGetFileNameForAddress.c)
 *     EtwpEventWriteDebugLookupFailed @ 0x1409E0650 (EtwpEventWriteDebugLookupFailed.c)
 *     EtwpSendDbgId @ 0x1409E9094 (EtwpSendDbgId.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpProviderArrivalCallback(__int64 a1, char a2, __int64 a3)
{
  PVOID v4; // rcx
  unsigned int v7; // edi
  int v8; // eax
  _BYTE *v9; // r14
  int FileNameForAddress; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v16; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h]
  _BYTE v18[512]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = *(PVOID *)(a3 + 88);
  HIDWORD(v16) = 0;
  v7 = 0;
  if ( !v4 )
    return 3221225793LL;
  if ( (*(_BYTE *)(a3 + 98) & 0x20) != 0 || (*(_DWORD *)(a1 + 816) & 0x2000000) != 0 )
  {
    LODWORD(v16) = 0x2000000;
    P = v18;
    if ( a2 )
      FileNameForAddress = MmGetFileNameForAddress(v4, &v16);
    else
      FileNameForAddress = RtlPcToFilePath(v4, &v16);
    v7 = FileNameForAddress;
    if ( FileNameForAddress >= 0 )
      EtwpTrackBinaryForSession(a1, &v16, *(_QWORD *)(a3 + 32) + 40LL);
    v4 = P;
    if ( P != v18 )
      ExFreePoolWithTag(P, 0);
  }
  if ( (*(_BYTE *)(a3 + 98) & 8) == 0 )
    return v7;
  if ( (*(_DWORD *)(a1 + 12) & 0x80u) == 0 )
  {
    v15 = 512;
    v16 = v18;
    LOBYTE(v4) = a2;
    v8 = EtwpLocateDbgIdForRegEntry(v4, a3, &v16, &v15);
    v9 = v16;
    v7 = v8;
    if ( v8 < 0 )
    {
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_DEBUG_LOOKUP_FAILED) )
        EtwpEventWriteDebugLookupFailed(v13, v12, v14, a3, a1, v7);
    }
    else
    {
      EtwpTrackDebugIdForSession(a1, v16, v15);
      if ( (*(_DWORD *)(a1 + 12) & 0x80000) != 0
        && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
      {
        EtwpSendDbgId(a1);
      }
    }
    if ( v9 != v18 )
      ExFreePoolWithTag(v9, 0);
    return v7;
  }
  return 3221225659LL;
}
