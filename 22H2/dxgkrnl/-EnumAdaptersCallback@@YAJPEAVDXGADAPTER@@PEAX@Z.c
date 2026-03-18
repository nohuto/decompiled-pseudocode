/*
 * XREFs of ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01B50A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0001560 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     _tlgKeywordOn @ 0x1C0003734 (_tlgKeywordOn.c)
 *     ?VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z @ 0x1C0004A18 (-VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C0007620 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B020 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGSYNCOBJECTMUTEX@@QEAA@XZ @ 0x1C0015690 (--1DXGSYNCOBJECTMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U?$_tlgWrapSz@D@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSz@D@@555@Z @ 0x1C0046274 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@.c)
 *     ?GetDisplayOnlyDriverPrecisePresentRegionPreference@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C0046994 (-GetDisplayOnlyDriverPrecisePresentRegionPreference@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C018F1D8 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1C019D04C (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C01B6388 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 */

__int64 __fastcall EnumAdaptersCallback(struct DXGADAPTER *this, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 CurrentProcessSessionId; // r14
  _DWORD *v8; // r13
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  struct DXGPROCESS *v12; // rax
  __int64 v13; // rcx
  struct DXGPROCESS *Current; // r8
  struct DXGADAPTER *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r12
  __int64 v19; // rcx
  int v20; // r14d
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  const CHAR *v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // eax
  struct DXGPROCESS *v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r12
  __int64 v34; // rbx
  __int64 v35; // rcx
  _QWORD **v36; // r13
  _QWORD *v37; // rcx
  _QWORD *v38; // rdx
  int v39; // eax
  struct DXGPROCESS *v40; // rax
  unsigned int v41; // eax
  __int64 v42; // rcx
  unsigned int v43; // eax
  DXGFASTMUTEX *v44; // [rsp+80h] [rbp-49h] BYREF
  char v45; // [rsp+88h] [rbp-41h]
  int v46; // [rsp+90h] [rbp-39h] BYREF
  int v47; // [rsp+94h] [rbp-35h] BYREF
  int v48; // [rsp+98h] [rbp-31h] BYREF
  int v49; // [rsp+9Ch] [rbp-2Dh] BYREF
  int v50; // [rsp+A0h] [rbp-29h] BYREF
  int v51; // [rsp+A4h] [rbp-25h] BYREF
  int v52; // [rsp+A8h] [rbp-21h] BYREF
  int v53; // [rsp+ACh] [rbp-1Dh] BYREF
  const CHAR *v54; // [rsp+B0h] [rbp-19h] BYREF
  void *v55; // [rsp+B8h] [rbp-11h] BYREF
  __int64 v56; // [rsp+C0h] [rbp-9h] BYREF
  _DWORD v57[2]; // [rsp+C8h] [rbp-1h] BYREF
  int *v58; // [rsp+D0h] [rbp+7h]
  _QWORD v59[2]; // [rsp+D8h] [rbp+Fh] BYREF
  char v60; // [rsp+E8h] [rbp+1Fh]
  __int16 v61; // [rsp+138h] [rbp+6Fh] BYREF
  unsigned int v62; // [rsp+140h] [rbp+77h] BYREF
  int v63; // [rsp+148h] [rbp+7Fh] BYREF

  v4 = 0;
  v6 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v6 )
  {
    v45 = 0;
    CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v5);
    v44 = (DXGFASTMUTEX *)(v6 + 88);
    if ( v6 == -88 )
    {
      WdLogSingleEntry1(1LL, 592LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((struct _KTHREAD **)v44 + 3) == KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 599LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGFASTMUTEX::Acquire(v44);
    v45 = 1;
    if ( (unsigned int)CurrentProcessSessionId < *(_DWORD *)(v6 + 80) )
    {
      _mm_lfence();
      v8 = *(_DWORD **)(*(_QWORD *)(v6 + 48) + 8 * CurrentProcessSessionId);
      v45 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v44);
    }
    else
    {
      DXGSYNCOBJECTMUTEX::~DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v44);
      v8 = 0LL;
    }
    if ( v8 )
    {
      v59[1] = this;
      _InterlockedAdd64((volatile signed __int64 *)this + 3, 1uLL);
      v59[0] = -1LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx((char *)this + 136, 0LL);
      _InterlockedAdd((volatile signed __int32 *)this + 38, 1u);
      v10 = *((_DWORD *)this + 50);
      v60 = 1;
      if ( v10 != 1 || *((_BYTE *)this + 2833) || (*((_DWORD *)this + 698) & 4) != 0 )
        goto LABEL_18;
      v11 = *((_QWORD *)this + 366);
      if ( v11
        && (v12 = DXGPROCESS::GetCurrent(v9), !*(_BYTE *)(*(_QWORD *)(v11 + 16) + 209LL))
        && (unsigned __int8)VIDSCH_EXPORT::VidSchIsGpuAccessBlocked(
                              *(VIDSCH_EXPORT **)(v11 + 736),
                              *(struct _VIDSCH_GLOBAL **)(v11 + 744),
                              v12) )
      {
        Current = DXGPROCESS::GetCurrent(v13);
        v15 = this;
        v16 = 4LL;
      }
      else
      {
        v19 = a2[3];
        if ( (v19 & 1) == 0 && (*((_DWORD *)this + 698) & 8) != 0 )
          goto LABEL_18;
        v20 = 2;
        if ( (v19 & 2) == 0 && !*((_QWORD *)this + 366) )
          goto LABEL_18;
        if ( (*((_BYTE *)this + 2891) & 2) != 0 && (*((_DWORD *)DXGPROCESS::GetCurrent(v19) + 106) & 8) != 0 )
        {
          if ( (unsigned int)dword_1C013F918 > 5 && tlgKeywordOn((__int64)&dword_1C013F918, 0x400000000000LL) )
          {
            v22 = (*((_DWORD *)a2 + 6) >> 1) & 1;
            v46 = 0;
            v47 = v22;
            v48 = a2[3] & 1;
            v23 = *((_QWORD *)DXGPROCESS::GetCurrent(v21) + 8);
            if ( v23 )
              v26 = *(const CHAR **)(v23 + 96);
            else
              v26 = 0LL;
            v54 = v26;
            v55 = (void *)*((_QWORD *)this + 227);
            v49 = *((_DWORD *)this + 107);
            v50 = *((_DWORD *)this + 106);
            v51 = *((_DWORD *)this + 105);
            v52 = *((_DWORD *)this + 104);
            v53 = *((_DWORD *)this + 103);
            v61 = 1;
            v56 = 0x2000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v23,
              byte_1C00A731E,
              v24,
              v25,
              (__int64)&v56,
              (__int64)&v61,
              (__int64)&v53,
              (__int64)&v52,
              (__int64)&v51,
              (__int64)&v50,
              (__int64)&v49,
              &v55,
              &v54,
              (__int64)&v48,
              (__int64)&v47,
              (__int64)&v46);
          }
          goto LABEL_18;
        }
        v27 = *((unsigned int *)a2 + 1);
        v28 = *((_DWORD *)a2 + 2) + 1;
        *((_DWORD *)a2 + 2) = v28;
        if ( *(_DWORD *)a2 < (unsigned int)v27 )
        {
          v62 = 0;
          v29 = DXGPROCESS::GetCurrent(v27);
          v30 = DXGADAPTER::CreateHandle(this, v29, &v62);
          v17 = v30;
          if ( v30 >= 0 )
          {
            v32 = *(unsigned int *)a2;
            v33 = a2[2];
            v34 = 5 * v32;
            *(_DWORD *)a2 = v32 + 1;
            *(_DWORD *)(v33 + 4 * v34) = v62;
            *(_QWORD *)(v33 + 4 * v34 + 4) = *(_QWORD *)((char *)this + 404);
            *(_DWORD *)(v33 + 4 * v34 + 16) = 0;
            if ( (unsigned int)DxgIsSessionUsingWddmMonitors(v31) )
            {
              v36 = (_QWORD **)(v8 + 4644);
              v37 = *v36;
              if ( *v36 == v36 )
                goto LABEL_43;
              while ( 1 )
              {
                v38 = v37 - 4;
                if ( *((_DWORD *)v37 - 6) == *((_DWORD *)this + 101) && *((_DWORD *)v38 + 3) == *((_DWORD *)this + 102) )
                  break;
                v37 = (_QWORD *)*v37;
                if ( v37 == v36 )
                  goto LABEL_43;
              }
              if ( v37 == (_QWORD *)32 )
LABEL_43:
                v39 = 0;
              else
                v39 = *((_DWORD *)v38 + 27);
              *(_DWORD *)(v33 + 4 * v34 + 12) = v39;
              if ( v39 && (unsigned int)DxgIsRemoteSessionUsingWddmMonitors() && DXGADAPTER::IsFullWDDMAdapter(this) )
              {
                WdLogSingleEntry1(1LL, 925LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"(pAdapterInfo->NumOfSources == 0) || !DxgIsRemoteSessionUsingWddmMonitors() || !pAdapter->IsF"
                            "ullWDDMAdapter()",
                  925LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( !*((_QWORD *)this + 366) )
                *(_DWORD *)(v33 + 4 * v34 + 16) = ADAPTER_DISPLAY::GetDisplayOnlyDriverPrecisePresentRegionPreference(*((ADAPTER_DISPLAY **)this + 365));
            }
            else
            {
              v63 = 0;
              v58 = &v63;
              v57[0] = 2;
              v57[1] = 4;
              v40 = DXGPROCESS::GetCurrent(v35);
              if ( (*(int (__fastcall **)(_DWORD *))(*((_QWORD *)v40 + 11) + 352LL))(v57) >= 0 )
                v20 = v63;
              else
                WdLogSingleEntry1(3LL, 953LL);
              if ( v20 != 0xFFFF && v8[4627] == *((_DWORD *)this + 101) && v8[4628] == *((_DWORD *)this + 102) )
                *(_DWORD *)(v33 + 4 * v34 + 12) = v8[4629];
              else
                *(_DWORD *)(v33 + 4 * v34 + 12) = 0;
            }
            goto LABEL_20;
          }
          WdLogSingleEntry2(2LL, this, v30);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to open a handle on adapter 0x%I64x (ntStatus = 0x%I64x).",
            (__int64)this,
            v17,
            0LL,
            0LL,
            0LL);
LABEL_19:
          v4 = v17;
LABEL_20:
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v59);
          return v4;
        }
        if ( !a2[2] )
        {
LABEL_18:
          LODWORD(v17) = 0;
          goto LABEL_19;
        }
        Current = (struct DXGPROCESS *)(unsigned int)v27;
        v15 = (struct DXGADAPTER *)v28;
        v16 = 3LL;
      }
      WdLogSingleEntry2(v16, v15, Current);
      goto LABEL_18;
    }
  }
  v41 = PsGetCurrentProcessSessionId(v5);
  WdLogSingleEntry2(2LL, v41, -1073741811LL);
  v43 = PsGetCurrentProcessSessionId(v42);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
    v43,
    -1073741811LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
