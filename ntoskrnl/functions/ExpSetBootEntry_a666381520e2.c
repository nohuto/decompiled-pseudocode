__int64 __fastcall ExpSetBootEntry(int a1, const void *a2, unsigned __int64 a3)
{
  unsigned int i; // r12d
  char *v5; // r13
  char *v6; // r15
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  size_t v12; // r14
  unsigned __int64 v13; // rax
  char *Pool2; // rax
  char *v15; // rdi
  char *v16; // rcx
  int v17; // esi
  int EnvironmentVariable; // ebx
  __int64 v19; // rsi
  char *v20; // r14
  __int64 v21; // r15
  char *v22; // rsi
  int v23; // eax
  unsigned __int64 v24; // rdx
  size_t v25; // r14
  __int64 v26; // rsi
  int v27; // eax
  int v28; // eax
  unsigned int v29; // esi
  _WORD *v30; // rax
  _WORD *v31; // rbx
  int v32; // ecx
  char *v33; // rbx
  struct _KTHREAD *v34; // rax
  _DWORD *v35; // r15
  int v37; // [rsp+38h] [rbp-C0h] BYREF
  size_t v38; // [rsp+3Ch] [rbp-BCh]
  char *v39; // [rsp+48h] [rbp-B0h]
  char *v40; // [rsp+50h] [rbp-A8h]
  int v41; // [rsp+58h] [rbp-A0h]
  int v43; // [rsp+60h] [rbp-98h]
  unsigned int Size; // [rsp+64h] [rbp-94h]
  unsigned int Size_4; // [rsp+68h] [rbp-90h]
  unsigned int v46; // [rsp+6Ch] [rbp-8Ch]
  PVOID P; // [rsp+70h] [rbp-88h]
  PVOID v48; // [rsp+78h] [rbp-80h]
  char *v49; // [rsp+80h] [rbp-78h]
  void *Src; // [rsp+88h] [rbp-70h]
  _DWORD *v51; // [rsp+90h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-50h]
  size_t Dst[3]; // [rsp+B0h] [rbp-48h] BYREF

  v51 = (_DWORD *)a3;
  v48 = 0LL;
  i = 0;
  v5 = 0LL;
  v39 = 0LL;
  v6 = 0LL;
  v40 = 0LL;
  P = 0LL;
  LODWORD(v38) = 0;
  v41 = 0;
  v37 = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v8 = (unsigned __int64)a2 + 4;
  v9 = 0x7FFFFFFF0000LL;
  if ( PreviousMode )
  {
    if ( v8 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    v10 = *(_DWORD *)v8;
    v46 = *(_DWORD *)v8;
  }
  else
  {
    v10 = *(_DWORD *)v8;
    v46 = *(_DWORD *)v8;
  }
  if ( v10 < 0x1C )
    return 3221225485LL;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = v10;
    v13 = (unsigned __int64)a2 + v10;
    if ( v13 > 0x7FFFFFFF0000LL || v13 < (unsigned __int64)a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a3 )
    {
      if ( a3 < 0x7FFFFFFF0000LL )
        v9 = a3;
      *(_DWORD *)v9 = *(_DWORD *)v9;
      v10 = v46;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    v12 = v10;
  }
  Pool2 = (char *)ExAllocatePool2(64LL, v12, 1920364101LL);
  v15 = Pool2;
  v48 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, a2, v12);
  v16 = &v15[v12];
  v49 = &v15[v12];
  v17 = a1;
  if ( *(_DWORD *)v15 == 1 && (a1 || *((_DWORD *)v15 + 2) <= 0xFFFFu) )
  {
    *((_DWORD *)v15 + 3) &= 0x13u;
    Size = *((_DWORD *)v15 + 4);
    if ( (Size & 1) == 0 )
    {
      Size_4 = *((_DWORD *)v15 + 5);
      if ( (Size_4 & 3) == 0 )
      {
        v19 = *((unsigned int *)v15 + 6);
        if ( (unsigned int)v19 > v10 || (v20 = &v15[v19 + 28], v20 >= v16) )
        {
          EnvironmentVariable = -1073741811;
          goto LABEL_89;
        }
        if ( (unsigned int)v19 >= 8 && !strcmp(v15 + 28, "WINDOWS") )
        {
          if ( (unsigned int)v19 <= 0x14 )
          {
            EnvironmentVariable = -1073741811;
LABEL_88:
            v5 = v39;
            goto LABEL_89;
          }
          EnvironmentVariable = ExpVerifyWindowsOsOptions(v15 + 28, (unsigned int)v19);
          if ( EnvironmentVariable < 0 )
            goto LABEL_88;
          v43 = 1;
          v21 = (__int64)&v15[*((unsigned int *)v15 + 11) + 28];
        }
        else
        {
          v43 = 0;
          v21 = 0LL;
        }
        v22 = &v15[Size];
        Src = v22;
        v23 = ExpSafeWcslen(v22, (unsigned __int64)v49);
        if ( v23 == -1 )
        {
          EnvironmentVariable = -1073741811;
          v6 = v40;
          v5 = v40;
LABEL_89:
          v17 = a1;
          goto LABEL_90;
        }
        Size = 2 * v23 + 2;
        v39 = &v15[Size_4];
        EnvironmentVariable = ExpVerifyFilePath(v39, v24);
        if ( EnvironmentVariable >= 0 )
        {
          if ( v20 > v22 || (v25 = Size, &v22[Size] > v39) )
          {
            EnvironmentVariable = -1073741811;
            goto LABEL_87;
          }
          if ( *((_DWORD *)v39 + 2) == 4 )
          {
            v27 = *((_DWORD *)v39 + 1);
            v40 = v39;
          }
          else
          {
            EnvironmentVariable = ZwTranslateFilePath((__int64)v39, 4LL);
            if ( EnvironmentVariable != -1073741789 )
              goto LABEL_87;
            v26 = ExAllocatePool2(64LL, (unsigned int)v38, 1920364101LL);
            v40 = (char *)v26;
            if ( !v26 )
            {
              EnvironmentVariable = -1073741670;
              v6 = 0LL;
              goto LABEL_88;
            }
            v37 = v38;
            EnvironmentVariable = ZwTranslateFilePath((__int64)v39, 4LL);
            if ( EnvironmentVariable < 0 )
            {
              v6 = (char *)v26;
              goto LABEL_88;
            }
            v27 = v38;
          }
          v28 = v27 - 12;
          LODWORD(v38) = v28;
          if ( !v43 || *(_DWORD *)(v21 + 8) == 4 )
          {
            v29 = *((_DWORD *)v15 + 6);
LABEL_55:
            Size_4 = Size + v29 + v28 + 6;
            v30 = (_WORD *)ExAllocatePool2(64LL, Size_4, 1920364101LL);
            v31 = v30;
            P = v30;
            if ( !v30 )
            {
              EnvironmentVariable = -1073741670;
              goto LABEL_87;
            }
            *(_DWORD *)v30 = 0;
            v32 = 0;
            if ( (*((_DWORD *)v15 + 3) & 1) != 0 )
            {
              *(_DWORD *)v30 = 1;
              v32 = 1;
            }
            if ( (*((_DWORD *)v15 + 3) & 0x10) != 0 )
              *(_DWORD *)v30 = v32 | 8;
            v30[2] = v38;
            memmove(v30 + 3, Src, v25);
            v33 = (char *)v31 + v25 + 6;
            memmove(v33, v40 + 12, (unsigned int)v38);
            if ( !v43 || *(_DWORD *)(v21 + 8) == 4 )
            {
              memmove(&v33[(unsigned int)v38], v15 + 28, v29);
            }
            else
            {
              memmove(&v33[(unsigned int)v38], v15 + 28, *((unsigned int *)v15 + 11));
              *(_DWORD *)&v33[(unsigned int)v38 + 12] = v29;
              v37 = v41;
              EnvironmentVariable = ZwTranslateFilePath(v21, 4LL);
              if ( EnvironmentVariable )
                goto LABEL_87;
            }
            v34 = KeGetCurrentThread();
            --v34->KernelApcDisable;
            ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
            if ( a1 )
            {
              for ( i = 0; i <= 0xFFFF; ++i )
              {
                swprintf_s((wchar_t *)Dst, 9uLL, L"Boot%04x", i);
                v37 = 0;
                EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiBootVariablesGuid, 0LL, &v37, 0LL);
                if ( EnvironmentVariable == -1073741568 && ((2 * ((i | (2 * i)) & 0xC4444444)) & i) != 0 )
                {
                  swprintf_s((wchar_t *)Dst, 9uLL, L"Boot%04X", i);
                  v37 = 0;
                  EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiBootVariablesGuid, 0LL, &v37, 0LL);
                }
                if ( EnvironmentVariable == -1073741568 )
                  break;
                if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
                  goto LABEL_83;
              }
              if ( i > 0xFFFF )
              {
                EnvironmentVariable = -1073741670;
LABEL_83:
                ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
                KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                v15 = (char *)v48;
                goto LABEL_87;
              }
            }
            else
            {
              v35 = v48;
              i = *((_DWORD *)v48 + 2);
              swprintf_s((wchar_t *)Dst, 9uLL, L"Boot%04X", i);
              v37 = 0;
              EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiBootVariablesGuid, 0LL, &v37, 0LL);
              if ( EnvironmentVariable == -1073741568 && ((2 * ((v35[2] | (2 * v35[2])) & 0xC4444444)) & v35[2]) != 0 )
              {
                swprintf_s((wchar_t *)Dst, 9uLL, L"Boot%04x");
                v37 = 0;
                EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiBootVariablesGuid, 0LL, &v37, 0LL);
              }
              if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
                goto LABEL_83;
            }
            EnvironmentVariable = IoSetEnvironmentVariableEx(Dst, (__int64)&EfiBootVariablesGuid, (__int64)P, Size_4, 1);
            goto LABEL_83;
          }
          EnvironmentVariable = ZwTranslateFilePath(v21, 4LL);
          if ( EnvironmentVariable == -1073741789 )
          {
            v29 = v41 + *((_DWORD *)v15 + 6) - *(_DWORD *)(v21 + 4);
            v28 = v38;
            goto LABEL_55;
          }
        }
LABEL_87:
        v6 = v40;
        goto LABEL_88;
      }
    }
  }
  EnvironmentVariable = -1073741811;
LABEL_90:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v6 && v6 != v5 )
    ExFreePoolWithTag(v6, 0);
  ExFreePoolWithTag(v15, 0);
  if ( v17 && v51 && EnvironmentVariable >= 0 )
    *v51 = i;
  return (unsigned int)EnvironmentVariable;
}
