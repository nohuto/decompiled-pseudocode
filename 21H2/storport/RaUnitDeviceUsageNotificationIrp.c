/*
 * XREFs of RaUnitDeviceUsageNotificationIrp @ 0x1C0014E04
 * Callers:
 *     RaUnitPnpIrp @ 0x1C000BA58 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C00063B0 (RaidIsUnitControlSupported.c)
 *     RaidCompleteRequestEx @ 0x1C0009080 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B640 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000B684 (RaUnitAcquireRemoveLock.c)
 *     _tlgKeywordOn @ 0x1C000E56C (_tlgKeywordOn.c)
 *     RaSendIrpSynchronous @ 0x1C0011710 (RaSendIrpSynchronous.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C0013AB0 (StorUpdateCrashDumpPowerReady.c)
 *     RaCallMiniportUnitControl @ 0x1C00190AC (RaCallMiniportUnitControl.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001B09C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1C001B144 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 *     RaidSecondaryDumpDeregister @ 0x1C0058100 (RaidSecondaryDumpDeregister.c)
 *     RaidSecondaryDumpRegister @ 0x1C0058148 (RaidSecondaryDumpRegister.c)
 *     RaidNotifyPoAboutSpecialDevice @ 0x1C0058FE0 (RaidNotifyPoAboutSpecialDevice.c)
 */

__int64 __fastcall RaUnitDeviceUsageNotificationIrp(__int64 a1, IRP *a2)
{
  __int64 v2; // rsi
  IRP *v4; // r15
  volatile signed __int32 *v5; // r14
  char v6; // r12
  int v7; // eax
  unsigned int Options; // r13d
  unsigned __int8 Lock; // dl
  __int64 v10; // rcx
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // r8d
  int v15; // r9d
  PIRP v16; // rax
  __int64 v17; // r8
  signed int Status; // edi
  __int64 v19; // rax
  bool v20; // zf
  volatile signed __int32 *v21; // rax
  _IO_STACK_LOCATION *v22; // rcx
  _IO_STACK_LOCATION *v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  unsigned __int8 v27; // [rsp+30h] [rbp-D0h]
  char v28; // [rsp+31h] [rbp-CFh] BYREF
  char v29; // [rsp+32h] [rbp-CEh] BYREF
  char v30; // [rsp+33h] [rbp-CDh] BYREF
  char v31; // [rsp+34h] [rbp-CCh] BYREF
  int v32; // [rsp+38h] [rbp-C8h] BYREF
  PIRP Irp; // [rsp+40h] [rbp-C0h]
  __int128 v34; // [rsp+48h] [rbp-B8h]
  _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+58h] [rbp-A8h]
  __int128 v36; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+90h] [rbp-70h]
  __int64 v39; // [rsp+98h] [rbp-68h]
  __int64 v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+A8h] [rbp-58h]
  int *v42; // [rsp+B0h] [rbp-50h]
  __int64 v43; // [rsp+B8h] [rbp-48h]
  char *v44; // [rsp+C0h] [rbp-40h]
  __int64 v45; // [rsp+C8h] [rbp-38h]
  char *v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+D8h] [rbp-28h]
  char *v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  char v50[16]; // [rsp+F0h] [rbp-10h] BYREF
  char *v51; // [rsp+100h] [rbp+0h]
  __int64 v52; // [rsp+108h] [rbp+8h]
  char v53[16]; // [rsp+110h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  Irp = a2;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v34 = 0LL;
  v36 = 0LL;
  if ( !v2 || (v7 = *(_DWORD *)(a1 + 48)) == 0 || (unsigned int)(v7 - 5) <= 1 )
  {
    Status = -1073741810;
    goto LABEL_49;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Lock = CurrentStackLocation->Parameters.SetLock.Lock;
  v27 = Lock;
  if ( Options == 1 )
  {
    v19 = 916LL;
  }
  else if ( CurrentStackLocation->Parameters.Create.Options == 2 )
  {
    v19 = 924LL;
  }
  else
  {
    v10 = CurrentStackLocation->Parameters.Create.Options - 3;
    if ( CurrentStackLocation->Parameters.Create.Options != 3 )
    {
      if ( CurrentStackLocation->Parameters.Create.Options == 4 )
      {
        v11 = *(_BYTE *)(a1 + 450);
        if ( Lock )
        {
          *(_BYTE *)(a1 + 450) = v11 | 1;
          *(_BYTE *)(v2 + 104) |= 0x80u;
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 5060LL) )
            RaidSecondaryDumpRegister(a1);
          if ( (unsigned int)dword_1C0069058 > 5 && tlgKeywordOn(v10, 0x400000000000LL) )
          {
            v12 = *(_QWORD *)(v2 + 4864);
            v38 = v2 + 5192;
            v39 = 16LL;
            v40 = a1 + 1976;
            v32 = *(_DWORD *)(v2 + 56);
            v42 = &v32;
            v28 = *(_BYTE *)(a1 + 96);
            v44 = &v28;
            v29 = *(_BYTE *)(a1 + 97);
            v46 = &v29;
            v30 = *(_BYTE *)(a1 + 98);
            v48 = &v30;
            v41 = 16LL;
            v43 = 4LL;
            v45 = 1LL;
            v47 = 1LL;
            v49 = 1LL;
            tlgCreate1Sz_wchar_t(v50, v12);
            v13 = *(_QWORD *)(v2 + 4872);
            v31 = *(_BYTE *)(a1 + 3280);
            v51 = &v31;
            v52 = 1LL;
            tlgCreate1Sz_wchar_t(v53, v13);
            tlgWriteTransfer_EtwWriteTransfer((int)&v37, (int)&dword_1C005DD7A, v14, v15, 0xBu, &v37);
          }
        }
        else
        {
          *(_BYTE *)(a1 + 450) = v11 & 0xFE;
          *(_BYTE *)(v2 + 104) &= ~0x80u;
          RaidSecondaryDumpDeregister();
        }
        v6 = 1;
      }
      goto LABEL_16;
    }
    v19 = 920LL;
  }
  v20 = a1 + v19 == 0;
  v21 = (volatile signed __int32 *)(a1 + v19);
  v6 = 1;
  v5 = v21;
  if ( !v20 && !*v21 && !Lock )
  {
    Status = -1073741823;
    goto LABEL_51;
  }
LABEL_16:
  v16 = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(v2 + 8) + 76LL) + 3, 0);
  v4 = v16;
  if ( !v16 )
  {
    Status = -1073741801;
    goto LABEL_51;
  }
  LOBYTE(v17) = 1;
  Status = RaUnitAcquireRemoveLock(a1, (__int64)v16, v17);
  if ( Status >= 0 )
  {
    v22 = CurrentStackLocation;
    v4->Tail.Overlay.Thread = Irp->Tail.Overlay.Thread;
    v23 = v4->Tail.Overlay.CurrentStackLocation;
    v4->IoStatus.Status = -1073741637;
    *(_OWORD *)&v23[-1].MajorFunction = *(_OWORD *)&v22->MajorFunction;
    *(_OWORD *)&v23[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v22->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v23[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v22->Parameters.SetQuota + 6);
    *(_OWORD *)&v23[-1].FileObject = *(_OWORD *)&v22->FileObject;
    v23[-1].Context = v22->Context;
    Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(v2 + 8), v4);
    if ( Status < 0 || (Status = v4->IoStatus.Status, Status < 0) )
    {
      if ( Status != -1073741637 || Options != 4 )
      {
LABEL_47:
        RaUnitReleaseRemoveLock(a1);
        goto LABEL_49;
      }
      Status = 0;
    }
    if ( v5 )
    {
      if ( v27 )
        _InterlockedIncrement(v5);
      else
        _InterlockedDecrement(v5);
      IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a1 + 8));
      if ( Options == 1 )
        RaidNotifyPoAboutSpecialDevice(*(_QWORD *)(a1 + 8), *(unsigned int *)v5);
    }
    if ( v6 && RaidIsUnitControlSupported(a1, 1) )
    {
      v24 = *(_QWORD *)(a1 + 24);
      LOWORD(v36) = 1;
      WORD1(v36) = *(_WORD *)(v24 + 56);
      WORD4(v36) = *(_WORD *)(a1 + 96);
      BYTE10(v36) = *(_BYTE *)(a1 + 98);
      *(_QWORD *)&v34 = &v36;
      BYTE12(v34) = v27;
      DWORD1(v36) = 4;
      DWORD2(v34) = Options;
      RaCallMiniportUnitControl(v24 + 320, 1LL);
    }
    if ( Options == 3 )
    {
      v25 = *(_DWORD *)(a1 + 920);
      if ( v25 == 1 )
      {
        if ( !*(_QWORD *)(v2 + 5144) )
        {
          *(_QWORD *)(v2 + 5144) = a1;
          StorUpdateCrashDumpPowerReady(v2);
        }
      }
      else if ( !v25 && a1 == *(_QWORD *)(v2 + 5144) )
      {
        *(_QWORD *)(v2 + 5144) = 0LL;
      }
    }
    goto LABEL_47;
  }
LABEL_49:
  if ( v4 )
    IoFreeIrp(v4);
LABEL_51:
  RaidCompleteRequestEx(Irp, 0, Status);
  return (unsigned int)Status;
}
