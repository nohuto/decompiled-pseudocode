/*
 * XREFs of SepIsMinTCB @ 0x14060D124
 * Callers:
 *     SeQuerySigningPolicy @ 0x14060CFF0 (SeQuerySigningPolicy.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140252E18 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x14025C9C0 (PsGetCurrentServerSilo.c)
 *     RtlPrefixUnicodeString @ 0x1405EDBE0 (RtlPrefixUnicodeString.c)
 *     SepIsImageInMinTcbList @ 0x140602224 (SepIsImageInMinTcbList.c)
 *     SepSetSystemPaths @ 0x1407C9238 (SepSetSystemPaths.c)
 */

__int64 __fastcall SepIsMinTCB(
        PCUNICODE_STRING String2,
        __int64 a2,
        unsigned __int8 a3,
        char a4,
        _BYTE *a5,
        _BYTE *a6,
        unsigned __int8 *a7)
{
  char v9; // r13
  __int64 CurrentServerSilo; // rax
  volatile signed __int64 *ServerSiloGlobals; // rsi
  const UNICODE_STRING *v13; // r14
  unsigned int v14; // eax
  __int16 Length; // si
  __int64 v16; // rbp
  wchar_t *Buffer; // r15
  int IsImageInMinTcbList; // ecx
  UNICODE_STRING v20; // [rsp+50h] [rbp-38h] BYREF

  v20 = 0LL;
  v9 = a2;
  CurrentServerSilo = PsGetCurrentServerSilo((__int64)String2, a2);
  ServerSiloGlobals = (volatile signed __int64 *)PsGetServerSiloGlobals(CurrentServerSilo);
  if ( !_InterlockedCompareExchange64(ServerSiloGlobals + 96, 0LL, 0LL) )
  {
    IsImageInMinTcbList = SepSetSystemPaths(ServerSiloGlobals + 92);
    if ( IsImageInMinTcbList < 0 )
      return (unsigned int)IsImageInMinTcbList;
  }
  if ( !String2 )
    return (unsigned int)-1073741275;
  v13 = (const UNICODE_STRING *)*((_QWORD *)ServerSiloGlobals + 96);
  v14 = 42;
  Length = v13->Length;
  if ( v13->Length < 0x2Au )
    v14 = v13->Length;
  v16 = String2->Length;
  if ( (unsigned int)v16 <= v14 )
    return (unsigned int)-1073741275;
  Buffer = String2->Buffer;
  if ( Buffer[1] == 63 )
  {
    if ( !RtlPrefixUnicodeString(v13, String2, 1u) && !RtlPrefixUnicodeString(v13 + 1, String2, 1u) )
      return (unsigned int)-1073741275;
  }
  else
  {
    if ( !RtlPrefixUnicodeString(&stru_1400010C8, String2, 1u) && !RtlPrefixUnicodeString(&stru_140009B10, String2, 1u) )
      return (unsigned int)-1073741275;
    Length = 42;
  }
  v20.Length = v16 - Length;
  v20.MaximumLength = v16 - Length;
  v20.Buffer = &Buffer[(v16 - (unsigned __int64)(unsigned __int16)(v16 - Length)) >> 1];
  IsImageInMinTcbList = SepIsImageInMinTcbList((__int64)&SeMsMinTCBList, 0x10u, &v20, v9, a3, a4, a5, a6, a7);
  if ( IsImageInMinTcbList < 0
    && (SeCiDebugOptions & 1) == 0
    && (_BYTE)KdDebuggerEnabled
    && !(_BYTE)KdDebuggerNotPresent )
  {
    return (unsigned int)SepIsImageInMinTcbList((__int64)L" \"", 9u, &v20, v9, a3, a4, a5, a6, a7);
  }
  return (unsigned int)IsImageInMinTcbList;
}
