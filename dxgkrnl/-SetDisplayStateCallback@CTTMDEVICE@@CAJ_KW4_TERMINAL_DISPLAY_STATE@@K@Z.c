__int64 __fastcall CTTMDEVICE::SetDisplayStateCallback(struct _EX_RUNDOWN_REF *a1, int a2, unsigned int a3)
{
  __int64 v3; // rdi
  struct _DEVICE_OBJECT *Count; // r15
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  struct DXGSESSIONDATA *v13; // rsi
  unsigned int v14; // eax
  unsigned int v15; // r14d
  int v17; // ecx
  unsigned int v18; // r14d
  unsigned int v19; // r14d
  unsigned __int64 v20; // rax
  __int16 v21; // ax
  __int64 v22; // rcx
  struct _EX_RUNDOWN_REF **v23; // rax
  unsigned int v24; // edx
  unsigned int v25; // edi
  unsigned int v26; // ebx
  unsigned int *v27; // rsi
  struct _EX_RUNDOWN_REF *v28; // r9
  __int64 v29; // rax
  __int64 v30; // r8
  struct _EX_RUNDOWN_REF *v31; // rax
  struct _EX_RUNDOWN_REF *v32; // r8
  unsigned int v33; // edx
  struct _EX_RUNDOWN_REF *v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // eax
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rbx
  const wchar_t *v41; // r9
  unsigned int *v42; // rcx
  int v43; // eax
  __int64 v44; // rdi
  int v45; // eax
  __int64 v46; // rax
  struct _EX_RUNDOWN_REF **v47; // rdi
  struct _EX_RUNDOWN_REF *v48; // r9
  __int64 v49; // r8
  unsigned int CurrentProcessSessionId; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned int v55; // eax
  int v56; // [rsp+50h] [rbp-B0h]
  int v57; // [rsp+54h] [rbp-ACh]
  int v58; // [rsp+58h] [rbp-A8h]
  struct _EX_RUNDOWN_REF *v59; // [rsp+60h] [rbp-A0h]
  unsigned int v60; // [rsp+60h] [rbp-A0h]
  struct _EX_RUNDOWN_REF **v61; // [rsp+68h] [rbp-98h]
  unsigned int *v62; // [rsp+68h] [rbp-98h]
  __int64 v63; // [rsp+68h] [rbp-98h]
  unsigned int v64; // [rsp+70h] [rbp-90h]
  unsigned int v65; // [rsp+70h] [rbp-90h]
  struct _EX_RUNDOWN_REF *v66; // [rsp+78h] [rbp-88h] BYREF
  struct _EX_RUNDOWN_REF **v67; // [rsp+80h] [rbp-80h]
  void *v68; // [rsp+88h] [rbp-78h]
  int v69; // [rsp+90h] [rbp-70h] BYREF
  int v70; // [rsp+94h] [rbp-6Ch] BYREF
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // [rsp+98h] [rbp-68h]
  _QWORD v72[10]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v73[10]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v74[16]; // [rsp+140h] [rbp+40h] BYREF

  v3 = a3;
  Count = 0LL;
  v68 = v74;
  v66 = 0LL;
  v6 = a2;
  v56 = 4;
  v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v9
    || (v12 = PsGetCurrentProcessSessionId(v8, v7, v10, v11),
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, v12),
        (v13 = SessionDataForSpecifiedSession) == 0LL) )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8, v7, v10, v11);
    v15 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v55 = PsGetCurrentProcessSessionId(v52, v51, v53, v54);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for current session 0x%I64x, returning 0x%I64x.",
      v55,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return v15;
  }
  if ( a1 == (struct _EX_RUNDOWN_REF *)0xFFFFFFFFLL )
  {
    v36 = *((_DWORD *)SessionDataForSpecifiedSession + 4656);
    if ( v36 != (_DWORD)v3 )
    {
      WdLogSingleEntry2(2LL, v36, v3);
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
    v14 = *((_DWORD *)SessionDataForSpecifiedSession + 4656);
    if ( v14 != (_DWORD)v3 )
    {
      v15 = -1073741811;
      WdLogSingleEntry3(2LL, v14, v3, -1073741811LL);
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
      return v15;
    }
    if ( *((_DWORD *)SessionDataForSpecifiedSession + 4657) != (_DWORD)v6 )
    {
      v15 = -1073741811;
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
      return v15;
    }
  }
  else
  {
    *((_DWORD *)SessionDataForSpecifiedSession + 4656) = v3;
    *((_DWORD *)v13 + 4657) = v6;
  }
  v66 = a1;
  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 6256LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pThis != NULL", 6256LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !ExAcquireRundownProtection(a1 + 6) )
    return 3221226166LL;
  v17 = *((unsigned __int16 *)v13 + 9317);
  v18 = *((unsigned __int16 *)v13 + 9316);
  if ( v18 > v17 + 1 )
  {
LABEL_23:
    *(_QWORD *)(*((_QWORD *)v13 + 2330) + 8LL * (unsigned __int16)v17) = a1;
    ++*((_WORD *)v13 + 9317);
    return 0LL;
  }
  v19 = v18 + 4;
  if ( v19 >= 0xFFFF )
  {
    WdLogSingleEntry1(3LL, v19);
    goto LABEL_25;
  }
  v20 = 8LL * v19;
  if ( !is_mul_ok(v19, 8uLL) )
    v20 = -1LL;
  Count = (struct _DEVICE_OBJECT *)operator new[](v20, 0x4B677844u, 256LL);
  if ( Count )
  {
    v21 = *((_WORD *)v13 + 9317);
    if ( v21 )
    {
      memmove(Count, *((const void **)v13 + 2330), 8LL * *((unsigned __int16 *)v13 + 9317));
      operator delete(*((void **)v13 + 2330));
      v21 = *((_WORD *)v13 + 9317);
    }
    *((_WORD *)v13 + 9316) = v19;
    LOWORD(v17) = v21;
    *((_QWORD *)v13 + 2330) = Count;
    goto LABEL_23;
  }
  WdLogSingleEntry1(6LL, v19);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate new batch buffer, size = 0x%I64x.",
    v19,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_25:
  v22 = *((_QWORD *)v13 + 2330);
  if ( !v22 )
  {
    v23 = &v66;
    v57 = 1;
    v67 = &v66;
    goto LABEL_27;
  }
  *(_QWORD *)(v22 + 8LL * (unsigned __int16)(*((_WORD *)v13 + 9317))++) = a1;
LABEL_48:
  v23 = (struct _EX_RUNDOWN_REF **)*((_QWORD *)v13 + 2330);
  v37 = *((unsigned __int16 *)v13 + 9317);
  v67 = v23;
  v57 = v37;
  if ( (unsigned int)v37 > 4 )
  {
    v38 = 4 * v37;
    if ( !is_mul_ok(v37, 4uLL) )
      v38 = -1LL;
    v68 = (void *)operator new[](v38, 0x4B677844u, 256LL);
    if ( v68 )
    {
      v23 = v67;
      v24 = v37;
      v56 = v37;
      v57 = v37;
      goto LABEL_28;
    }
    WdLogSingleEntry1(6LL, (unsigned int)v37);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate new batch buffer, size = 0x%I64x.",
      v37,
      0LL,
      0LL,
      0LL,
      0LL);
    v57 = v37;
    v68 = v74;
    v23 = v67;
  }
LABEL_27:
  v24 = 4;
LABEL_28:
  v25 = v57;
  v64 = 0;
  v15 = -1073741637;
  v58 = -1073741637;
  v26 = 0;
  if ( !v57 )
    goto LABEL_83;
  v27 = (unsigned int *)v68;
  while ( 1 )
  {
    v61 = v23;
    do
    {
      if ( v26 >= v24 )
        break;
      v28 = *v23;
      v66 = v28;
      if ( v28 && (!Count || (struct _DEVICE_OBJECT *)v28[9].Count == Count) )
      {
        v29 = _InterlockedExchangeAdd((volatile signed __int32 *)&v28[78], 1u) & 0x1F;
        v30 = (unsigned int)v29;
        HIDWORD(v28[v29 + 78].Ptr) = v6;
        v31 = v66 + 111;
        LODWORD(v28[v30 + 79].Count) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
        v59 = v31;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v59, 0LL);
        v32 = v59;
        v33 = 0;
        for ( v59[1].Count = (ULONG_PTR)KeGetCurrentThread(); v33 < v26; ++v33 )
        {
          if ( v27[v33] == LODWORD(v66[10].Count) )
            break;
        }
        v34 = v66;
        if ( LOBYTE(v66[114].Count) || v33 < v26 )
        {
          v59[1].Count = 0LL;
          ExReleasePushLockExclusiveEx(v59, 0LL);
          KeLeaveCriticalRegion();
          ExReleaseRundownProtection(v66 + 6);
          v23 = v61;
          *v61 = 0LL;
        }
        else
        {
          if ( !Count )
          {
            Count = (struct _DEVICE_OBJECT *)v66[9].Count;
            ObfReferenceObject(Count);
            v34 = v66;
            v32 = v59;
          }
          HIDWORD(v34[114].Ptr) = v6;
          v35 = v26++;
          v27[v35] = v34[10].Count;
          v32[1].Count = 0LL;
          ExReleasePushLockExclusiveEx(v32, 0LL);
          KeLeaveCriticalRegion();
          v23 = v61;
        }
        v24 = v56;
      }
      v61 = ++v23;
      ++v64;
    }
    while ( v64 < v25 );
    v60 = v26;
    if ( !Count )
      break;
    if ( (unsigned int)v6 < 2 )
    {
      memset(v73, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v73[1]);
      v73[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v73[3]) = 54;
      LOBYTE(v73[6]) = -1;
      v70 = 4;
      v45 = DxgkPowerOnOffMonitor((__int64)Count, v26, v27, &v70, 0, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v73);
      v58 = v45;
      if ( v45 < 0 )
      {
        v40 = v45;
        WdLogSingleEntry2(2LL, Count, v45);
        v41 = L"Failed to power off monitors on device 0x%I64x, (Status = 0x%I64x).";
LABEL_72:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v41, (__int64)Count, v40, 0LL, 0LL, 0LL);
LABEL_73:
        v26 = v60;
      }
    }
    else if ( (_DWORD)v6 == 2 )
    {
      v65 = 0;
      if ( v26 )
      {
        v42 = v27;
        v62 = v27;
        while ( 1 )
        {
          v43 = DpiBrightnessNotifyMonitorDimming(Count, *v42, 0);
          v58 = v43;
          if ( v43 < 0 )
            break;
          v42 = v62 + 1;
          ++v65;
          ++v62;
          if ( v65 >= v26 )
            goto LABEL_74;
        }
        v44 = v43;
        WdLogSingleEntry3(2LL, v27[v65], Count, v43);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to notify brightness dimming on target 0x%I64x from device 0x%I64x, (Status = 0x%I64x).",
          v27[v65],
          (__int64)Count,
          v44,
          0LL,
          0LL);
        v25 = v57;
        goto LABEL_73;
      }
    }
    else
    {
      if ( (_DWORD)v6 != 3 )
      {
        v58 = -1073741811;
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
      memset(v72, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v72[1]);
      v72[8] = MEMORY[0xFFFFF78000000014];
      v69 = 1;
      LODWORD(v72[3]) = 55;
      LOBYTE(v72[6]) = -1;
      v39 = DxgkPowerOnOffMonitor((__int64)Count, v26, v27, &v69, 0, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v72);
      v58 = v39;
      if ( v39 < 0 )
      {
        v40 = v39;
        WdLogSingleEntry2(2LL, Count, v39);
        v41 = L"Failed to power on monitors on device 0x%I64x, (Status = 0x%I64x).";
        goto LABEL_72;
      }
    }
LABEL_74:
    v46 = v25;
    v47 = v67;
    v63 = v46;
    do
    {
      v48 = *v47;
      if ( *v47 && (struct _DEVICE_OBJECT *)v48[9].Count == Count )
      {
        v49 = _InterlockedExchangeAdd((volatile signed __int32 *)&v48[78], 1u) & 0x1F;
        HIDWORD(v48[v49 + 78].Ptr) = v6 | 0x80000000;
        LODWORD(v48[v49 + 79].Count) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
        ExReleaseRundownProtection(*v47 + 6);
        v46 = v63;
        *v47 = 0LL;
        --v26;
      }
      ++v47;
      v63 = --v46;
    }
    while ( v46 );
    v25 = v57;
    v27 = (unsigned int *)v68;
    if ( v26 )
    {
      WdLogSingleEntry1(1LL, 6615LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"j == 0", 6615LL, 0LL, 0LL, 0LL, 0LL);
    }
    ObfDereferenceObject(Count);
    v23 = v67;
    v24 = v56;
    Count = 0LL;
    v64 = 0;
    v26 = 0;
  }
  v13 = SessionDataForSpecifiedSession;
  v15 = v58;
LABEL_83:
  if ( v68 != v74 )
    operator delete(v68);
  *((_WORD *)v13 + 9317) = 0;
  return v15;
}
