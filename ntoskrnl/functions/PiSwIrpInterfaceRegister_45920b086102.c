__int64 __fastcall PiSwIrpInterfaceRegister(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 FsContext2; // rsi
  struct _IRP *MasterIrp; // rcx
  int updated; // edi
  __int64 v8; // r8
  unsigned int v9; // edx
  struct _KTHREAD *CurrentThread; // rax
  int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 InterfaceEntry; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // r8
  struct _KTHREAD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r11
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  struct _KTHREAD *v26; // rax
  PVOID v27; // r14
  _QWORD *v28; // rcx
  PVOID *v29; // rax
  PVOID P; // [rsp+30h] [rbp-78h] BYREF
  PVOID v31; // [rsp+38h] [rbp-70h]
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v33[12]; // [rsp+48h] [rbp-60h] BYREF
  char v34; // [rsp+B8h] [rbp+10h]
  int v35; // [rsp+C8h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v33[1] = CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v33[2] = FsContext2;
  v33[0] = 0LL;
  P = 0LL;
  v31 = 0LL;
  pszSrc = 0LL;
  v35 = 0;
  v34 = 0;
  if ( (byte_140C0E10C & 8) != 0 )
    McTemplateK0zz_EtwWriteTransfer(
      (__int64)Irp,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_RegisterInterface_Start,
      a3,
      *(const wchar_t **)(FsContext2 + 8),
      *(const wchar_t **)(FsContext2 + 16));
  v33[3] = &Irp->AssociatedIrp;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
  {
    updated = -1073741811;
    goto LABEL_42;
  }
  updated = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, v33);
  if ( updated >= 0 )
  {
    NdrMesTypeDecode3(v33[0], "TP 3\a", &off_140A751A8, &off_140C02F18, 2, &P);
    if ( P
      && *(_QWORD *)P
      && ((v8 = *((_QWORD *)P + 3)) != 0 || !*((_DWORD *)P + 4))
      && ((v9 = *((_DWORD *)P + 4)) != 0 || !v8) )
    {
      updated = PiSwValidatePropertyArray(*((_QWORD *)P + 3), v9);
      if ( updated >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
        if ( !PiSwDeviceOperationsAllowed(FsContext2) || (*(_DWORD *)(FsContext2 + 64) & 8) != 0 )
        {
          updated = -1073741637;
        }
        else
        {
          LOBYTE(v11) = 1;
          updated = IopRegisterDeviceInterface(
                      *(_QWORD *)(FsContext2 + 80),
                      *(_QWORD *)P,
                      *((_QWORD *)P + 1),
                      v11,
                      (__int64)&pszSrc,
                      (__int64)&v35);
          if ( updated >= 0 )
          {
            if ( (byte_140C0E10C & 8) != 0 )
              McTemplateK0zzz_EtwWriteTransfer(
                v12,
                (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_InterfaceRegistered,
                v13,
                *(const wchar_t **)(FsContext2 + 8),
                *(const wchar_t **)(FsContext2 + 16),
                pszSrc);
            v14 = *(_QWORD *)(FsContext2 + 120);
            if ( v14 )
              *(_DWORD *)(v14 + 48) |= v35;
            InterfaceEntry = PiSwDeviceFindInterfaceEntry(FsContext2, pszSrc);
            v31 = (PVOID)InterfaceEntry;
            if ( InterfaceEntry )
            {
              updated = PiSwUpdateArrayProperties(
                          *(_QWORD *)(InterfaceEntry + 24),
                          *(_DWORD *)(InterfaceEntry + 32),
                          *((_QWORD *)P + 3),
                          *((_DWORD *)P + 4));
LABEL_21:
              ExReleaseResourceLite(&PiSwLockObj);
              KeLeaveCriticalRegion();
              if ( updated < 0 )
                goto LABEL_42;
              v18 = *((_QWORD *)P + 3);
              if ( v18 )
                updated = PiSwPropertySet(*((const WCHAR **)v31 + 2), 3u, v18, *((_DWORD *)P + 4));
              if ( updated < 0 )
                goto LABEL_42;
              v19 = KeGetCurrentThread();
              --v19->KernelApcDisable;
              ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
              LOBYTE(v20) = *((_BYTE *)P + 32);
              updated = PiSwDeviceInterfaceSetState(FsContext2, v31, v20);
              goto LABEL_26;
            }
            updated = PiSwInterfaceCreate(pszSrc);
            if ( updated >= 0 )
            {
              v34 = 1;
              v16 = *(_QWORD **)(FsContext2 + 192);
              if ( *v16 != FsContext2 + 184 )
                goto LABEL_54;
              v17 = v31;
              *(_QWORD *)v31 = FsContext2 + 184;
              v17[1] = v16;
              *v16 = v17;
              *(_QWORD *)(FsContext2 + 192) = v17;
              goto LABEL_21;
            }
          }
        }
LABEL_26:
        ExReleaseResourceLite(&PiSwLockObj);
        KeLeaveCriticalRegion();
        if ( updated < 0 )
          goto LABEL_42;
        updated = RtlStringCbCopyW(
                    (NTSTRSAFE_PWSTR)Irp->AssociatedIrp.MasterIrp,
                    CurrentStackLocation->Parameters.Read.Length,
                    pszSrc);
        if ( updated >= 0 )
        {
          v22 = -1LL;
          do
            ++v22;
          while ( *(_WORD *)(v21 + 2 * v22) );
          Irp->IoStatus.Information = 2 * v22 + 2;
        }
      }
    }
    else
    {
      updated = -1073741811;
    }
  }
  if ( updated >= 0 )
    goto LABEL_32;
LABEL_42:
  if ( v31 && v34 )
  {
    v26 = KeGetCurrentThread();
    --v26->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v27 = v31;
    v28 = *(_QWORD **)v31;
    v29 = (PVOID *)*((_QWORD *)v31 + 1);
    if ( *(PVOID *)(*(_QWORD *)v31 + 8LL) == v31 && *v29 == v31 )
    {
      *v29 = v28;
      v28[1] = v29;
      ExReleaseResourceLite(&PiSwLockObj);
      KeLeaveCriticalRegion();
      PiSwInterfaceFree(v27);
      goto LABEL_32;
    }
LABEL_54:
    __fastfail(3u);
  }
LABEL_32:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( pszSrc )
    ExFreePoolWithTag((PVOID)pszSrc, 0);
  if ( v33[0] )
    MesHandleFree();
  Irp->IoStatus.Status = updated;
  IofCompleteRequest(Irp, 0);
  if ( (byte_140C0E10C & 8) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      v23,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_RegisterInterface_Stop,
      v24,
      *(const wchar_t **)(FsContext2 + 8),
      *(const wchar_t **)(FsContext2 + 16),
      updated);
  return (unsigned int)updated;
}
