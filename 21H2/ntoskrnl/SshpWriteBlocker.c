/*
 * XREFs of SshpWriteBlocker @ 0x14058040C
 * Callers:
 *     SshpSendSessionData @ 0x1408FAE08 (SshpSendSessionData.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     SshpStopBlockerAccounting @ 0x14058035C (SshpStopBlockerAccounting.c)
 */

char __fastcall SshpWriteBlocker(__int64 SpinLock, unsigned __int64 a2)
{
  KSPIN_LOCK v2; // rsi
  unsigned __int64 v5; // r14
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  int v21; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  bool v26; // zf
  unsigned __int64 v27; // rax
  int v28; // ecx
  unsigned __int64 v29; // rcx
  __int64 v30; // r9
  char v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+44h] [rbp-BCh] BYREF
  int v34; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v39[3]; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v40[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v41; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v42[2]; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v43[3]; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v44[2]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v45; // [rsp+140h] [rbp+40h] BYREF
  _OWORD v46[2]; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+170h] [rbp+70h] BYREF
  KSPIN_LOCK v48; // [rsp+180h] [rbp+80h]
  __int64 v49; // [rsp+188h] [rbp+88h]
  int *v50; // [rsp+190h] [rbp+90h]
  __int64 v51; // [rsp+198h] [rbp+98h]
  __int64 v52; // [rsp+1A0h] [rbp+A0h]
  int v53; // [rsp+1A8h] [rbp+A8h]
  int v54; // [rsp+1ACh] [rbp+ACh]
  KSPIN_LOCK v55; // [rsp+1B0h] [rbp+B0h]
  __int64 v56; // [rsp+1B8h] [rbp+B8h]
  _OWORD *v57; // [rsp+1C0h] [rbp+C0h]
  __int64 v58; // [rsp+1C8h] [rbp+C8h]
  __int64 *v59; // [rsp+1D0h] [rbp+D0h]
  __int64 v60; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 *v62; // [rsp+200h] [rbp+100h]
  __int64 v63; // [rsp+208h] [rbp+108h]
  KSPIN_LOCK v64; // [rsp+210h] [rbp+110h]
  __int64 v65; // [rsp+218h] [rbp+118h]
  KSPIN_LOCK v66; // [rsp+220h] [rbp+120h]
  __int64 v67; // [rsp+228h] [rbp+128h]
  _DWORD *v68; // [rsp+230h] [rbp+130h]
  __int64 v69; // [rsp+238h] [rbp+138h]
  __int64 v70; // [rsp+240h] [rbp+140h]
  _DWORD v71[2]; // [rsp+248h] [rbp+148h] BYREF
  int *v72; // [rsp+250h] [rbp+150h]
  __int64 v73; // [rsp+258h] [rbp+158h]
  __int64 *v74; // [rsp+260h] [rbp+160h]
  __int64 v75; // [rsp+268h] [rbp+168h]
  char *v76; // [rsp+270h] [rbp+170h]
  __int64 v77; // [rsp+278h] [rbp+178h]
  char *v78; // [rsp+280h] [rbp+180h]
  __int64 v79; // [rsp+288h] [rbp+188h]
  char *v80; // [rsp+290h] [rbp+190h]
  __int64 v81; // [rsp+298h] [rbp+198h]
  _OWORD *v82; // [rsp+2A0h] [rbp+1A0h]
  __int64 v83; // [rsp+2A8h] [rbp+1A8h]
  __int64 *v84; // [rsp+2B0h] [rbp+1B0h]
  __int64 v85; // [rsp+2B8h] [rbp+1B8h]
  char *v86; // [rsp+2C0h] [rbp+1C0h]
  __int64 v87; // [rsp+2C8h] [rbp+1C8h]
  char *v88; // [rsp+2D0h] [rbp+1D0h]
  __int64 v89; // [rsp+2D8h] [rbp+1D8h]
  char *v90; // [rsp+2E0h] [rbp+1E0h]
  __int64 v91; // [rsp+2E8h] [rbp+1E8h]
  _OWORD *v92; // [rsp+2F0h] [rbp+1F0h]
  __int64 v93; // [rsp+2F8h] [rbp+1F8h]
  __int64 *v94; // [rsp+300h] [rbp+200h]
  __int64 v95; // [rsp+308h] [rbp+208h]

  v2 = *(_QWORD *)(SpinLock + 288);
  v33 = 0;
  v32 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SpinLock);
  if ( (*(_DWORD *)(SpinLock + 8) & 2) != 0 )
    SshpStopBlockerAccounting(SpinLock, MEMORY[0xFFFFF78000000008], 2);
  v6 = *(_OWORD *)(SpinLock + 40);
  v39[0] = *(_OWORD *)(SpinLock + 24);
  v7 = *(_OWORD *)(SpinLock + 56);
  v39[1] = v6;
  v8 = *(_OWORD *)(SpinLock + 72);
  v39[2] = v7;
  v9 = *(_OWORD *)(SpinLock + 88);
  v40[0] = v8;
  v10 = *(_OWORD *)(SpinLock + 104);
  v40[1] = v9;
  v11 = *(_OWORD *)(SpinLock + 120);
  v41 = v10;
  v12 = *(_OWORD *)(SpinLock + 136);
  v42[0] = v11;
  v13 = *(_OWORD *)(SpinLock + 152);
  v42[1] = v12;
  v14 = *(_OWORD *)(SpinLock + 168);
  v43[0] = v13;
  v15 = *(_OWORD *)(SpinLock + 184);
  v43[1] = v14;
  v16 = *(_OWORD *)(SpinLock + 200);
  v43[2] = v15;
  v17 = *(_OWORD *)(SpinLock + 216);
  v44[0] = v16;
  v18 = *(_OWORD *)(SpinLock + 232);
  v44[1] = v17;
  v19 = *(_OWORD *)(SpinLock + 248);
  v45 = v18;
  v20 = *(_OWORD *)(SpinLock + 264);
  v46[0] = v19;
  v46[1] = v20;
  memset((void *)(SpinLock + 24), 0, 0x80uLL);
  memset((void *)(SpinLock + 152), 0, 0x80uLL);
  v21 = *(_DWORD *)(SpinLock + 8) & 4;
  KxReleaseSpinLock((PKSPIN_LOCK)SpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v26 = (v25 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v25;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  v27 = SshpSessionGuid - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  if ( (_QWORD)SshpSessionGuid == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
    v27 = *((_QWORD *)&SshpSessionGuid + 1) - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
  if ( !v27 )
  {
    if ( SshpTraceHandleRegistered && v21 )
    {
      v33 = *(unsigned __int16 *)(v2 + 80) >> 1;
      v32 = SshpSessionId;
      UserData.Ptr = (ULONGLONG)&v32;
      v48 = v2 + 48;
      v50 = &v33;
      *(_QWORD *)&UserData.Size = 1LL;
      v49 = 16LL;
      v51 = 4LL;
      v28 = *(unsigned __int16 *)(v2 + 80);
      v52 = *(_QWORD *)(v2 + 88);
      v55 = v2 + 64;
      v57 = v39;
      v59 = &SshpSessionId;
      v53 = v28;
      v54 = 0;
      v56 = 16LL;
      v58 = 8LL;
      v60 = 8LL;
      LOBYTE(v27) = EtwWriteEx(SshpTraceHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER, 0LL, 0, 0LL, 0LL, 7u, &UserData);
    }
    if ( a2 )
    {
      v27 = 100LL * *(_QWORD *)&v39[0] / a2;
      v29 = v27;
    }
    else
    {
      v29 = 0LL;
    }
    if ( a2 >= SshpSessionThresholdHns )
    {
      LOBYTE(v27) = SshpActiveThresholdPercent;
      if ( v29 >= (unsigned int)SshpActiveThresholdPercent )
      {
        if ( SshpTelemetryHandleRegistered )
        {
          if ( (unsigned int)dword_140C04720 > 5 )
          {
            LOBYTE(v27) = tlgKeywordOn((__int64)&dword_140C04720, 0x400000000000LL);
            if ( (_BYTE)v27 )
            {
              v35 = SshpSessionId;
              v36 = v30;
              v62 = &v35;
              v63 = 8LL;
              v64 = v2 + 48;
              v65 = 16LL;
              v66 = v2 + 64;
              v68 = v71;
              v70 = *(_QWORD *)(v2 + 88);
              v71[0] = *(unsigned __int16 *)(v2 + 80);
              v34 = *(_DWORD *)(v2 + 40);
              v72 = &v34;
              v74 = &v36;
              v76 = (char *)&v41 + 8;
              v78 = (char *)v39 + 8;
              v80 = (char *)v42 + 12;
              v82 = v40;
              v37 = *(_QWORD *)&v43[0];
              v84 = &v37;
              v86 = (char *)&v45 + 8;
              v88 = (char *)v43 + 8;
              v90 = (char *)v46 + 12;
              v92 = v44;
              v94 = &v38;
              v67 = 16LL;
              v69 = 2LL;
              v71[1] = 0;
              v73 = 4LL;
              v75 = 8LL;
              v77 = 20LL;
              v79 = 40LL;
              v81 = 20LL;
              v83 = 40LL;
              v85 = 8LL;
              v87 = 20LL;
              v89 = 40LL;
              v91 = 20LL;
              v93 = 40LL;
              v38 = 0x1000000LL;
              v95 = 8LL;
              LOBYTE(v27) = tlgWriteTransfer_EtwWriteTransfer(
                              (__int64)&dword_140C04720,
                              (unsigned __int8 *)&word_14002AA4E,
                              0LL,
                              0LL,
                              0x13u,
                              &v61);
            }
          }
        }
      }
    }
  }
  return v27;
}
