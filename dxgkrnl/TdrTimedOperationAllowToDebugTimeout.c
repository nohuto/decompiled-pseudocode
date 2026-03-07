__int64 __fastcall TdrTimedOperationAllowToDebugTimeout(struct _DXGK_TIMED_OPERATION *a1)
{
  unsigned int v1; // ebx
  char v2; // al
  ULONG_PTR OwnerTag; // rcx
  char v4; // di
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  struct _DXGK_TIMED_OPERATION *v7; // [rsp+40h] [rbp+8h]
  int v8; // [rsp+48h] [rbp+10h]

  v7 = a1;
  v1 = 0;
  g_TdrTimedOpToDebug = a1;
  if ( (dword_1C008A070 & 1) != 0 )
  {
    v2 = byte_1C008A074;
  }
  else
  {
    LOBYTE(a1) = 1;
    dword_1C008A070 |= 1u;
    v2 = (unsigned __int8)WdIsDebuggerPresent(a1) != 0;
    byte_1C008A074 = v2;
  }
  byte_1C013BA84 = v2;
  TdrValidateDebugMode();
  if ( (byte_1C013BA84 || (unsigned __int8)WdQueryDebugFlag(0LL)) && !g_TdrDebugMode )
  {
    if ( v7 )
      OwnerTag = v7->OwnerTag;
    else
      OwnerTag = 0LL;
    v8 = OwnerTag;
    if ( !OwnerTag )
      v8 = (int)retaddr;
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "The timeout condition during Timed Operation had been detected. We broke into the  debugger to allow a chance for "
      "debugging this issue. Please use !analyze -v for more info.\n"
      "\n"
      "    DXGK_TIMED_OPERATION : 0x%p\n"
      "    Debug Owner Tag      : 0x%Ix\n"
      "\n",
      v7,
      v8);
    v4 = 1;
    do
    {
      if ( v4 )
      {
        v4 = 0;
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
  g_TdrTimedOpToDebug = 0LL;
  LOBYTE(v1) = g_TdrDebugMode == 1;
  return v1;
}
