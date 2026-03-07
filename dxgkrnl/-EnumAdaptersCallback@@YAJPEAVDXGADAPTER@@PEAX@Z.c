__int64 __fastcall EnumAdaptersCallback(struct DXGADAPTER *a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcessSessionId; // r14
  _DWORD *v11; // rbx
  volatile signed __int32 *v12; // r13
  __int64 v13; // rcx
  __int64 v14; // r14
  struct DXGPROCESS *Current; // rax
  __int64 v16; // rcx
  struct DXGPROCESS *v17; // r8
  struct DXGADAPTER *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r12
  __int64 v22; // rcx
  int v23; // r14d
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  const CHAR *v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // eax
  struct DXGPROCESS *v33; // rax
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // r13
  __int64 v37; // r12
  __int64 v38; // rcx
  _QWORD **v39; // rbx
  _QWORD *v40; // rcx
  _QWORD *v41; // rdx
  int v42; // eax
  struct DXGPROCESS *v43; // rax
  unsigned int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  unsigned int v49; // eax
  DXGFASTMUTEX *v50; // [rsp+80h] [rbp-39h] BYREF
  char v51; // [rsp+88h] [rbp-31h]
  int v52; // [rsp+90h] [rbp-29h] BYREF
  int v53; // [rsp+94h] [rbp-25h] BYREF
  int v54; // [rsp+98h] [rbp-21h] BYREF
  int v55; // [rsp+9Ch] [rbp-1Dh] BYREF
  int v56; // [rsp+A0h] [rbp-19h] BYREF
  int v57; // [rsp+A4h] [rbp-15h] BYREF
  int v58; // [rsp+A8h] [rbp-11h] BYREF
  int v59; // [rsp+ACh] [rbp-Dh] BYREF
  const CHAR *v60; // [rsp+B0h] [rbp-9h] BYREF
  void *v61; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v62; // [rsp+C0h] [rbp+7h] BYREF
  _DWORD v63[2]; // [rsp+C8h] [rbp+Fh] BYREF
  int *v64; // [rsp+D0h] [rbp+17h]
  __int16 v65; // [rsp+128h] [rbp+6Fh] BYREF
  int v66; // [rsp+130h] [rbp+77h] BYREF
  unsigned int v67; // [rsp+138h] [rbp+7Fh] BYREF

  v4 = 0;
  v7 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v7 )
    goto LABEL_64;
  v51 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v6, v5, v8, v9);
  v50 = (DXGFASTMUTEX *)(v7 + 88);
  if ( v7 == -88 )
  {
    WdLogSingleEntry1(1LL, 592LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)v50 + 3) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 599LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire(v50);
  v51 = 1;
  if ( (unsigned int)CurrentProcessSessionId < *(_DWORD *)(v7 + 80) )
  {
    _mm_lfence();
    v11 = *(_DWORD **)(*(_QWORD *)(v7 + 48) + 8 * CurrentProcessSessionId);
    v51 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v50);
  }
  else
  {
    DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v50);
    v11 = 0LL;
  }
  if ( !v11 )
  {
LABEL_64:
    v44 = PsGetCurrentProcessSessionId(v6, v5, v8, v9);
    WdLogSingleEntry2(2LL, v44, -1073741811LL);
    v49 = PsGetCurrentProcessSessionId(v46, v45, v47, v48);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
      v49,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  _InterlockedAdd64((volatile signed __int64 *)a1 + 3, 1uLL);
  v12 = (volatile signed __int32 *)((char *)a1 + 136);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)a1 + 136, 0LL);
  _InterlockedAdd((volatile signed __int32 *)a1 + 38, 1u);
  if ( *((_DWORD *)a1 + 50) != 1 || *((_BYTE *)a1 + 2833) || (*((_DWORD *)a1 + 698) & 4) != 0 )
    goto LABEL_18;
  v14 = *((_QWORD *)a1 + 366);
  if ( v14 )
  {
    Current = DXGPROCESS::GetCurrent(v13);
    if ( !*(_BYTE *)(*(_QWORD *)(v14 + 16) + 209LL) )
    {
      if ( (unsigned __int8)VIDSCH_EXPORT::VidSchIsGpuAccessBlocked(
                              *(VIDSCH_EXPORT **)(v14 + 736),
                              *(struct _VIDSCH_GLOBAL **)(v14 + 744),
                              Current) )
      {
        v17 = DXGPROCESS::GetCurrent(v16);
        v18 = a1;
        v19 = 4LL;
        goto LABEL_17;
      }
    }
  }
  v22 = a2[3];
  if ( (v22 & 1) == 0 && (*((_DWORD *)a1 + 698) & 8) != 0 )
    goto LABEL_18;
  v23 = 2;
  if ( (v22 & 2) == 0 && !*((_QWORD *)a1 + 366) )
    goto LABEL_18;
  if ( (unsigned int)Feature_Dxgk64BitOnlyDriver__private_IsEnabledDeviceUsage()
    && (*((_BYTE *)a1 + 2891) & 2) != 0
    && (*((_DWORD *)DXGPROCESS::GetCurrent(v24) + 106) & 8) != 0 )
  {
    if ( (unsigned int)dword_1C013A918 > 5 && tlgKeywordOn((__int64)&dword_1C013A918, 0x400000000000LL) )
    {
      v26 = (*((_DWORD *)a2 + 6) >> 1) & 1;
      v52 = 0;
      v53 = v26;
      v54 = a2[3] & 1;
      v27 = *((_QWORD *)DXGPROCESS::GetCurrent(v25) + 8);
      if ( v27 )
        v30 = *(const CHAR **)(v27 + 96);
      else
        v30 = 0LL;
      v60 = v30;
      v61 = (void *)*((_QWORD *)a1 + 227);
      v55 = *((_DWORD *)a1 + 107);
      v56 = *((_DWORD *)a1 + 106);
      v57 = *((_DWORD *)a1 + 105);
      v58 = *((_DWORD *)a1 + 104);
      v59 = *((_DWORD *)a1 + 103);
      v65 = 1;
      v62 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v27,
        byte_1C009DF69,
        v28,
        v29,
        (__int64)&v62,
        (__int64)&v65,
        (__int64)&v59,
        (__int64)&v58,
        (__int64)&v57,
        (__int64)&v56,
        (__int64)&v55,
        &v61,
        &v60,
        (__int64)&v54,
        (__int64)&v53,
        (__int64)&v52);
    }
    goto LABEL_18;
  }
  v31 = *((unsigned int *)a2 + 1);
  v32 = *((_DWORD *)a2 + 2) + 1;
  *((_DWORD *)a2 + 2) = v32;
  if ( *(_DWORD *)a2 >= (unsigned int)v31 )
  {
    if ( !a2[2] )
      goto LABEL_18;
    v17 = (struct DXGPROCESS *)(unsigned int)v31;
    v18 = (struct DXGADAPTER *)v32;
    v19 = 3LL;
LABEL_17:
    WdLogSingleEntry2(v19, v18, v17);
LABEL_18:
    LODWORD(v20) = 0;
    goto LABEL_19;
  }
  v67 = 0;
  v33 = DXGPROCESS::GetCurrent(v31);
  v34 = DXGADAPTER::CreateHandle(a1, v33, &v67);
  v20 = v34;
  if ( v34 >= 0 )
  {
    v35 = *(unsigned int *)a2;
    v36 = a2[2];
    v37 = 5 * v35;
    *(_DWORD *)a2 = v35 + 1;
    *(_DWORD *)(v36 + 4 * v37) = v67;
    *(_QWORD *)(v36 + 4 * v37 + 4) = *(_QWORD *)((char *)a1 + 404);
    *(_DWORD *)(v36 + 4 * v37 + 16) = 0;
    if ( (unsigned int)DxgIsSessionUsingWddmMonitors() )
    {
      v39 = (_QWORD **)(v11 + 4644);
      v40 = *v39;
      if ( *v39 == v39 )
        goto LABEL_46;
      while ( 1 )
      {
        v41 = v40 - 4;
        if ( *((_DWORD *)v40 - 6) == *((_DWORD *)a1 + 101) && *((_DWORD *)v41 + 3) == *((_DWORD *)a1 + 102) )
          break;
        v40 = (_QWORD *)*v40;
        if ( v40 == v39 )
          goto LABEL_46;
      }
      if ( v40 == (_QWORD *)32 )
LABEL_46:
        v42 = 0;
      else
        v42 = *((_DWORD *)v41 + 27);
      *(_DWORD *)(v36 + 4 * v37 + 12) = v42;
      if ( v42 && (unsigned int)DxgIsRemoteSessionUsingWddmMonitors() && DXGADAPTER::IsFullWDDMAdapter(a1) )
      {
        WdLogSingleEntry1(1LL, 929LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(pAdapterInfo->NumOfSources == 0) || !DxgIsRemoteSessionUsingWddmMonitors() || !pAdapter->IsFullWDDMAdapter()",
          929LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( !*((_QWORD *)a1 + 366) )
        *(_DWORD *)(v36 + 4 * v37 + 16) = ADAPTER_DISPLAY::GetDisplayOnlyDriverPrecisePresentRegionPreference(*((ADAPTER_DISPLAY **)a1 + 365));
    }
    else
    {
      v66 = 0;
      v64 = &v66;
      v63[0] = 2;
      v63[1] = 4;
      v43 = DXGPROCESS::GetCurrent(v38);
      if ( (*(int (__fastcall **)(_DWORD *))(*((_QWORD *)v43 + 11) + 352LL))(v63) >= 0 )
      {
        v23 = v66;
      }
      else
      {
        WdLogSingleEntry1(3LL, 957LL);
        v66 = 2;
      }
      if ( v23 != 0xFFFF && v11[4627] == *((_DWORD *)a1 + 101) && v11[4628] == *((_DWORD *)a1 + 102) )
        *(_DWORD *)(v36 + 4 * v37 + 12) = v11[4629];
      else
        *(_DWORD *)(v36 + 4 * v37 + 12) = 0;
    }
    v12 = (volatile signed __int32 *)((char *)a1 + 136);
    goto LABEL_20;
  }
  WdLogSingleEntry2(2LL, a1, v34);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to open a handle on adapter 0x%I64x (ntStatus = 0x%I64x).",
    (__int64)a1,
    v20,
    0LL,
    0LL,
    0LL);
LABEL_19:
  v4 = v20;
LABEL_20:
  _InterlockedDecrement(v12 + 4);
  ExReleasePushLockSharedEx(v12, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)a1 + 2), a1);
  return v4;
}
