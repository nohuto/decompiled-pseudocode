/*
 * XREFs of SepIsMinTCB @ 0x14070E10C
 * Callers:
 *     SeQuerySigningPolicy @ 0x14070DD2C (SeQuerySigningPolicy.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     RtlPrefixUnicodeString @ 0x1406D5A70 (RtlPrefixUnicodeString.c)
 *     SepIsImageInMinTcbList @ 0x14070E2F8 (SepIsImageInMinTcbList.c)
 *     SepSetSystemPaths @ 0x1408529D0 (SepSetSystemPaths.c)
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
  volatile signed __int64 *ServerSiloGlobals; // rax
  PCUNICODE_STRING *v13; // rsi
  __int16 v14; // bp
  unsigned int Length; // ecx
  __int64 v16; // rcx
  wchar_t *Buffer; // rax
  unsigned __int64 v18; // rdx
  int IsImageInMinTcbList; // ecx
  int v21; // [rsp+20h] [rbp-58h]
  int v22; // [rsp+28h] [rbp-50h]
  __int128 v23; // [rsp+50h] [rbp-28h] BYREF

  v23 = 0LL;
  CurrentServerSilo = PsGetCurrentServerSilo();
  ServerSiloGlobals = (volatile signed __int64 *)PsGetServerSiloGlobals(CurrentServerSilo);
  v13 = (PCUNICODE_STRING *)(ServerSiloGlobals + 92);
  if ( !_InterlockedCompareExchange64(ServerSiloGlobals + 96, 0LL, 0LL) )
  {
    IsImageInMinTcbList = SepSetSystemPaths(v13);
    if ( IsImageInMinTcbList < 0 )
      return (unsigned int)IsImageInMinTcbList;
  }
  if ( !String2 )
    return (unsigned int)-1073741275;
  v14 = 42;
  Length = v13[4]->Length;
  if ( (unsigned __int16)Length >= 0x2Au )
    Length = 42;
  if ( String2->Length <= Length )
    return (unsigned int)-1073741275;
  if ( String2->Buffer[1] == 63 )
  {
    if ( !RtlPrefixUnicodeString(v13[4], String2, 1u) && !RtlPrefixUnicodeString(v13[4] + 1, String2, 1u) )
      return (unsigned int)-1073741275;
    v14 = v13[4]->Length;
  }
  else if ( !RtlPrefixUnicodeString(&stru_140001A28, String2, 1u)
         && !RtlPrefixUnicodeString(&stru_14000AC88, String2, 1u) )
  {
    return (unsigned int)-1073741275;
  }
  v16 = (unsigned __int16)(String2->Length - v14);
  Buffer = String2->Buffer;
  v18 = String2->Length - v16;
  LOWORD(v23) = String2->Length - v14;
  WORD1(v23) = v16;
  *((_QWORD *)&v23 + 1) = &Buffer[v18 >> 1];
  IsImageInMinTcbList = SepIsImageInMinTcbList(&SeMsMinTCBList, 17LL, &v23, a2, a3, a4, a5, a6, a7);
  if ( IsImageInMinTcbList < 0
    && (SeCiDebugOptions & 1) == 0
    && (_BYTE)KdDebuggerEnabled
    && !(_BYTE)KdDebuggerNotPresent )
  {
    LOBYTE(v22) = a4;
    LOBYTE(v21) = a3;
    return (unsigned int)SepIsImageInMinTcbList(L" \"", 9LL, &v23, a2, v21, v22, a5, a6, a7);
  }
  return (unsigned int)IsImageInMinTcbList;
}
