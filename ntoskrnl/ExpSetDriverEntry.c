/*
 * XREFs of ExpSetDriverEntry @ 0x1409FAB20
 * Callers:
 *     NtAddDriverEntry @ 0x1409FBA20 (NtAddDriverEntry.c)
 *     NtModifyDriverEntry @ 0x1409FC460 (NtModifyDriverEntry.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403D8840 (swprintf_s.c)
 *     ZwTranslateFilePath @ 0x140415D90 (ZwTranslateFilePath.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     IoGetEnvironmentVariableEx @ 0x14075D3B0 (IoGetEnvironmentVariableEx.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     ExpSafeWcslen @ 0x14083EB44 (ExpSafeWcslen.c)
 *     ExpVerifyFilePath @ 0x14083EE50 (ExpVerifyFilePath.c)
 *     IoSetEnvironmentVariableEx @ 0x14094D504 (IoSetEnvironmentVariableEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpSetDriverEntry(int a1, const void *a2, unsigned __int64 a3)
{
  _DWORD *v3; // r12
  unsigned int i; // r14d
  unsigned __int64 v6; // r15
  void *v7; // r13
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // eax
  size_t v13; // rbx
  unsigned __int64 v14; // rax
  _DWORD *Pool2; // rax
  _DWORD *v16; // rdi
  int v17; // esi
  int EnvironmentVariable; // ebx
  __int64 v19; // rax
  char *v20; // rsi
  int v21; // eax
  unsigned __int64 v22; // rdx
  __int64 v23; // r8
  size_t v24; // r13
  int v25; // eax
  _WORD *v26; // rbx
  char *v27; // rcx
  struct _KTHREAD *v28; // rax
  int v30; // [rsp+38h] [rbp-B0h] BYREF
  size_t v31; // [rsp+40h] [rbp-A8h]
  _DWORD *v32; // [rsp+48h] [rbp-A0h]
  size_t Size; // [rsp+50h] [rbp-98h]
  __int64 v34; // [rsp+58h] [rbp-90h]
  PVOID v36; // [rsp+68h] [rbp-80h]
  unsigned int v37; // [rsp+70h] [rbp-78h]
  PVOID P; // [rsp+78h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-58h]
  size_t Dst[3]; // [rsp+98h] [rbp-50h] BYREF

  v3 = (_DWORD *)a3;
  v32 = (_DWORD *)a3;
  v36 = 0LL;
  i = 0;
  v6 = 0LL;
  v7 = 0LL;
  v34 = 0LL;
  P = 0LL;
  LODWORD(v31) = 0;
  v30 = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v9 = (unsigned __int64)a2 + 4;
  v10 = 0x7FFFFFFF0000LL;
  if ( PreviousMode )
  {
    if ( v9 >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    v11 = *(_DWORD *)v9;
    v37 = v11;
  }
  else
  {
    v11 = *(_DWORD *)v9;
    v37 = v11;
  }
  if ( v11 < 0x14 )
    return 3221225485LL;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = v11;
    v14 = (unsigned __int64)a2 + v11;
    if ( v14 > 0x7FFFFFFF0000LL || v14 < (unsigned __int64)a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a3 )
    {
      if ( a3 < 0x7FFFFFFF0000LL )
        v10 = a3;
      *(_DWORD *)v10 = *(_DWORD *)v10;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    v13 = v11;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, v13, 1920364101LL);
  v16 = Pool2;
  v36 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, a2, v13);
  v17 = a1;
  if ( *v16 == 1 )
  {
    if ( !a1 && v16[2] > 0xFFFFu || (v19 = (unsigned int)v16[3], (v19 & 1) != 0) || (v16[4] & 3) != 0 )
    {
      EnvironmentVariable = -1073741811;
LABEL_64:
      v3 = v32;
      goto LABEL_65;
    }
    v20 = (char *)v16 + v19;
    v21 = ExpSafeWcslen((_DWORD *)((char *)v16 + v19), (unsigned __int64)v16 + v13);
    if ( v21 == -1 )
    {
      EnvironmentVariable = -1073741811;
LABEL_63:
      v17 = a1;
      goto LABEL_64;
    }
    LODWORD(Size) = 2 * v21 + 2;
    v6 = (unsigned __int64)v16 + v23;
    EnvironmentVariable = ExpVerifyFilePath((_DWORD *)((char *)v16 + v23), v22);
    if ( EnvironmentVariable < 0 )
      goto LABEL_63;
    v24 = (unsigned int)Size;
    if ( (unsigned __int64)&v20[(unsigned int)Size] > v6 )
    {
      EnvironmentVariable = -1073741811;
      goto LABEL_62;
    }
    if ( *(_DWORD *)(v6 + 8) == 4 )
    {
      v25 = *(_DWORD *)(v6 + 4);
      v34 = v6;
    }
    else
    {
      EnvironmentVariable = ZwTranslateFilePath(v6, 4LL);
      if ( EnvironmentVariable != -1073741789 )
        goto LABEL_62;
      v34 = ExAllocatePool2(64LL, (unsigned int)v31, 1920364101LL);
      if ( !v34 )
      {
        EnvironmentVariable = -1073741670;
        v7 = 0LL;
        goto LABEL_63;
      }
      v30 = v31;
      EnvironmentVariable = ZwTranslateFilePath(v6, 4LL);
      if ( EnvironmentVariable < 0 )
      {
LABEL_62:
        v7 = (void *)v34;
        goto LABEL_63;
      }
      v25 = v31;
    }
    LODWORD(v31) = v25 - 12;
    LODWORD(Size) = Size + 6 + v25 - 12;
    v26 = (_WORD *)ExAllocatePool2(64LL, (unsigned int)Size, 1920364101LL);
    P = v26;
    if ( !v26 )
    {
      EnvironmentVariable = -1073741670;
      goto LABEL_62;
    }
    v26[2] = v31;
    memmove(v26 + 3, v20, v24);
    v27 = (char *)v26 + v24 + 6;
    v7 = (void *)v34;
    memmove(v27, (const void *)(v34 + 12), (unsigned int)v31);
    v28 = KeGetCurrentThread();
    --v28->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    if ( a1 )
    {
      for ( i = 0; i <= 0xFFFF; ++i )
      {
        swprintf_s((wchar_t *)Dst, 0xBuLL, L"Driver%04x", i);
        v30 = 0;
        EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, 0LL, &v30, 0LL);
        if ( EnvironmentVariable == -1073741568 && ((2 * ((i | (2 * i)) & 0xC4444444)) & i) != 0 )
        {
          swprintf_s((wchar_t *)Dst, 0xBuLL, L"Driver%04X", i);
          v30 = 0;
          EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, 0LL, &v30, 0LL);
        }
        if ( EnvironmentVariable == -1073741568 )
          break;
        if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
          goto LABEL_60;
      }
      if ( i > 0xFFFF )
      {
        EnvironmentVariable = -1073741670;
LABEL_60:
        ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v16 = v36;
        goto LABEL_63;
      }
    }
    else
    {
      i = *((_DWORD *)v36 + 2);
      swprintf_s((wchar_t *)Dst, 0xBuLL, L"Driver%04X", i);
      v30 = 0;
      EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, 0LL, &v30, 0LL);
      if ( EnvironmentVariable == -1073741568
        && ((2 * ((*((_DWORD *)v36 + 2) | (2 * *((_DWORD *)v36 + 2))) & 0xC4444444)) & *((_DWORD *)v36 + 2)) != 0 )
      {
        swprintf_s((wchar_t *)Dst, 0xBuLL, L"Driver%04x");
        v30 = 0;
        EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, 0LL, &v30, 0LL);
      }
      if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
        goto LABEL_60;
    }
    EnvironmentVariable = IoSetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, (__int64)P, Size, 1);
    goto LABEL_60;
  }
  EnvironmentVariable = -1073741811;
LABEL_65:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v7 && v7 != (void *)v6 )
    ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(v16, 0);
  if ( v17 && v3 && EnvironmentVariable >= 0 )
    *v3 = i;
  return (unsigned int)EnvironmentVariable;
}
