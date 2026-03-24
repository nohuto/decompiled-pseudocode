/*
 * XREFs of xxxSBTrackInit @ 0x1C0245C00
 * Callers:
 *     xxxSysCommand @ 0x1C0130714 (xxxSysCommand.c)
 *     xxxDoScrollMenu @ 0x1C02456CC (xxxDoScrollMenu.c)
 *     xxxSBWndProc @ 0x1C0246160 (xxxSBWndProc.c)
 * Callees:
 *     CalcSBStuff @ 0x1C0063DA0 (CalcSBStuff.c)
 *     xxxCapture @ 0x1C00C062C (xxxCapture.c)
 *     GetWndSBDisableFlags @ 0x1C015849C (GetWndSBDisableFlags.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??$UserAllocateIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0169F34 (--$UserAllocateIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0169F60 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D47C8 (safe_cast_fnid_to_PSBWND.c)
 *     zzzShowCaret @ 0x1C02418E4 (zzzShowCaret.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0244158 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0244A80 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0245024 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 */

__int64 __fastcall xxxSBTrackInit(struct tagWND *a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 v7; // rbx
  int v8; // r8d
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rbx
  struct tagWND **v12; // r13
  unsigned int v13; // ecx
  int v14; // r9d
  int *v15; // r14
  __int64 v16; // rcx
  int v17; // edx
  int v18; // ecx
  unsigned int v19; // edx
  __int64 v20; // r8
  unsigned int v21; // ecx
  __int128 *v22; // r8
  __int128 *v23; // rdx
  unsigned __int64 v24; // rax
  int v25; // r10d
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  struct tagWND *v31; // rdx
  int v32; // eax
  char WndSBDisableFlags; // [rsp+30h] [rbp-69h]
  int v35; // [rsp+34h] [rbp-65h]
  __int64 v36; // [rsp+40h] [rbp-59h] BYREF
  struct tagWND *v37; // [rsp+48h] [rbp-51h]
  int v38; // [rsp+50h] [rbp-49h]
  _DWORD *v39; // [rsp+58h] [rbp-41h]
  __int128 v40; // [rsp+60h] [rbp-39h] BYREF
  char v41; // [rsp+70h] [rbp-29h] BYREF

  v38 = a4;
  v40 = 0LL;
  v7 = safe_cast_fnid_to_PSBWND((__int64)a1);
  v39 = (_DWORD *)v7;
  v8 = 2330;
  if ( *((_QWORD *)a1 + 2) == gptiCurrent )
    v8 = 2332;
  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTellMeIf", 0x20000, v8);
  v9 = *((_QWORD *)a1 + 2);
  result = *(unsigned int *)(v9 + 488);
  if ( (result & 1) != 0 )
    return MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTellMeIf", 0x20000, 2339);
  if ( !*(_QWORD *)(v9 + 720) && (v7 || a3) )
  {
    result = UserAllocateIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>();
    v11 = result;
    if ( result )
    {
      *(_DWORD *)result &= ~1u;
      v12 = (struct tagWND **)(result + 16);
      *(_QWORD *)(result + 64) = 0LL;
      *(_QWORD *)(result + 16) = 0LL;
      *(_QWORD *)(result + 48) = xxxTrackBox;
      *(_QWORD *)(result + 24) = 0LL;
      *(_QWORD *)(result + 8) = 0LL;
      v36 = result + 8;
      v37 = a1;
      HMAssignmentLock(&v36);
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL) = v11;
      v13 = *(_DWORD *)v11 & 0xFFFFFFFB | (a3 == 0 ? 4 : 0);
      *(_DWORD *)v11 = v13;
      if ( (v13 & 4) != 0 )
      {
        v36 = v11 + 16;
        v37 = a1;
        HMAssignmentLock(&v36);
        v36 = v11 + 24;
        *(_DWORD *)v11 ^= (*(_DWORD *)v11 ^ (2 * v39[2])) & 2;
        v37 = (struct tagWND *)*((_QWORD *)a1 + 13);
        HMAssignmentLock(&v36);
        v14 = v39[3];
        v15 = v39 + 4;
        WndSBDisableFlags = v14;
        *(_DWORD *)(v11 + 88) = 2;
      }
      else
      {
        v16 = *((_QWORD *)a1 + 5);
        v17 = (unsigned __int16)(WORD1(a2) - *(_WORD *)(v16 + 92)) << 16;
        if ( (*(_BYTE *)(v16 + 26) & 0x40) != 0 )
          v18 = (unsigned __int16)(*(_WORD *)(v16 + 96) - a2);
        else
          v18 = (unsigned __int16)(a2 - *(_WORD *)(v16 + 88));
        v36 = v11 + 24;
        a2 = v17 | v18;
        v37 = a1;
        HMAssignmentLock(&v36);
        v36 = v11 + 16;
        v37 = 0LL;
        HMAssignmentLock(&v36);
        v19 = *(_DWORD *)v11 ^ (*(_DWORD *)v11 ^ (2 * a3)) & 2;
        *(_DWORD *)v11 = v19;
        WndSBDisableFlags = GetWndSBDisableFlags((__int64)a1, (v19 >> 1) & 1, v20);
        LOBYTE(v14) = WndSBDisableFlags;
        *(_DWORD *)(v11 + 88) = a3 != 6;
        if ( *((_QWORD *)a1 + 2) == gptiCurrent )
        {
          v15 = (int *)&v41;
        }
        else
        {
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTellMeIf", 0x20000, 2416);
          LOBYTE(v14) = WndSBDisableFlags;
          v15 = (int *)&unk_1C033D400;
        }
      }
      *(_QWORD *)(v11 + 96) = v15;
      if ( (v14 & 3) == 3 )
        goto LABEL_29;
      v21 = *(_DWORD *)v11;
      if ( (*(_DWORD *)v11 & 4) == 0 )
      {
        CalcSBStuff((__int64)a1, v15, (v21 >> 1) & 1);
        v21 = *(_DWORD *)v11;
        LOBYTE(v14) = WndSBDisableFlags;
      }
      v22 = &v40;
      if ( (v21 & 2) == 0 )
        v22 = (__int128 *)((char *)&v40 + 4);
      v23 = (__int128 *)((char *)&v40 + 4);
      if ( (v21 & 2) != 0 )
      {
        v24 = a2 >> 16;
      }
      else
      {
        v23 = &v40;
        LOWORD(v24) = a2;
      }
      v25 = (__int16)v24;
      *(_DWORD *)v22 = v15[6];
      *(_DWORD *)v23 = v15[4];
      *((_DWORD *)v22 + 2) = v15[7];
      v26 = v15[5];
      *(_DWORD *)(v11 + 56) = -1;
      v35 = v25;
      *((_DWORD *)v23 + 2) = v26;
      if ( v25 >= v15[9] )
      {
        if ( v25 >= v15[10] )
        {
          if ( (v14 & 2) == 0 )
          {
            *(_DWORD *)(v11 + 56) = 1;
            *(_DWORD *)v23 = v15[10];
            goto LABEL_47;
          }
          if ( (v21 & 4) != 0 )
          {
            zzzShowCaret(*v12);
LABEL_28:
            result = *((_QWORD *)a1 + 2);
            if ( v11 != *(_QWORD *)(result + 720) )
              return result;
          }
LABEL_29:
          *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL) = 0LL;
          HMAssignmentUnlock(v11 + 24);
          v27 = v11 + 16;
LABEL_30:
          HMAssignmentUnlock(v27);
          HMAssignmentUnlock(v11 + 8);
          return (__int64)UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>(v11);
        }
        if ( v25 >= v15[13] )
        {
          if ( v25 < v15[12] )
            goto LABEL_43;
          *(_DWORD *)(v11 + 56) = 3;
          *(_DWORD *)v23 = v15[12];
          v28 = v15[10];
        }
        else
        {
          *(_DWORD *)(v11 + 56) = 2;
          *(_DWORD *)v23 = v15[9];
          v28 = v15[13];
        }
      }
      else
      {
        if ( (v14 & 1) != 0 )
        {
          if ( (v21 & 4) != 0 )
            goto LABEL_28;
          goto LABEL_29;
        }
        *(_DWORD *)(v11 + 56) = 0;
        v28 = v15[9];
      }
      *((_DWORD *)v23 + 2) = v28;
LABEL_47:
      while ( 1 )
      {
        if ( v38 != 1 )
          goto LABEL_50;
        v32 = *(_DWORD *)(v11 + 56);
        if ( !v32 )
          break;
        if ( v32 == 1 )
        {
LABEL_50:
          if ( v38 != 2 )
            break;
        }
        if ( *(_DWORD *)(v11 + 56) == 4 )
        {
          *(_DWORD *)(v11 + 72) = v15[8] / -2;
          break;
        }
LABEL_43:
        if ( v15[10] - v15[9] <= v15[8] )
          goto LABEL_29;
        *(_DWORD *)(v11 + 56) = 4;
        CalcTrackDragRect((struct tagSBTRACK *)v11);
        *(_QWORD *)(v11 + 48) = xxxTrackThumb;
        v29 = v15[13];
        v15[11] = v29;
        *(_DWORD *)(v11 + 76) = v29;
        v30 = v15[3];
        *(_DWORD *)(v11 + 80) = v30;
        *(_DWORD *)(v11 + 84) = v30;
        *(_DWORD *)(v11 + 72) = v15[11] - v35;
        xxxCapture(gptiCurrent, (__int64)a1, 3);
        result = *((_QWORD *)a1 + 2);
        if ( v11 == *(_QWORD *)(result + 720) )
        {
          v31 = *(struct tagWND **)(v11 + 24);
          if ( !v31 )
            continue;
          xxxDoScroll(*(struct _LARGE_STRING ***)(v11 + 16), v31, 5u, *(_DWORD *)(v11 + 80), (*(_DWORD *)v11 >> 1) & 1);
          result = *((_QWORD *)a1 + 2);
          if ( v11 == *(_QWORD *)(result + 720) )
            continue;
        }
        return result;
      }
      xxxCapture(gptiCurrent, (__int64)a1, 3);
      result = *((_QWORD *)a1 + 2);
      if ( v11 == *(_QWORD *)(result + 720) )
      {
        if ( *(_DWORD *)(v11 + 56) != 4 )
          *(_OWORD *)(v11 + 32) = v40;
        xxxSBTrackLoop(a1, a2, (struct tagSBCALC *)v15);
        result = *((_QWORD *)a1 + 2);
        v11 = *(_QWORD *)(result + 720);
        if ( v11 )
        {
          *(_QWORD *)(result + 720) = 0LL;
          HMAssignmentUnlock(v11 + 24);
          v27 = v11 + 16;
          goto LABEL_30;
        }
      }
    }
  }
  return result;
}
