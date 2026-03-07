__int64 __fastcall IopCheckTopDeviceHint(unsigned int **a1, __int64 a2, char a3, const UNICODE_STRING *a4)
{
  unsigned int *v4; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  struct _ECP_LIST *v11; // rcx
  char *v12; // rbx
  int v13; // eax
  PVOID EcpContext; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a1;
  if ( a3 )
    return 3221225485LL;
  v8 = v4[18];
  if ( (unsigned int)v8 > 0x35 )
    return 3221225485LL;
  v9 = 0x20000100121108LL;
  if ( !_bittest64(&v9, v8) )
    return 3221225485LL;
  if ( IopVerifyDeviceObjectOnStack((__int64)v4, *(_QWORD *)(a2 + 176), 1) )
  {
    *a1 = *(unsigned int **)(a2 + 176);
    return 0LL;
  }
  v11 = *(struct _ECP_LIST **)(a2 + 168);
  if ( v11 )
  {
    EcpContext = 0LL;
    if ( FsRtlFindExtraCreateParameter(v11, &GUID_ECP_IO_DEVICE_HINT, &EcpContext, 0LL) >= 0 )
    {
      v12 = (char *)EcpContext;
      if ( *((_WORD *)EcpContext + 5) < a4->Length )
      {
        *((_WORD *)EcpContext + 4) = a4->Length;
        return 3221226646LL;
      }
      ObfReferenceObject(v4);
      *(_QWORD *)v12 = v4;
      RtlCopyUnicodeString((PUNICODE_STRING)(v12 + 8), a4);
      *((_DWORD *)v12 - 6) |= 8u;
    }
  }
  v13 = *(_DWORD *)(a2 + 152);
  if ( (v13 & 0x10) == 0 )
    return 3221226345LL;
  *(_DWORD *)(a2 + 152) = v13 & 0xFFFFFFEF;
  return 3221226344LL;
}
