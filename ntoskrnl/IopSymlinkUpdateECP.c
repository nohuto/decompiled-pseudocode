/*
 * XREFs of IopSymlinkUpdateECP @ 0x14087BDFC
 * Callers:
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     IopSymlinkRememberJunction @ 0x14087A7D0 (IopSymlinkRememberJunction.c)
 *     IopGraftName @ 0x14087A8D0 (IopGraftName.c)
 *     IopSymlinkApplyToOpenedName @ 0x140945D10 (IopSymlinkApplyToOpenedName.c)
 * Callees:
 *     IopSymlinkGetECP @ 0x14023ADA0 (IopSymlinkGetECP.c)
 *     IopSymlinkRemoveECP @ 0x14023ADC4 (IopSymlinkRemoveECP.c)
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     IoGetIrpExtraCreateParameter @ 0x1406B1D50 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14070C300 (FsRtlFreeExtraCreateParameter.c)
 *     IopSymlinkAllocateAndAddECP @ 0x14077E41C (IopSymlinkAllocateAndAddECP.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x14077E4E8 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x14078B018 (IopSymlinkFreeRelatedMountPointChain.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSymlinkUpdateECP(
        PIRP Irp,
        PVOID EcpContext,
        __int16 a3,
        const UNICODE_STRING *a4,
        __int16 a5,
        __int16 a6)
{
  _WORD *v6; // rbx
  __int64 Length; // rcx
  __int16 v11; // r12
  __int16 v12; // ax
  _QWORD *v14; // rdi
  _QWORD *i; // rax
  __int64 Pool2; // rax
  _WORD *v17; // rsi
  int v18; // ebx
  _QWORD *v19; // [rsp+50h] [rbp-10h] BYREF
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
  if ( v6[9] < (unsigned __int16)Length )
  {
    v14 = v19;
    v20 = 0LL;
    if ( v19 == (_QWORD *)v6 )
    {
      IopSymlinkRemoveECP(ExtraCreateParameter, &EcpContexta);
      v18 = IopSymlinkAllocateAndAddECP(Irp, &v20, a4->Length);
      if ( v18 < 0 )
      {
        FsRtlFreeExtraCreateParameter(EcpContexta);
        return (unsigned int)v18;
      }
      v6 = EcpContexta;
      v17 = v20;
    }
    else
    {
      for ( i = (_QWORD *)v19[1]; i != (_QWORD *)v6; i = (_QWORD *)i[1] )
        v14 = i;
      Pool2 = ExAllocatePool2(256LL, Length + 32, 1767075657LL);
      v17 = (_WORD *)Pool2;
      if ( !Pool2 )
        return 3221225626LL;
      v14[1] = Pool2;
    }
    IopSymlinkInitializeSymlinkInfo(
      (__int64)v17,
      a4->Length + 32,
      a4->Buffer,
      a4->Length,
      a3,
      0LL,
      0,
      0,
      v11,
      *((_QWORD *)v6 + 1));
    if ( v6 == (_WORD *)v14 )
    {
      *((_QWORD *)v6 + 1) = 0LL;
      FsRtlFreeExtraCreateParameter(v6);
    }
    else
    {
      ExFreePoolWithTag(v6, 0x69536F49u);
    }
    v6 = v17;
  }
  else
  {
    RtlCopyUnicodeString((PUNICODE_STRING)v6 + 1, a4);
  }
  v12 = a5;
  v6[1] = v11;
  v6[2] = v12;
  *v6 = a3;
  if ( (v6[1] & 1) == 0 )
    IopSymlinkFreeRelatedMountPointChain((__int64)v6);
  return 0LL;
}
