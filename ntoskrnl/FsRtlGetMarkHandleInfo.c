__int64 __fastcall FsRtlGetMarkHandleInfo(IRP *a1)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Options; // edi
  struct _IRP *v4; // rcx
  struct _IRP *MasterIrp; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  int MdlAddress; // [rsp+30h] [rbp-18h]

  MdlAddress = 0;
  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  v7 = 0LL;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( !IoIs32bitProcess(a1) )
  {
    if ( Options >= 0x18 )
    {
      MasterIrp = a1->AssociatedIrp.MasterIrp;
      return MasterIrp->Flags;
    }
    return 0LL;
  }
  if ( Options < 0xC )
    return 0LL;
  v4 = a1->AssociatedIrp.MasterIrp;
  MdlAddress = (int)v4->MdlAddress;
  LODWORD(v7) = *(_DWORD *)&v4->Type;
  *((_QWORD *)&v7 + 1) = *(int *)(&v4->Size + 1);
  MasterIrp = (struct _IRP *)&v7;
  return MasterIrp->Flags;
}
