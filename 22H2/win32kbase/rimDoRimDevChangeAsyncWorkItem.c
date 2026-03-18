/*
 * XREFs of rimDoRimDevChangeAsyncWorkItem @ 0x1C00BC9DC
 * Callers:
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0179C70 (RIMOnAsyncPnpWorkNotification.c)
 * Callees:
 *     rimDoRimDevChange @ 0x1C0003BFC (rimDoRimDevChange.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     RIMStartDeviceSpecificRead @ 0x1C00789D8 (RIMStartDeviceSpecificRead.c)
 *     rimFreeSpecificDevFinal @ 0x1C00C350C (rimFreeSpecificDevFinal.c)
 *     RIMFreeDev @ 0x1C0170F70 (RIMFreeDev.c)
 *     RIMFreeSpecificDevOnCreateFailure @ 0x1C0171018 (RIMFreeSpecificDevOnCreateFailure.c)
 *     rimInUserCritCreatePointerDeviceInfo @ 0x1C018E740 (rimInUserCritCreatePointerDeviceInfo.c)
 *     rimOnPnpRemoveCompleteInUserCrit @ 0x1C019ADD8 (rimOnPnpRemoveCompleteInUserCrit.c)
 */

void __fastcall rimDoRimDevChangeAsyncWorkItem(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebx
  __int64 v3; // rsi
  __int64 v5; // rdx
  bool v6; // cf
  int v7; // eax
  __int64 v8; // rdi
  int v9; // eax
  int v10; // eax
  int PointerDeviceInfo; // eax
  int v12; // edx
  __int64 v13; // r8
  int v14; // eax

  v1 = *(_QWORD *)(a1 + 56);
  v2 = 1;
  v3 = *(_QWORD *)(a1 + 24);
  v5 = v1 + 72;
  v6 = v1 != 0;
  v7 = *(_DWORD *)(a1 + 112);
  v8 = v5 & -(__int64)v6;
  if ( v7 == 1 )
  {
    if ( (*(_DWORD *)((v5 & -(__int64)v6) + 0x50) & 1) != 0 )
    {
      PointerDeviceInfo = rimInUserCritCreatePointerDeviceInfo(a1, v8);
      *(_DWORD *)(v8 + 80) &= ~1u;
      if ( PointerDeviceInfo < 0 )
      {
        LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v12,
            v13,
            (_DWORD)gRimLog,
            2,
            1,
            16,
            (__int64)&WPP_772c79a03a0531bfc5b802d15a9024f9_Traceguids);
        RIMFreeSpecificDevOnCreateFailure(v3, v8, v13);
        return;
      }
    }
    goto LABEL_3;
  }
  if ( v7 != 3 || (v14 = rimOnPnpRemoveCompleteInUserCrit(*(_QWORD *)(a1 + 24), v8), (v2 = v14) != 0) )
LABEL_3:
    rimDoRimDevChange(v3, v8, *(_DWORD *)(a1 + 112));
  v9 = *(_DWORD *)(a1 + 112);
  switch ( v9 )
  {
    case 3:
      if ( v2 )
        RIMFreeDev(v3, v8);
      break;
    case 2:
      RIMLockExclusive(v3 + 760);
      v10 = *(_DWORD *)(v8 + 80);
      if ( (v10 & 2) != 0 )
      {
        *(_DWORD *)(v8 + 80) = v10 & 0xFFFFFFFD;
        RIMStartDeviceSpecificRead((HANDLE *)v3, v8);
      }
      *(_QWORD *)(v3 + 768) = 0LL;
      ExReleasePushLockExclusiveEx(v3 + 760, 0LL);
      KeLeaveCriticalRegion();
      break;
    case 4:
      rimFreeSpecificDevFinal(v3, v8);
      break;
  }
}
