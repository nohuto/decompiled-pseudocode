__int64 __fastcall CmpDoFileSetSizeEx(__int64 a1, unsigned int a2, unsigned __int64 a3, char a4)
{
  void *v6; // r14
  unsigned __int64 v7; // rdi
  unsigned __int64 v9; // rbp
  BOOLEAN v10; // r15
  NTSTATUS v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned __int64 FileInformation; // [rsp+30h] [rbp-38h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v17; // [rsp+70h] [rbp+8h] BYREF

  FileInformation = 0LL;
  v17 = 0LL;
  IoStatusBlock = 0LL;
  v6 = *(void **)(a1 + 8LL * a2 + 1544);
  if ( !v6 )
    return 0LL;
  if ( a2 )
  {
    if ( a2 - 4 <= 1 || a2 == 1 )
    {
      LOBYTE(v14) = HvpLogTypeToLogArrayIndex(a2);
      v7 = *(_QWORD *)(a1 + 8LL * v14 + 1808);
    }
    else
    {
      v7 = 0LL;
    }
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 1800);
  }
  if ( (a4 & 1) != 0 && v7 && a3 <= v7 )
    return 0LL;
  v9 = CmpAdjustRequestedFileSize(a1, a2, v7, a3);
  v10 = IoSetThreadHardErrorMode(0);
  if ( v9 < v7 )
  {
    v17 = v9;
    v11 = ZwSetInformationFile(v6, &IoStatusBlock, &v17, 8u, FileAllocationInformation);
  }
  else
  {
    FileInformation = v9;
    v11 = ZwSetInformationFile(v6, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
  }
  v12 = v11;
  if ( v11 < 0 )
  {
    CmRegistryIODebug = 3;
    qword_140D54E10 = (__int64)v6;
    dword_140D54E18 = v11;
  }
  else if ( a2 )
  {
    if ( a2 - 4 <= 1 || a2 == 1 )
    {
      LOBYTE(v13) = HvpLogTypeToLogArrayIndex(a2);
      *(_QWORD *)(a1 + 8LL * v13 + 1808) = v9;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 1800) = v9;
  }
  IoSetThreadHardErrorMode(v10);
  return v12;
}
