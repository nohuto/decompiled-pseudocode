__int64 __fastcall NtEnumerateBootEntries(unsigned __int64 Address, _DWORD *a2)
{
  _DWORD *v2; // r12
  KPROCESSOR_MODE v4; // si
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 result; // rax
  _DWORD *v8; // rsi
  _DWORD *v9; // r13
  struct _KTHREAD *v10; // rax
  __int64 Pool2; // rax
  unsigned int *v12; // r15
  unsigned int v13; // edi
  int v14; // r14d
  unsigned int *v15; // r12
  char *v16; // rdi
  __int64 v17; // rax
  unsigned int v18; // r13d
  __int64 v19; // r9
  unsigned int v20; // eax
  __int64 v21; // r8
  size_t v22; // r9
  unsigned int v23; // edi
  unsigned int v24; // eax
  char *v25; // rdx
  unsigned int v26; // r13d
  unsigned __int64 v27; // rax
  unsigned int v28; // ecx
  _DWORD *v29; // rdi
  int v30; // eax
  BOOL v31; // r9d
  unsigned int v32; // edx
  __int64 v33; // r8
  int v34; // eax
  BOOL v35; // eax
  BOOL v36; // r9d
  unsigned int v37; // ecx
  unsigned int v38; // eax
  int v39; // r8d
  _DWORD *v40; // rcx
  char *v41; // rax
  _BYTE *v42; // rcx
  __int64 v43; // rax
  unsigned int v44; // eax
  unsigned int i; // [rsp+30h] [rbp-D8h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+34h] [rbp-D4h]
  unsigned int v47; // [rsp+38h] [rbp-D0h]
  unsigned int v48; // [rsp+3Ch] [rbp-CCh]
  BOOL v49; // [rsp+40h] [rbp-C8h]
  unsigned int v50; // [rsp+44h] [rbp-C4h]
  int v51; // [rsp+48h] [rbp-C0h]
  _DWORD *v52; // [rsp+50h] [rbp-B8h]
  int v53; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v54; // [rsp+5Ch] [rbp-ACh]
  unsigned int v55; // [rsp+60h] [rbp-A8h]
  char *v56; // [rsp+68h] [rbp-A0h]
  void *v57; // [rsp+70h] [rbp-98h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  char *v59; // [rsp+80h] [rbp-88h]
  void *Src; // [rsp+88h] [rbp-80h]
  size_t Size; // [rsp+90h] [rbp-78h]
  void *v62; // [rsp+98h] [rbp-70h]
  size_t v63; // [rsp+A0h] [rbp-68h]
  void *v64; // [rsp+A8h] [rbp-60h]
  __int64 v65; // [rsp+B0h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-40h]
  char v68; // [rsp+120h] [rbp+18h]

  v2 = a2;
  v57 = 0LL;
  P = 0LL;
  if ( dword_140C316F0 != 2 )
    return 3221225474LL;
  if ( (Address & 0xFFFFFFFFFFFFFFFCuLL) != Address )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  v4 = CurrentThread->PreviousMode;
  PreviousMode = v4;
  if ( v4 )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a2;
    *(_DWORD *)v6 = *(_DWORD *)v6;
    v5 = Address != 0 ? *a2 : 0;
    v50 = v5;
    if ( v5 )
      ProbeForWrite((volatile void *)Address, v5, 4u);
    v4 = PreviousMode;
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    v5 = Address != 0 ? *a2 : 0;
    v50 = v5;
  }
  if ( !v5 || (result = ExLockUserBuffer(Address, v5, v4, IoWriteAccess, &v57, (struct _MDL **)&P), (int)result >= 0) )
  {
    v8 = v57;
    v49 = v5 != 0;
    v47 = 0;
    v9 = 0LL;
    v52 = 0LL;
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    Pool2 = ExAllocatePool2(64LL, 0x2000LL, 1920364101LL);
    v12 = (unsigned int *)Pool2;
    v13 = Pool2 != 0 ? 0x2000 : 0;
    for ( i = v13; ; v13 = i )
    {
      v14 = IoEnumerateEnvironmentVariablesEx(2LL, ExpIsBootEntry, Pool2, &i);
      if ( v14 != -1073741789 )
        break;
      v44 = i;
      if ( v13 >= i )
        break;
      if ( v12 )
      {
        ExFreePoolWithTag(v12, 0);
        v44 = i;
      }
      Pool2 = ExAllocatePool2(64LL, v44, 1920364101LL);
      v12 = (unsigned int *)Pool2;
      if ( !Pool2 )
      {
        v14 = -1073741670;
        break;
      }
    }
    ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v14 && i )
    {
      v15 = v12;
      v16 = (char *)v12 + 2 * i;
      v56 = v16;
      while ( 1 )
      {
        v53 = 0;
        v17 = *((_QWORD *)v15 + 2) - EfiBootVariablesGuid;
        if ( !v17 )
          v17 = *((_QWORD *)v15 + 3) + 0x73D4FC671FFFF256LL;
        if ( !v17 && (unsigned int)ExpTranslateBootEntryNameToId(v15 + 8, &v53) )
        {
          v18 = v15[2];
          if ( v18 < 8 )
            goto LABEL_81;
          v59 = (char *)v15 + v15[1];
          v19 = *((unsigned __int16 *)v59 + 2);
          v62 = v59 + 6;
          v20 = ExpSafeWcslen(v59 + 6, v16, v59, v19);
          v23 = v20;
          v48 = v20;
          if ( v20 != -1 )
          {
            v23 = 2 * v20 + 2;
            v48 = v23;
          }
          v24 = v22 + v23 + 6;
          if ( v23 == -1 || (unsigned int)v22 >= v18 || v18 < v24 )
          {
            v16 = v56;
LABEL_81:
            v9 = v52;
            goto LABEL_53;
          }
          v68 = 1;
          Size = v23;
          v25 = (char *)(v23 + v21 + 6);
          v64 = v25;
          v63 = v22;
          Src = &v25[v22];
          v26 = v18 - v24;
          v27 = ((unsigned __int64)v8 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (_DWORD *)v27 != v8 )
          {
            v28 = v27 - (_DWORD)v8;
            v8 = (_DWORD *)(((unsigned __int64)v8 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
            if ( v5 < v28 )
            {
              v49 = 0;
              v5 = 0;
              v47 = -1073741789;
            }
            else
            {
              v5 -= v28;
            }
          }
          v51 = v22 + 12;
          v29 = v8 + 1;
          if ( v5 < (int)v22 + 12 )
          {
            v5 = 0;
            v31 = 0;
            v47 = -1073741789;
          }
          else
          {
            *v8 = 1;
            *v29 = v22 + 12;
            v8[2] = 4;
            memmove(v8 + 3, v25, v22);
            v30 = ExpVerifyFilePath(v8, (char *)v8 + (unsigned int)*v29);
            v31 = v49;
            if ( v30 < 0 )
            {
              v68 = 0;
              v51 = 16;
            }
          }
          v54 = (v26 + 31) & 0xFFFFFFFC;
          v48 = (v54 + v48 + 3) & 0xFFFFFFFC;
          v55 = v51 + v48;
          v32 = v51 + v48 + 4;
          v33 = v32;
          v65 = v32;
          v34 = v47;
          if ( v5 < v32 )
            v34 = -1073741789;
          v47 = v34;
          v35 = 0;
          if ( v5 >= v32 )
            v35 = v31;
          v36 = v35;
          v49 = v35;
          v37 = v5;
          v38 = v5 - v32;
          v5 = 0;
          if ( v37 >= v32 )
            v5 = v38;
          if ( v36 )
          {
            memset(v8, 0, v32);
            *v29 = 1;
            v8[2] = v55;
            v8[3] = v53;
            v8[4] = 0;
            v39 = 0;
            v40 = v59;
            if ( (*(_DWORD *)v59 & 1) != 0 )
            {
              v8[4] = 1;
              v39 = 1;
            }
            if ( (*v40 & 8) != 0 )
              v8[4] = v39 | 0x10;
            v8[5] = v54;
            v8[6] = v48;
            v8[7] = v26;
            memmove(v8 + 8, Src, v26);
            if ( v26 > 0x14
              && !strcmp((const char *)v8 + 32, "WINDOWS")
              && (int)ExpVerifyWindowsOsOptions(v8 + 8, v26) >= 0 )
            {
              v8[4] |= 4u;
            }
            memmove((char *)v29 + v54, v62, Size);
            v41 = (char *)v29 + v48;
            *(_DWORD *)v41 = 1;
            *((_DWORD *)v41 + 1) = v51;
            *((_DWORD *)v41 + 2) = 4;
            v42 = v41 + 12;
            if ( v68 )
            {
              memmove(v42, v64, v63);
              if ( (unsigned int)ExpIsDevicePathForRemovableMedia(v64) )
                v8[4] |= 8u;
            }
            else
            {
              v8[4] |= 0x20u;
              *v42 = 127;
              *(_WORD *)(v41 + 13) = 1279;
              v41[15] = 0;
            }
            if ( v52 )
              *v52 = (_DWORD)v8 - (_DWORD)v52;
            v9 = v8;
            v52 = v8;
            v33 = v65;
          }
          else
          {
            v9 = v52;
          }
          v8 = (_DWORD *)((char *)v8 + v33);
          v16 = v56;
        }
LABEL_53:
        v43 = *v15;
        if ( !(_DWORD)v43 )
        {
          v2 = a2;
          if ( v9 )
            *v9 = 0;
          goto LABEL_57;
        }
        v15 = (unsigned int *)((char *)v15 + v43);
      }
    }
    if ( v14 == -1073741789 )
      v14 = -1073741306;
LABEL_57:
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    if ( P )
      ExUnlockUserBuffer((struct _MDL *)P);
    result = v47;
    if ( v14 < 0 )
      result = (unsigned int)v14;
    *v2 = (_DWORD)v8 - (_DWORD)v57;
  }
  return result;
}
