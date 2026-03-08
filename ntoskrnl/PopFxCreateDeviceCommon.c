/*
 * XREFs of PopFxCreateDeviceCommon @ 0x1403934D4
 * Callers:
 *     PopFxAcpiRegisterDevice @ 0x14059EA34 (PopFxAcpiRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x14083714C (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     PopFxDuplicateUniqueId @ 0x1403936FC (PopFxDuplicateUniqueId.c)
 *     IoInitializeRemoveLockEx @ 0x1403BF180 (IoInitializeRemoveLockEx.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxCreateDeviceCommon(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  int v6; // edi
  __int64 Pool2; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rax
  PVOID P[2]; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)P = 0LL;
  v6 = PopFxDuplicateUniqueId(a1, P);
  if ( v6 >= 0 )
  {
    Pool2 = ExAllocatePool2(64LL, 1280LL, 1297630800LL);
    v8 = Pool2;
    if ( Pool2 )
    {
      *(_OWORD *)(Pool2 + 216) = *(_OWORD *)P;
      *(_QWORD *)(Pool2 + 8) = Pool2;
      *(_QWORD *)Pool2 = Pool2;
      v9 = (_QWORD *)(Pool2 + 200);
      v9[1] = v9;
      *v9 = v9;
      *(_QWORD *)(v8 + 584) = v8 + 576;
      *(_QWORD *)(v8 + 576) = v8 + 576;
      *(_WORD *)(v8 + 568) = 0;
      *(_BYTE *)(v8 + 570) = 6;
      *(_DWORD *)(v8 + 572) = 1;
      *(_QWORD *)(v8 + 360) = 0LL;
      *(_QWORD *)(v8 + 384) = v8 + 376;
      *(_QWORD *)(v8 + 376) = v8 + 376;
      *(_QWORD *)(v8 + 368) = 0LL;
      *(_BYTE *)(v8 + 368) = 9;
      *(_QWORD *)(v8 + 392) = 0LL;
      *(_DWORD *)(v8 + 428) = 0;
      *(_WORD *)(v8 + 424) = 0;
      *(_QWORD *)(v8 + 456) = PopFxIdleTimeoutDpcRoutine;
      *(_DWORD *)(v8 + 432) = 275;
      *(_QWORD *)(v8 + 464) = v8;
      *(_QWORD *)(v8 + 488) = 0LL;
      *(_QWORD *)(v8 + 448) = 0LL;
      *(_QWORD *)(v8 + 320) = PopFxDeviceWork;
      *(_QWORD *)(v8 + 328) = v8;
      *(_QWORD *)(v8 + 304) = 0LL;
      *(_QWORD *)(v8 + 1224) = PopFxHandleReportDevicePoweredOn;
      *(_QWORD *)(v8 + 1232) = v8;
      *(_QWORD *)(v8 + 1208) = 0LL;
      *(_QWORD *)(v8 + 1152) = 0LL;
      *(_QWORD *)(v8 + 936) = PopFxDirectedPowerTransitionWorker;
      *(_QWORD *)(v8 + 944) = v8;
      *(_QWORD *)(v8 + 920) = 0LL;
      *(_QWORD *)(v8 + 1008) = v8 + 1000;
      *(_QWORD *)(v8 + 1000) = v8 + 1000;
      *(_QWORD *)(v8 + 992) = 0LL;
      *(_BYTE *)(v8 + 992) = 8;
      *(_QWORD *)(v8 + 1016) = 0LL;
      *(_DWORD *)(v8 + 1052) = 0;
      *(_WORD *)(v8 + 1048) = 0;
      *(_QWORD *)(v8 + 1080) = PopFxDirectedWorkOrderWatchdog;
      *(_QWORD *)(v8 + 1088) = v8 + 976;
      *(_DWORD *)(v8 + 1056) = 275;
      *(_QWORD *)(v8 + 1112) = 0LL;
      *(_QWORD *)(v8 + 1072) = 0LL;
      *(_QWORD *)(v8 + 1120) = v8 + 920;
      *(_QWORD *)(v8 + 968) = v8 + 976;
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 272), 0x4D584650u, 0, 0, 0x20u);
      *(_DWORD *)(v8 + 232) = ((a4 & 4) != 0) + 1;
      *(_DWORD *)(v8 + 824) = a4;
      *a5 = v8;
      return (unsigned int)v6;
    }
    v6 = -1073741670;
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x4D584650u);
  return (unsigned int)v6;
}
