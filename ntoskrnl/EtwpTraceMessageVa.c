/*
 * XREFs of EtwpTraceMessageVa @ 0x140205450
 * Callers:
 *     WmiTraceMessage @ 0x1402051F0 (WmiTraceMessage.c)
 *     NtTraceEvent @ 0x140230D30 (NtTraceEvent.c)
 *     WmiTraceMessageVa @ 0x140460310 (WmiTraceMessageVa.c)
 * Callees:
 *     EtwpOpenLogger @ 0x140205B30 (EtwpOpenLogger.c)
 *     EtwpReleaseTraceBuffer @ 0x140205BD8 (EtwpReleaseTraceBuffer.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402331B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpUpdateEventsLostCount @ 0x1402FAD84 (EtwpUpdateEventsLostCount.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x1402FF40C (EtwpGetReserveTraceBufferStatus.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     EtwpReserveTraceBuffer @ 0x1403151E0 (EtwpReserveTraceBuffer.c)
 *     EtwpSendTraceEvent @ 0x14039D2E8 (EtwpSendTraceEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     EtwpTraceLostWppEvent @ 0x1405FA3B8 (EtwpTraceLostWppEvent.c)
 *     EtwpInvokeEventCallback @ 0x1405FEBA4 (EtwpInvokeEventCallback.c)
 */

__int64 __fastcall EtwpTraceMessageVa(
        unsigned __int64 a1,
        __int64 a2,
        LONG *a3,
        unsigned __int16 a4,
        __int64 a5,
        unsigned __int8 a6)
{
  char v7; // r12
  unsigned __int16 v8; // r9
  __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  __int64 v11; // r13
  unsigned int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // r11
  int v15; // eax
  char v16; // si
  char v17; // r14
  unsigned __int64 v18; // r13
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned int ReserveTraceBufferStatus; // esi
  unsigned __int64 v25; // rcx
  char v26; // r15
  int v27; // r10d
  int v28; // r9d
  int v29; // edx
  int v30; // eax
  int v31; // ecx
  unsigned int v32; // r12d
  __int64 v33; // rbx
  signed __int32 v34; // edx
  __int64 v35; // r10
  volatile signed __int32 *v36; // rax
  unsigned __int64 v37; // r8
  __int16 v38; // cx
  signed __int32 *v39; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  int *v41; // rbx
  unsigned __int64 v42; // rdi
  char *v43; // rdx
  size_t v44; // r15
  int v45; // r9d
  unsigned __int8 v46; // di
  BOOLEAN v48; // al
  __int64 v49; // rbx
  char v50; // [rsp+30h] [rbp-108h]
  char v51; // [rsp+31h] [rbp-107h]
  unsigned int v52; // [rsp+34h] [rbp-104h]
  char v53[4]; // [rsp+38h] [rbp-100h] BYREF
  unsigned int v54; // [rsp+3Ch] [rbp-FCh]
  unsigned __int8 v55; // [rsp+40h] [rbp-F8h]
  unsigned __int8 v56; // [rsp+48h] [rbp-F0h]
  unsigned __int16 v57; // [rsp+50h] [rbp-E8h]
  int v58; // [rsp+54h] [rbp-E4h]
  int *v59; // [rsp+58h] [rbp-E0h]
  __int64 v60; // [rsp+60h] [rbp-D8h]
  __int64 v61; // [rsp+68h] [rbp-D0h]
  __int64 v62; // [rsp+70h] [rbp-C8h]
  int CycleTime; // [rsp+78h] [rbp-C0h]
  int CurrentRunTime; // [rsp+7Ch] [rbp-BCh]
  __int64 v65; // [rsp+80h] [rbp-B8h]
  unsigned __int64 v66; // [rsp+88h] [rbp-B0h]
  unsigned __int64 v67; // [rsp+90h] [rbp-A8h]
  int v68; // [rsp+98h] [rbp-A0h]
  int v69; // [rsp+9Ch] [rbp-9Ch]
  __int64 v70; // [rsp+A0h] [rbp-98h] BYREF
  unsigned __int64 v71; // [rsp+A8h] [rbp-90h]
  __int64 v72; // [rsp+B0h] [rbp-88h]
  LONG *p_LockNV; // [rsp+B8h] [rbp-80h]
  unsigned __int64 v74; // [rsp+C0h] [rbp-78h]
  _DWORD *v75; // [rsp+C8h] [rbp-70h]
  __int128 v76; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v77; // [rsp+E0h] [rbp-58h]
  __int128 v78; // [rsp+E8h] [rbp-50h] BYREF

  v57 = a4;
  p_LockNV = a3;
  v7 = a2;
  v8 = a1;
  v67 = a1;
  v9 = a5;
  v55 = a6;
  v56 = a6;
  v76 = 0LL;
  v77 = 0LL;
  v53[0] = 0;
  v78 = 0LL;
  v58 = 0;
  v52 = 0;
  v70 = 0LL;
  v10 = 0LL;
  v66 = 0LL;
  v71 = 0LL;
  if ( a6 )
    v11 = *(_QWORD *)(PsGetCurrentServerSiloGlobals(a1, a2, a3, a1) + 864);
  else
    v11 = EtwpHostSiloState;
  v72 = v11;
  v60 = v11;
  v12 = v8;
  v54 = v8;
  if ( (unsigned int)v8 >= *(_DWORD *)(v11 + 16) )
    return (unsigned int)-1073741816;
  v13 = EtwpOpenLogger(v8, v11, a6, v53);
  v14 = v13;
  v61 = v13;
  if ( !v13 )
    return (unsigned int)-1073741816;
  v75 = (_DWORD *)(v13 + 12);
  v15 = *(_DWORD *)(v13 + 12);
  if ( (v15 & 0x80u) == 0 )
  {
    if ( !a6 && (v15 & 0x1000000) != 0 )
    {
      ReserveTraceBufferStatus = -1073741637;
      v52 = -1073741637;
      goto LABEL_86;
    }
    v62 = 0LL;
    v16 = v7 & 0x40;
    v50 = v7 & 0x40;
    v17 = v7 & 0x80;
    v51 = v7 & 0x80;
    if ( (v7 & 0x40) != 0 )
    {
      if ( !HIDWORD(v67) )
      {
        ReserveTraceBufferStatus = -1073741306;
        v52 = -1073741306;
        v12 = v54;
        goto LABEL_86;
      }
      v10 = a5 + HIDWORD(v67);
      v66 = v10;
      v71 = v10;
    }
    v18 = 0LL;
    v67 = 0LL;
    v19 = a5;
    v62 = a5;
    while ( 1 )
    {
      if ( v16 )
      {
        if ( v17 )
        {
          v25 = v19 + 4;
          v21 = v25;
          if ( v25 > v10 )
          {
            ReserveTraceBufferStatus = -1073741306;
            v52 = -1073741306;
            v12 = v54;
            v11 = v60;
            goto LABEL_86;
          }
          v62 = v25;
          v22 = *(unsigned int *)(v25 - 4);
        }
        else
        {
          v20 = v19 + 8;
          v21 = v20;
          if ( v20 > v10 )
          {
            ReserveTraceBufferStatus = -1073741306;
            v52 = -1073741306;
            v12 = v54;
            v11 = v60;
            goto LABEL_86;
          }
          v62 = v20;
          v22 = *(_QWORD *)(v20 - 8);
        }
      }
      else
      {
        v21 = v19 + 8;
        v62 = v21;
        v22 = *(_QWORD *)(v21 - 8);
      }
      if ( !v22 )
        break;
      if ( v16 && v17 )
      {
        v19 = v21 + 4;
        v23 = *(unsigned int *)(v19 - 4);
      }
      else
      {
        v19 = v21 + 8;
        v23 = *(_QWORD *)(v19 - 8);
      }
      v62 = v19;
      if ( v23 )
      {
        v18 += v23;
        v67 = v18;
        if ( v18 < v23 )
        {
          ReserveTraceBufferStatus = -1073741675;
          v52 = -1073741675;
          v12 = v54;
          v11 = v60;
          goto LABEL_86;
        }
      }
    }
    v78 = *(_OWORD *)a3;
    v26 = v7 & 0xFE;
    if ( *(_QWORD *)(v14 + 264) )
      v26 = v7;
    v27 = v26 & 1;
    v68 = v27;
    CycleTime = v26 & 2;
    if ( (v26 & 2) != 0 )
      v28 = 16;
    else
      v28 = 0;
    v69 = v26 & 4;
    if ( (v26 & 4) != 0 )
      v29 = 4;
    else
      v29 = 0;
    v30 = 8;
    if ( (v26 & 0x18) != 0 )
      v31 = 8;
    else
      v31 = 0;
    CurrentRunTime = v26 & 0x20;
    if ( (v26 & 0x20) == 0 )
      v30 = 0;
    v32 = v18 + v28 + v29 + v31 + v30 + 4 * (v27 + 2);
    if ( v18 > v32 )
    {
      ReserveTraceBufferStatus = -1073741306;
      v52 = -1073741306;
      v48 = EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_WPP_EVENT);
      v49 = v61;
      if ( v48 )
        EtwpTraceLostWppEvent(&v78, v57, v61 + 136, 3221225990LL);
      EtwpUpdateEventsLostCount(v49);
    }
    else
    {
      v33 = EtwpReserveTraceBuffer(v14, v32, (unsigned int)&v76, (unsigned int)&v70, 0);
      v34 = 0;
      v35 = v61;
      v36 = *(volatile signed __int32 **)(v61 + 264);
      if ( v36 )
      {
        v34 = _InterlockedIncrement(v36);
        v18 = v67;
        v58 = 0;
        v16 = v50;
        v37 = v71;
        v66 = v71;
        v17 = v51;
      }
      else
      {
        v37 = v66;
      }
      if ( v33 )
      {
        *(_DWORD *)v33 = -1879048192;
        *(_WORD *)v33 = v32;
        *(_WORD *)(v33 + 4) = v57;
        if ( v17 )
          v38 = 64;
        else
          v38 = 128;
        *(_WORD *)(v33 + 6) = v38 | v26 & 0x3F;
        v39 = (signed __int32 *)(v33 + 8);
        v59 = v39;
        if ( v68 )
        {
          *v39++ = v34;
          v59 = v39;
        }
        if ( v69 )
        {
          *v39++ = *p_LockNV;
        }
        else
        {
          if ( !CycleTime )
            goto LABEL_53;
          *(_OWORD *)v39 = *(_OWORD *)p_LockNV;
          v39 += 4;
        }
        v59 = v39;
LABEL_53:
        if ( (v26 & 8) != 0 )
        {
          *(_QWORD *)v39 = v70;
          v39 += 2;
          v59 = v39;
        }
        if ( CurrentRunTime )
        {
          CurrentThread = KeGetCurrentThread();
          p_LockNV = &CurrentThread->Header.LockNV;
          CurrentRunTime = CurrentThread[1].CurrentRunTime;
          v41 = v59;
          *v59 = CurrentRunTime;
          v59 = ++v41;
          CycleTime = CurrentThread[1].CycleTime;
          *v41 = CycleTime;
          v39 = v41 + 1;
          v59 = v39;
          v18 = v67;
          v58 = 0;
          v16 = v50;
          v37 = v71;
          v66 = v71;
          v17 = v51;
        }
        v74 = v18;
        v65 = a5;
        while ( 1 )
        {
          do
          {
            if ( v16 && v17 )
            {
              v42 = v9 + 4;
              v43 = (char *)*(unsigned int *)(v42 - 4);
            }
            else
            {
              v42 = v9 + 8;
              v43 = *(char **)(v42 - 8);
            }
            v65 = v42;
            if ( !v43 )
            {
              v45 = v58;
              goto LABEL_80;
            }
            if ( !v16 )
              goto LABEL_65;
            if ( v42 >= v37 )
            {
              v45 = -1073741306;
              v58 = -1073741306;
              v52 = -1073741306;
              goto LABEL_80;
            }
            if ( v17 )
            {
              v9 = v42 + 4;
              v44 = *(unsigned int *)(v9 - 4);
            }
            else
            {
LABEL_65:
              v9 = v42 + 8;
              v44 = *(_QWORD *)(v9 - 8);
            }
            v65 = v9;
          }
          while ( !v44 );
          if ( v44 > v18 )
            break;
          if ( v16 && ((unsigned __int64)&v43[v44] > 0x7FFFFFFF0000LL || &v43[v44] < v43) )
            MEMORY[0x7FFFFFFF0000] = 0;
          memmove(v39, v43, v44);
          v18 -= v44;
          v74 = v18;
          v39 = (signed __int32 *)((char *)v39 + v44);
          v59 = v39;
          v37 = v66;
        }
        v45 = -1073741306;
        v58 = -1073741306;
        v52 = -1073741306;
LABEL_80:
        v11 = v60;
        v46 = v55;
        if ( v45 >= 0 )
        {
          if ( (*v75 & 0x80000) != 0 && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
            EtwpSendTraceEvent(v61, &v76, v37);
          if ( *(_QWORD *)(v61 + 1288) )
            EtwpInvokeEventCallback(v61, &v76, &v78, v46);
        }
        EtwpReleaseTraceBuffer(&v76, v43, v37);
        ReserveTraceBufferStatus = v58;
        goto LABEL_85;
      }
      ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v35, v32, v37);
      v52 = ReserveTraceBufferStatus;
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_WPP_EVENT) )
        EtwpTraceLostWppEvent(&v78, v57, v61 + 136, ReserveTraceBufferStatus);
    }
    v11 = v60;
LABEL_85:
    v12 = v54;
    goto LABEL_86;
  }
  ReserveTraceBufferStatus = -1073741790;
  v52 = -1073741790;
LABEL_86:
  if ( v53[0] )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v11 + 448) + 8LL * v12), 1u);
    KeLeaveCriticalRegionThread(KeGetCurrentThread());
    return v52;
  }
  return ReserveTraceBufferStatus;
}
