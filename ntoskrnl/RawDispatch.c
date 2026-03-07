__int64 __fastcall RawDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rsi
  unsigned int MajorFunction; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int Information; // eax
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  UCHAR v17; // al
  unsigned int v18; // r14d
  unsigned int v19; // [rsp+30h] [rbp-18h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( *(_WORD *)(a1 + 2) != 336
    || (v17 = CurrentStackLocation->MajorFunction, CurrentStackLocation->MajorFunction == 13)
    && CurrentStackLocation->MinorFunction == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = a1 + 336;
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( MajorFunction <= 9 )
    {
      if ( MajorFunction == 9 )
        goto LABEL_6;
      if ( !CurrentStackLocation->MajorFunction )
      {
        Information = RawCreate((PFSRTL_ADVANCED_FCB_HEADER)(a1 + 336), a2);
        goto LABEL_7;
      }
      v12 = MajorFunction - 2;
      if ( !v12 )
      {
        Information = RawClose((PFSRTL_ADVANCED_FCB_HEADER)(a1 + 336), a2);
        goto LABEL_7;
      }
      v13 = v12 - 1;
      if ( !v13 )
        goto LABEL_6;
      v14 = v13 - 1;
      if ( !v14 )
        goto LABEL_6;
      v15 = v14 - 1;
      if ( !v15 )
      {
        Information = RawQueryInformation(a1 + 336, a2, CurrentStackLocation);
        goto LABEL_7;
      }
      if ( v15 == 1 )
      {
        Information = RawSetInformation(a1 + 336, a2, CurrentStackLocation);
        goto LABEL_7;
      }
    }
    else
    {
      v7 = MajorFunction - 10;
      if ( !v7 )
      {
        Information = RawQueryVolumeInformation(a1 + 336, a2, CurrentStackLocation);
        goto LABEL_7;
      }
      v8 = v7 - 3;
      if ( !v8 )
      {
        Information = RawFileSystemControl(a1 + 336, a2, CurrentStackLocation);
        goto LABEL_7;
      }
      v9 = v8 - 1;
      if ( !v9 )
        goto LABEL_6;
      v11 = v9 - 4;
      if ( !v11 )
      {
        Information = RawCleanup((PFSRTL_ADVANCED_FCB_HEADER)(a1 + 336), a2);
        goto LABEL_7;
      }
      if ( v11 == 9 )
      {
        if ( CurrentStackLocation->MinorFunction == 1 )
        {
          v19 = -2147483631;
          a2->IoStatus.Status = -2147483631;
          IofCompleteRequest(a2, 1);
          goto LABEL_30;
        }
        ExAcquireFastMutex((PFAST_MUTEX)(a1 + 568));
        if ( (*(_DWORD *)(v5 + 112) & 2) != 0 )
        {
          v19 = -1073741202;
          a2->IoStatus.Status = -1073741202;
          IofCompleteRequest(a2, 1);
          ExReleaseFastMutex((PFAST_MUTEX)(v5 + 232));
          goto LABEL_30;
        }
        ++*(_DWORD *)(v5 + 120);
        ExReleaseFastMutex((PFAST_MUTEX)(v5 + 232));
LABEL_6:
        Information = RawReadWriteDeviceControl((PFSRTL_ADVANCED_FCB_HEADER)v5, a2);
LABEL_7:
        v19 = Information;
LABEL_30:
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        return v19;
      }
    }
    KeBugCheckEx(0x22u, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (v17 & 0xED) != 0 || v17 == 16 )
    v18 = -1073741808;
  else
    v18 = 0;
  a2->IoStatus.Status = v18;
  IofCompleteRequest(a2, 1);
  return v18;
}
