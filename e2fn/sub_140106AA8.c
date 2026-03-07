__int64 __fastcall sub_140106AA8(int a1, int a2, char *a3, int a4, _DWORD *a5)
{
  ULONG v10; // ebp
  char *PoolWithQuotaTag; // rax
  char *v12; // rbx
  NTSTATUS v13; // edi
  ULONG ReturnLength; // [rsp+50h] [rbp+18h] BYREF

  ReturnLength = 0;
  if ( !a3 && a4 )
    return 3221225485LL;
  v10 = a4 + 16;
  PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)1033, (unsigned int)(a4 + 16), 0x4B787541u);
  v12 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    *((_DWORD *)PoolWithQuotaTag + 3) = a4;
    *(_DWORD *)PoolWithQuotaTag = a1;
    *((_DWORD *)PoolWithQuotaTag + 1) = 1;
    *((_DWORD *)PoolWithQuotaTag + 2) = a2;
    v13 = ZwQuerySystemInformation(SystemFirmwareTableInformation, PoolWithQuotaTag, v10, &ReturnLength);
    if ( (int)(v13 + 0x80000000) < 0 || v13 == -1073741789 )
    {
      if ( a5 )
        *a5 = *((_DWORD *)v12 + 3);
      if ( v13 >= 0 )
      {
        if ( a3 )
          sub_1400B6980(a3, v12 + 16, ReturnLength - 16);
      }
    }
    ExFreePoolWithTag(v12, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v13;
}
