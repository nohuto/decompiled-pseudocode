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
