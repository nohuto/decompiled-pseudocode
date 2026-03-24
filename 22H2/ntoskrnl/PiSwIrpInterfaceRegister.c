/*
 * XREFs of PiSwIrpInterfaceRegister @ 0x14076E344
 * Callers:
 *     PiSwDispatch @ 0x14074DB30 (PiSwDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x140242E00 (IofCompleteRequest.c)
 *     RtlStringCbCopyW @ 0x14032E038 (RtlStringCbCopyW.c)
 *     PiSwInterfaceFree @ 0x140734E74 (PiSwInterfaceFree.c)
 *     PiSwUnlock @ 0x1407434D0 (PiSwUnlock.c)
 *     PiSwLock @ 0x140743564 (PiSwLock.c)
 *     PiSwPropertySet @ 0x1407447F8 (PiSwPropertySet.c)
 *     IopRegisterDeviceInterface @ 0x140744910 (IopRegisterDeviceInterface.c)
 *     PiSwValidatePropertyArray @ 0x14074D9C4 (PiSwValidatePropertyArray.c)
 *     PiSwDeviceInterfaceSetState @ 0x14076E65C (PiSwDeviceInterfaceSetState.c)
 *     PiSwInterfaceCreate @ 0x14076E730 (PiSwInterfaceCreate.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14076E7E8 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwDeviceOperationsAllowed @ 0x14076E908 (PiSwDeviceOperationsAllowed.c)
 *     PiSwUpdateArrayProperties @ 0x14078A694 (PiSwUpdateArrayProperties.c)
 *     MIDL_user_free @ 0x140980370 (MIDL_user_free.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpInterfaceRegister(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  _QWORD *FsContext2; // r14
  const WCHAR **v4; // rsi
  char v5; // r12
  struct _IRP *MasterIrp; // rcx
  NTSTATUS updated; // edi
  __int64 v8; // r8
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 InterfaceEntry; // rax
  PVOID *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r8
  NTSTRSAFE_PCWSTR v15; // r14
  __int64 v16; // rax
  const WCHAR *v18; // rcx
  void **v19; // rax
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v21[11]; // [rsp+40h] [rbp-58h] BYREF
  int v22; // [rsp+B0h] [rbp+18h] BYREF
  void *v23; // [rsp+B8h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v21[1] = CurrentStackLocation;
  FsContext2 = CurrentStackLocation->FileObject->FsContext2;
  v21[2] = FsContext2;
  v21[0] = 0LL;
  v23 = 0LL;
  v4 = 0LL;
  pszSrc = 0LL;
  v22 = 0;
  v5 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
  {
    updated = -1073741811;
    goto LABEL_36;
  }
  updated = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, v21);
  if ( updated >= 0 )
  {
    NdrMesTypeDecode3(v21[0], "TP 3\a", &off_140983A38, &off_140C01A60, 2, &v23);
    if ( v23
      && *(_QWORD *)v23
      && ((v8 = *((_QWORD *)v23 + 3)) != 0 || !*((_DWORD *)v23 + 4))
      && ((v9 = *((_DWORD *)v23 + 4)) != 0 || !v8) )
    {
      updated = PiSwValidatePropertyArray(*((_QWORD *)v23 + 3), v9);
      if ( updated >= 0 )
      {
        PiSwLock();
        if ( !(unsigned __int8)PiSwDeviceOperationsAllowed(FsContext2) || (FsContext2[8] & 8) != 0 )
        {
          updated = -1073741637;
        }
        else
        {
          updated = IopRegisterDeviceInterface(
                      FsContext2[10],
                      *(int **)v23,
                      *((_QWORD *)v23 + 1),
                      1,
                      (PVOID *)&pszSrc,
                      &v22);
          if ( updated >= 0 )
          {
            v10 = FsContext2[15];
            if ( v10 )
              *(_DWORD *)(v10 + 48) |= v22;
            InterfaceEntry = PiSwDeviceFindInterfaceEntry(FsContext2, pszSrc);
            v4 = (const WCHAR **)InterfaceEntry;
            if ( InterfaceEntry )
            {
              updated = PiSwUpdateArrayProperties(
                          *(_QWORD *)(InterfaceEntry + 24),
                          *(unsigned int *)(InterfaceEntry + 32),
                          *((_QWORD *)v23 + 3),
                          *((unsigned int *)v23 + 4));
LABEL_17:
              PiSwUnlock();
              if ( updated < 0 )
                goto LABEL_36;
              v13 = *((_QWORD *)v23 + 3);
              if ( v13 )
                updated = PiSwPropertySet(v4[2], 3u, v13, *((_DWORD *)v23 + 4));
              if ( updated < 0 )
                goto LABEL_36;
              PiSwLock();
              LOBYTE(v14) = *((_BYTE *)v23 + 32);
              updated = PiSwDeviceInterfaceSetState(FsContext2, v4, v14);
              goto LABEL_22;
            }
            updated = PiSwInterfaceCreate(pszSrc);
            if ( updated >= 0 )
            {
              v5 = 1;
              v12 = (PVOID *)FsContext2[24];
              if ( *v12 != FsContext2 + 23 )
                goto LABEL_48;
              v4 = 0LL;
              MEMORY[0] = FsContext2 + 23;
              MEMORY[8] = v12;
              *v12 = 0LL;
              FsContext2[24] = 0LL;
              goto LABEL_17;
            }
            v4 = 0LL;
          }
        }
LABEL_22:
        PiSwUnlock();
        if ( updated < 0 )
          goto LABEL_36;
        v15 = pszSrc;
        updated = RtlStringCbCopyW(
                    (NTSTRSAFE_PWSTR)Irp->AssociatedIrp.MasterIrp,
                    CurrentStackLocation->Parameters.Read.Length,
                    pszSrc);
        if ( updated >= 0 )
        {
          v16 = -1LL;
          do
            ++v16;
          while ( v15[v16] );
          Irp->IoStatus.Information = 2 * v16 + 2;
        }
      }
    }
    else
    {
      updated = -1073741811;
    }
  }
  if ( updated >= 0 )
    goto LABEL_28;
LABEL_36:
  if ( v4 && v5 )
  {
    PiSwLock();
    v18 = *v4;
    v19 = (void **)v4[1];
    if ( *((const WCHAR ***)*v4 + 1) == v4 && *v19 == v4 )
    {
      *v19 = (void *)v18;
      *((_QWORD *)v18 + 1) = v19;
      PiSwUnlock();
      PiSwInterfaceFree(v4);
      goto LABEL_28;
    }
LABEL_48:
    __fastfail(3u);
  }
LABEL_28:
  if ( v23 )
    MIDL_user_free(v23);
  if ( pszSrc )
    ExFreePoolWithTag((PVOID)pszSrc, 0);
  if ( v21[0] )
    MesHandleFree();
  Irp->IoStatus.Status = updated;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)updated;
}
