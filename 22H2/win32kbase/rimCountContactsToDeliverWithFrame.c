/*
 * XREFs of rimCountContactsToDeliverWithFrame @ 0x1C0171F84
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C0171424 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C017FBB8 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x1C017FC4C (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C017FCBC (RIMCmActiveContactsNext.c)
 *     RIMCmGetButtonContact @ 0x1C01802CC (RIMCmGetButtonContact.c)
 */

__int64 __fastcall rimCountContactsToDeliverWithFrame(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 active; // rax
  __int64 v7; // xmm1_8
  __int64 v8; // rax
  __int64 v9; // rdi
  __int128 v10; // xmm1
  __int64 v11; // xmm0_8
  __int64 v12; // rax
  __int64 result; // rax
  int v14; // eax
  int v15; // edx
  __int128 v16; // [rsp+20h] [rbp-50h] BYREF
  __int64 v17; // [rsp+30h] [rbp-40h]
  __int128 v18; // [rsp+38h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-28h]
  _BYTE v20[32]; // [rsp+50h] [rbp-20h] BYREF

  *a2 = 0;
  *a3 = 0;
  active = RIMCmActiveContactsBeginNoButton(&v18, a1);
  v7 = *(_QWORD *)(active + 16);
  v16 = *(_OWORD *)active;
  v17 = v7;
  while ( 1 )
  {
    v8 = RIMCmActiveContactsEnd(v20, a1);
    v9 = v17;
    v10 = *(_OWORD *)v8;
    v11 = *(_QWORD *)(v8 + 16);
    v12 = *(_QWORD *)v8;
    v19 = v11;
    v18 = v10;
    if ( (_QWORD)v16 == v12 )
    {
      result = DWORD2(v18);
      if ( DWORD2(v16) == DWORD2(v18) && v17 == v19 )
        break;
    }
    v14 = *(_DWORD *)(v17 + 16);
    if ( (v14 & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 607);
      v14 = *(_DWORD *)(v9 + 16);
    }
    if ( (v14 & 4) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 608);
    if ( (*(_DWORD *)(v9 + 2324) & 1) != 0 )
      ++*a2;
    RIMCmActiveContactsNext(a1, &v16);
  }
  if ( !*a2 )
  {
    result = RIMCmGetButtonContact(a1);
    if ( result )
    {
      v15 = *(_DWORD *)(result + 32);
      if ( (v15 & 2) != 0 )
      {
        result = *(unsigned int *)(result + 2340);
        if ( (result & 1) != 0 )
        {
          if ( (v15 & 4) == 0 )
            result = MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 629);
          *a2 = 1;
          *a3 = 1;
        }
      }
    }
  }
  return result;
}
