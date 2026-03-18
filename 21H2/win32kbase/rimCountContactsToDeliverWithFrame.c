/*
 * XREFs of rimCountContactsToDeliverWithFrame @ 0x1C00E69BA
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C01A62A0 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMCmActiveContactsEnd @ 0x1C00E756C (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01B609C (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsNext @ 0x1C01B6120 (RIMCmActiveContactsNext.c)
 *     RIMCmGetButtonContact @ 0x1C01B6870 (RIMCmGetButtonContact.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimCountContactsToDeliverWithFrame(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 active; // rax
  __int64 v7; // xmm1_8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 result; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int128 v17; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+30h] [rbp-20h]
  __int64 v19; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-10h]
  __int64 v21; // [rsp+48h] [rbp-8h]

  *a2 = 0;
  *a3 = 0;
  active = RIMCmActiveContactsBeginNoButton(&v19, a1);
  v7 = *(_QWORD *)(active + 16);
  v17 = *(_OWORD *)active;
  v18 = v7;
  while ( 1 )
  {
    RIMCmActiveContactsEnd(&v19, a1);
    v11 = v18;
    if ( (_QWORD)v17 == v19 )
    {
      result = v20;
      if ( DWORD2(v17) == v20 && v18 == v21 )
        break;
    }
    v13 = *(_DWORD *)(v18 + 16);
    if ( (v13 & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
      v13 = *(_DWORD *)(v11 + 16);
    }
    if ( (v13 & 4) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
    if ( (*(_DWORD *)(v11 + 2324) & 1) != 0 )
      ++*a2;
    RIMCmActiveContactsNext(a1, &v17);
  }
  if ( !*a2 )
  {
    result = RIMCmGetButtonContact(a1);
    if ( result )
    {
      v16 = *(unsigned int *)(result + 32);
      if ( (v16 & 2) != 0 )
      {
        result = *(unsigned int *)(result + 2340);
        if ( (result & 1) != 0 )
        {
          if ( (v16 & 4) == 0 )
            result = MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v14, v15);
          *a2 = 1;
          *a3 = 1;
        }
      }
    }
  }
  return result;
}
