/*
 * XREFs of NtTranslateFilePath @ 0x14083EB70
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     ExpVerifyFilePath @ 0x14083EE50 (ExpVerifyFilePath.c)
 *     ExpTranslateEfiPath @ 0x14083EF60 (ExpTranslateEfiPath.c)
 *     ExpTranslateArcPath @ 0x1409FB1E4 (ExpTranslateArcPath.c)
 *     ExpTranslateNtPath @ 0x1409FB67C (ExpTranslateNtPath.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtTranslateFilePath(char *Src, unsigned int a2, volatile void *a3, unsigned int *a4)
{
  void *v6; // rsi
  KPROCESSOR_MODE v7; // dl
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // r15d
  unsigned int v11; // edi
  _DWORD *Pool2; // rax
  _DWORD *v13; // r14
  char *v15; // rdx
  unsigned int v16; // eax
  int v17; // ebx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  KPROCESSOR_MODE PreviousMode; // [rsp+20h] [rbp-68h]
  unsigned int v24; // [rsp+24h] [rbp-64h] BYREF
  unsigned int v26; // [rsp+2Ch] [rbp-5Ch]
  PVOID v27; // [rsp+30h] [rbp-58h]
  PVOID P; // [rsp+38h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-38h]

  v6 = 0LL;
  v24 = 0;
  P = 0LL;
  v27 = 0LL;
  if ( dword_140C316F0 != 2 )
    return 3221225474LL;
  if ( a2 - 1 <= 4 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = CurrentThread->PreviousMode;
    PreviousMode = v7;
    v8 = (unsigned __int64)(Src + 4);
    v9 = 0x7FFFFFFF0000LL;
    if ( v7 )
    {
      if ( v8 >= 0x7FFFFFFF0000LL )
        v8 = 0x7FFFFFFF0000LL;
      v10 = *(_DWORD *)v8;
      v26 = *(_DWORD *)v8;
    }
    else
    {
      v10 = *(_DWORD *)v8;
      v26 = *(_DWORD *)v8;
    }
    if ( v10 < 0xC )
      return 3221225485LL;
    if ( v7 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = &Src[v10];
      if ( (unsigned __int64)v15 > 0x7FFFFFFF0000LL || v15 < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v9 = (__int64)a4;
      *(_DWORD *)v9 = *(_DWORD *)v9;
      v11 = *a4;
      v24 = v11;
      v16 = v11;
      if ( !a3 )
      {
        v11 = 0;
        v24 = 0;
        v16 = 0;
      }
      if ( v16 )
        ProbeForWrite(a3, v16, 4u);
      if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
        return 3221225569LL;
      v10 = v26;
    }
    else
    {
      v11 = a3 != 0LL ? *a4 : 0;
      v24 = v11;
    }
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, v10, 1920364101LL);
    v13 = Pool2;
    P = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    memmove(Pool2, Src, v10);
    v13[1] = v10;
    if ( v11 )
    {
      v6 = (void *)ExAllocatePool2(64LL, v11, 1920364101LL);
      v27 = v6;
      if ( !v6 )
      {
        ExFreePoolWithTag(v13, 0);
        P = 0LL;
        return 3221225626LL;
      }
    }
    else
    {
      v27 = 0LL;
    }
    v17 = ExpVerifyFilePath(v13, (char *)v13 + (unsigned int)v13[1]);
    if ( v17 >= 0 )
    {
      v18 = v13[2];
      if ( a2 == v18 )
      {
        if ( v11 < v10 )
          v17 = -1073741789;
        else
          memmove(v6, v13, v10);
        v11 = v10;
        v24 = v10;
      }
      else
      {
        v19 = v18 - 1;
        if ( !v19 || (v20 = v19 - 1) == 0 )
        {
          v22 = ExpTranslateArcPath(v13, a2, v6, &v24);
          goto LABEL_40;
        }
        v21 = v20 - 1;
        if ( !v21 )
        {
          v22 = ExpTranslateNtPath(v13, a2, v6, &v24);
          goto LABEL_40;
        }
        if ( v21 == 1 )
        {
          v22 = ExpTranslateEfiPath(v13, a2, v6, &v24);
LABEL_40:
          v17 = v22;
          v11 = v24;
          goto LABEL_41;
        }
        v17 = -1073741811;
      }
    }
LABEL_41:
    ExFreePoolWithTag(v13, 0);
    if ( v17 >= 0 )
    {
      if ( !v6 )
      {
LABEL_46:
        *a4 = v11;
        return (unsigned int)v17;
      }
      memmove((void *)a3, v6, v11);
    }
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0);
      v27 = 0LL;
    }
    goto LABEL_46;
  }
  return 3221225485LL;
}
