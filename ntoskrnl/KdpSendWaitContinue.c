/*
 * XREFs of KdpSendWaitContinue @ 0x140AAD824
 * Callers:
 *     KdpReportLoadSymbolsStateChange @ 0x140AAD6F0 (KdpReportLoadSymbolsStateChange.c)
 *     KdpReportExceptionStateChange @ 0x140AAE63C (KdpReportExceptionStateChange.c)
 *     KdpReportCommandStringStateChange @ 0x140AB1398 (KdpReportCommandStringStateChange.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     KdpGetContextEx @ 0x140391F24 (KdpGetContextEx.c)
 *     KdpSetContextEx @ 0x140392008 (KdpSetContextEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalReturnToFirmware @ 0x140504990 (HalReturnToFirmware.c)
 *     KdpWriteCustomBreakpoint @ 0x140565684 (KdpWriteCustomBreakpoint.c)
 *     KdpSysReadIoSpace @ 0x140565A54 (KdpSysReadIoSpace.c)
 *     KdpSysReadMsr @ 0x140565B18 (KdpSysReadMsr.c)
 *     KdpSysWriteIoSpace @ 0x140565B4C (KdpSysWriteIoSpace.c)
 *     KdpSysWriteMsr @ 0x140565C0C (KdpSysWriteMsr.c)
 *     KeSwitchFrozenProcessor @ 0x140574610 (KeSwitchFrozenProcessor.c)
 *     KdpCopyMemoryChunks @ 0x140AAD0F4 (KdpCopyMemoryChunks.c)
 *     KdExitDebugger @ 0x140AAD2D0 (KdExitDebugger.c)
 *     KdpReadVirtualMemory @ 0x140AADB68 (KdpReadVirtualMemory.c)
 *     KdpGetContext @ 0x140AAE72C (KdpGetContext.c)
 *     KdpDeleteBreakpoint @ 0x140AAEB50 (KdpDeleteBreakpoint.c)
 *     KdpReadControlSpace @ 0x140AAEB90 (KdpReadControlSpace.c)
 *     KdpWriteControlSpace @ 0x140AAEE58 (KdpWriteControlSpace.c)
 *     KdpGetStateChange @ 0x140AAF478 (KdpGetStateChange.c)
 *     KdpFillMemory @ 0x140AB0F00 (KdpFillMemory.c)
 *     KdpGetBusData @ 0x140AB1028 (KdpGetBusData.c)
 *     KdpQueryMemory @ 0x140AB10F0 (KdpQueryMemory.c)
 *     KdpReadPhysicalMemory @ 0x140AB1188 (KdpReadPhysicalMemory.c)
 *     KdpReadPhysicalMemoryLong @ 0x140AB12D4 (KdpReadPhysicalMemoryLong.c)
 *     KdpRestoreBreakPointEx @ 0x140AB1530 (KdpRestoreBreakPointEx.c)
 *     KdpSearchMemory @ 0x140AB1644 (KdpSearchMemory.c)
 *     KdpSearchPhysicalPageRange @ 0x140AB1A78 (KdpSearchPhysicalPageRange.c)
 *     KdpSetBusData @ 0x140AB1B1C (KdpSetBusData.c)
 *     KdpSetContext @ 0x140AB1BA8 (KdpSetContext.c)
 *     KdpWriteBreakPointEx @ 0x140AB1D94 (KdpWriteBreakPointEx.c)
 *     KdpWritePhysicalMemory @ 0x140AB1F58 (KdpWritePhysicalMemory.c)
 *     KdpAddBreakpoint @ 0x140AB2738 (KdpAddBreakpoint.c)
 */

__int64 __fastcall KdpSendWaitContinue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  bool v11; // cf
  __int64 *v12; // r8
  __int64 *v13; // rdx
  int v14; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-89h]
  __int64 v16; // [rsp+28h] [rbp-81h]
  __int64 v17; // [rsp+40h] [rbp-69h] BYREF
  __int128 *v18; // [rsp+48h] [rbp-61h]
  __int128 v19; // [rsp+50h] [rbp-59h] BYREF
  __int64 v20; // [rsp+60h] [rbp-49h] BYREF
  void *v21; // [rsp+68h] [rbp-41h]
  int v22; // [rsp+70h] [rbp-39h] BYREF
  unsigned __int64 v23; // [rsp+78h] [rbp-31h] BYREF
  _QWORD v24[2]; // [rsp+80h] [rbp-29h] BYREF
  __int128 v25; // [rsp+90h] [rbp-19h] BYREF
  __int128 v26; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v27; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v28; // [rsp+C0h] [rbp+17h]

  v28 = 0LL;
  v24[0] = 3670016LL;
  v20 = 805306368LL;
  v22 = 0;
  KdpContextSent = 0;
  v24[1] = &v25;
  v21 = &KdpMessageBuffer;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  KdSendPacket(7LL, a2, a3, &KdpContext);
  while ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
    {
      if ( (_DWORD)KeNumberProcessors_0 == 1 )
        KeQueryPerformanceCounter(0LL);
      v7 = KdReceivePacket(2LL, v24, &v20, &v22, &KdpContext);
      if ( v7 == 2 )
        break;
      if ( v7 != 1 )
      {
        switch ( (int)v25 )
        {
          case 12592:
            KdpReadVirtualMemory(&v25, &v20);
            continue;
          case 12593:
            v19 = 0LL;
            DWORD2(v25) = KdpCopyMemoryChunks(
                            (char *)v26,
                            (__int64)v21,
                            (unsigned __int16)v20,
                            0,
                            5,
                            (_DWORD *)&v26 + 3);
            LOWORD(v19) = 56;
            *((_QWORD *)&v19 + 1) = &v25;
            goto LABEL_12;
          case 12594:
            *(_QWORD *)&v19 = 56LL;
            *((_QWORD *)&v19 + 1) = &v25;
            KdpGetContext(&v25, &v20);
            if ( !DWORD2(v25) )
              KdpContextSent = 1;
            v13 = (__int64 *)&v19;
            goto LABEL_56;
          case 12595:
            KdpSetContext(&v25, &v20, a4);
            continue;
          case 12596:
            *(_QWORD *)&v19 = 56LL;
            LOBYTE(v8) = 1;
            *((_QWORD *)&v19 + 1) = &v25;
            DWORD2(v26) = KdpAddBreakpoint(v26, 204LL, v8, 0LL, BugCheckParameter4, v16);
            v11 = DWORD2(v26) != 0;
            goto LABEL_11;
          case 12597:
            *(_QWORD *)&v19 = 56LL;
            *((_QWORD *)&v19 + 1) = &v25;
            v11 = (unsigned __int8)KdpDeleteBreakpoint((unsigned int)v26) != 0;
LABEL_11:
            DWORD2(v25) = v11 ? 0 : 0xC0000001;
            goto LABEL_12;
          case 12598:
            return (int)v26 >= 0;
          case 12599:
            KdpReadControlSpace(&v25, &v20);
            continue;
          case 12600:
            KdpWriteControlSpace(&v25, &v20);
            continue;
          case 12601:
            HIDWORD(v26) = 0;
            v17 = 56LL;
            v18 = &v25;
            v14 = KdpSysReadIoSpace(1, 0, 1, v26, (_BYTE *)&v26 + 12, SDWORD2(v26), &v19);
            goto LABEL_40;
          case 12602:
            v17 = 56LL;
            v18 = &v25;
            v14 = KdpSysWriteIoSpace(1, 0, 1, v26, (unsigned __int8 *)&v26 + 12, SDWORD2(v26), &v19);
            goto LABEL_40;
          case 12603:
            KiResumeForReboot = 1;
            KdExitDebugger(0);
            ((void (__fastcall *)(_QWORD))off_140C01CB8[0])(0LL);
            HalReturnToFirmware(3);
          case 12604:
            if ( (int)v26 < 0 )
              return 0LL;
            KdpGetStateChange(&v25, a4);
            return 1LL;
          case 12605:
            KdpReadPhysicalMemory(&v25, &v20, v8, &KdpContext);
            continue;
          case 12606:
            KdpWritePhysicalMemory(&v25, &v20);
            continue;
          case 12608:
          case 12609:
          case 12610:
          case 12634:
            continue;
          case 12612:
            v17 = 56LL;
            v18 = &v25;
            DWORD2(v27) = 0;
            v14 = KdpSysReadIoSpace(SDWORD1(v26), SDWORD2(v26), SHIDWORD(v26), v27, (_BYTE *)&v27 + 8, v26, &v19);
            goto LABEL_40;
          case 12613:
            v17 = 56LL;
            v18 = &v25;
            v14 = KdpSysWriteIoSpace(
                    SDWORD1(v26),
                    SDWORD2(v26),
                    SHIDWORD(v26),
                    v27,
                    (unsigned __int8 *)&v27 + 8,
                    v26,
                    &v19);
            goto LABEL_40;
          case 12614:
            DWORD2(v25) = 0;
            LODWORD(v25) = 12614;
            v17 = 56LL;
            v18 = &v25;
            v27 = xmmword_140C099B0;
            v26 = KdVersionBlock;
            v28 = qword_140C099C0;
            goto LABEL_21;
          case 12615:
            if ( !(unsigned int)KdpWriteBreakPointEx(&v25, &v20) )
              continue;
            return 0LL;
          case 12616:
            KdpRestoreBreakPointEx(&v25, &v20);
            continue;
          case 12617:
            KdExitDebugger(0);
            KeBugCheckEx(0xE2u, 0LL, 0LL, 0LL, 0LL);
          case 12624:
            return KeSwitchFrozenProcessor(WORD3(v25));
          case 12625:
            DWORD2(v25) = -1073741823;
            v17 = 56LL;
            v18 = &v25;
            goto LABEL_21;
          case 12626:
            *(_QWORD *)&v19 = 0LL;
            v17 = 56LL;
            v18 = &v25;
            DWORD2(v25) = KdpSysReadMsr(v26, &v19);
            *(_QWORD *)((char *)&v26 + 4) = v19;
            goto LABEL_21;
          case 12627:
            v17 = 56LL;
            v18 = &v25;
            v23 = *(_QWORD *)((char *)&v26 + 4);
            v14 = KdpSysWriteMsr(v26, &v23);
LABEL_40:
            DWORD2(v25) = v14;
LABEL_21:
            v12 = 0LL;
            v13 = &v17;
            goto LABEL_13;
          case 12630:
            KdpSearchMemory(&v25, &v20);
            continue;
          case 12631:
            KdpGetBusData(&v25, &v20);
            continue;
          case 12632:
            KdpSetBusData(&v25, &v20);
            continue;
          case 12633:
            *(_QWORD *)&v19 = 56LL;
            *((_QWORD *)&v19 + 1) = &v25;
            if ( KdpSearchInProgress )
              KdpSearchPhysicalPageRange(4LL);
            DWORD2(v25) = 0;
LABEL_12:
            v12 = 0LL;
            v13 = (__int64 *)&v19;
            goto LABEL_13;
          case 12635:
            KdpFillMemory(&v25, &v20);
            continue;
          case 12636:
            KdpQueryMemory(&v25);
            continue;
          case 12639:
            KdpGetContextEx(&v25, (unsigned __int16 *)&v20);
            continue;
          case 12640:
            KdpSetContextEx((__int64)&v25, (__int64)&v20, a4);
            continue;
          case 12641:
            KdpWriteCustomBreakpoint((__int64)&v25, 0x140000000LL, v8, v9);
            continue;
          case 12642:
            KdpReadPhysicalMemoryLong(&v25, &v20);
            continue;
          default:
            LOWORD(v20) = 0;
            v13 = v24;
            DWORD2(v25) = -1073741823;
LABEL_56:
            v12 = &v20;
LABEL_13:
            KdSendPacket(2LL, v13, v12, &KdpContext);
            break;
        }
      }
    }
    KdSendPacket(7LL, a2, a3, &KdpContext);
  }
  return 1LL;
}
