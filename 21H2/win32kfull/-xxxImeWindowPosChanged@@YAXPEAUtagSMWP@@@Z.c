/*
 * XREFs of ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C00716D0
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0043774 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0071CD0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxImeWindowPosChanged(struct tagSMWP *a1)
{
  __int64 v1; // r15
  __int64 v2; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // rax
  struct tagWND *v5; // rbx
  struct tagBWL *v6; // rax
  struct tagBWL *v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rbx
  __int64 *v10; // rax
  _QWORD *i; // r12
  __int64 v12; // rax
  _QWORD *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG64 *v17; // rdx
  ULONG64 v18; // rdx
  __int64 *v19; // rbx
  __int64 v20; // rsi
  __int64 *v21; // rax
  struct tagSMWP *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  int v26; // esi
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int128 v31; // [rsp+38h] [rbp-70h] BYREF
  __int64 v32; // [rsp+48h] [rbp-60h]
  __int128 v33; // [rsp+50h] [rbp-58h] BYREF
  __int64 v34; // [rsp+60h] [rbp-48h]

  v1 = 0LL;
  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 464);
    if ( v4 )
      v1 = *(_QWORD *)(v4 + 24);
  }
  if ( v1 )
  {
    v5 = *(struct tagWND **)(v1 + 112);
    v6 = pbwlCache;
    if ( pbwlCache )
    {
      pbwlCache = 0LL;
    }
    else
    {
      v6 = (struct tagBWL *)Win32AllocPoolZInit(296LL, 1819767637LL);
      if ( !v6 )
        return;
      *((_QWORD *)v6 + 2) = (char *)v6 + 280;
    }
    *((_QWORD *)v6 + 1) = (char *)v6 + 32;
    *((_QWORD *)v6 + 3) = gptiCurrent;
    v7 = InternalBuildHwndList(v6, v5, 2u);
    v8 = (_QWORD *)*((_QWORD *)v7 + 1);
    if ( (unsigned __int64)v8 < *((_QWORD *)v7 + 2) )
    {
      *v8 = 1LL;
      v9 = 0LL;
      v10 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v10 )
        v9 = *v10;
      *((_QWORD *)v7 + 3) = v9;
      *((_QWORD *)v7 + 3) = gptiCurrent;
      *(_QWORD *)v7 = gpbwlList;
      gpbwlList = v7;
      for ( i = (_QWORD *)((char *)v7 + 32); *i != 1LL; ++i )
      {
        v12 = ValidateHwnd(*i);
        v13 = (_QWORD *)v12;
        v14 = *(unsigned int *)(gptiCurrent + 488LL);
        if ( (v14 & 1) != 0 )
          break;
        if ( v12 && *(_QWORD *)(v12 + 16) == gptiCurrent )
        {
          if ( (v15 = *(_QWORD *)(v12 + 40), v16 = v15, (*(_WORD *)(v15 + 42) & 0x1000) != 0)
            && (MicrosoftTelemetryAssertTriggeredNoArgsKM(v14),
                v15 = v13[5],
                v16 = v15,
                (*(_WORD *)(v15 + 42) & 0x1000) != 0)
            || **(_WORD **)(v13[17] + 8LL) != *(_WORD *)(gpsi + 898LL) )
          {
            v17 = 0LL;
          }
          else
          {
            v17 = *(_DWORD *)(v16 + 248) ? (ULONG64 *)v13[35] : *(ULONG64 **)(v15 + 296);
          }
          v33 = 0LL;
          v34 = 0LL;
          v31 = 0LL;
          v32 = 0LL;
          if ( v17 )
          {
            v18 = *v17;
            if ( v18 >= MmUserProbeAddress )
              v18 = MmUserProbeAddress;
            v19 = (__int64 *)HMValidateHandleNoSecure(*(_QWORD *)(v18 + 16), 1);
            if ( v19 )
            {
              *(_QWORD *)&v33 = *(_QWORD *)(gptiCurrent + 416LL);
              *(_QWORD *)(gptiCurrent + 416LL) = &v33;
              *((_QWORD *)&v33 + 1) = v13;
              HMLockObject(v13);
              v20 = 0LL;
              v21 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
              if ( v21 )
                v20 = *v21;
              *(_QWORD *)&v31 = *(_QWORD *)(v20 + 416);
              *(_QWORD *)(v20 + 416) = &v31;
              *((_QWORD *)&v31 + 1) = v19;
              HMLockObject(v19);
              do
              {
                if ( v19 == (__int64 *)v1 )
                  break;
                v23 = *v19;
                v22 = a1;
                v25 = *((_QWORD *)a1 + 5);
                v26 = *((_DWORD *)a1 + 7);
                while ( --v26 >= 0 )
                {
                  if ( v23 == *(_QWORD *)v25 )
                  {
                    if ( (~*(_BYTE *)(v25 + 32) & 3) != 0 )
                      xxxSendMessage((ULONG_PTR)v13);
                    break;
                  }
                  v25 += 168LL;
                }
                if ( v26 >= 0 )
                  break;
                v19 = (__int64 *)v19[13];
                v27 = *((_QWORD *)&v31 + 1);
                *((_QWORD *)&v31 + 1) = v19;
                if ( v19 )
                  HMLockObject(v19);
                if ( v27 )
                  HMUnlockObject(v27);
              }
              while ( v19 );
              ThreadUnlock1(v23, v22, v24);
              ThreadUnlock1(v29, v28, v30);
            }
          }
        }
      }
      FreeHwndList(v7);
    }
    else
    {
      Win32FreePool(v7);
    }
  }
}
