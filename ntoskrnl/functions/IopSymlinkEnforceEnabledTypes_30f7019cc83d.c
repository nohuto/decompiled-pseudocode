NTSTATUS __fastcall IopSymlinkEnforceEnabledTypes(bool a1, char a2, struct _ECP_LIST *a3)
{
  char v3; // bl
  NTSTATUS result; // eax
  _DWORD *v8; // rdi
  _QWORD *v9; // rdx
  bool v10; // zf
  PVOID EcpContext; // [rsp+78h] [rbp+20h] BYREF

  v3 = IopSymlinkEnabledTypes;
  EcpContext = 0LL;
  if ( IopSymlinkEnabledTypes == 15 )
    return 0;
  result = FsRtlFindExtraCreateParameter(a3, &GUID_ECP_NETWORK_OPEN_CONTEXT, &EcpContext, 0LL);
  if ( (int)(result + 0x80000000) < 0 || result == -1073741275 )
  {
    v8 = EcpContext;
    if ( EcpContext && (*((_DWORD *)EcpContext - 6) & 0x10) != 0 )
      return -1073740011;
    if ( !a1 )
    {
      if ( !EcpContext )
        return -1073740011;
      a1 = *((_DWORD *)EcpContext + 4) == 2;
    }
    if ( !a2 && !EcpContext )
    {
      result = FsRtlAllocateExtraCreateParameter(
                 &GUID_ECP_NETWORK_OPEN_CONTEXT,
                 0x1Cu,
                 0,
                 0LL,
                 0x69536F49u,
                 &EcpContext);
      if ( result < 0 )
        return result;
      v8 = EcpContext;
      v9 = EcpContext;
      *(_OWORD *)EcpContext = 0LL;
      v9[2] = 0LL;
      *((_DWORD *)v9 + 6) = 0;
      *(_DWORD *)v9 = 28;
      FsRtlInsertExtraCreateParameter(a3, v9);
    }
    if ( a1 )
    {
      if ( (v3 & 3) != 0 )
      {
        if ( !a2 )
        {
          if ( (v3 & 2) == 0 )
            v8[1] = 2;
          v10 = (v3 & 1) == 0;
LABEL_27:
          if ( v10 )
            v8[1] = 1;
          return 0;
        }
        if ( (v3 & 1) != 0 )
          return 0;
      }
    }
    else if ( (v3 & 0xC) != 0 )
    {
      if ( a2 )
        return (v3 & 4) == 0 ? 0xC0000715 : 0;
      if ( (v3 & 8) == 0 )
        v8[1] = 2;
      v10 = (v3 & 4) == 0;
      goto LABEL_27;
    }
    return -1073740011;
  }
  return result;
}
