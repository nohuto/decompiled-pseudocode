/*
 * XREFs of EtwpProviderArrivalCallback @ 0x180087944
 * Callers:
 *     EtwpGetUmProcessImageInfo @ 0x1800878A4 (EtwpGetUmProcessImageInfo.c)
 * Callees:
 *     LdrGetDllFullName @ 0x180010240 (LdrGetDllFullName.c)
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 *     EtwpTrackBinaryForSession @ 0x180087A38 (EtwpTrackBinaryForSession.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     EtwpFindDebugId @ 0x180111910 (EtwpFindDebugId.c)
 *     EtwpTrackDebugIdForSession @ 0x1801119E8 (EtwpTrackDebugIdForSession.c)
 */

__int64 __fastcall EtwpProviderArrivalCallback(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rcx
  unsigned int DebugId; // ebx
  __int64 v8; // rcx
  NTSTATUS DllFullName; // eax
  unsigned int v12; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v13; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h]
  char v15; // [rsp+40h] [rbp-C0h] BYREF

  v5 = *(_QWORD *)(a2 + 48);
  DebugId = 0;
  if ( v5 < *((_QWORD *)&xmmword_180181510 + 1)
    || v5 >= *((_QWORD *)&xmmword_180181510 + 1) + (unsigned __int64)(unsigned int)qword_180181520 )
  {
    RtlpxLookupFunctionTable(v5, (signed __int64)&v13, a3, a4);
  }
  else
  {
    v13 = xmmword_180181510;
    v14 = qword_180181520;
  }
  v8 = *((_QWORD *)&v13 + 1);
  if ( !*((_QWORD *)&v13 + 1) )
    return 87;
  if ( (*(_WORD *)(a2 + 98) & 0x3FFF) == 2 )
  {
    DebugId = EtwpFindDebugId(*((_QWORD *)&v13 + 1), 0x3FFFLL, &v13, &v12);
    if ( DebugId )
      return DebugId;
    return (unsigned int)EtwpTrackDebugIdForSession(a1, v13, v12);
  }
  if ( *(__int16 *)(a2 + 98) < 0 )
  {
    *((_QWORD *)&v13 + 1) = &v15;
    WORD1(v13) = 260;
    DllFullName = LdrGetDllFullName(v8, (__int64)&v13);
    if ( DllFullName < 0 )
      return RtlNtStatusToDosError(DllFullName);
    else
      return (unsigned int)EtwpTrackBinaryForSession(a1, &v13, a2 + 32);
  }
  return DebugId;
}
