/*
 * XREFs of DrvSetDisplayConfigValidateParams @ 0x1C00CFC70
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C00770F0 (xxxUserSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C0147784 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C0018C74 (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C001BADC (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 *     UserIsWddmConnectedSession @ 0x1C001F320 (UserIsWddmConnectedSession.c)
 *     _stricmp @ 0x1C00C5938 (_stricmp.c)
 *     ?EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C0145440 (-EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C014581C (-GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_.c)
 */

__int64 __fastcall DrvSetDisplayConfigValidateParams(
        __int64 a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        int a4,
        char a5)
{
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // [rsp+40h] [rbp-1F8h]
  int TargetVirtualization; // [rsp+40h] [rbp-1F8h]
  char *v17; // [rsp+48h] [rbp-1F0h]
  unsigned __int8 v18; // [rsp+50h] [rbp-1E8h] BYREF
  unsigned __int8 v19; // [rsp+51h] [rbp-1E7h] BYREF
  char v20; // [rsp+52h] [rbp-1E6h]
  unsigned int j; // [rsp+54h] [rbp-1E4h]
  unsigned int k; // [rsp+58h] [rbp-1E0h]
  unsigned int i; // [rsp+5Ch] [rbp-1DCh]
  char v24; // [rsp+60h] [rbp-1D8h]
  char v25; // [rsp+61h] [rbp-1D7h]
  char v26; // [rsp+62h] [rbp-1D6h]
  char v27; // [rsp+63h] [rbp-1D5h]
  char v28; // [rsp+64h] [rbp-1D4h]
  char v29; // [rsp+65h] [rbp-1D3h]
  char v30; // [rsp+66h] [rbp-1D2h]
  char v31; // [rsp+67h] [rbp-1D1h]
  char v32; // [rsp+68h] [rbp-1D0h]
  char v33; // [rsp+69h] [rbp-1CFh]
  char v34; // [rsp+6Ah] [rbp-1CEh]
  char v35; // [rsp+6Bh] [rbp-1CDh]
  char v36; // [rsp+6Ch] [rbp-1CCh]
  char v37; // [rsp+6Dh] [rbp-1CBh]
  char v38; // [rsp+6Eh] [rbp-1CAh]
  char v39; // [rsp+6Fh] [rbp-1C9h]
  char v40; // [rsp+70h] [rbp-1C8h]
  char v41; // [rsp+71h] [rbp-1C7h]
  char v42; // [rsp+72h] [rbp-1C6h]
  char v43; // [rsp+73h] [rbp-1C5h]
  char v44; // [rsp+74h] [rbp-1C4h]
  char v45; // [rsp+75h] [rbp-1C3h]
  char v46; // [rsp+76h] [rbp-1C2h]
  char v47; // [rsp+77h] [rbp-1C1h]
  char v48; // [rsp+78h] [rbp-1C0h]
  char v49; // [rsp+79h] [rbp-1BFh]
  char v50; // [rsp+7Ah] [rbp-1BEh]
  char v51; // [rsp+7Bh] [rbp-1BDh]
  char v52; // [rsp+7Ch] [rbp-1BCh]
  char v53; // [rsp+7Dh] [rbp-1BBh]
  char v54; // [rsp+7Eh] [rbp-1BAh]
  char v55; // [rsp+7Fh] [rbp-1B9h]
  char v56; // [rsp+80h] [rbp-1B8h]
  char v57; // [rsp+81h] [rbp-1B7h]
  char v58; // [rsp+82h] [rbp-1B6h]
  char v59; // [rsp+83h] [rbp-1B5h]
  char v60; // [rsp+84h] [rbp-1B4h]
  char v61; // [rsp+85h] [rbp-1B3h]
  char v62; // [rsp+86h] [rbp-1B2h]
  char v63; // [rsp+87h] [rbp-1B1h]
  char v64; // [rsp+88h] [rbp-1B0h]
  char v65; // [rsp+89h] [rbp-1AFh]
  char v66; // [rsp+8Ah] [rbp-1AEh]
  char v67; // [rsp+8Bh] [rbp-1ADh]
  char v68; // [rsp+8Ch] [rbp-1ACh]
  char v69; // [rsp+8Dh] [rbp-1ABh]
  char v70; // [rsp+8Eh] [rbp-1AAh]
  BOOL v71; // [rsp+90h] [rbp-1A8h]
  int v72; // [rsp+94h] [rbp-1A4h]
  int v73; // [rsp+98h] [rbp-1A0h]
  _QWORD *v74; // [rsp+A0h] [rbp-198h]
  _QWORD *v75; // [rsp+A8h] [rbp-190h]
  _QWORD *v76; // [rsp+B0h] [rbp-188h]
  _QWORD *v77; // [rsp+B8h] [rbp-180h]
  __int64 v78; // [rsp+C0h] [rbp-178h]
  __int64 v79; // [rsp+C8h] [rbp-170h]
  char *Str1; // [rsp+D0h] [rbp-168h]
  __int64 v81; // [rsp+D8h] [rbp-160h]
  __int64 v82; // [rsp+E0h] [rbp-158h]
  __int64 v83; // [rsp+E8h] [rbp-150h]
  __int64 v84; // [rsp+F0h] [rbp-148h]
  __int64 v85; // [rsp+F8h] [rbp-140h]
  __int64 v86; // [rsp+100h] [rbp-138h]
  __int64 v87; // [rsp+108h] [rbp-130h]
  __int64 v88; // [rsp+110h] [rbp-128h]
  __int64 v89; // [rsp+118h] [rbp-120h]
  __int64 v90; // [rsp+120h] [rbp-118h]
  __int64 v91; // [rsp+128h] [rbp-110h]
  __int64 v92; // [rsp+130h] [rbp-108h]
  __int64 v93; // [rsp+138h] [rbp-100h]
  __int64 v94; // [rsp+140h] [rbp-F8h]
  __int64 v95; // [rsp+148h] [rbp-F0h]
  __int64 v96; // [rsp+150h] [rbp-E8h]
  __int64 v97; // [rsp+158h] [rbp-E0h]
  __int64 v98; // [rsp+160h] [rbp-D8h]
  __int64 v99; // [rsp+168h] [rbp-D0h]
  __int64 v100; // [rsp+170h] [rbp-C8h]
  __int64 v101; // [rsp+178h] [rbp-C0h]
  __int64 v102; // [rsp+180h] [rbp-B8h]
  __int64 v103; // [rsp+188h] [rbp-B0h]
  __int64 v104; // [rsp+190h] [rbp-A8h]
  __int64 v105; // [rsp+198h] [rbp-A0h]
  __int64 v106; // [rsp+1A0h] [rbp-98h]
  __int64 v107; // [rsp+1A8h] [rbp-90h]
  __int64 v108; // [rsp+1B0h] [rbp-88h]
  __int64 v109; // [rsp+1B8h] [rbp-80h]
  __int64 v110; // [rsp+1C0h] [rbp-78h]
  __int64 v111; // [rsp+1C8h] [rbp-70h]
  __int64 v112; // [rsp+1D0h] [rbp-68h]
  __int64 v113; // [rsp+1D8h] [rbp-60h]
  __int64 v114; // [rsp+1E0h] [rbp-58h]
  __int64 v115; // [rsp+1E8h] [rbp-50h]
  __int64 v116; // [rsp+1F0h] [rbp-48h]
  __int64 v117; // [rsp+1F8h] [rbp-40h]
  __int64 v118; // [rsp+200h] [rbp-38h]
  __int64 v119; // [rsp+208h] [rbp-30h]
  _QWORD *v120; // [rsp+210h] [rbp-28h]
  __int64 v121; // [rsp+218h] [rbp-20h]
  __int64 v122; // [rsp+220h] [rbp-18h]
  unsigned int v123; // [rsp+240h] [rbp+8h]

  v123 = a1;
  Str1 = 0LL;
  if ( a5 )
  {
    if ( (a3 & 0x80) != 0 && DrvIsTemporarySettingChangeDisabled() )
    {
      v109 = WdLogNewEntry5_WdError(a1, a2);
      *(_QWORD *)(v109 + 24) = -1073741790LL;
      v70 = WdLogEvent5_WdError(v109);
      return 3221225506LL;
    }
    if ( (a3 & 0x200) != 0 && DrvIsPermanentSettingChangesDisabled() )
    {
      v110 = WdLogNewEntry5_WdError(a1, a2);
      *(_QWORD *)(v110 + 24) = -1073741790LL;
      v24 = WdLogEvent5_WdError(v110);
      return 3221225506LL;
    }
  }
  if ( (a3 & 0x10000) != 0 && ((a3 & 0x1F) != 0 || (a3 & 0x200) != 0) )
  {
    v111 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v111 + 24) = -1073741637LL;
    v25 = WdLogEvent5_WdError(v111);
    return 3221225659LL;
  }
  if ( (a3 & 0xC0000000) != 0 )
  {
    if ( (a3 & 0x80) != 0 )
    {
      if ( a3 == 1073741952 || a3 == -2147483520 )
      {
        CurrentProcess = PsGetCurrentProcess(a1, a2);
        Str1 = (char *)PsGetProcessImageFileName(CurrentProcess);
        if ( gbBypassPresenterViewProcessCheck || Str1 && !stricmp(Str1, "explorer.exe") )
        {
          if ( v123 || a2 )
          {
            v112 = WdLogNewEntry5_WdError(v8, v7);
            *(_QWORD *)(v112 + 24) = -1073741811LL;
            v29 = WdLogEvent5_WdError(v112);
            return 3221225485LL;
          }
          else
          {
            v113 = WdLogNewEntry5_WdTrace(v8, v7);
            *(_QWORD *)(v113 + 24) = a3;
            v30 = WdLogEvent5_WdTrace(v113);
            return 0LL;
          }
        }
        else
        {
          v81 = WdLogNewEntry5_WdError(v8, v7);
          *(_QWORD *)(v81 + 24) = a3;
          *(_QWORD *)(v81 + 32) = -1073741581LL;
          v28 = WdLogEvent5_WdError(v81);
          return 3221225715LL;
        }
      }
      else
      {
        v79 = WdLogNewEntry5_WdError(a1, a2);
        *(_QWORD *)(v79 + 24) = a3;
        *(_QWORD *)(v79 + 32) = -1073741581LL;
        v27 = WdLogEvent5_WdError(v79);
        return 3221225715LL;
      }
    }
    else
    {
      v78 = WdLogNewEntry5_WdError(a1, a2);
      *(_QWORD *)(v78 + 24) = a3;
      *(_QWORD *)(v78 + 32) = -1073741581LL;
      v26 = WdLogEvent5_WdError(v78);
      return 3221225715LL;
    }
  }
  else if ( (a4 & 1) != 0 )
  {
    if ( (a4 & 0xFFFFFEBF) == 1 && a3 == 128 && !v123 )
    {
      return 0LL;
    }
    else
    {
      v82 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v82 + 24) = a3;
      *(_QWORD *)(v82 + 32) = -1073741581LL;
      v31 = WdLogEvent5_WdAssertion(v82);
      return 3221225715LL;
    }
  }
  else
  {
    if ( (a4 & 0x10) != 0 && (a4 & 8) == 0 )
    {
      v83 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v83 + 24) = a3;
      *(_QWORD *)(v83 + 32) = -1073741581LL;
      v32 = WdLogEvent5_WdAssertion(v83);
      return 3221225715LL;
    }
    if ( (a4 & 8) != 0 && v123 != 1 )
    {
      v75 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1, a2);
      v75[3] = v123;
      v75[4] = a3;
      v75[5] = -1073741581LL;
      v33 = WdLogEvent5_WdAssertion(v75);
      return 3221225715LL;
    }
    if ( (a4 & 8) != 0 && (a3 & 0x20) == 0 )
    {
      v84 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v84 + 24) = a3;
      *(_QWORD *)(v84 + 32) = -1073741581LL;
      v34 = WdLogEvent5_WdAssertion(v84);
      return 3221225715LL;
    }
    if ( !(unsigned int)UserIsWddmConnectedSession() && (a3 & 0x88F) != 0x88F )
    {
      v85 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v85 + 24) = a3;
      *(_QWORD *)(v85 + 32) = -1073741790LL;
      v35 = WdLogEvent5_WdError(v85);
      return 3221225506LL;
    }
    if ( (a3 & 0xFFFE4000) != 0 )
    {
      v86 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v86 + 24) = a3;
      *(_QWORD *)(v86 + 32) = -1073741581LL;
      v36 = WdLogEvent5_WdError(v86);
      return 3221225715LL;
    }
    if ( (a3 & 0xC0) == 0 || (a3 & 0xC0) == 0xC0 )
    {
      v87 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v87 + 24) = a3;
      *(_QWORD *)(v87 + 32) = -1073741581LL;
      v37 = WdLogEvent5_WdError(v87);
      return 3221225715LL;
    }
    if ( (a3 & 0x180) == 0x100 )
    {
      v88 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v88 + 24) = a3;
      *(_QWORD *)(v88 + 32) = -1073741581LL;
      v38 = WdLogEvent5_WdError(v88);
      return 3221225715LL;
    }
    if ( (a3 & 0x1000) != 0 && (a3 & 0xA0) != 0xA0 )
    {
      v89 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v89 + 24) = a3;
      *(_QWORD *)(v89 + 32) = -1073741581LL;
      v39 = WdLogEvent5_WdError(v89);
      return 3221225715LL;
    }
    if ( (a3 & 0x2000) != 0 && (a3 & 0x10) == 0 )
    {
      v90 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v90 + 24) = a3;
      *(_QWORD *)(v90 + 32) = -1073741581LL;
      v40 = WdLogEvent5_WdError(v90);
      return 3221225715LL;
    }
    if ( (a3 & 0x1F) != 0 )
    {
      if ( (a3 & 0x400) != 0 )
      {
        v91 = WdLogNewEntry5_WdError(v10, v9);
        *(_QWORD *)(v91 + 24) = a3;
        *(_QWORD *)(v91 + 32) = -1073741581LL;
        v41 = WdLogEvent5_WdError(v91);
        return 3221225715LL;
      }
      if ( (a3 & 0x20) != 0 )
      {
        v92 = WdLogNewEntry5_WdError(v10, v9);
        *(_QWORD *)(v92 + 24) = a3;
        *(_QWORD *)(v92 + 32) = -1073741581LL;
        v42 = WdLogEvent5_WdError(v92);
        return 3221225715LL;
      }
      if ( (a3 & 0x200) != 0 )
      {
        v93 = WdLogNewEntry5_WdError(v10, v9);
        *(_QWORD *)(v93 + 24) = a3;
        *(_QWORD *)(v93 + 32) = -1073741581LL;
        v43 = WdLogEvent5_WdError(v93);
        return 3221225715LL;
      }
      if ( (a3 & 0x10) != 0 )
      {
        if ( (a3 & 0x800) != 0 )
        {
          v94 = WdLogNewEntry5_WdError(v10, v9);
          *(_QWORD *)(v94 + 24) = a3;
          *(_QWORD *)(v94 + 32) = -1073741581LL;
          v44 = WdLogEvent5_WdError(v94);
          return 3221225715LL;
        }
        if ( !a2 )
        {
          v95 = WdLogNewEntry5_WdError(v10, v9);
          *(_QWORD *)(v95 + 24) = a3;
          *(_QWORD *)(v95 + 32) = -1073741584LL;
          v45 = WdLogEvent5_WdError(v95);
          return 3221225712LL;
        }
        if ( !v123 )
        {
          v96 = WdLogNewEntry5_WdError(v10, v9);
          *(_QWORD *)(v96 + 24) = a3;
          *(_QWORD *)(v96 + 32) = -1073741585LL;
          v46 = WdLogEvent5_WdError(v96);
          return 3221225711LL;
        }
        for ( i = 0; i < v123; ++i )
        {
          v120 = (_QWORD *)((char *)a2 + 200 * i);
          if ( (*v120 & 0x7FF30FFFFFFFFFFFLL) != 0 )
          {
            v114 = WdLogNewEntry5_WdError(0x7FF30FFFFFFFFFFFLL, v9);
            *(_QWORD *)(v114 + 24) = i;
            v47 = WdLogEvent5_WdError(v114);
            return 3221225714LL;
          }
        }
      }
      else
      {
        if ( a2 )
        {
          v97 = WdLogNewEntry5_WdError(v10, v9);
          *(_QWORD *)(v97 + 24) = a3;
          *(_QWORD *)(v97 + 32) = -1073741584LL;
          v48 = WdLogEvent5_WdError(v97);
          return 3221225712LL;
        }
        if ( v123 )
        {
          v98 = WdLogNewEntry5_WdError(v10, v9);
          *(_QWORD *)(v98 + 24) = a3;
          *(_QWORD *)(v98 + 32) = -1073741585LL;
          v49 = WdLogEvent5_WdError(v98);
          return 3221225711LL;
        }
      }
    }
    else
    {
      if ( (a3 & 0x20) == 0 )
      {
        v99 = WdLogNewEntry5_WdError(v10, v9);
        *(_QWORD *)(v99 + 24) = a3;
        *(_QWORD *)(v99 + 32) = -1073741581LL;
        v50 = WdLogEvent5_WdError(v99);
        return 3221225715LL;
      }
      if ( (a3 & 0x800) != 0 )
      {
        v100 = WdLogNewEntry5_WdError(v10, v9);
        *(_QWORD *)(v100 + 24) = a3;
        *(_QWORD *)(v100 + 32) = -1073741581LL;
        v51 = WdLogEvent5_WdError(v100);
        return 3221225715LL;
      }
      if ( (a3 & 0x10000) == 0 )
      {
        if ( !a2 )
        {
          v101 = WdLogNewEntry5_WdError(v10, v9);
          *(_QWORD *)(v101 + 24) = a3;
          *(_QWORD *)(v101 + 32) = -1073741584LL;
          v52 = WdLogEvent5_WdError(v101);
          return 3221225712LL;
        }
        if ( !v123 )
        {
          v102 = WdLogNewEntry5_WdError(v10, v9);
          *(_QWORD *)(v102 + 24) = a3;
          *(_QWORD *)(v102 + 32) = -1073741585LL;
          v53 = WdLogEvent5_WdError(v102);
          return 3221225711LL;
        }
      }
      if ( v123 )
      {
        v15 = EnforceSDCCloneSourceIndexCoherency(v123, a2);
        if ( v15 < 0 )
        {
          v115 = WdLogNewEntry5_WdError(v12, v11);
          *(_QWORD *)(v115 + 24) = v15;
          v54 = WdLogEvent5_WdError(v115);
          return (unsigned int)v15;
        }
        v20 = 0;
        for ( j = 0; j < v123; ++j )
        {
          v17 = (char *)a2 + 200 * j;
          v19 = 0;
          v18 = 0;
          if ( (*(_QWORD *)v17 & 0x7FD30E6FFF7CF070LL) != 0 )
          {
            v116 = WdLogNewEntry5_WdError(0x7FD30E6FFF7CF070LL, v11);
            *(_QWORD *)(v116 + 24) = *(_QWORD *)v17;
            v55 = WdLogEvent5_WdError(v116);
            return 3221225485LL;
          }
          v13 = 0xFFFFFE7FFF7DF470uLL;
          if ( (*((_QWORD *)v17 + 1) & 0xFFFFFE7FFF7DF470uLL) != 0
            || (v13 = (unsigned __int64)a2 + 200 * j, (*(_QWORD *)v17 & *((_QWORD *)v17 + 1)) != *((_QWORD *)v17 + 1)) )
          {
            v103 = WdLogNewEntry5_WdError(v13, v11);
            *(_QWORD *)(v103 + 24) = *(_QWORD *)v17;
            *(_QWORD *)(v103 + 32) = *((_QWORD *)v17 + 1);
            v56 = WdLogEvent5_WdError(v103);
            return 3221225485LL;
          }
          v12 = 0x8000000000000000uLL;
          if ( *(__int64 *)v17 < 0 )
          {
            if ( (*(_QWORD *)v17 & 0x8004700000000000uLL) != 0x8004700000000000uLL )
            {
              v117 = WdLogNewEntry5_WdError(0x8004700000000000uLL, v11);
              *(_QWORD *)(v117 + 24) = *(_QWORD *)v17;
              v57 = WdLogEvent5_WdError(v117);
              return 3221225485LL;
            }
            TargetVirtualization = GetTargetVirtualization(
                                     *(struct _LUID *)(v17 + 16),
                                     *((_DWORD *)v17 + 7),
                                     &v19,
                                     &v18,
                                     0LL,
                                     0LL,
                                     0LL);
            if ( TargetVirtualization < 0 )
            {
              v118 = WdLogNewEntry5_WdError(v14, v11);
              *(_QWORD *)(v118 + 24) = TargetVirtualization;
              v58 = WdLogEvent5_WdError(v118);
              return 3221225712LL;
            }
            v12 = 0x8000000000000LL;
            if ( (*(_QWORD *)v17 & 0x8000000000000LL) != 0 )
            {
              v71 = v19 == 0;
              v73 = v18 ? 0 : 2;
              v11 = v73 | (unsigned int)v71;
              v12 = v11;
              if ( (unsigned __int8)v17[101] != (_DWORD)v11 )
              {
                v121 = WdLogNewEntry5_WdError(v11, v11);
                v59 = WdLogEvent5_WdError(v121);
                return 3221225485LL;
              }
            }
            if ( (*(_QWORD *)v17 & 0x800LL) != 0 )
            {
              if ( !*((_DWORD *)v17 + 29) && !*((_DWORD *)v17 + 30) )
                v20 = 1;
            }
            else
            {
              v20 = 1;
            }
            for ( k = 0; k < j; ++k )
            {
              v12 = 0x8000000000000000uLL;
              if ( *(__int64 *)v17 < 0 )
              {
                v12 = (__int64)a2;
                v11 = *((unsigned int *)v17 + 39);
                if ( *((_DWORD *)a2 + 50 * k + 39) == (_DWORD)v11 )
                  break;
              }
            }
            if ( k < j )
            {
              v11 = 0x8000000000000LL;
              v12 = *(_QWORD *)v17 & 0x8000000000000LL;
              if ( (*((_QWORD *)a2 + 25 * k) & 0x8000000000000LL) != v12
                || (v12 = (unsigned __int8)v17[101], *((unsigned __int8 *)a2 + 200 * k + 101) != (_DWORD)v12) )
              {
                v76 = (_QWORD *)WdLogNewEntry5_WdError(v12, 0x8000000000000LL);
                v76[3] = k;
                v76[4] = j;
                v76[5] = -1073741582LL;
                v69 = WdLogEvent5_WdError(v76);
                return 3221225714LL;
              }
              if ( v18 )
              {
                v12 = (__int64)a2;
                v11 = *((unsigned int *)v17 + 4);
                if ( *((_DWORD *)a2 + 50 * k + 4) != (_DWORD)v11
                  || (v12 = (__int64)a2, v11 = *((unsigned int *)v17 + 5), *((_DWORD *)a2 + 50 * k + 5) != (_DWORD)v11) )
                {
                  v77 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
                  v77[3] = k;
                  v77[4] = j;
                  v77[5] = -1073741582LL;
                  v60 = WdLogEvent5_WdError(v77);
                  return 3221225714LL;
                }
              }
            }
            if ( (*(_QWORD *)v17 & 0x100LL) != 0 )
            {
              v12 = 0x18000000000LL;
              if ( (*(_QWORD *)v17 & 0x18000000000LL) != 0 )
              {
                v119 = WdLogNewEntry5_WdError(0x18000000000LL, v11);
                *(_QWORD *)(v119 + 24) = j;
                v61 = WdLogEvent5_WdError(v119);
                return 3221225714LL;
              }
            }
            if ( (*(_QWORD *)v17 & 0x87LL) != 0 )
            {
              if ( (*(_QWORD *)v17 & 4LL) != 0 )
              {
                v72 = *((_DWORD *)v17 + 19);
                if ( v72 <= 0 || v72 > 3 )
                {
                  v104 = WdLogNewEntry5_WdError(v12, v11);
                  *(_QWORD *)(v104 + 24) = *((int *)v17 + 19);
                  *(_QWORD *)(v104 + 32) = -1073741582LL;
                  v62 = WdLogEvent5_WdError(v104);
                  return 3221225714LL;
                }
              }
              if ( (*(_QWORD *)v17 & 2LL) != 0 && (!*((_DWORD *)v17 + 12) || !*((_DWORD *)v17 + 13)) )
              {
                v74 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
                v74[3] = *((unsigned int *)v17 + 12);
                v74[4] = *((unsigned int *)v17 + 13);
                v74[5] = j;
                v74[6] = -1073741582LL;
                v63 = WdLogEvent5_WdError(v74);
                return 3221225714LL;
              }
            }
            if ( (*(_QWORD *)v17 & 0x800000LL) != 0 )
            {
              v12 = 0x1000000000LL;
              if ( (*(_QWORD *)v17 & 0x1000000000LL) == 0 )
              {
                if ( v19 && v18 )
                {
                  v105 = WdLogNewEntry5_WdError(0x1000000000LL, v11);
                  *(_QWORD *)(v105 + 24) = j;
                  *(_QWORD *)(v105 + 32) = -1073741584LL;
                  v64 = WdLogEvent5_WdError(v105);
                  return 3221225712LL;
                }
                if ( (*(_QWORD *)v17 & 0x100LL) == 0 )
                {
                  v106 = WdLogNewEntry5_WdError(0x1000000000LL, v11);
                  *(_QWORD *)(v106 + 24) = j;
                  *(_QWORD *)(v106 + 32) = -1073741584LL;
                  v65 = WdLogEvent5_WdError(v106);
                  return 3221225712LL;
                }
                v12 = *((unsigned int *)v17 + 38);
                if ( *((_DWORD *)v17 + 36) >= (int)v12
                  || (v12 = *((unsigned int *)v17 + 37), *((_DWORD *)v17 + 35) >= (int)v12) )
                {
                  v107 = WdLogNewEntry5_WdError(v12, v11);
                  *(_QWORD *)(v107 + 24) = j;
                  *(_QWORD *)(v107 + 32) = -1073741582LL;
                  v66 = WdLogEvent5_WdError(v107);
                  return 3221225714LL;
                }
                if ( *((int *)v17 + 36) < 0
                  || *((int *)v17 + 35) < 0
                  || (v12 = *((unsigned int *)v17 + 23), *((_DWORD *)v17 + 38) > (unsigned int)v12)
                  || (v12 = *((unsigned int *)v17 + 22), *((_DWORD *)v17 + 37) > (unsigned int)v12) )
                {
                  v108 = WdLogNewEntry5_WdError(v12, v11);
                  *(_QWORD *)(v108 + 24) = j;
                  *(_QWORD *)(v108 + 32) = -1073741582LL;
                  v67 = WdLogEvent5_WdError(v108);
                  return 3221225714LL;
                }
              }
            }
          }
        }
        if ( !v20 )
        {
          v122 = WdLogNewEntry5_WdError(v12, v11);
          v68 = WdLogEvent5_WdError(v122);
          return 3221225485LL;
        }
      }
    }
    return 0LL;
  }
}
