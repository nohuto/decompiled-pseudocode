/*
 * XREFs of xxxSBTrackInit @ 0x1C0241B74
 * Callers:
 *     xxxSysCommand @ 0x1C011BA1C (xxxSysCommand.c)
 *     xxxDoScrollMenu @ 0x1C024162C (xxxDoScrollMenu.c)
 *     xxxSBWndProc @ 0x1C02420E0 (xxxSBWndProc.c)
 * Callees:
 *     GetWndSBDisableFlags @ 0x1C0065218 (GetWndSBDisableFlags.c)
 *     CalcSBStuff @ 0x1C0065248 (CalcSBStuff.c)
 *     xxxCapture @ 0x1C00AA7F8 (xxxCapture.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D0504 (safe_cast_fnid_to_PSBWND.c)
 *     zzzShowCaret @ 0x1C023AA6C (zzzShowCaret.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C023FDC0 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C023FF08 (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C02400B0 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0240A10 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0240F90 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 */

unsigned __int8 **__fastcall xxxSBTrackInit(struct tagWND *a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 v7; // rdi
  unsigned __int8 **result; // rax
  __int64 **v9; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  struct tagWND **v12; // r13
  unsigned int v13; // ecx
  int v14; // eax
  int v15; // r9d
  _BYTE *v16; // rdi
  __int64 v17; // rcx
  int v18; // edx
  int v19; // ecx
  int v20; // edi
  unsigned int v21; // edx
  __int64 v22; // rcx
  unsigned int v23; // ecx
  struct tagWND *v24; // rdx
  __int128 *v25; // r8
  unsigned __int64 v26; // rax
  int v27; // r10d
  _DWORD *v28; // r14
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  char WndSBDisableFlags; // [rsp+30h] [rbp-79h]
  int v35; // [rsp+30h] [rbp-79h]
  __int64 v36; // [rsp+40h] [rbp-69h] BYREF
  struct tagWND *v37; // [rsp+48h] [rbp-61h]
  int v38; // [rsp+50h] [rbp-59h]
  __int64 v39; // [rsp+58h] [rbp-51h]
  _QWORD *v40; // [rsp+60h] [rbp-49h]
  __int128 v41; // [rsp+68h] [rbp-41h] BYREF
  _BYTE v42[64]; // [rsp+80h] [rbp-29h] BYREF

  v38 = a4;
  memset(v42, 0, sizeof(v42));
  v41 = 0LL;
  v7 = safe_cast_fnid_to_PSBWND((__int64)a1);
  MicrosoftTelemetryAssertTriggeredNoArgsKM();
  result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
  if ( ((_DWORD)result[61] & 1) != 0 )
    return (unsigned __int8 **)MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !result[90] && (v7 || a3) )
  {
    result = gpUserTypeIsolation;
    v9 = (__int64 **)gpUserTypeIsolation[5];
    if ( v9 )
    {
      result = (unsigned __int8 **)NSInstrumentation::CTypeIsolation<28672,112>::Allocate(v9);
      v10 = (__int64)result;
      if ( result )
      {
        *(_DWORD *)result &= ~1u;
        result[8] = 0LL;
        v11 = result + 6;
        *(_QWORD *)(v10 + 8) = 0LL;
        v40 = v11;
        *(_QWORD *)(v10 + 16) = 0LL;
        v12 = (struct tagWND **)(v10 + 24);
        v39 = v10 + 8;
        *(_QWORD *)(v10 + 24) = 0LL;
        *v11 = xxxTrackBox;
        v36 = v10 + 8;
        v37 = a1;
        HMAssignmentLock(&v36, 0LL);
        *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL) = v10;
        v13 = *(_DWORD *)v10 & 0xFFFFFFFB | (a3 == 0 ? 4 : 0);
        *(_DWORD *)v10 = v13;
        if ( (v13 & 4) != 0 )
        {
          v36 = v10 + 16;
          v37 = a1;
          HMAssignmentLock(&v36, 0LL);
          v14 = 2 * *(_DWORD *)(v7 + 8);
          v36 = v10 + 24;
          *(_DWORD *)v10 ^= (*(_DWORD *)v10 ^ v14) & 2;
          v37 = (struct tagWND *)*((_QWORD *)a1 + 13);
          HMAssignmentLock(&v36, 0LL);
          v15 = *(_DWORD *)(v7 + 12);
          v16 = (_BYTE *)(v7 + 16);
          WndSBDisableFlags = v15;
          *(_DWORD *)(v10 + 88) = 2;
        }
        else
        {
          v17 = *((_QWORD *)a1 + 5);
          v18 = (unsigned __int16)(WORD1(a2) - *(_WORD *)(v17 + 92)) << 16;
          if ( (*(_BYTE *)(v17 + 26) & 0x40) != 0 )
            v19 = (unsigned __int16)(*(_WORD *)(v17 + 96) - a2);
          else
            v19 = (unsigned __int16)(a2 - *(_WORD *)(v17 + 88));
          v36 = v10 + 24;
          a2 = v18 | v19;
          v37 = a1;
          HMAssignmentLock(&v36, 0LL);
          v37 = 0LL;
          v36 = v10 + 16;
          HMAssignmentLock(&v36, 0LL);
          v20 = a3;
          v21 = *(_DWORD *)v10 ^ (*(_DWORD *)v10 ^ (2 * a3)) & 2;
          *(_DWORD *)v10 = v21;
          WndSBDisableFlags = GetWndSBDisableFlags((__int64)a1, (v21 >> 1) & 1);
          LOBYTE(v15) = WndSBDisableFlags;
          *(_DWORD *)(v10 + 88) = v20 != 6;
          if ( *((_QWORD *)a1 + 2) == gptiCurrent )
          {
            v16 = v42;
          }
          else
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
            LOBYTE(v15) = WndSBDisableFlags;
            v16 = &unk_1C0337B80;
          }
        }
        *(_QWORD *)(v10 + 96) = v16;
        if ( (v15 & 3) == 3 )
        {
          *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL) = 0LL;
          HMAssignmentUnlock(v10 + 24);
          HMAssignmentUnlock(v10 + 16);
          v22 = v10 + 8;
LABEL_30:
          HMAssignmentUnlock(v22);
          return UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>(v10);
        }
        v23 = *(_DWORD *)v10;
        if ( (*(_DWORD *)v10 & 4) == 0 )
        {
          CalcSBStuff((__int64)a1, (__int64)v16, (v23 >> 1) & 1);
          v23 = *(_DWORD *)v10;
          LOBYTE(v15) = WndSBDisableFlags;
        }
        v24 = (struct tagWND *)((char *)&v41 + 4);
        if ( (v23 & 2) == 0 )
          v24 = (struct tagWND *)&v41;
        v25 = &v41;
        if ( (v23 & 2) != 0 )
        {
          v26 = a2 >> 16;
        }
        else
        {
          v25 = (__int128 *)((char *)&v41 + 4);
          LOWORD(v26) = a2;
        }
        v27 = (__int16)v26;
        v28 = (_DWORD *)(v10 + 56);
        *(_DWORD *)v25 = *((_DWORD *)v16 + 6);
        *(_DWORD *)v24 = *((_DWORD *)v16 + 4);
        *((_DWORD *)v25 + 2) = *((_DWORD *)v16 + 7);
        v29 = *((_DWORD *)v16 + 5);
        *(_DWORD *)(v10 + 56) = -1;
        v35 = v27;
        *((_DWORD *)v24 + 2) = v29;
        if ( v27 >= *((_DWORD *)v16 + 9) )
        {
          if ( v27 >= *((_DWORD *)v16 + 10) )
          {
            if ( (v15 & 2) == 0 )
            {
              *v28 = 1;
              *(_DWORD *)v24 = *((_DWORD *)v16 + 10);
              goto LABEL_47;
            }
            if ( (v23 & 4) != 0 )
            {
              zzzShowCaret(*(struct tagWND **)(v10 + 16));
LABEL_28:
              result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
              if ( (unsigned __int8 *)v10 != result[90] )
                return result;
            }
LABEL_29:
            *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL) = 0LL;
            HMAssignmentUnlock(v10 + 24);
            HMAssignmentUnlock(v10 + 16);
            v22 = v39;
            goto LABEL_30;
          }
          if ( v27 >= *((_DWORD *)v16 + 13) )
          {
            if ( v27 < *((_DWORD *)v16 + 12) )
              goto LABEL_43;
            *v28 = 3;
            *(_DWORD *)v24 = *((_DWORD *)v16 + 12);
            v30 = *((_DWORD *)v16 + 10);
          }
          else
          {
            *v28 = 2;
            *(_DWORD *)v24 = *((_DWORD *)v16 + 9);
            v30 = *((_DWORD *)v16 + 13);
          }
        }
        else
        {
          if ( (v15 & 1) != 0 )
          {
            if ( (v23 & 4) != 0 )
              goto LABEL_28;
            goto LABEL_29;
          }
          *v28 = 0;
          v30 = *((_DWORD *)v16 + 9);
        }
        *((_DWORD *)v24 + 2) = v30;
        while ( 1 )
        {
LABEL_47:
          if ( v38 == 1 )
          {
            if ( *v28 < 2u )
              goto LABEL_53;
          }
          else if ( v38 != 2 )
          {
            goto LABEL_53;
          }
          if ( *v28 == 4 )
            break;
LABEL_43:
          if ( *((_DWORD *)v16 + 10) - *((_DWORD *)v16 + 9) <= *((_DWORD *)v16 + 8) )
            goto LABEL_29;
          *v28 = 4;
          CalcTrackDragRect((struct tagSBTRACK *)v10, (__int64)v24);
          *v40 = xxxTrackThumb;
          v31 = *((_DWORD *)v16 + 13);
          *((_DWORD *)v16 + 11) = v31;
          *(_DWORD *)(v10 + 76) = v31;
          v32 = *((_DWORD *)v16 + 3);
          *(_DWORD *)(v10 + 80) = v32;
          *(_DWORD *)(v10 + 84) = v32;
          *(_DWORD *)(v10 + 72) = *((_DWORD *)v16 + 11) - v35;
          xxxCapture(gptiCurrent, a1, 3);
          result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
          if ( (unsigned __int8 *)v10 == result[90] )
          {
            v24 = *v12;
            if ( !*v12 )
              continue;
            xxxDoScroll(*(struct tagWND **)(v10 + 16), v24, 5LL, *(unsigned int *)(v10 + 80), (*(_DWORD *)v10 >> 1) & 1);
            result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
            if ( (unsigned __int8 *)v10 == result[90] )
              continue;
          }
          return result;
        }
        *(_DWORD *)(v10 + 72) = *((_DWORD *)v16 + 8) / -2;
LABEL_53:
        xxxCapture(gptiCurrent, a1, 3);
        result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
        if ( (unsigned __int8 *)v10 == result[90] )
        {
          if ( *v28 != 4 )
            *(_OWORD *)(v10 + 32) = v41;
          xxxSBTrackLoop(a1, a2, (struct tagSBCALC *)v16);
          result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
          v10 = (__int64)result[90];
          if ( v10 )
          {
            result[90] = 0LL;
            HMAssignmentUnlock(v10 + 24);
            HMAssignmentUnlock(v10 + 16);
            v22 = v10 + 8;
            goto LABEL_30;
          }
        }
      }
    }
  }
  return result;
}
