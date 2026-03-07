__int64 __fastcall DrvSetDisplayConfigValidateParams(
        __int64 a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 CurrentProcess; // rax
  Gre::Base *v7; // rcx
  int v8; // [rsp+40h] [rbp-68h]
  int TargetVirtualization; // [rsp+40h] [rbp-68h]
  _QWORD *v10; // [rsp+48h] [rbp-60h]
  unsigned __int8 v11[4]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int j; // [rsp+54h] [rbp-54h]
  unsigned __int8 v13; // [rsp+58h] [rbp-50h] BYREF
  char v14; // [rsp+59h] [rbp-4Fh]
  unsigned int k; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int8 v16[4]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int i; // [rsp+64h] [rbp-44h]
  int v18; // [rsp+68h] [rbp-40h]
  int v19; // [rsp+6Ch] [rbp-3Ch]
  BOOL v20; // [rsp+70h] [rbp-38h]
  int v21; // [rsp+74h] [rbp-34h]
  char *Str1; // [rsp+78h] [rbp-30h]
  _QWORD *v23; // [rsp+88h] [rbp-20h]
  unsigned int v24; // [rsp+B0h] [rbp+8h]
  unsigned int v26; // [rsp+C0h] [rbp+18h]
  int v27; // [rsp+C8h] [rbp+20h]

  v27 = a4;
  v26 = a3;
  v24 = a1;
  Str1 = 0LL;
  if ( a5
    && ((a3 & 0x80) != 0 && (unsigned int)DrvIsTemporarySettingChangeDisabled()
     || (v26 & 0x200) != 0 && (unsigned int)DrvIsPermanentSettingChangesDisabled()) )
  {
    WdLogSingleEntry1(2LL, -1073741790LL);
    return 3221225506LL;
  }
  if ( (v26 & 0x10000) != 0 && ((v26 & 0x1F) != 0 || (v26 & 0x200) != 0) )
  {
    WdLogSingleEntry1(2LL, -1073741637LL);
    return 3221225659LL;
  }
  if ( (v26 & 0xC0000000) == 0 )
  {
    if ( (v27 & 1) != 0 )
    {
      if ( (v27 & 0xFFFFFEBF) == 1 && v26 == 128 && !v24 )
        return 0LL;
LABEL_37:
      WdLogSingleEntry2(1LL, v26);
      return 3221225715LL;
    }
    if ( (v27 & 0x10) != 0 && (v27 & 8) == 0 )
      goto LABEL_37;
    if ( (v27 & 8) != 0 && v24 != 1 )
    {
      WdLogSingleEntry3(1LL, v24, v26, -1073741581LL);
      return 3221225715LL;
    }
    if ( (v27 & 8) != 0 && (v26 & 0x20) == 0 )
      goto LABEL_37;
    if ( !(unsigned int)UserIsWddmConnectedSession() && (v26 & 0x88F) != 0x88F )
    {
      WdLogSingleEntry2(2LL, v26);
      return 3221225506LL;
    }
    if ( (v26 & 0xFFFC4000) != 0
      || (v26 & 0xC0) == 0
      || (v26 & 0xC0) == 0xC0
      || (v26 & 0x180) == 0x100
      || (v26 & 0x1000) != 0 && (v26 & 0xA0) != 0xA0
      || (v26 & 0x2000) != 0 && (v26 & 0x10) == 0 )
    {
      goto LABEL_75;
    }
    if ( (v26 & 0x1F) != 0 )
    {
      if ( (v26 & 0x400) != 0 || (v26 & 0x20) != 0 || (v26 & 0x200) != 0 )
        goto LABEL_75;
      if ( (v26 & 0x10) != 0 )
      {
        if ( (v26 & 0x800) != 0 )
        {
LABEL_75:
          WdLogSingleEntry2(2LL, v26);
          return 3221225715LL;
        }
        if ( !a2 )
        {
LABEL_78:
          WdLogSingleEntry2(2LL, v26);
          return 3221225712LL;
        }
        if ( !v24 )
        {
LABEL_80:
          WdLogSingleEntry2(2LL, v26);
          return 3221225711LL;
        }
        for ( i = 0; i < v24; ++i )
        {
          v23 = (_QWORD *)((char *)a2 + 216 * i);
          if ( (*v23 & 0x7FF30FFFFFFFFFFFLL) != 0 )
          {
            WdLogSingleEntry1(2LL, i);
            return 3221225714LL;
          }
        }
      }
      else
      {
        if ( a2 )
          goto LABEL_78;
        if ( v24 )
          goto LABEL_80;
      }
    }
    else
    {
      if ( (v26 & 0x20) == 0 || (v26 & 0x800) != 0 )
        goto LABEL_75;
      if ( (v26 & 0x10000) == 0 )
      {
        if ( !a2 )
          goto LABEL_78;
        if ( !v24 )
          goto LABEL_80;
      }
      if ( v24 )
      {
        v8 = EnforceSDCCloneSourceIndexCoherency(v24, a2);
        if ( v8 < 0 )
        {
          WdLogSingleEntry1(2LL, v8);
          return (unsigned int)v8;
        }
        v14 = 0;
        for ( j = 0; j < v24; ++j )
        {
          v10 = (_QWORD *)((char *)a2 + 216 * j);
          v13 = 0;
          v11[0] = 0;
          v16[0] = 0;
          if ( (*v10 & 0x7FD30E6FFE7CF070LL) != 0 )
            goto LABEL_87;
          if ( (v10[1] & 0xFFFFFE7FFE7DF470uLL) != 0 || (*v10 & v10[1]) != v10[1] )
          {
            WdLogSingleEntry2(2LL, *v10);
            return 3221225485LL;
          }
          if ( (__int64)*v10 < 0 )
          {
            if ( (*v10 & 0x8004700000000000uLL) != 0x8004700000000000uLL )
            {
LABEL_87:
              WdLogSingleEntry1(2LL, *v10);
              return 3221225485LL;
            }
            TargetVirtualization = GetTargetVirtualization(
                                     (struct _LUID)v10[2],
                                     *((_DWORD *)v10 + 7),
                                     &v13,
                                     v11,
                                     v16,
                                     0LL,
                                     0LL,
                                     0LL);
            if ( TargetVirtualization < 0 )
            {
              WdLogSingleEntry1(2LL, TargetVirtualization);
              return 3221225712LL;
            }
            if ( (*v10 & 0x8000000000000LL) != 0 )
            {
              v20 = v13 == 0;
              v19 = v11[0] ? 0 : 2;
              v21 = v16[0] ? 0 : 4;
              if ( *((unsigned __int8 *)v10 + 101) != (v21 | v19 | v20) )
                goto LABEL_103;
            }
            if ( (*v10 & 0x800LL) != 0 )
            {
              if ( !*((_DWORD *)v10 + 29) && !*((_DWORD *)v10 + 30) )
                v14 = 1;
            }
            else
            {
              v14 = 1;
            }
            for ( k = 0; k < j && ((__int64)*v10 >= 0 || *((_DWORD *)a2 + 54 * k + 39) != *((_DWORD *)v10 + 39)); ++k )
              ;
            if ( k < j )
            {
              if ( (*((_QWORD *)a2 + 27 * k) & 0x8000000000000LL) != (*v10 & 0x8000000000000LL)
                || (_mm_lfence(),
                    !IsPathVirtualFlagCloneCompatible(*((_BYTE *)a2 + 216 * k + 101), *((_BYTE *)v10 + 101)))
                || v11[0]
                && (*((_DWORD *)a2 + 54 * k + 4) != *((_DWORD *)v10 + 4)
                 || *((_DWORD *)a2 + 54 * k + 5) != *((_DWORD *)v10 + 5)) )
              {
                WdLogSingleEntry3(2LL, k, j, -1073741582LL);
                return 3221225714LL;
              }
            }
            if ( (*v10 & 0x100LL) != 0 && (*v10 & 0x18000000000LL) != 0 )
            {
              WdLogSingleEntry1(2LL, j);
              return 3221225714LL;
            }
            if ( (*v10 & 0x87LL) != 0 )
            {
              if ( (*v10 & 4LL) != 0 )
              {
                v18 = *((_DWORD *)v10 + 19);
                if ( v18 != 1 && v18 != 2 && v18 != 3 )
                {
                  WdLogSingleEntry2(2LL, *((int *)v10 + 19));
                  return 3221225714LL;
                }
              }
              if ( (*v10 & 2LL) != 0 && (!*((_DWORD *)v10 + 12) || !*((_DWORD *)v10 + 13)) )
              {
                WdLogSingleEntry4(2LL, *((unsigned int *)v10 + 12), *((unsigned int *)v10 + 13), j);
                return 3221225714LL;
              }
            }
            if ( (*v10 & 0x1000000LL) != 0 )
            {
              if ( !*((_DWORD *)v10 + 49) || !*((_DWORD *)v10 + 50) )
              {
                WdLogSingleEntry4(2LL, *((unsigned int *)v10 + 49), *((unsigned int *)v10 + 50), j);
                return 3221225714LL;
              }
              if ( !*((_DWORD *)v10 + 53) )
              {
                WdLogSingleEntry3(2LL, *((unsigned int *)v10 + 53), j, -1073741582LL);
                return 3221225714LL;
              }
            }
            if ( (*v10 & 0x800000LL) != 0 && (*v10 & 0x1000000000LL) == 0 )
            {
              if ( v13 && v11[0] || (*v10 & 0x100LL) == 0 )
              {
                WdLogSingleEntry2(2LL, j);
                return 3221225712LL;
              }
              if ( *((_DWORD *)v10 + 36) >= *((_DWORD *)v10 + 38)
                || *((_DWORD *)v10 + 35) >= *((_DWORD *)v10 + 37)
                || *((int *)v10 + 36) < 0
                || *((int *)v10 + 35) < 0
                || *((_DWORD *)v10 + 38) > *((_DWORD *)v10 + 23)
                || *((_DWORD *)v10 + 37) > *((_DWORD *)v10 + 22) )
              {
                WdLogSingleEntry2(2LL, j);
                return 3221225714LL;
              }
            }
          }
        }
        if ( !v14 )
        {
LABEL_103:
          WdLogSingleEntry0(2LL);
          return 3221225485LL;
        }
      }
    }
    return 0LL;
  }
  if ( (v26 & 0x80) == 0 || v26 != 1073741952 && v26 != -2147483520 )
    goto LABEL_75;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  Str1 = (char *)PsGetProcessImageFileName(CurrentProcess);
  if ( !*((_DWORD *)Gre::Base::Globals(v7) + 355) && (!Str1 || stricmp(Str1, "explorer.exe")) )
    goto LABEL_75;
  if ( v24 || a2 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
  else
  {
    WdLogSingleEntry1(5LL, v26);
    return 0LL;
  }
}
