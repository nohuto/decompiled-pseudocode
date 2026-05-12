/*
 * XREFs of RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C004B9FC
 * Callers:
 *     RaUnitProtocolCommandIoctl @ 0x1C0047BB0 (RaUnitProtocolCommandIoctl.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C000BE14 (RaidAllocateSrb.c)
 *     RaSendIrpSynchronous @ 0x1C0011710 (RaSendIrpSynchronous.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C001CD78 (StorFreeSynchronousScsiRequest.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C001CDC4 (StorBuildSynchronousScsiRequest.c)
 *     StorEtwProtocolCommandCompletion @ 0x1C0050E20 (StorEtwProtocolCommandCompletion.c)
 */

__int64 __fastcall RaidUnitSendSrbProtocolCommandSynchronously(__int64 a1, IRP *a2, char a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *MasterIrp; // r15
  __int64 v6; // r13
  unsigned int Options; // r12d
  _BYTE *v8; // rbp
  unsigned int Length; // eax
  __int64 v12; // rcx
  _BYTE *Srb; // rax
  __int64 v14; // r8
  unsigned __int64 v15; // rbx
  int v16; // edi
  bool v17; // cf
  int v18; // edx
  __int64 v19; // rdi
  int Blink; // eax
  int v21; // eax
  IRP *v22; // rax
  IRP *v23; // r12
  unsigned __int64 v24; // rax
  struct _MDL *MdlAddress; // rcx
  _IO_STATUS_BLOCK v27; // [rsp+20h] [rbp-38h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v6 = *(_QWORD *)(a1 + 24);
  v27 = 0LL;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v8 = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v12 = *(_QWORD *)(a1 + 8);
  if ( Options <= Length )
    Options = Length;
  Srb = RaidAllocateSrb(v12, 9u, *(_BYTE *)(v6 + 426), 0);
  v14 = 0LL;
  v15 = (unsigned __int64)Srb;
  if ( !Srb )
    goto LABEL_4;
  v17 = LODWORD(MasterIrp->ThreadListEntry.Flink) != 0;
  MasterIrp->Flags = 255;
  v18 = (v17 ? 0x80 : 0) | 0x40;
  if ( !HIDWORD(MasterIrp->ThreadListEntry.Flink) )
    v18 = v17 ? 0x80 : 0;
  if ( !a3 )
  {
    v18 |= 0x102u;
    if ( Srb[2] == 40 )
      *((_WORD *)Srb + 19) = 32;
    else
      Srb[9] = 32;
  }
  if ( *(_BYTE *)(v6 + 426) == 1 )
  {
    v19 = *((unsigned int *)Srb + 13);
    *((_DWORD *)Srb + 8) = -1;
    v8 = Srb;
    *((_DWORD *)Srb + 5) = 9;
    *((_DWORD *)Srb + 6) = v18;
    *((_QWORD *)Srb + 8) = MasterIrp;
    *((_DWORD *)Srb + 15) = Options;
    *((_WORD *)Srb + 18) = IoGetIoPriorityHint(a2);
    *(_QWORD *)(v15 + 80) = a2;
    Blink = (int)MasterIrp->ThreadListEntry.Blink;
    if ( !Blink )
      Blink = *(_DWORD *)(a1 + 1264);
    *(_DWORD *)(v15 + 40) = Blink;
    *(_BYTE *)(v19 + v15 + 8) = *(_BYTE *)(a1 + 96);
    *(_BYTE *)(v19 + v15 + 9) = *(_BYTE *)(a1 + 97);
    *(_BYTE *)(v19 + v15 + 10) = *(_BYTE *)(a1 + 98);
  }
  else
  {
    Srb[2] = 9;
    *(_WORD *)Srb = 88;
    *((_DWORD *)Srb + 3) = v18;
    Srb[8] = -1;
    *((_QWORD *)Srb + 3) = MasterIrp;
    *((_DWORD *)Srb + 4) = Options;
    *((_QWORD *)Srb + 6) = a2;
    v21 = (int)MasterIrp->ThreadListEntry.Blink;
    if ( !v21 )
      v21 = *(_DWORD *)(a1 + 1264);
    *(_DWORD *)(v15 + 20) = v21;
    *(_BYTE *)(v15 + 5) = *(_BYTE *)(a1 + 96);
    *(_BYTE *)(v15 + 6) = *(_BYTE *)(a1 + 97);
    *(_BYTE *)(v15 + 7) = *(_BYTE *)(a1 + 98);
  }
  v22 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), v15, v14, &v27);
  v14 = 0LL;
  v23 = v22;
  if ( v22 )
  {
    if ( *(_BYTE *)(v6 + 426) == 1 )
    {
      v8 = (_BYTE *)v15;
      *(_QWORD *)(v15 + 80) = a2;
    }
    else
    {
      *(_QWORD *)(v15 + 48) = a2;
    }
    v16 = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v22);
    if ( v16 >= 0 )
    {
      if ( MasterIrp->Flags == 255 )
        v16 = -1073741637;
      if ( v16 >= 0 )
      {
        if ( *(_BYTE *)(v6 + 426) == 1 )
          v24 = *((unsigned int *)v8 + 15);
        else
          v24 = *(unsigned int *)(v15 + 16);
        a2->IoStatus.Information = v24;
      }
    }
    MdlAddress = a2->MdlAddress;
    if ( MdlAddress )
      MmUnlockPages(MdlAddress);
    StorFreeSynchronousScsiRequest(v23);
    v14 = 0LL;
  }
  else
  {
LABEL_4:
    v16 = -1073741801;
  }
  if ( StorEtwLoggingEnabled )
  {
    LOBYTE(v14) = a3;
    StorEtwProtocolCommandCompletion(*(_QWORD *)(a1 + 8), a2, v14);
  }
  if ( v15 )
  {
    if ( *(_BYTE *)(v6 + 426) == 1 )
    {
      if ( !v8 )
        v8 = (_BYTE *)v15;
      *((_QWORD *)v8 + 10) = 0LL;
      *((_QWORD *)v8 + 13) = 0LL;
    }
    else
    {
      *(_QWORD *)(v15 + 48) = 0LL;
      *(_QWORD *)(v15 + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v15, 0x72536152u);
  }
  return (unsigned int)v16;
}
