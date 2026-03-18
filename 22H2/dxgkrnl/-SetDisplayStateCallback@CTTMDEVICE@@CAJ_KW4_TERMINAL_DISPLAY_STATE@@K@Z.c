/*
 * XREFs of ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x1C0355B10
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     memmove @ 0x1C0028340 (memmove.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01EFB34 (DxgkPowerOnOffMonitor.c)
 *     ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z @ 0x1C03A1FE8 (-DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z.c)
 */

__int64 __fastcall CTTMDEVICE::SetDisplayStateCallback(struct _EX_RUNDOWN_REF *a1, int a2, unsigned int a3)
{
  __int64 v3; // rdi
  struct _DEVICE_OBJECT *Count; // r15
  __int64 v6; // r12
  __int64 v7; // rcx
  DXGSESSIONMGR *v8; // rsi
  unsigned int v9; // eax
  struct DXGSESSIONDATA *v10; // rsi
  unsigned int v11; // eax
  unsigned int v12; // r14d
  int v14; // ecx
  unsigned int v15; // r14d
  unsigned int v16; // r14d
  unsigned __int64 v17; // rax
  __int16 v18; // ax
  __int64 v19; // rcx
  struct _EX_RUNDOWN_REF **v20; // rax
  unsigned int v21; // edx
  unsigned int v22; // edi
  unsigned int v23; // ebx
  unsigned int *v24; // rsi
  struct _EX_RUNDOWN_REF *v25; // r9
  __int64 v26; // rax
  __int64 v27; // r8
  struct _EX_RUNDOWN_REF *v28; // rax
  struct _EX_RUNDOWN_REF *v29; // r8
  unsigned int v30; // edx
  struct _EX_RUNDOWN_REF *v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // eax
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rbx
  const wchar_t *v38; // r9
  unsigned int *v39; // rcx
  int v40; // eax
  __int64 v41; // rdi
  int v42; // eax
  __int64 v43; // rax
  struct _EX_RUNDOWN_REF **v44; // rdi
  struct _EX_RUNDOWN_REF *v45; // r9
  __int64 v46; // r8
  unsigned int CurrentProcessSessionId; // eax
  __int64 v48; // rcx
  unsigned int v49; // eax
  int v50; // [rsp+50h] [rbp-B0h]
  int v51; // [rsp+54h] [rbp-ACh]
  int v52; // [rsp+58h] [rbp-A8h]
  struct _EX_RUNDOWN_REF *v53; // [rsp+60h] [rbp-A0h]
  unsigned int v54; // [rsp+60h] [rbp-A0h]
  struct _EX_RUNDOWN_REF **v55; // [rsp+68h] [rbp-98h]
  unsigned int *v56; // [rsp+68h] [rbp-98h]
  __int64 v57; // [rsp+68h] [rbp-98h]
  unsigned int v58; // [rsp+70h] [rbp-90h]
  unsigned int v59; // [rsp+70h] [rbp-90h]
  struct _EX_RUNDOWN_REF *v60; // [rsp+78h] [rbp-88h] BYREF
  struct _EX_RUNDOWN_REF **v61; // [rsp+80h] [rbp-80h]
  void *v62; // [rsp+88h] [rbp-78h]
  int v63; // [rsp+90h] [rbp-70h] BYREF
  int v64; // [rsp+94h] [rbp-6Ch] BYREF
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // [rsp+98h] [rbp-68h]
  _QWORD v66[10]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v67[10]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v68[16]; // [rsp+140h] [rbp+40h] BYREF

  v3 = a3;
  Count = 0LL;
  v62 = v68;
  v60 = 0LL;
  v6 = a2;
  v50 = 4;
  v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v8
    || (v9 = PsGetCurrentProcessSessionId(v7),
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v8, v9),
        (v10 = SessionDataForSpecifiedSession) == 0LL) )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7);
    v12 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v49 = PsGetCurrentProcessSessionId(v48);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for current session 0x%I64x, returning 0x%I64x.",
      v49,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return v12;
  }
  if ( a1 == (struct _EX_RUNDOWN_REF *)0xFFFFFFFFLL )
  {
    v33 = *((_DWORD *)SessionDataForSpecifiedSession + 4656);
    if ( v33 != (_DWORD)v3 )
    {
      WdLogSingleEntry2(2LL, v33, v3);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Batch sequence numbers are not match (0x%I64x : 0x%I64x).",
        *((unsigned int *)SessionDataForSpecifiedSession + 4656),
        v3,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_DWORD *)SessionDataForSpecifiedSession + 4657) != (_DWORD)v6 )
    {
      WdLogSingleEntry2(2LL, *((int *)SessionDataForSpecifiedSession + 4657), v6);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"The display state from batch is not same as the one from flush (0x%I64x : 0x%I64x).",
        *((int *)SessionDataForSpecifiedSession + 4657),
        v6,
        0LL,
        0LL,
        0LL);
      LODWORD(v6) = *((_DWORD *)SessionDataForSpecifiedSession + 4657);
    }
    goto LABEL_48;
  }
  if ( *((_WORD *)SessionDataForSpecifiedSession + 9317) )
  {
    v11 = *((_DWORD *)SessionDataForSpecifiedSession + 4656);
    if ( v11 != (_DWORD)v3 )
    {
      v12 = -1073741811;
      WdLogSingleEntry3(2LL, v11, v3, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Batch sequence numbers are not match (0x%I64x : 0x%I64x), returning 0x%I64x.",
        *((unsigned int *)SessionDataForSpecifiedSession + 4656),
        v3,
        -1073741811LL,
        0LL,
        0LL);
      return v12;
    }
    if ( *((_DWORD *)SessionDataForSpecifiedSession + 4657) != (_DWORD)v6 )
    {
      v12 = -1073741811;
      WdLogSingleEntry3(2LL, *((int *)SessionDataForSpecifiedSession + 4657), v6, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Batch does not share same display state (0x%I64x : 0x%I64x), returning 0x%I64x.",
        *((int *)SessionDataForSpecifiedSession + 4657),
        v6,
        -1073741811LL,
        0LL,
        0LL);
      return v12;
    }
  }
  else
  {
    *((_DWORD *)SessionDataForSpecifiedSession + 4656) = v3;
    *((_DWORD *)v10 + 4657) = v6;
  }
  v60 = a1;
  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 6256LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pThis != NULL", 6256LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !ExAcquireRundownProtection(a1 + 6) )
    return 3221226166LL;
  v14 = *((unsigned __int16 *)v10 + 9317);
  v15 = *((unsigned __int16 *)v10 + 9316);
  if ( v15 > v14 + 1 )
  {
LABEL_23:
    *(_QWORD *)(*((_QWORD *)v10 + 2330) + 8LL * (unsigned __int16)v14) = a1;
    ++*((_WORD *)v10 + 9317);
    return 0LL;
  }
  v16 = v15 + 4;
  if ( v16 >= 0xFFFF )
  {
    WdLogSingleEntry1(3LL, v16);
    goto LABEL_25;
  }
  v17 = 8LL * v16;
  if ( !is_mul_ok(v16, 8uLL) )
    v17 = -1LL;
  Count = (struct _DEVICE_OBJECT *)operator new[](v17, 0x4B677844u, 256LL);
  if ( Count )
  {
    v18 = *((_WORD *)v10 + 9317);
    if ( v18 )
    {
      memmove(Count, *((const void **)v10 + 2330), 8LL * *((unsigned __int16 *)v10 + 9317));
      operator delete(*((void **)v10 + 2330));
      v18 = *((_WORD *)v10 + 9317);
    }
    *((_WORD *)v10 + 9316) = v16;
    LOWORD(v14) = v18;
    *((_QWORD *)v10 + 2330) = Count;
    goto LABEL_23;
  }
  WdLogSingleEntry1(6LL, v16);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate new batch buffer, size = 0x%I64x.",
    v16,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_25:
  v19 = *((_QWORD *)v10 + 2330);
  if ( !v19 )
  {
    v20 = &v60;
    v51 = 1;
    v61 = &v60;
    goto LABEL_27;
  }
  *(_QWORD *)(v19 + 8LL * (unsigned __int16)(*((_WORD *)v10 + 9317))++) = a1;
LABEL_48:
  v20 = (struct _EX_RUNDOWN_REF **)*((_QWORD *)v10 + 2330);
  v34 = *((unsigned __int16 *)v10 + 9317);
  v61 = v20;
  v51 = v34;
  if ( (unsigned int)v34 > 4 )
  {
    v35 = 4 * v34;
    if ( !is_mul_ok(v34, 4uLL) )
      v35 = -1LL;
    v62 = (void *)operator new[](v35, 0x4B677844u, 256LL);
    if ( v62 )
    {
      v20 = v61;
      v21 = v34;
      v50 = v34;
      v51 = v34;
      goto LABEL_28;
    }
    WdLogSingleEntry1(6LL, (unsigned int)v34);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate new batch buffer, size = 0x%I64x.",
      v34,
      0LL,
      0LL,
      0LL,
      0LL);
    v51 = v34;
    v62 = v68;
    v20 = v61;
  }
LABEL_27:
  v21 = 4;
LABEL_28:
  v22 = v51;
  v58 = 0;
  v12 = -1073741637;
  v52 = -1073741637;
  v23 = 0;
  if ( !v51 )
    goto LABEL_83;
  v24 = (unsigned int *)v62;
  while ( 1 )
  {
    v55 = v20;
    do
    {
      if ( v23 >= v21 )
        break;
      v25 = *v20;
      v60 = v25;
      if ( v25 && (!Count || (struct _DEVICE_OBJECT *)v25[9].Count == Count) )
      {
        v26 = _InterlockedExchangeAdd((volatile signed __int32 *)&v25[78], 1u) & 0x1F;
        v27 = (unsigned int)v26;
        HIDWORD(v25[v26 + 78].Ptr) = v6;
        v28 = v60 + 111;
        LODWORD(v25[v27 + 79].Count) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
        v53 = v28;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v53, 0LL);
        v29 = v53;
        v30 = 0;
        for ( v53[1].Count = (ULONG_PTR)KeGetCurrentThread(); v30 < v23; ++v30 )
        {
          if ( v24[v30] == LODWORD(v60[10].Count) )
            break;
        }
        v31 = v60;
        if ( LOBYTE(v60[114].Count) || v30 < v23 )
        {
          v53[1].Count = 0LL;
          ExReleasePushLockExclusiveEx(v53, 0LL);
          KeLeaveCriticalRegion();
          ExReleaseRundownProtection(v60 + 6);
          v20 = v55;
          *v55 = 0LL;
        }
        else
        {
          if ( !Count )
          {
            Count = (struct _DEVICE_OBJECT *)v60[9].Count;
            ObfReferenceObject(Count);
            v31 = v60;
            v29 = v53;
          }
          HIDWORD(v31[114].Ptr) = v6;
          v32 = v23++;
          v24[v32] = v31[10].Count;
          v29[1].Count = 0LL;
          ExReleasePushLockExclusiveEx(v29, 0LL);
          KeLeaveCriticalRegion();
          v20 = v55;
        }
        v21 = v50;
      }
      v55 = ++v20;
      ++v58;
    }
    while ( v58 < v22 );
    v54 = v23;
    if ( !Count )
      break;
    if ( (unsigned int)v6 < 2 )
    {
      memset(v67, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v67[1]);
      v67[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v67[3]) = 54;
      LOBYTE(v67[6]) = -1;
      v64 = 4;
      v42 = DxgkPowerOnOffMonitor((__int64)Count, v23, v24, &v64, 0, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v67);
      v52 = v42;
      if ( v42 < 0 )
      {
        v37 = v42;
        WdLogSingleEntry2(2LL, Count, v42);
        v38 = L"Failed to power off monitors on device 0x%I64x, (Status = 0x%I64x).";
LABEL_72:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v38, (__int64)Count, v37, 0LL, 0LL, 0LL);
LABEL_73:
        v23 = v54;
      }
    }
    else if ( (_DWORD)v6 == 2 )
    {
      v59 = 0;
      if ( v23 )
      {
        v39 = v24;
        v56 = v24;
        while ( 1 )
        {
          v40 = DpiBrightnessNotifyMonitorDimming(Count, *v39, 0);
          v52 = v40;
          if ( v40 < 0 )
            break;
          v39 = v56 + 1;
          ++v59;
          ++v56;
          if ( v59 >= v23 )
            goto LABEL_74;
        }
        v41 = v40;
        WdLogSingleEntry3(2LL, v24[v59], Count, v40);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to notify brightness dimming on target 0x%I64x from device 0x%I64x, (Status = 0x%I64x).",
          v24[v59],
          (__int64)Count,
          v41,
          0LL,
          0LL);
        v22 = v51;
        goto LABEL_73;
      }
    }
    else
    {
      if ( (_DWORD)v6 != 3 )
      {
        v52 = -1073741811;
        WdLogSingleEntry2(2LL, (int)v6, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Receieved unknown TTM display State 0x%I64x, returning 0x%I64x.",
          (int)v6,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_73;
      }
      memset(v66, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v66[1]);
      v66[8] = MEMORY[0xFFFFF78000000014];
      v63 = 1;
      LODWORD(v66[3]) = 55;
      LOBYTE(v66[6]) = -1;
      v36 = DxgkPowerOnOffMonitor((__int64)Count, v23, v24, &v63, 0, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v66);
      v52 = v36;
      if ( v36 < 0 )
      {
        v37 = v36;
        WdLogSingleEntry2(2LL, Count, v36);
        v38 = L"Failed to power on monitors on device 0x%I64x, (Status = 0x%I64x).";
        goto LABEL_72;
      }
    }
LABEL_74:
    v43 = v22;
    v44 = v61;
    v57 = v43;
    do
    {
      v45 = *v44;
      if ( *v44 && (struct _DEVICE_OBJECT *)v45[9].Count == Count )
      {
        v46 = _InterlockedExchangeAdd((volatile signed __int32 *)&v45[78], 1u) & 0x1F;
        HIDWORD(v45[v46 + 78].Ptr) = v6 | 0x80000000;
        LODWORD(v45[v46 + 79].Count) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
        ExReleaseRundownProtection(*v44 + 6);
        v43 = v57;
        *v44 = 0LL;
        --v23;
      }
      ++v44;
      v57 = --v43;
    }
    while ( v43 );
    v22 = v51;
    v24 = (unsigned int *)v62;
    if ( v23 )
    {
      WdLogSingleEntry1(1LL, 6615LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"j == 0", 6615LL, 0LL, 0LL, 0LL, 0LL);
    }
    ObfDereferenceObject(Count);
    v20 = v61;
    v21 = v50;
    Count = 0LL;
    v58 = 0;
    v23 = 0;
  }
  v10 = SessionDataForSpecifiedSession;
  v12 = v52;
LABEL_83:
  if ( v62 != v68 )
    operator delete(v62);
  *((_WORD *)v10 + 9317) = 0;
  return v12;
}
