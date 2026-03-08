/*
 * XREFs of xxxSBTrackInit @ 0x1C022D18C
 * Callers:
 *     xxxSysCommand @ 0x1C00DE67C (xxxSysCommand.c)
 *     xxxDoScrollMenu @ 0x1C022CC6C (xxxDoScrollMenu.c)
 *     xxxSBWndProc @ 0x1C022D770 (xxxSBWndProc.c)
 * Callees:
 *     zzzShowCaret @ 0x1C0006108 (zzzShowCaret.c)
 *     xxxCapture @ 0x1C0010A5C (xxxCapture.c)
 *     GetWndSBDisableFlags @ 0x1C00D9F98 (GetWndSBDisableFlags.c)
 *     CalcSBStuff @ 0x1C00D9FC8 (CalcSBStuff.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01BC260 (safe_cast_fnid_to_PSBWND.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C022B4A0 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C022B5FC (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C022B780 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C022C0E0 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022C64C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 */

__int64 __fastcall xxxSBTrackInit(struct tagWND *a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 v4; // r12
  __int64 v7; // rbx
  int v8; // r8d
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 **v11; // rcx
  __int64 v12; // rbx
  _QWORD *v13; // rax
  struct tagWND **v14; // r13
  unsigned int v15; // ecx
  int v16; // r9d
  _BYTE *v17; // r14
  __int64 v18; // rcx
  int v19; // edx
  int v20; // ecx
  unsigned int v21; // edx
  int v22; // edx
  __int128 *v23; // rcx
  __int128 *v24; // r8
  int v25; // r10d
  _DWORD *v26; // r12
  int v27; // eax
  struct tagWND **v28; // rcx
  __int64 v29; // rcx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  char WndSBDisableFlags; // [rsp+30h] [rbp-89h]
  int v35; // [rsp+34h] [rbp-85h]
  __int64 v36; // [rsp+40h] [rbp-79h] BYREF
  struct tagWND *v37; // [rsp+48h] [rbp-71h]
  struct tagWND **v38; // [rsp+50h] [rbp-69h]
  __int64 v39; // [rsp+58h] [rbp-61h]
  int v40; // [rsp+60h] [rbp-59h]
  __int64 v41; // [rsp+68h] [rbp-51h]
  __int64 v42; // [rsp+70h] [rbp-49h]
  _QWORD *v43; // [rsp+78h] [rbp-41h]
  __int128 v44; // [rsp+80h] [rbp-39h] BYREF
  _BYTE v45[64]; // [rsp+90h] [rbp-29h] BYREF

  v4 = a2;
  v41 = a2;
  v40 = a4;
  memset_0(v45, 0, sizeof(v45));
  v44 = 0LL;
  v7 = safe_cast_fnid_to_PSBWND((__int64)a1);
  v42 = v7;
  v8 = 2305;
  if ( *((_QWORD *)a1 + 2) == gptiCurrent )
    v8 = 2307;
  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTellMeIf", 0x20000, v8);
  v9 = *((_QWORD *)a1 + 2);
  result = *(unsigned int *)(v9 + 488);
  if ( (result & 1) != 0 )
    return MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTellMeIf", 0x20000, 2314);
  if ( !*(_QWORD *)(v9 + 720) && (v7 || a3) )
  {
    result = (__int64)gpUserTypeIsolation;
    v11 = (__int64 **)gpUserTypeIsolation[5];
    if ( v11 )
    {
      result = (__int64)NSInstrumentation::CTypeIsolation<28672,112>::Allocate(v11);
      v12 = result;
      if ( result )
      {
        *(_DWORD *)result &= ~1u;
        *(_QWORD *)(result + 64) = 0LL;
        v13 = (_QWORD *)(result + 48);
        v38 = (struct tagWND **)(v12 + 24);
        v43 = v13;
        v14 = (struct tagWND **)(v12 + 16);
        *(_QWORD *)(v12 + 16) = 0LL;
        *(_QWORD *)(v12 + 24) = 0LL;
        *v13 = xxxTrackBox;
        v39 = v12 + 8;
        *(_QWORD *)(v12 + 8) = 0LL;
        v36 = v12 + 8;
        v37 = a1;
        HMAssignmentLock(&v36, 0LL);
        *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL) = v12;
        v15 = *(_DWORD *)v12 & 0xFFFFFFFB | (a3 == 0 ? 4 : 0);
        *(_DWORD *)v12 = v15;
        if ( (v15 & 4) != 0 )
        {
          v36 = v12 + 16;
          v37 = a1;
          HMAssignmentLock(&v36, 0LL);
          v36 = v12 + 24;
          *(_DWORD *)v12 ^= (*(_DWORD *)v12 ^ (2 * *(_DWORD *)(v42 + 8))) & 2;
          v37 = (struct tagWND *)*((_QWORD *)a1 + 13);
          HMAssignmentLock(&v36, 0LL);
          v16 = *(_DWORD *)(v42 + 12);
          v17 = (_BYTE *)(v42 + 16);
          WndSBDisableFlags = v16;
          *(_DWORD *)(v12 + 88) = 2;
        }
        else
        {
          v18 = *((_QWORD *)a1 + 5);
          v19 = (unsigned __int16)(WORD1(v4) - *(_WORD *)(v18 + 92)) << 16;
          if ( (*(_BYTE *)(v18 + 26) & 0x40) != 0 )
            v20 = (unsigned __int16)(*(_WORD *)(v18 + 96) - v4);
          else
            v20 = (unsigned __int16)(v4 - *(_WORD *)(v18 + 88));
          v36 = v12 + 24;
          v4 = v19 | v20;
          v41 = v4;
          v37 = a1;
          HMAssignmentLock(&v36, 0LL);
          v36 = v12 + 16;
          v37 = 0LL;
          HMAssignmentLock(&v36, 0LL);
          v21 = *(_DWORD *)v12 ^ (*(_DWORD *)v12 ^ (2 * a3)) & 2;
          *(_DWORD *)v12 = v21;
          WndSBDisableFlags = GetWndSBDisableFlags((__int64)a1, (v21 >> 1) & 1);
          LOBYTE(v16) = WndSBDisableFlags;
          *(_DWORD *)(v12 + 88) = a3 != 6;
          if ( *((_QWORD *)a1 + 2) == gptiCurrent )
          {
            v17 = v45;
            v41 = v4;
          }
          else
          {
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTellMeIf", 0x20000, 2391);
            LOBYTE(v16) = WndSBDisableFlags;
            v17 = &unk_1C03629C0;
          }
        }
        *(_QWORD *)(v12 + 96) = v17;
        if ( (v16 & 3) == 3 )
          goto LABEL_30;
        if ( (*(_DWORD *)v12 & 4) == 0 )
        {
          CalcSBStuff((__int64)a1, (__int64)v17, (*(_DWORD *)v12 >> 1) & 1);
          LOBYTE(v16) = WndSBDisableFlags;
        }
        v22 = *(_DWORD *)v12;
        v23 = (__int128 *)((char *)&v44 + 4);
        if ( (*(_DWORD *)v12 & 2) == 0 )
          v23 = &v44;
        v24 = &v44;
        if ( (*(_DWORD *)v12 & 2) != 0 )
          v4 >>= 16;
        else
          v24 = (__int128 *)((char *)&v44 + 4);
        *(_DWORD *)v24 = *((_DWORD *)v17 + 6);
        *(_DWORD *)v23 = *((_DWORD *)v17 + 4);
        v25 = (__int16)v4;
        v26 = (_DWORD *)(v12 + 56);
        *((_DWORD *)v24 + 2) = *((_DWORD *)v17 + 7);
        v27 = *((_DWORD *)v17 + 5);
        *(_DWORD *)(v12 + 56) = -1;
        v35 = v25;
        *((_DWORD *)v23 + 2) = v27;
        if ( v25 >= *((_DWORD *)v17 + 9) )
        {
          if ( v25 >= *((_DWORD *)v17 + 10) )
          {
            if ( (v16 & 2) == 0 )
            {
              *v26 = 1;
              *(_DWORD *)v23 = *((_DWORD *)v17 + 10);
              goto LABEL_48;
            }
            if ( (v22 & 4) != 0 )
            {
              zzzShowCaret(*v14);
LABEL_29:
              result = *((_QWORD *)a1 + 2);
              if ( v12 != *(_QWORD *)(result + 720) )
                return result;
            }
LABEL_30:
            v28 = v38;
            *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL) = 0LL;
            HMAssignmentUnlock(v28);
            HMAssignmentUnlock(v12 + 16);
            v29 = v39;
LABEL_31:
            HMAssignmentUnlock(v29);
            return (__int64)UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>(v12);
          }
          if ( v25 >= *((_DWORD *)v17 + 13) )
          {
            if ( v25 < *((_DWORD *)v17 + 12) )
              goto LABEL_44;
            *v26 = 3;
            *(_DWORD *)v23 = *((_DWORD *)v17 + 12);
            v30 = *((_DWORD *)v17 + 10);
          }
          else
          {
            *v26 = 2;
            *(_DWORD *)v23 = *((_DWORD *)v17 + 9);
            v30 = *((_DWORD *)v17 + 13);
          }
        }
        else
        {
          if ( (v16 & 1) != 0 )
          {
            if ( (v22 & 4) != 0 )
              goto LABEL_29;
            goto LABEL_30;
          }
          *v26 = 0;
          v30 = *((_DWORD *)v17 + 9);
        }
        *((_DWORD *)v23 + 2) = v30;
        while ( 1 )
        {
LABEL_48:
          if ( v40 == 1 )
          {
            if ( *v26 < 2u )
              goto LABEL_54;
          }
          else if ( v40 != 2 )
          {
            goto LABEL_54;
          }
          if ( *v26 == 4 )
            break;
LABEL_44:
          if ( *((_DWORD *)v17 + 10) - *((_DWORD *)v17 + 9) <= *((_DWORD *)v17 + 8) )
            goto LABEL_30;
          *v26 = 4;
          CalcTrackDragRect((struct tagSBTRACK *)v12);
          *v43 = xxxTrackThumb;
          v31 = *((_DWORD *)v17 + 13);
          *((_DWORD *)v17 + 11) = v31;
          *(_DWORD *)(v12 + 76) = v31;
          v32 = *((_DWORD *)v17 + 3);
          *(_DWORD *)(v12 + 80) = v32;
          *(_DWORD *)(v12 + 84) = v32;
          *(_DWORD *)(v12 + 72) = *((_DWORD *)v17 + 11) - v35;
          xxxCapture(gptiCurrent, a1, 3);
          result = *((_QWORD *)a1 + 2);
          if ( v12 == *(_QWORD *)(result + 720) )
          {
            if ( !*v38 )
              continue;
            xxxDoScroll(*v14, *v38, 5LL, *(unsigned int *)(v12 + 80), (*(_DWORD *)v12 >> 1) & 1);
            result = *((_QWORD *)a1 + 2);
            if ( v12 == *(_QWORD *)(result + 720) )
              continue;
          }
          return result;
        }
        *(_DWORD *)(v12 + 72) = *((_DWORD *)v17 + 8) / -2;
LABEL_54:
        xxxCapture(gptiCurrent, a1, 3);
        result = *((_QWORD *)a1 + 2);
        if ( v12 == *(_QWORD *)(result + 720) )
        {
          if ( *v26 != 4 )
            *(_OWORD *)(v12 + 32) = v44;
          xxxSBTrackLoop(a1, v41, (struct tagSBCALC *)v17);
          result = *((_QWORD *)a1 + 2);
          v12 = *(_QWORD *)(result + 720);
          if ( v12 )
          {
            *(_QWORD *)(result + 720) = 0LL;
            HMAssignmentUnlock(v12 + 24);
            HMAssignmentUnlock(v12 + 16);
            v29 = v12 + 8;
            goto LABEL_31;
          }
        }
      }
    }
  }
  return result;
}
