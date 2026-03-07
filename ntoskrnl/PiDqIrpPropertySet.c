__int64 __fastcall PiDqIrpPropertySet(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char v3; // r15
  char v4; // si
  struct _IRP *MasterIrp; // rcx
  NTSTATUS v6; // edi
  __int64 v7; // r10
  unsigned int PnpObjectType; // r12d
  unsigned int v9; // eax
  _DWORD *v10; // rcx
  __int64 v11; // rdx
  unsigned int i; // r15d
  __int64 v13; // rsi
  int v14; // r8d
  __int64 v15; // r10
  HANDLE Handle; // [rsp+50h] [rbp-78h] BYREF
  HANDLE v18; // [rsp+58h] [rbp-70h] BYREF
  __int64 v19; // [rsp+60h] [rbp-68h] BYREF
  PVOID v20; // [rsp+68h] [rbp-60h] BYREF
  _QWORD v21[11]; // [rsp+70h] [rbp-58h] BYREF
  PVOID P; // [rsp+E8h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v19 = 0LL;
  Handle = 0LL;
  v18 = 0LL;
  P = 0LL;
  v3 = 0;
  v4 = 0;
  v20 = 0LL;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
    goto LABEL_44;
  v6 = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v19);
  if ( v6 < 0 )
    goto LABEL_27;
  NdrMesTypeDecode3(v19, "TP 3\a", &off_140001BD0, &off_140C02F08, 2, &P);
  if ( !P
    || !*((_QWORD *)P + 1)
    || !*((_QWORD *)P + 3)
    || !*((_DWORD *)P + 4)
    || (PnpObjectType = PiDqGetPnpObjectType(*(_DWORD *)P)) == 0 )
  {
LABEL_44:
    v6 = -1073741811;
    goto LABEL_27;
  }
  v6 = PiDqOpenObjectRegKey(0, v7, PnpObjectType, 7, 0, 0LL, &Handle);
  if ( v6 < 0 )
    goto LABEL_27;
  v9 = *((_DWORD *)P + 4);
  if ( v9 )
  {
    v10 = (_DWORD *)(*((_QWORD *)P + 3) + 20LL);
    v11 = v9;
    do
    {
      if ( !*v10 )
        v3 = 1;
      if ( *v10 == 1 )
        v4 = 1;
      v10 += 12;
      --v11;
    }
    while ( v11 );
  }
  if ( v3 && !PiAuDoesClientHaveAccess(2u) )
    goto LABEL_38;
  if ( v4 )
  {
    if ( PiAuDoesClientHaveAccess(0x100u) )
    {
      v6 = PiDqOpenObjectRegKey(1, *((_QWORD *)P + 1), PnpObjectType, 7, 1, 0LL, &v18);
      if ( v6 < 0 )
        goto LABEL_27;
      goto LABEL_19;
    }
LABEL_38:
    v6 = -1073741790;
    goto LABEL_27;
  }
LABEL_19:
  v6 = PiPnpRtlBeginOperation((__int64 **)&v20);
  if ( v6 >= 0 )
  {
    for ( i = 0; i < *((_DWORD *)P + 4); ++i )
    {
      v13 = *((_QWORD *)P + 3) + 48LL * i;
      v14 = *(_DWORD *)(v13 + 32);
      v15 = *(_QWORD *)(v13 + 24);
      if ( *(_DWORD *)(v13 + 20) )
      {
        v6 = PnpSetGenericStoreProperty(*(__int64 *)&PiPnpRtlCtx, (__int64)v18, v15, v13, v14);
        if ( v6 >= 0 )
        {
          v21[0] = 0LL;
          v21[1] = *(_QWORD *)(v13 + 24);
          v21[2] = v13;
          PiPnpRtlObjectEventWorker(*((_QWORD *)P + 1), PnpObjectType, 4, (__int64)v21, 1u);
        }
      }
      else
      {
        v6 = PiPnpRtlSetObjectProperty(
               *(__int64 *)&PiPnpRtlCtx,
               *((const WCHAR **)P + 1),
               PnpObjectType,
               (__int64)Handle,
               v15,
               v13,
               v14,
               *(STRSAFE_PCNZWCH *)(v13 + 40),
               *(_DWORD *)(v13 + 36),
               0);
      }
      if ( v6 == -1073741275 )
        v6 = *(_DWORD *)(v13 + 32) != 0 ? 0xC0000225 : 0;
      if ( v6 < 0 )
        break;
    }
  }
LABEL_27:
  if ( Handle )
    ZwClose(Handle);
  if ( v18 )
    ZwClose(v18);
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( v19 )
    MesHandleFree();
  if ( v20 )
    PiPnpRtlEndOperation((PVOID **)v20);
  Irp->IoStatus.Status = v6;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v6;
}
