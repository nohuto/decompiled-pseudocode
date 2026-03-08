/*
 * XREFs of TdrAllowToDebugTimeout @ 0x1C030AD88
 * Callers:
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C030A4E0 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?TdrValidateDebugMode@@YAXXZ @ 0x1C004F094 (-TdrValidateDebugMode@@YAXXZ.c)
 *     ?TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C030A36C (-TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

__int64 __fastcall TdrAllowToDebugTimeout(struct _TDR_RECOVERY_CONTEXT *a1)
{
  unsigned int v1; // ebx
  char v2; // al
  char v3; // di
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  struct _TDR_RECOVERY_CONTEXT *v6; // [rsp+40h] [rbp+8h]
  unsigned __int64 DbgOwnerTag; // [rsp+48h] [rbp+10h]

  v6 = a1;
  v1 = 0;
  g_TdrRecoveryToDebug = a1;
  if ( (dword_1C013D458 & 1) != 0 )
  {
    v2 = byte_1C013D45C;
  }
  else
  {
    LOBYTE(a1) = 1;
    dword_1C013D458 |= 1u;
    v2 = (unsigned __int8)WdIsDebuggerPresent(a1) != 0;
    byte_1C013D45C = v2;
  }
  byte_1C013BA84 = v2;
  TdrValidateDebugMode();
  if ( (byte_1C013BA84 || (unsigned __int8)WdQueryDebugFlag(0LL)) && !g_TdrDebugMode )
  {
    DbgOwnerTag = TdrGetDbgOwnerTag(v6);
    if ( !DbgOwnerTag || DbgOwnerTag == -1LL )
      LODWORD(DbgOwnerTag) = (_DWORD)retaddr;
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "The GPU Scheduler detected a timeout condition. We broke into the  debugger to allow a chance for debugging this i"
      "ssue. Please use !analyze -v for more info.\n"
      "\n"
      "    TDR_RECOVERY_CONTEXT : 0x%p\n"
      "    Debug Owner Tag      : 0x%Ix\n"
      "\n",
      v6,
      DbgOwnerTag);
    v3 = 1;
    do
    {
      if ( v3 )
      {
        v3 = 0;
        g_TdrDebugMode = -1;
      }
      else
      {
        DbgPrintEx(0x65u, 0, "dxgkrnl!g_TdrDebugMode is set to invalid value 0x%X\n", g_TdrDebugMode);
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "Please edit dxgkrnl!g_TdrDebugMode variable to choose timeout debug policy\n"
        "using command 'ed dxgkrnl!g_TdrDebugMode (mode)'\n"
        "           or 'ed 0x%p (mode)'\n"
        "where (mode) is: \n"
        "      0x00 - to continue execution as planned in end-user scenario\n"
        "      0x01 - to ignore timeout (useful to debug the timeout)\n"
        "      0x02 - to continue execution as with mode 0x00 but disable the timeout debugging\n"
        "      0x03 - same as 0x02 but will not check for consecutive recoveries.\n"
        "\n",
        (const void *)&g_TdrDebugMode);
      __debugbreak();
    }
    while ( (unsigned int)g_TdrDebugMode >= 4 );
  }
  g_TdrRecoveryToDebug = 0LL;
  LOBYTE(v1) = g_TdrDebugMode == 1;
  return v1;
}
