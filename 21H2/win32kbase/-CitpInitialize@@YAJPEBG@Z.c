/*
 * XREFs of ?CitpInitialize@@YAJPEBG@Z @ 0x1C00A3954
 * Callers:
 *     CitProcessCallout @ 0x1C0016FF0 (CitProcessCallout.c)
 * Callees:
 *     ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C00A35FC (-CitpEnsureDataKey@@YAJPEAPEAX@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C00A3AFC (-CitpStart@@YAJXZ.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C00A3BB0 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C00A3E54 (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C023FD24 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C02C81EC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall CitpInitialize(PCWSTR SourceString)
{
  __int64 result; // rax
  int v3; // eax
  const char *v4; // rdx
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  qword_1C029A224 = 0x100000040080022LL;
  xmmword_1C029A214 = 0LL;
  dword_1C029A22C = 0;
  *(_QWORD *)&xmmword_1C029A204 = 0xEA6000000040LL;
  *((_QWORD *)&xmmword_1C029A204 + 1) = 92771293597200000LL;
  *(_QWORD *)&xmmword_1C029A214 = 0xEA6000000001LL;
  DWORD2(xmmword_1C029A214) = 1000;
  CitpParametersCompute((struct _CIT_PARAMETERS *)&xmmword_1C029A204);
  *(_OWORD *)&xmmword_1C029A230 = 0LL;
  xmmword_1C029A250 = 0LL;
  *(_QWORD *)&xmmword_1C029A240 = MEMORY[0xFFFFF78000000008];
  *((_QWORD *)&xmmword_1C029A240 + 1) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  *(_QWORD *)&xmmword_1C029A250 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  LOBYTE(g_CompatImpact) = 1;
  DWORD2(xmmword_1C029A250) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *((_DWORD *)&xmmword_1C029A230 + 2) = DWORD2(xmmword_1C029A250);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C028D888);
  if ( gSessionId == gServiceSessionId )
  {
    Handle = 0LL;
    v3 = CitpEnsureDataKey(&Handle);
    if ( v3 < 0 )
      CitpLogFailureWorker(v3, v4, 0x83u);
    else
      ZwClose(Handle);
  }
  CitpParametersLoad((struct _CIT_PARAMETERS *)&xmmword_1C029A204, SourceString);
  if ( !BYTE4(qword_1C029A224) )
    return 0LL;
  result = CitpStart();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
