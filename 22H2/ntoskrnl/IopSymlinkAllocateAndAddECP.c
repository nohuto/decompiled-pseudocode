/*
 * XREFs of IopSymlinkAllocateAndAddECP @ 0x1407CDE5C
 * Callers:
 *     IopSymlinkCreateECP @ 0x1407CDD54 (IopSymlinkCreateECP.c)
 *     IopGraftName @ 0x14087F9E8 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x140880C2C (IopSymlinkUpdateECP.c)
 * Callees:
 *     IoClearIrpExtraCreateParameter @ 0x1405568B0 (IoClearIrpExtraCreateParameter.c)
 *     FsRtlInsertExtraCreateParameter @ 0x1406B9450 (FsRtlInsertExtraCreateParameter.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x14073A220 (FsRtlAllocateExtraCreateParameterList.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14073A280 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14073E5B0 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14073E630 (FsRtlFreeExtraCreateParameter.c)
 *     IoGetIrpExtraCreateParameter @ 0x140765840 (IoGetIrpExtraCreateParameter.c)
 *     IoSetIrpExtraCreateParameter @ 0x1407B4390 (IoSetIrpExtraCreateParameter.c)
 */

__int64 __fastcall IopSymlinkAllocateAndAddECP(PIRP Irp, PVOID *EcpContext, unsigned __int16 a3)
{
  int v4; // ebx
  char v6; // r14
  NTSTATUS ParameterFromLookasideList; // edi
  struct _ECP_LIST *v8; // rbx
  PECP_LIST EcpList; // [rsp+58h] [rbp+10h] BYREF

  *EcpContext = 0LL;
  EcpList = 0LL;
  v4 = a3;
  v6 = 0;
  IoGetIrpExtraCreateParameter(Irp, &EcpList);
  ParameterFromLookasideList = FsRtlAllocateExtraCreateParameterFromLookasideList(
                                 &IopSymlinkECPGuid,
                                 v4 + 32,
                                 0,
                                 IopSymlinkCleanupECP,
                                 &IopSymlinkInfoLookasideList,
                                 EcpContext);
  if ( ParameterFromLookasideList >= 0 )
  {
    v8 = EcpList;
    if ( EcpList )
      goto LABEL_5;
    ParameterFromLookasideList = FsRtlAllocateExtraCreateParameterList(0, &EcpList);
    if ( ParameterFromLookasideList >= 0 )
    {
      v8 = EcpList;
      IoSetIrpExtraCreateParameter(Irp, EcpList);
      v6 = 1;
LABEL_5:
      ParameterFromLookasideList = FsRtlInsertExtraCreateParameter(v8, *EcpContext);
      if ( ParameterFromLookasideList >= 0 )
        return (unsigned int)ParameterFromLookasideList;
      goto LABEL_8;
    }
  }
  v8 = EcpList;
LABEL_8:
  if ( *EcpContext )
  {
    *((_QWORD *)*EcpContext + 1) = 0LL;
    FsRtlFreeExtraCreateParameter(*EcpContext);
    *EcpContext = 0LL;
  }
  if ( v6 )
  {
    FsRtlFreeExtraCreateParameterList(v8);
    IoClearIrpExtraCreateParameter(Irp);
  }
  return (unsigned int)ParameterFromLookasideList;
}
