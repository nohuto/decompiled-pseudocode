/*
 * XREFs of SepIsMinTCB @ 0x14069CBD4
 * Callers:
 *     SeQuerySigningPolicy @ 0x14069CAA0 (SeQuerySigningPolicy.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14027DF30 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     RtlPrefixUnicodeString @ 0x1406DD340 (RtlPrefixUnicodeString.c)
 *     SepIsImageInMinTcbList @ 0x1406F1984 (SepIsImageInMinTcbList.c)
 *     SepSetSystemPaths @ 0x1407C9558 (SepSetSystemPaths.c)
 */

__int64 __fastcall SepIsMinTCB(
        PCUNICODE_STRING String2,
        unsigned int a2,
        char a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 CurrentServerSilo; // rax
  volatile signed __int64 *ServerSiloGlobals; // rsi
  const UNICODE_STRING *v13; // r14
  unsigned int v14; // eax
  __int16 Length; // si
  __int64 v16; // rbp
  wchar_t *Buffer; // r15
  int IsImageInMinTcbList; // ecx
  int v20; // [rsp+20h] [rbp-68h]
  int v21; // [rsp+28h] [rbp-60h]
  __int128 v22; // [rsp+50h] [rbp-38h] BYREF

  v22 = 0LL;
  CurrentServerSilo = PsGetCurrentServerSilo();
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
    if ( !RtlPrefixUnicodeString(&stru_1400010C8, String2, 1u) && !RtlPrefixUnicodeString(&stru_140009B20, String2, 1u) )
      return (unsigned int)-1073741275;
    Length = 42;
  }
  LOWORD(v22) = v16 - Length;
  WORD1(v22) = v16 - Length;
  *((_QWORD *)&v22 + 1) = &Buffer[(v16 - (unsigned __int64)(unsigned __int16)(v16 - Length)) >> 1];
  IsImageInMinTcbList = SepIsImageInMinTcbList(&SeMsMinTCBList, 16LL, &v22, a2, a3, a4, a5, a6, a7);
  if ( IsImageInMinTcbList < 0
    && (SeCiDebugOptions & 1) == 0
    && (_BYTE)KdDebuggerEnabled
    && !(_BYTE)KdDebuggerNotPresent )
  {
    LOBYTE(v21) = a4;
    LOBYTE(v20) = a3;
    return (unsigned int)SepIsImageInMinTcbList(L" \"", 9LL, &v22, a2, v20, v21, a5, a6, a7);
  }
  return (unsigned int)IsImageInMinTcbList;
}
