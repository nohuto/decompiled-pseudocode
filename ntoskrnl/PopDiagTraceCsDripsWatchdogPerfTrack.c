/*
 * XREFs of PopDiagTraceCsDripsWatchdogPerfTrack @ 0x14058FA44
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x14099E1CC (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceCsDripsWatchdogPerfTrack(
        int a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        char a6,
        __int16 a7)
{
  __int16 v11; // dx
  int v12; // ecx
  __int64 v13; // r8
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // rax
  _DWORD *v15; // rcx
  _DWORD v16[4]; // [rsp+40h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-58h] BYREF

  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_DRIPS_WATCHDOG_PERFTRACK) )
  {
    v16[0] = a1;
    v16[1] = a2;
    v16[2] = a3;
    if ( a6 )
      v11 = (a4 != 0) | 0x200;
    else
      v11 = a4 != 0;
    v12 = 0xFFFF;
    v13 = 4LL;
    if ( a5 <= 0xFFFF )
      v12 = a5;
    p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
    v16[3] = v11 & 0x201 | (2 * (unsigned __int8)a7) & 0x3FF | (4 * (a7 & 0x100 | (v12 << 14)));
    v15 = v16;
    do
    {
      p_Reserved->Reserved = 0;
      *(_QWORD *)&p_Reserved[-3].Reserved = v15++;
      p_Reserved[-1].Reserved = 4;
      p_Reserved += 4;
      --v13;
    }
    while ( v13 );
    EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_CS_DRIPS_WATCHDOG_PERFTRACK, 0LL, 0, 0LL, 0LL, 4u, &UserData);
  }
}
