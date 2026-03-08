/*
 * XREFs of rimFindReferencedRimObj @ 0x1C0004BC0
 * Callers:
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C0004878 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C01C2E38 (RIMIDECreatePseudoHIDDevice.c)
 * Callees:
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C00350D4 (rimIsExplicitRimUsagesMatchingUsages.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimFindReferencedRimObj(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v5; // rdi
  unsigned __int16 v6; // r15
  unsigned __int16 v7; // r12
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rbx
  int v24; // eax
  NTSTATUS v25; // ebx
  __int64 v26; // rax
  int v28; // r11d
  __int64 v29; // r8

  v5 = 0LL;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  v9 = SGDGetUserSessionState(a1, a2, a3, a4);
  RIMLockExclusive(v9 + 240);
  v14 = *(_QWORD **)(SGDGetUserSessionState(v11, v10, v12, v13) + 304);
  if ( v14 == (_QWORD *)(SGDGetUserSessionState(v16, v15, v17, v18) + 304) )
    goto LABEL_24;
  while ( 1 )
  {
    v23 = v14 - 2;
    if ( !*((_BYTE *)v14 + 64) && !*((_BYTE *)v23 + 81) && !*((_BYTE *)v23 + 10) && (v8 & *((_DWORD *)v23 + 21)) != 0 )
    {
      if ( v8 <= 0x10 )
      {
        v24 = 65814;
        if ( _bittest(&v24, v8) )
        {
          if ( *((_DWORD *)v23 + 264) )
            goto LABEL_9;
          v29 = 472LL;
          goto LABEL_23;
        }
      }
      if ( v8 == 32 )
        break;
    }
LABEL_18:
    v14 = (_QWORD *)*v14;
    if ( v14 == (_QWORD *)(SGDGetUserSessionState(v20, v19, v21, v22) + 304) )
      goto LABEL_10;
  }
  if ( !(unsigned int)rimIsExplicitRimUsagesMatchingUsages(v14 - 2, v7, v6) )
  {
    if ( v28 )
      v5 = v14 - 2;
    goto LABEL_18;
  }
  if ( !v28 )
    goto LABEL_9;
  v29 = 482LL;
LABEL_23:
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, v29);
LABEL_9:
  v5 = v14 - 2;
LABEL_10:
  if ( !v5 )
  {
LABEL_24:
    v25 = -1073741637;
    goto LABEL_13;
  }
  v25 = ObReferenceObjectByPointer(v5, 3u, ExRawInputManagerObjectType, 1);
  if ( v25 >= 0 )
    *a4 = v5;
LABEL_13:
  v26 = SGDGetUserSessionState(v20, v19, v21, v22);
  *(_QWORD *)(v26 + 248) = 0LL;
  ExReleasePushLockExclusiveEx(v26 + 240, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v25;
}
