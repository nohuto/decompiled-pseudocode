/*
 * XREFs of DrvDisplayConfigSetDeviceInfo @ 0x1C0146CE0
 * Callers:
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C012DCB0 (NtUserDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C001A1A0 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DrvIsWddmDriverPresent @ 0x1C00205A8 (DrvIsWddmDriverPresent.c)
 *     xxxUserSetDisplayConfig @ 0x1C00770F0 (xxxUserSetDisplayConfig.c)
 *     GetPathsModality @ 0x1C009E934 (GetPathsModality.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C01471C0 (DrvDisplayConfigSetScaleFactorOverride.c)
 */

__int64 __fastcall DrvDisplayConfigSetDeviceInfo(int *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int *v5; // r14
  unsigned int *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // r9d
  unsigned int v18; // r8d
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  int v24; // eax
  _QWORD *v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  struct D3DKMT_GETPATHSMODALITY *v30; // rsi
  int PathsModality; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbx
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r8
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  _QWORD *v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rbp
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // eax
  int v52; // eax
  bool v53; // zf
  int v54; // eax
  struct D3DKMT_GETPATHSMODALITY *v55; // [rsp+90h] [rbp+18h] BYREF

  if ( !(unsigned int)DrvIsWddmDriverPresent() )
    return 3221225659LL;
  v5 = (unsigned int *)(a1 + 4);
  v6 = (unsigned int *)(a1 + 2);
  result = ((__int64 (__fastcall *)(int *, _QWORD, int *, int *))qword_1C0250AC0)(
             a1 + 2,
             (unsigned int)a1[4],
             a1 + 2,
             a1 + 4);
  if ( (int)result >= 0 )
  {
    v9 = *a1;
    if ( *a1 == -23 )
    {
      if ( a1[1] != 48 )
        return -1073741811LL;
    }
    else
    {
      switch ( v9 )
      {
        case -19:
          v53 = a1[1] == 24;
          break;
        case -18:
          v53 = a1[1] == 28;
          break;
        case -16:
          if ( a1[1] != 68 )
            return -1073741811LL;
          v52 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C0250988)(0LL, a1);
          v10 = v52;
          if ( v52 < 0 )
            goto LABEL_58;
          if ( v52 != 259 )
          {
            if ( v52 == 255 && gpGdiSharedMemory )
              _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
            return (unsigned int)v10;
          }
          goto LABEL_18;
        case -6:
          if ( a1[1] == 28 )
          {
            v51 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C0250988)(0LL, a1);
            v10 = v51;
            if ( v51 >= 0 )
            {
              if ( !a1[6] )
                return (unsigned int)v10;
              v17 = 4;
              v18 = 2191;
              goto LABEL_19;
            }
            goto LABEL_58;
          }
          return -1073741811LL;
        case -4:
          if ( a1[1] == 24 )
          {
            LODWORD(v10) = DrvDisplayConfigSetScaleFactorOverride(a1, 0LL);
            return (unsigned int)v10;
          }
          return -1073741811LL;
        case 5:
          if ( a1[1] != 24 )
            return -1073741811LL;
          v25 = (_QWORD *)WdLogNewEntry5_WdEvent(v8);
          v25[3] = *a1;
          v25[4] = a1[3];
          v25[5] = *v6;
          v25[6] = *v5;
          v25[7] = a1[5] & 1;
          WdLogEvent5_WdEvent(v25);
          v26 = ((__int64 (*)(void))qword_1C02509A0)();
          v10 = v26;
          if ( v26 < 0 )
          {
            v11 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
            v11[3] = v10;
            v11[4] = a1[3];
            v11[5] = *v6;
            v11[6] = *v5;
            v12 = a1[5] & 1;
            goto LABEL_14;
          }
          v29 = a1[5];
          v30 = 0LL;
          v55 = 0LL;
          if ( (v29 & 1) != 0 )
          {
            PathsModality = GetPathsModality(v28, &v55, 0x40u, 0);
            v34 = PathsModality;
            if ( PathsModality < 0 )
            {
              v35 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32);
              v35[3] = v34;
              v35[4] = a1[3];
              v35[5] = *v6;
              v35[6] = *v5;
              v35[7] = a1[5] & 1;
              WdLogEvent5_WdError(v35);
              if ( (_DWORD)v34 == -1073741801 )
              {
                if ( (int)((__int64 (*)(void))qword_1C02509A8)() < 0 )
                {
                  v38 = WdLogNewEntry5_WdAssertion(v37, v36);
                  WdLogEvent5_WdAssertion(v38);
                }
                return 3221225495LL;
              }
            }
            v30 = v55;
          }
          v39 = (a1[5] & 1) == 0;
          LODWORD(v39) = v39 | 0x80000000;
          v40 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))qword_1C0250970)(*(_QWORD *)v6, *v5, v39, 0LL);
          v10 = v40;
          if ( v40 >= 0 )
          {
            if ( !v30 )
              goto LABEL_40;
            v44 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C0250940)(
                    0x40000000LL,
                    v30);
            v47 = v44;
            if ( v44 >= 0 )
              goto LABEL_40;
            v43 = (_QWORD *)WdLogNewEntry5_WdError(v46, v45);
            v43[3] = v47;
          }
          else
          {
            v43 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41);
            v43[3] = v10;
          }
          v43[4] = a1[3];
          v43[5] = *v6;
          v43[6] = *v5;
          v43[7] = a1[5] & 1;
          WdLogEvent5_WdError(v43);
LABEL_40:
          if ( (int)((__int64 (*)(void))qword_1C02509A8)() < 0 )
          {
            v50 = WdLogNewEntry5_WdAssertion(v49, v48);
            WdLogEvent5_WdAssertion(v50);
          }
          FreePathsModality(v30);
          return (unsigned int)v10;
        case 8:
          if ( a1[1] != 24 )
            return -1073741811LL;
          v24 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C0250988)(0LL, a1);
          v10 = v24;
          if ( v24 < 0 )
            goto LABEL_58;
LABEL_18:
          v17 = 0;
          v18 = 2447;
LABEL_19:
          v19 = xxxUserSetDisplayConfig(0, 0LL, v18, v17, 0LL, 1, 0LL, 0LL, 0LL, a2);
          v10 = v19;
          if ( v19 >= 0 )
            return (unsigned int)v10;
          v23 = WdLogNewEntry5_WdWarning(v21, v20, v22);
          *(_QWORD *)(v23 + 24) = v10;
LABEL_59:
          WdLogEvent5_WdWarning(v23);
          return (unsigned int)v10;
        case 10:
          if ( a1[1] == 24 )
          {
            v13 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C0250988)(0LL, a1);
            v10 = v13;
            if ( v13 >= 0 )
            {
              if ( v13 == 255 )
                return (unsigned int)v10;
              goto LABEL_18;
            }
LABEL_58:
            v23 = WdLogNewEntry5_WdWarning(v15, v14, v16);
            *(_QWORD *)(v23 + 24) = a1;
            *(_QWORD *)(v23 + 32) = v10;
            goto LABEL_59;
          }
          return -1073741811LL;
        default:
          LODWORD(v10) = -1073741811;
          v11 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
          v11[3] = -1073741811LL;
          v11[4] = *a1;
          v11[5] = a1[3];
          v11[6] = *v6;
          v12 = *v5;
LABEL_14:
          v11[7] = v12;
          WdLogEvent5_WdError(v11);
          return (unsigned int)v10;
      }
      if ( !v53 )
        return -1073741811LL;
    }
    v54 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C0250988)(0LL, a1);
    v10 = v54;
    if ( v54 >= 0 )
      return (unsigned int)v10;
    goto LABEL_58;
  }
  return result;
}
