/*
 * XREFs of NtTranslateFilePath @ 0x140955960
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140413540 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     ExpTranslateArcPath @ 0x140951FE8 (ExpTranslateArcPath.c)
 *     ExpTranslateEfiPath @ 0x14095228C (ExpTranslateEfiPath.c)
 *     ExpTranslateNtPath @ 0x140952904 (ExpTranslateNtPath.c)
 *     ExpVerifyFilePath @ 0x140952E18 (ExpVerifyFilePath.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __cdecl NtTranslateFilePath(
        PFILE_PATH InputFilePath,
        ULONG OutputType,
        PFILE_PATH OutputFilePath,
        PULONG OutputFilePathLength)
{
  KPROCESSOR_MODE v7; // dl
  unsigned __int64 p_Length; // rax
  __int64 v9; // rcx
  unsigned int v10; // r15d
  char *v11; // rdx
  ULONG v12; // edi
  ULONG v13; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v15; // r14
  _DWORD *v16; // rsi
  NTSTATUS v17; // ebx
  unsigned int v18; // eax
  NTSTATUS v19; // eax
  KPROCESSOR_MODE PreviousMode; // [rsp+20h] [rbp-68h]
  ULONG v21; // [rsp+24h] [rbp-64h] BYREF
  _DWORD NumberOfBytes[3]; // [rsp+2Ch] [rbp-5Ch]
  PVOID P; // [rsp+38h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-38h]

  v21 = 0;
  P = 0LL;
  *(_QWORD *)&NumberOfBytes[1] = 0LL;
  if ( dword_140C197B0 != 2 )
    return -1073741822;
  if ( OutputType - 1 <= 4 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = CurrentThread->PreviousMode;
    PreviousMode = v7;
    p_Length = (unsigned __int64)&InputFilePath->Length;
    v9 = 0x7FFFFFFF0000LL;
    if ( v7 )
    {
      if ( p_Length >= 0x7FFFFFFF0000LL )
        p_Length = 0x7FFFFFFF0000LL;
      v10 = *(_DWORD *)p_Length;
      NumberOfBytes[0] = *(_DWORD *)p_Length;
    }
    else
    {
      v10 = *(_DWORD *)p_Length;
      NumberOfBytes[0] = *(_DWORD *)p_Length;
    }
    if ( v10 < 0xC )
      return -1073741811;
    if ( v7 )
    {
      if ( ((unsigned __int8)InputFilePath & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = (char *)InputFilePath + v10;
      if ( (unsigned __int64)v11 > 0x7FFFFFFF0000LL || v11 < (char *)InputFilePath )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( (unsigned __int64)OutputFilePathLength < 0x7FFFFFFF0000LL )
        v9 = (__int64)OutputFilePathLength;
      *(_DWORD *)v9 = *(_DWORD *)v9;
      v12 = *OutputFilePathLength;
      v21 = v12;
      v13 = v12;
      if ( !OutputFilePath )
      {
        v12 = 0;
        v21 = 0;
        v13 = 0;
      }
      if ( v13 )
        ProbeForWrite(OutputFilePath, v13, 4u);
      if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
        return -1073741727;
      v10 = NumberOfBytes[0];
    }
    else
    {
      v12 = *OutputFilePathLength;
      v21 = v12;
      v13 = v12;
      if ( !OutputFilePath )
      {
        v12 = 0;
        v21 = 0;
        v13 = 0;
      }
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72766E45u);
    v15 = PoolWithTag;
    P = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    memmove(PoolWithTag, InputFilePath, v10);
    v15[1] = v10;
    if ( v13 )
    {
      v16 = ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x72766E45u);
      *(_QWORD *)&NumberOfBytes[1] = v16;
      if ( !v16 )
      {
        ExFreePoolWithTag(v15, 0);
        P = 0LL;
        return -1073741670;
      }
    }
    else
    {
      v16 = 0LL;
      *(_QWORD *)&NumberOfBytes[1] = 0LL;
    }
    v17 = ExpVerifyFilePath((unsigned __int64)v15, (unsigned __int64)v15 + (unsigned int)v15[1]);
    if ( v17 < 0 )
    {
LABEL_49:
      ExFreePoolWithTag(v15, 0);
      if ( v17 >= 0 )
      {
        if ( !v16 )
        {
LABEL_54:
          *OutputFilePathLength = v12;
          return v17;
        }
        memmove(OutputFilePath, v16, v12);
      }
      if ( v16 )
      {
        ExFreePoolWithTag(v16, 0);
        *(_QWORD *)&NumberOfBytes[1] = 0LL;
      }
      goto LABEL_54;
    }
    v18 = v15[2];
    if ( OutputType == v18 )
    {
      if ( v12 < v10 )
        v17 = -1073741789;
      else
        memmove(v16, v15, v10);
      v12 = v10;
      v21 = v10;
      goto LABEL_49;
    }
    if ( v18 )
    {
      if ( v18 <= 2 )
      {
        v19 = ExpTranslateArcPath((__int64)v15, OutputType, v16, (__int64)&v21);
        goto LABEL_47;
      }
      if ( v18 == 3 )
      {
        v19 = ExpTranslateNtPath((__int64)v15, OutputType, (char *)v16, &v21);
        goto LABEL_47;
      }
      if ( v18 == 4 )
      {
        v19 = ExpTranslateEfiPath((__int64)v15, OutputType, v16, &v21);
LABEL_47:
        v17 = v19;
        v12 = v21;
        goto LABEL_49;
      }
    }
    v17 = -1073741811;
    goto LABEL_49;
  }
  return -1073741811;
}
