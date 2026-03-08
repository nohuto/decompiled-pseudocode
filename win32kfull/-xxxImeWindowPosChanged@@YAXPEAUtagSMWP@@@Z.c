/*
 * XREFs of ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C0068140
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068640 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     FreeHwndList @ 0x1C00680B0 (FreeHwndList.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxImeWindowPosChanged(struct tagSMWP *a1)
{
  __int64 *v1; // r15
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r13
  _QWORD *v8; // rbx
  struct tagBWL *v9; // rdi
  __int64 v10; // rax
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 *v15; // rax
  _QWORD *i; // rdi
  __int64 v17; // rax
  _QWORD *v18; // rbx
  __int64 v19; // r8
  ULONG64 *v20; // rax
  __int64 v21; // r14
  ULONG64 v22; // rcx
  ULONG64 v23; // rax
  __int64 *v24; // r14
  __int64 v25; // r13
  _QWORD **v26; // rcx
  __int16 v27; // r15
  struct tagSMWP *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  int v32; // r15d
  __int64 v33; // r15
  bool v34; // zf
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // r14
  _QWORD **v43; // [rsp+20h] [rbp-98h]
  __int64 v44; // [rsp+28h] [rbp-90h]
  struct tagBWL *v45; // [rsp+40h] [rbp-78h]
  __int128 v46; // [rsp+48h] [rbp-70h] BYREF
  __int64 v47; // [rsp+58h] [rbp-60h]
  __int128 v48; // [rsp+60h] [rbp-58h] BYREF
  __int64 v49; // [rsp+70h] [rbp-48h]
  __int64 *v51; // [rsp+D8h] [rbp+20h]

  v1 = 0LL;
  v51 = 0LL;
  v2 = SGDGetUserSessionState(a1);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v2 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v3 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v3 = *ThreadWin32Thread;
  if ( v3 )
  {
    v6 = *(_QWORD *)(v3 + 464);
    if ( v6 )
    {
      v1 = *(__int64 **)(v6 + 24);
      v51 = v1;
    }
  }
  v7 = gptiCurrent;
  if ( v1 )
  {
    v8 = (_QWORD *)v1[14];
    v9 = pbwlCache;
    if ( pbwlCache )
    {
      pbwlCache = 0LL;
LABEL_11:
      *((_QWORD *)v9 + 1) = (char *)v9 + 32;
      for ( *((_QWORD *)v9 + 3) = gptiCurrent; v8; v8 = (_QWORD *)v8[11] )
      {
        v10 = *((_QWORD *)v9 + 3);
        if ( !v10 || v10 == v8[2] )
        {
          v5 = (_QWORD *)*((_QWORD *)v9 + 1);
          *v5 = *v8;
          v21 = *((_QWORD *)v9 + 1) + 8LL;
          *((_QWORD *)v9 + 1) = v21;
          if ( v21 == *((_QWORD *)v9 + 2) )
          {
            v39 = v21 - (_QWORD)v9;
            v40 = UserReAllocPool(v9, (unsigned int)v39 + 8LL, (unsigned int)v39 + 72LL, 1819767637LL);
            v5 = (_QWORD *)v40;
            if ( v40 )
            {
              v42 = v40 + v39;
              *(_QWORD *)(v40 + 8) = v42;
              *(_QWORD *)(v40 + 16) = v42 + 64;
              v9 = (struct tagBWL *)v40;
              v41 = 1;
            }
            else
            {
              v41 = 0;
            }
            if ( !v41 )
              break;
          }
        }
      }
      v12 = (_QWORD *)*((_QWORD *)v9 + 1);
      if ( (unsigned __int64)v12 >= *((_QWORD *)v9 + 2) )
      {
        Win32FreePool(v9);
        return;
      }
      *v12 = 1LL;
      v13 = SGDGetUserSessionState(v5);
      if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v13 + 8)) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
      v14 = 0LL;
      v15 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v15 )
        v14 = *v15;
      *((_QWORD *)v9 + 3) = v14;
      *((_QWORD *)v9 + 3) = gptiCurrent;
      *(_QWORD *)v9 = gpbwlList;
      gpbwlList = v9;
      v45 = v9;
      for ( i = (_QWORD *)((char *)v9 + 32); ; ++i )
      {
        while ( 1 )
        {
          if ( *i == 1LL || (v17 = ValidateHwnd(*i), v18 = (_QWORD *)v17, (*(_DWORD *)(v7 + 488) & 1) != 0) )
          {
            FreeHwndList(v45);
            return;
          }
          if ( v17 && *(_QWORD *)(v17 + 16) == v7 )
          {
            if ( (*(_WORD *)(*(_QWORD *)(v17 + 40) + 42LL) & 0x1000) != 0 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 870LL);
            v19 = v18[5];
            if ( (*(_WORD *)(v19 + 42) & 0x1000) == 0 && **(_WORD **)(v18[17] + 8LL) == *(_WORD *)(gpsi + 898LL) )
              v20 = *(_DWORD *)(v19 + 248) ? (ULONG64 *)v18[35] : *(ULONG64 **)(v19 + 296);
            else
              v20 = 0LL;
            v46 = 0LL;
            v47 = 0LL;
            v48 = 0LL;
            v49 = 0LL;
            if ( v20 )
              break;
          }
LABEL_33:
          ++i;
        }
        v22 = *v20;
        v23 = MmUserProbeAddress;
        if ( v22 < MmUserProbeAddress )
          v23 = v22;
        v44 = *(_QWORD *)(v23 + 16);
        v24 = 0LL;
        PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( (unsigned __int64)(unsigned __int16)v44 < *(_QWORD *)(gpsi + 8LL) )
        {
          v25 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v44;
          v26 = (_QWORD **)HMPkheFromPhe(v25);
          v43 = v26;
          v27 = WORD1(v44) & 0x7FFF;
          if ( (WORD1(v44) & 0x7FFF) != *(_WORD *)(v25 + 26) && v27 != 0x7FFF )
          {
            if ( v27 || !PsGetCurrentProcessWow64Process(v26) )
            {
LABEL_48:
              v7 = gptiCurrent;
              goto LABEL_49;
            }
            v26 = v43;
          }
          if ( (*(_BYTE *)(v25 + 25) & 1) != 0 )
            goto LABEL_48;
          v34 = *(_BYTE *)(v25 + 24) == 1;
          v7 = gptiCurrent;
          if ( v34 )
            v24 = *v26;
        }
LABEL_49:
        if ( !v24 )
          goto LABEL_33;
        *(_QWORD *)&v46 = *(_QWORD *)(v7 + 416);
        *(_QWORD *)(v7 + 416) = &v46;
        *((_QWORD *)&v46 + 1) = v18;
        HMLockObject(v18);
        ThreadLockAlways(v24, &v48);
        while ( v24 && v24 != v51 )
        {
          v29 = *v24;
          v28 = a1;
          v31 = *((_QWORD *)a1 + 5);
          v32 = *((_DWORD *)a1 + 7);
          while ( --v32 >= 0 )
          {
            if ( v29 == *(_QWORD *)v31 )
            {
              if ( (~*(_BYTE *)(v31 + 32) & 3) != 0 )
                xxxSendMessage(v18, 647LL, 6LL, 0LL);
              break;
            }
            v31 += 168LL;
          }
          if ( v32 >= 0 )
            break;
          v24 = (__int64 *)v24[13];
          v33 = *((_QWORD *)&v48 + 1);
          *((_QWORD *)&v48 + 1) = v24;
          if ( v24 )
            HMLockObject(v24);
          if ( v33 )
            HMUnlockObject(v33);
        }
        ThreadUnlock1(v29, v28, v30);
        ThreadUnlock1(v36, v35, v37);
      }
    }
    v38 = Win32AllocPoolZInit(296LL, 1819767637LL);
    v9 = (struct tagBWL *)v38;
    if ( v38 )
    {
      *(_QWORD *)(v38 + 16) = v38 + 280;
      goto LABEL_11;
    }
  }
}
