__int64 __fastcall EtwpRealtimeSaveBuffer(__int64 a1, __int64 Buffer)
{
  LARGE_INTEGER v2; // r8
  LONGLONG v3; // rbx
  signed __int64 v5; // rax
  __int64 QuadPart; // r9
  NTSTATUS v8; // ebp
  LONGLONG v9; // r8
  int v10; // ecx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  bool v14; // sf
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // r8d
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(LARGE_INTEGER *)(a1 + 384);
  v3 = *(_QWORD *)(a1 + 400);
  IoStatusBlock = 0LL;
  v5 = *(_QWORD *)(a1 + 392);
  ByteOffset = v2;
  QuadPart = v2.QuadPart;
  if ( v2.QuadPart >= v5 && v2.QuadPart + *(unsigned int *)(Buffer + 48) > *(_QWORD *)(a1 + 416) )
  {
    QuadPart = 72LL;
    v3 = v2.QuadPart;
    ByteOffset.QuadPart = 72LL;
  }
  if ( QuadPart >= v5 || QuadPart + *(unsigned int *)(Buffer + 48) < v5 )
  {
    v8 = ZwWriteFile(
           *(HANDLE *)(a1 + 360),
           0LL,
           0LL,
           0LL,
           &IoStatusBlock,
           (PVOID)Buffer,
           *(_DWORD *)(Buffer + 48),
           &ByteOffset,
           0LL);
    if ( v8 < 0 )
    {
      ++*(_DWORD *)(a1 + 260);
      *(_DWORD *)(a1 + 448) = 2;
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_WRITE_FAILED) )
        EtwpEventWriteTemplateAdmin(
          a1 + 368,
          (unsigned int)&ETW_EVENT_WRITE_FAILED,
          v21,
          a1 + 136,
          a1 + 368,
          v8,
          *(_DWORD *)(a1 + 12));
    }
    else
    {
      v9 = ByteOffset.QuadPart + *(unsigned int *)(Buffer + 48);
      v10 = *(_DWORD *)(a1 + 236);
      *(_QWORD *)(a1 + 384) = v9;
      if ( v3 <= v9 )
        v3 = v9;
      v11 = (unsigned int)(*(_DWORD *)(a1 + 4) * v10);
      *(_QWORD *)(a1 + 400) = v3;
      *(_QWORD *)(a1 + 408) += *(unsigned int *)(Buffer + 48);
      v12 = *(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 408);
      ++*(_DWORD *)(a1 + 424);
      if ( v12 <= v11 && *(int *)(a1 + 16) >= 0 )
      {
        _InterlockedExchange((volatile __int32 *)(a1 + 16), -1073741432);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_BACKING_FILE_FULL) )
          EtwpEventWriteTemplateBackingFile(v19, v18, v20, a1 + 136);
      }
      if ( !v8 )
      {
        if ( *(_WORD *)(Buffer + 54) == 6 )
          _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x10000000u);
        else
          _InterlockedAnd((volatile signed __int32 *)(a1 + 816), 0xEFFFFFFF);
      }
    }
    return (unsigned int)v8;
  }
  else
  {
    ++*(_DWORD *)(a1 + 260);
    v14 = *(int *)(a1 + 16) < 0;
    *(_DWORD *)(a1 + 448) = 2;
    if ( !v14 )
      _InterlockedExchange((volatile __int32 *)(a1 + 16), -1073741432);
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_BACKING_FILE_FULL) )
      EtwpEventWriteTemplateBackingFile(v16, v15, v17, a1 + 136);
    return 3221225864LL;
  }
}
