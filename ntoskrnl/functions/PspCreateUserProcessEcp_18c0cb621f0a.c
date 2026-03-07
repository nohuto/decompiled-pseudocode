__int64 __fastcall PspCreateUserProcessEcp(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  NTSTATUS Parameter; // esi
  NTSTATUS v6; // eax
  struct _ECP_LIST *v7; // rdi
  GUID EcpType; // [rsp+30h] [rbp-38h] BYREF
  PECP_LIST EcpList; // [rsp+70h] [rbp+8h] BYREF
  PVOID EcpContext; // [rsp+80h] [rbp+18h] BYREF

  EcpList = 0LL;
  *(_OWORD *)a1 = 0LL;
  v4 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  EcpContext = 0LL;
  EcpType = GUID_ECP_CREATE_USER_PROCESS;
  *(_QWORD *)(a1 + 32) = 1LL;
  *(_WORD *)a1 = 40;
  Parameter = FsRtlAllocateExtraCreateParameterList(0, &EcpList);
  if ( Parameter < 0
    || (v6 = FsRtlAllocateExtraCreateParameter(&EcpType, 0x10u, 0, 0LL, 0x70437350u, &EcpContext),
        v4 = EcpContext,
        Parameter = v6,
        v6 < 0) )
  {
    v7 = EcpList;
  }
  else
  {
    *(_DWORD *)EcpContext = 16;
    v4[1] = a2;
    v7 = EcpList;
    Parameter = FsRtlInsertExtraCreateParameter(EcpList, v4);
    if ( Parameter >= 0 )
    {
      *(_QWORD *)(a1 + 8) = v7;
      v4 = 0LL;
      v7 = 0LL;
    }
  }
  if ( v7 )
    FsRtlFreeExtraCreateParameterList(v7);
  if ( v4 )
    FsRtlFreeExtraCreateParameter(v4);
  return (unsigned int)Parameter;
}
