/*
 * XREFs of DrvSetDisplayConfigValidateParams @ 0x1C00DEB70
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C005C190 (xxxUserSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C0174420 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C0067688 (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C00681FC (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     UserIsWddmConnectedSession @ 0x1C0071CE0 (UserIsWddmConnectedSession.c)
 *     _stricmp @ 0x1C00D62E4 (_stricmp.c)
 *     ?IsPathVirtualFlagCloneCompatible@@YAEEE@Z @ 0x1C00DB164 (-IsPathVirtualFlagCloneCompatible@@YAEEE@Z.c)
 *     ?EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C0172190 (-EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?GetTargetVirtualization@@YAJU_LUID@@IPEAE11PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0172584 (-GetTargetVirtualization@@YAJU_LUID@@IPEAE11PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT.c)
 */

__int64 __fastcall DrvSetDisplayConfigValidateParams(
        __int64 a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 CurrentProcess; // rax
  int v7; // [rsp+40h] [rbp-68h]
  int TargetVirtualization; // [rsp+40h] [rbp-68h]
  _QWORD *v9; // [rsp+48h] [rbp-60h]
  unsigned __int8 v10[4]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int j; // [rsp+54h] [rbp-54h]
  unsigned __int8 v12; // [rsp+58h] [rbp-50h] BYREF
  char v13; // [rsp+59h] [rbp-4Fh]
  unsigned int k; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int8 v15[4]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int i; // [rsp+64h] [rbp-44h]
  int v17; // [rsp+68h] [rbp-40h]
  BOOL v18; // [rsp+6Ch] [rbp-3Ch]
  int v19; // [rsp+70h] [rbp-38h]
  int v20; // [rsp+74h] [rbp-34h]
  char *Str1; // [rsp+78h] [rbp-30h]
  _QWORD *v22; // [rsp+80h] [rbp-28h]
  unsigned int v23; // [rsp+B0h] [rbp+8h]
  unsigned int v25; // [rsp+C0h] [rbp+18h]
  int v26; // [rsp+C8h] [rbp+20h]

  v26 = a4;
  v25 = a3;
  v23 = a1;
  Str1 = 0LL;
  if ( a5
    && ((a3 & 0x80) != 0 && DrvIsTemporarySettingChangeDisabled()
     || (v25 & 0x200) != 0 && DrvIsPermanentSettingChangesDisabled()) )
  {
    WdLogSingleEntry1(2LL, -1073741790LL);
    return 3221225506LL;
  }
  if ( (v25 & 0x10000) != 0 && ((v25 & 0x1F) != 0 || (v25 & 0x200) != 0) )
  {
    WdLogSingleEntry1(2LL, -1073741637LL);
    return 3221225659LL;
  }
  if ( (v25 & 0xC0000000) == 0 )
  {
    if ( (v26 & 1) != 0 )
    {
      if ( (v26 & 0xFFFFFEBF) == 1 && v25 == 128 && !v23 )
        return 0LL;
LABEL_37:
      WdLogSingleEntry2(1LL, v25, -1073741581LL);
      return 3221225715LL;
    }
    if ( (v26 & 0x10) != 0 && (v26 & 8) == 0 )
      goto LABEL_37;
    if ( (v26 & 8) != 0 && v23 != 1 )
    {
      WdLogSingleEntry3(1LL, v23, v25, -1073741581LL);
      return 3221225715LL;
    }
    if ( (v26 & 8) != 0 && (v25 & 0x20) == 0 )
      goto LABEL_37;
    if ( !(unsigned int)UserIsWddmConnectedSession() && (v25 & 0x88F) != 0x88F )
    {
      WdLogSingleEntry2(2LL, v25, -1073741790LL);
      return 3221225506LL;
    }
    if ( (v25 & 0xFFFC4000) != 0
      || (v25 & 0xC0) == 0
      || (v25 & 0xC0) == 0xC0
      || (v25 & 0x180) == 0x100
      || (v25 & 0x1000) != 0 && (v25 & 0xA0) != 0xA0
      || (v25 & 0x2000) != 0 && (v25 & 0x10) == 0 )
    {
      goto LABEL_75;
    }
    if ( (v25 & 0x1F) != 0 )
    {
      if ( (v25 & 0x400) != 0 || (v25 & 0x20) != 0 || (v25 & 0x200) != 0 )
        goto LABEL_75;
      if ( (v25 & 0x10) != 0 )
      {
        if ( (v25 & 0x800) != 0 )
        {
LABEL_75:
          WdLogSingleEntry2(2LL, v25, -1073741581LL);
          return 3221225715LL;
        }
        if ( !a2 )
        {
LABEL_78:
          WdLogSingleEntry2(2LL, v25, -1073741584LL);
          return 3221225712LL;
        }
        if ( !v23 )
        {
LABEL_80:
          WdLogSingleEntry2(2LL, v25, -1073741585LL);
          return 3221225711LL;
        }
        for ( i = 0; i < v23; ++i )
        {
          v22 = (_QWORD *)((char *)a2 + 216 * i);
          if ( (*v22 & 0x7FF30FFFFFFFFFFFLL) != 0 )
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
        if ( v23 )
          goto LABEL_80;
      }
    }
    else
    {
      if ( (v25 & 0x20) == 0 || (v25 & 0x800) != 0 )
        goto LABEL_75;
      if ( (v25 & 0x10000) == 0 )
      {
        if ( !a2 )
          goto LABEL_78;
        if ( !v23 )
          goto LABEL_80;
      }
      if ( v23 )
      {
        v7 = EnforceSDCCloneSourceIndexCoherency(v23, a2);
        if ( v7 < 0 )
        {
          WdLogSingleEntry1(2LL, v7);
          return (unsigned int)v7;
        }
        v13 = 0;
        for ( j = 0; j < v23; ++j )
        {
          v9 = (_QWORD *)((char *)a2 + 216 * j);
          v12 = 0;
          v10[0] = 0;
          v15[0] = 0;
          if ( (*v9 & 0x7FD30E6FFE7CF070LL) != 0 )
            goto LABEL_87;
          if ( (v9[1] & 0xFFFFFE7FFE7DF470uLL) != 0 || (*v9 & v9[1]) != v9[1] )
          {
            WdLogSingleEntry2(2LL, *v9, v9[1]);
            return 3221225485LL;
          }
          if ( (__int64)*v9 < 0 )
          {
            if ( (*v9 & 0x8004700000000000uLL) != 0x8004700000000000uLL )
            {
LABEL_87:
              WdLogSingleEntry1(2LL, *v9);
              return 3221225485LL;
            }
            TargetVirtualization = GetTargetVirtualization(
                                     (struct _LUID)v9[2],
                                     *((_DWORD *)v9 + 7),
                                     &v12,
                                     v10,
                                     v15,
                                     0LL,
                                     0LL,
                                     0LL);
            if ( TargetVirtualization < 0 )
            {
              WdLogSingleEntry1(2LL, TargetVirtualization);
              return 3221225712LL;
            }
            if ( (*v9 & 0x8000000000000LL) != 0 )
            {
              v18 = v12 == 0;
              v17 = v10[0] ? 0 : 2;
              v19 = v15[0] ? 0 : 4;
              if ( *((unsigned __int8 *)v9 + 101) != (v19 | v17 | v18) )
                goto LABEL_103;
            }
            if ( (*v9 & 0x800LL) != 0 )
            {
              if ( !*((_DWORD *)v9 + 29) && !*((_DWORD *)v9 + 30) )
                v13 = 1;
            }
            else
            {
              v13 = 1;
            }
            for ( k = 0; k < j && ((__int64)*v9 >= 0 || *((_DWORD *)a2 + 54 * k + 39) != *((_DWORD *)v9 + 39)); ++k )
              ;
            if ( k < j )
            {
              if ( (*((_QWORD *)a2 + 27 * k) & 0x8000000000000LL) != (*v9 & 0x8000000000000LL)
                || (_mm_lfence(), !IsPathVirtualFlagCloneCompatible(
                                     *((_BYTE *)a2 + 216 * k + 101),
                                     *((_BYTE *)v9 + 101)))
                || v10[0]
                && (*((_DWORD *)a2 + 54 * k + 4) != *((_DWORD *)v9 + 4)
                 || *((_DWORD *)a2 + 54 * k + 5) != *((_DWORD *)v9 + 5)) )
              {
                WdLogSingleEntry3(2LL, k, j, -1073741582LL);
                return 3221225714LL;
              }
            }
            if ( (*v9 & 0x100LL) != 0 && (*v9 & 0x18000000000LL) != 0 )
            {
              WdLogSingleEntry1(2LL, j);
              return 3221225714LL;
            }
            if ( (*v9 & 0x87LL) != 0 )
            {
              if ( (*v9 & 4LL) != 0 )
              {
                v20 = *((_DWORD *)v9 + 19);
                if ( v20 <= 0 || v20 > 3 )
                {
                  WdLogSingleEntry2(2LL, *((int *)v9 + 19), -1073741582LL);
                  return 3221225714LL;
                }
              }
              if ( (*v9 & 2LL) != 0 && (!*((_DWORD *)v9 + 12) || !*((_DWORD *)v9 + 13)) )
              {
                WdLogSingleEntry4(2LL, *((unsigned int *)v9 + 12), *((unsigned int *)v9 + 13));
                return 3221225714LL;
              }
            }
            if ( (*v9 & 0x1000000LL) != 0 )
            {
              if ( !*((_DWORD *)v9 + 49) || !*((_DWORD *)v9 + 50) )
              {
                WdLogSingleEntry4(2LL, *((unsigned int *)v9 + 49), *((unsigned int *)v9 + 50));
                return 3221225714LL;
              }
              if ( !*((_DWORD *)v9 + 53) )
              {
                WdLogSingleEntry3(2LL, *((unsigned int *)v9 + 53), j, -1073741582LL);
                return 3221225714LL;
              }
            }
            if ( (*v9 & 0x800000LL) != 0 && (*v9 & 0x1000000000LL) == 0 )
            {
              if ( v12 && v10[0] || (*v9 & 0x100LL) == 0 )
              {
                WdLogSingleEntry2(2LL, j, -1073741584LL);
                return 3221225712LL;
              }
              if ( *((_DWORD *)v9 + 36) >= *((_DWORD *)v9 + 38)
                || *((_DWORD *)v9 + 35) >= *((_DWORD *)v9 + 37)
                || *((int *)v9 + 36) < 0
                || *((int *)v9 + 35) < 0
                || *((_DWORD *)v9 + 38) > *((_DWORD *)v9 + 23)
                || *((_DWORD *)v9 + 37) > *((_DWORD *)v9 + 22) )
              {
                WdLogSingleEntry2(2LL, j, -1073741582LL);
                return 3221225714LL;
              }
            }
          }
        }
        if ( !v13 )
        {
LABEL_103:
          WdLogSingleEntry0(2LL);
          return 3221225485LL;
        }
      }
    }
    return 0LL;
  }
  if ( (v25 & 0x80) == 0 || v25 != 1073741952 && v25 != -2147483520 )
    goto LABEL_75;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  Str1 = (char *)PsGetProcessImageFileName(CurrentProcess);
  if ( !gbBypassPresenterViewProcessCheck && (!Str1 || stricmp(Str1, "explorer.exe")) )
    goto LABEL_75;
  if ( v23 || a2 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
  else
  {
    WdLogSingleEntry1(5LL, v25);
    return 0LL;
  }
}
