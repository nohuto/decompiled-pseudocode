__int64 __fastcall NVMeGetActiveNameSpaceIdList(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v7; // edi
  int i; // edx
  __int64 v9; // rax
  char v10; // al

  if ( (*(_DWORD *)(a1 + 64) & 0x40000) != 0 )
    return 3238002689LL;
  LocalCommandReuse(a1, a1 + 944);
  v7 = 0;
  for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= i )
    ++i;
  *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4200LL) = a2;
  *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 4208LL) = a3;
  *(_DWORD *)(*(_QWORD *)(a1 + 1040) + 4240LL) = 4096;
  v9 = *(_QWORD *)(a1 + 1040) + 4096LL;
  *(_QWORD *)(v9 + 24) = a3;
  *(_BYTE *)v9 = 6;
  *(_DWORD *)(v9 + 4) = 0;
  *(_BYTE *)(v9 + 40) = 2;
  *(_DWORD *)(v9 + 42) = 0;
  *(_BYTE *)(v9 + 47) = 0;
  ProcessCommand(a1, a1 + 952);
  WaitForCommandCompleteWithCustomTimeout(a1);
  v10 = *(_BYTE *)(a1 + 955);
  if ( v10 != 1 )
  {
    if ( v10 == 5 )
    {
      return (unsigned int)-1056964596;
    }
    else if ( v10 == 8 )
    {
      return (unsigned int)-1056964599;
    }
    else
    {
      v7 = -1056964607;
      if ( v10 == 9 )
        return (unsigned int)-1056964594;
    }
  }
  return v7;
}
