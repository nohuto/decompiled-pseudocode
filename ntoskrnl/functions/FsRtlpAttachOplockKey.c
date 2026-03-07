__int64 __fastcall FsRtlpAttachOplockKey(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  unsigned int v3; // ebx
  struct _ECP_LIST *v4; // rdi
  struct _ECP_LIST *v5; // rcx
  unsigned __int16 v7; // di
  PVOID EcpContext; // [rsp+20h] [rbp-38h] BYREF
  struct _ECP_LIST *ExtraCreateParameter[2]; // [rsp+28h] [rbp-30h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  if ( !CurrentStackLocation->MajorFunction && !IoGetOplockKeyContextEx((__int64)CurrentStackLocation->FileObject) )
  {
    EcpContext = 0LL;
    ExtraCreateParameter[0] = 0LL;
    IoGetIrpExtraCreateParameter(Irp, ExtraCreateParameter);
    v4 = ExtraCreateParameter[0];
    if ( ExtraCreateParameter[0] )
    {
      v5 = ExtraCreateParameter[0];
      *(GUID *)ExtraCreateParameter = GUID_ECP_DUAL_OPLOCK_KEY;
      if ( FsRtlFindExtraCreateParameter(v5, (LPCGUID)ExtraCreateParameter, &EcpContext, 0LL) )
      {
        *(GUID *)ExtraCreateParameter = GUID_ECP_OPLOCK_KEY;
        if ( FsRtlRemoveExtraCreateParameter(v4, (LPCGUID)ExtraCreateParameter, &EcpContext, 0LL) )
          return v3;
        v7 = 1;
      }
      else
      {
        v7 = 2;
      }
      v3 = IoSetOplockKeyContext(CurrentStackLocation->FileObject, EcpContext, v7);
      if ( v7 == 1 )
        FsRtlFreeExtraCreateParameter(EcpContext);
      else
        FsRtlAcknowledgeEcp(EcpContext);
      if ( v3 == -1073741823 )
        return 0;
    }
  }
  return v3;
}
