/*
 * XREFs of rimCountContactsToDeliverWithFrame @ 0x1C00F065E
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C01CD424 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCmActiveContactsEnd @ 0x1C00F1A04 (RIMCmActiveContactsEnd.c)
 *     RIMCmGetButtonContact @ 0x1C00F1A60 (RIMCmGetButtonContact.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01DE028 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsNext @ 0x1C01DE0AC (RIMCmActiveContactsNext.c)
 */

void __fastcall rimCountContactsToDeliverWithFrame(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 active; // rax
  __int64 v7; // xmm1_8
  __int64 v8; // rbx
  __int64 ButtonContact; // rax
  int v10; // edx
  __int128 v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+30h] [rbp-20h]
  __int64 v13; // [rsp+38h] [rbp-18h] BYREF
  int v14; // [rsp+40h] [rbp-10h]
  __int64 v15; // [rsp+48h] [rbp-8h]

  *a2 = 0;
  *a3 = 0;
  active = RIMCmActiveContactsBeginNoButton(&v13, a1);
  v7 = *(_QWORD *)(active + 16);
  v11 = *(_OWORD *)active;
  v12 = v7;
  while ( 1 )
  {
    RIMCmActiveContactsEnd(&v13, a1);
    v8 = v12;
    if ( (_QWORD)v11 == v13 && DWORD2(v11) == v14 && v12 == v15 )
      break;
    if ( (*(_DWORD *)(v12 + 16) & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 601);
    if ( (*(_DWORD *)(v8 + 16) & 4) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 602);
    if ( (*(_DWORD *)(v8 + 2348) & 1) != 0 )
      ++*a2;
    RIMCmActiveContactsNext(a1, &v11);
  }
  if ( !*a2 )
  {
    ButtonContact = RIMCmGetButtonContact(a1);
    if ( ButtonContact )
    {
      v10 = *(_DWORD *)(ButtonContact + 32);
      if ( (v10 & 2) != 0 && (*(_DWORD *)(ButtonContact + 2364) & 1) != 0 )
      {
        if ( (v10 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 623);
        *a2 = 1;
        *a3 = 1;
      }
    }
  }
}
