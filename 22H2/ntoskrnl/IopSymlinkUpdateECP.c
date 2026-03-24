/*
 * XREFs of IopSymlinkUpdateECP @ 0x140682B0C
 * Callers:
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 *     IopSymlinkRememberJunction @ 0x140682C94 (IopSymlinkRememberJunction.c)
 *     IopGraftName @ 0x140683164 (IopGraftName.c)
 *     IopSymlinkApplyToOpenedName @ 0x140895510 (IopSymlinkApplyToOpenedName.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402D3C70 (RtlCopyUnicodeString.c)
 *     IopSymlinkRemoveECP @ 0x1402D558C (IopSymlinkRemoveECP.c)
 *     IopSymlinkGetECP @ 0x1403142F0 (IopSymlinkGetECP.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14060CE40 (FsRtlFreeExtraCreateParameter.c)
 *     IoGetIrpExtraCreateParameter @ 0x140650610 (IoGetIrpExtraCreateParameter.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x140682F58 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkAllocateAndAddECP @ 0x14068303C (IopSymlinkAllocateAndAddECP.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1406837F8 (IopSymlinkFreeRelatedMountPointChain.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopSymlinkUpdateECP(
        PIRP Irp,
        UNICODE_STRING *EcpContext,
        unsigned __int16 a3,
        const UNICODE_STRING *a4,
        __int16 a5,
        __int16 a6)
{
  UNICODE_STRING *v6; // rbx
  __int64 Length; // rcx
  __int16 v11; // r12
  UNICODE_STRING *v12; // rdi
  UNICODE_STRING *i; // rax
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING *v15; // rsi
  __int16 v16; // ax
  int v18; // ebx
  UNICODE_STRING *v19; // [rsp+50h] [rbp-10h] BYREF
  PVOID v20; // [rsp+58h] [rbp-8h] BYREF
  PVOID EcpContexta; // [rsp+A8h] [rbp+48h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+B8h] [rbp+58h] BYREF

  EcpContexta = EcpContext;
  v6 = EcpContext;
  v19 = 0LL;
  ExtraCreateParameter = 0LL;
  IoGetIrpExtraCreateParameter(Irp, &ExtraCreateParameter);
  IopSymlinkGetECP(ExtraCreateParameter, (PVOID *)&v19);
  Length = a4->Length;
  v11 = a6;
  if ( v6[1].MaximumLength >= (unsigned __int16)Length )
  {
    RtlCopyUnicodeString(v6 + 1, a4);
  }
  else
  {
    v12 = v19;
    v20 = 0LL;
    if ( v19 == v6 )
    {
      IopSymlinkRemoveECP(ExtraCreateParameter, &EcpContexta);
      v18 = IopSymlinkAllocateAndAddECP(Irp, &v20);
      if ( v18 < 0 )
      {
        FsRtlFreeExtraCreateParameter(EcpContexta);
        return (unsigned int)v18;
      }
      v6 = (UNICODE_STRING *)EcpContexta;
      v15 = (UNICODE_STRING *)v20;
    }
    else
    {
      for ( i = (UNICODE_STRING *)v19->Buffer; i != v6; i = (UNICODE_STRING *)i->Buffer )
        v12 = i;
      PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, Length + 32, 0x69536F49u);
      v15 = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
      v12->Buffer = &PoolWithTag->Length;
    }
    IopSymlinkInitializeSymlinkInfo(
      v15,
      (unsigned int)a4->Length + 32,
      a4->Buffer,
      a4->Length,
      a3,
      0LL,
      0,
      0,
      v11,
      v6->Buffer);
    if ( v6 == v12 )
    {
      v6->Buffer = 0LL;
      FsRtlFreeExtraCreateParameter(v6);
    }
    else
    {
      ExFreePoolWithTag(v6, 0x69536F49u);
    }
    v6 = v15;
  }
  v16 = a5;
  v6->MaximumLength = v11;
  *(&v6->MaximumLength + 1) = v16;
  v6->Length = a3;
  if ( (v6->MaximumLength & 1) == 0 )
    IopSymlinkFreeRelatedMountPointChain(v6);
  return 0LL;
}
