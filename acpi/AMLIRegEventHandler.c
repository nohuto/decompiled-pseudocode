__int64 AMLIRegEventHandler(unsigned int a1, unsigned int a2, ...)
{
  __int64 v2; // r9
  __int64 v3; // rsi
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 result; // rax
  __int64 *v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // r9
  unsigned int v12; // ebx
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF
  va_list va; // [rsp+60h] [rbp+18h]
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF
  va_list va1; // [rsp+68h] [rbp+20h]
  va_list va2; // [rsp+70h] [rbp+28h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  v2 = v16;
  v3 = 0LL;
  dword_1C006F938 = 0;
  v5 = v16;
  v6 = v14;
  v13[0] = 0LL;
  pszDest = 0;
  if ( g_SimulatorCallbackObject )
  {
    result = Simulator_Pre_RegEventHandler(a1, a2, (unsigned int)va, (unsigned int)va1, (__int64)v13);
    if ( (_DWORD)result )
      return result;
    v5 = v16;
    v6 = v14;
    v3 = v13[0];
  }
  if ( a1 > 0xB )
  {
    if ( a1 != 12 )
    {
      switch ( a1 )
      {
        case 0xDu:
          v9 = &ghMapTable;
          goto LABEL_14;
        case 0xEu:
          v9 = &ghGetAcpiTableVersion;
          goto LABEL_14;
        case 0xFu:
          v9 = &ghCheckOsiString;
          goto LABEL_14;
        case 0x10u:
          v9 = &ghMutexObject;
          goto LABEL_14;
        case 0x11u:
          v9 = &ghQueryDLMSupportHandler;
          goto LABEL_14;
        case 0x12u:
          v9 = &ghLoadTable;
          goto LABEL_14;
        case 0x13u:
          v9 = &ghUnloadTable;
          goto LABEL_14;
        case 0x14u:
          v9 = &ghNativeMethodEvalObject;
          goto LABEL_14;
      }
      goto LABEL_38;
    }
    v11 = 0x80000000LL;
    goto LABEL_48;
  }
  if ( a1 == 11 )
  {
    v9 = &ghDestroyObj;
    goto LABEL_14;
  }
  if ( a1 > 6 )
  {
    if ( a1 != 7 )
    {
      if ( a1 == 8 )
      {
        v9 = &qword_1C006F918;
      }
      else if ( a1 == 9 )
      {
        v9 = &qword_1C006F928;
      }
      else
      {
        v9 = &ghCreate;
      }
      goto LABEL_14;
    }
    LOBYTE(v2) = 1;
    goto LABEL_20;
  }
  switch ( a1 )
  {
    case 6u:
      v2 = 0LL;
LABEL_20:
      v10 = RegRSAccess(a2, v6, v5, v2);
      goto LABEL_49;
    case 1u:
      v11 = 0LL;
LABEL_48:
      v10 = RegOpcodeHandler(a2, v6, v5, v11);
LABEL_49:
      v12 = v10;
      if ( v10 == 32772 )
        v12 = 259;
      goto LABEL_51;
    case 2u:
      v9 = &ghNotify;
      goto LABEL_14;
    case 3u:
      v9 = &ghFatal;
      goto LABEL_14;
    case 4u:
      v9 = &ghValidateTable;
      goto LABEL_14;
    case 5u:
      v9 = &ghGlobalLock;
LABEL_14:
      v10 = RegEventHandler(v9, v6, v5);
      goto LABEL_49;
  }
LABEL_38:
  v12 = -1072431091;
  LogError(3222536205LL);
  AcpiDiagTraceAmlError(0LL, -1072431091);
  PrintDebugMessage(164, a1, 0, 0, 0LL);
LABEL_51:
  if ( g_SimulatorCallbackObject )
  {
    if ( v3 )
    {
      v12 = Simulator_TestNotifyRet((PVOID)v3);
      if ( (unsigned int)(*(_DWORD *)(v3 + 4) - 1) <= 2 )
        Simulator_Free_Arguments(*(unsigned int *)(v3 + 32), *(_QWORD *)(v3 + 40));
      ExFreePoolWithTag((PVOID)v3, 0);
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return v12;
}
