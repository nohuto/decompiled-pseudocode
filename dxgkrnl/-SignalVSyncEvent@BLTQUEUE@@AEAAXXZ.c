/*
 * XREFs of ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C01CB880
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C01CB6F0 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C000B374 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?TriggerRemoteVsync@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IJ_K@Z @ 0x1C002A184 (-TriggerRemoteVsync@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IJ_K@Z.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0041810 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1C0045F18 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C006CBA8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@23@Z @ 0x1C006CEB8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     McTemplateK0pqxqqipqx_EtwWriteTransfer @ 0x1C006D754 (McTemplateK0pqxqqipqx_EtwWriteTransfer.c)
 *     McTemplateK0qiiiq_EtwWriteTransfer @ 0x1C006D864 (McTemplateK0qiiiq_EtwWriteTransfer.c)
 */

void __fastcall BLTQUEUE::SignalVSyncEvent(BLTQUEUE *this)
{
  char *v2; // rbp
  __int64 v3; // rcx
  __int64 v4; // r8
  LARGE_INTEGER v5; // rax
  __int64 v6; // rcx
  LARGE_INTEGER v7; // rbx
  __int64 QuadPart; // r9
  bool v9; // zf
  __int64 v10; // r10
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int128 v14; // rax
  struct _KEVENT *v16; // rcx
  __int128 v17; // rtt
  int v18; // r9d
  LONGLONG v19; // rax
  unsigned int v20; // r14d
  DXGDODPRESENT *v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int v25; // r10d
  __int64 v26; // rcx
  __int64 v27; // r8
  struct DXGADAPTER *Adapter; // rax
  __int64 v29; // r10
  DXGADAPTER *v30; // rax
  struct DXGADAPTER *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  char v34[8]; // [rsp+20h] [rbp-A8h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp-68h] BYREF
  __int64 v36; // [rsp+68h] [rbp-60h] BYREF
  __int64 v37; // [rsp+70h] [rbp-58h] BYREF
  __int64 v38; // [rsp+78h] [rbp-50h] BYREF
  _QWORD v39[3]; // [rsp+80h] [rbp-48h] BYREF
  int v40; // [rsp+D0h] [rbp+8h] BYREF
  unsigned int v41; // [rsp+D8h] [rbp+10h] BYREF
  int v42; // [rsp+E0h] [rbp+18h] BYREF
  unsigned int v43; // [rsp+E8h] [rbp+20h] BYREF

  v2 = (char *)this + 408;
  if ( this != (BLTQUEUE *)-408LL && *((struct _KTHREAD **)this + 52) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1453LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v2, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v18 = *((_DWORD *)v2 + 6);
      if ( v18 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v3, (const EVENT_DESCRIPTOR *)"g", v4, v18);
    }
    ExAcquirePushLockExclusiveEx(v2, 0LL);
  }
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  PerformanceFrequency.QuadPart = 0LL;
  v5 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v6 = *((_QWORD *)this + 55);
  v7 = v5;
  if ( v6 && *((_DWORD *)this + 34) == 3 )
  {
    QuadPart = PerformanceFrequency.QuadPart;
    v19 = 1000 * (v5.QuadPart - v6) / PerformanceFrequency.QuadPart;
    v20 = v19;
    if ( (unsigned int)v19 > 0x28 )
      v20 = 10 * ((unsigned int)v19 / 0xA);
    v21 = *(DXGDODPRESENT **)this;
    v22 = 0LL;
    if ( v20 > 0x64 )
      v20 = 100;
    if ( v21 )
      v22 = *(_QWORD *)((char *)DXGDODPRESENT::GetAdapter(v21) + 404);
    if ( (unsigned int)dword_1C013A8A8 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C013A8A8, 0x400000080000LL) )
      {
        v40 = *((_DWORD *)this + 65);
        v36 = v22;
        v41 = v20;
        v37 = 16779264LL;
        v38 = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v23,
          byte_1C00A1CF9,
          v24,
          (__int64)&v38,
          (__int64)&v37,
          (__int64)&v41,
          (__int64)&v36,
          (__int64)&v40);
        QuadPart = PerformanceFrequency.QuadPart;
        v25 = dword_1C013A8A8;
      }
      if ( v25 > 5 && tlgKeywordOn((__int64)&dword_1C013A8A8, 0x80000LL) )
      {
        v42 = *((_DWORD *)this + 65);
        v39[0] = v22;
        v43 = v20;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v26,
          byte_1C00A1C8F,
          v27,
          QuadPart,
          (__int64)&v43,
          (__int64)v39,
          (__int64)&v42);
        QuadPart = PerformanceFrequency.QuadPart;
      }
    }
  }
  else
  {
    QuadPart = PerformanceFrequency.QuadPart;
  }
  v9 = *((_DWORD *)this + 34) == 1;
  *((LARGE_INTEGER *)this + 55) = v7;
  if ( !v9 )
  {
    v10 = *((unsigned int *)this + 92);
    v11 = *((unsigned int *)this + 93);
    v12 = v7.QuadPart * v10;
    if ( v11 != 1 )
      v12 /= v11;
    if ( QuadPart == 10000000 )
      v13 = v12 / 10000000;
    else
      v13 = v12 / QuadPart;
    *((_QWORD *)this + 56) = v13;
    v14 = QuadPart * v11 * (unsigned int)v13;
    if ( v10 == 32 )
    {
      *((_QWORD *)&v14 + 1) = BYTE8(v14) & 0x1F;
      *(_QWORD *)&v14 = (__int64)(*((_QWORD *)&v14 + 1) + v14) >> 5;
    }
    else
    {
      v17 = v14;
      *(_QWORD *)&v14 = v14 / v10;
      *((_QWORD *)&v14 + 1) = v17 % v10;
    }
    v9 = bTracingEnabled == 0;
    *((_QWORD *)this + 57) = v14;
    if ( !v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qiiiq_EtwWriteTransfer(
        v12,
        *((__int64 *)&v14 + 1),
        v11,
        0,
        *((_QWORD *)this + 56),
        *((_QWORD *)this + 55),
        *((_QWORD *)this + 57),
        *((_DWORD *)this + 99));
    if ( *((_DWORD *)this + 99) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqqqq_EtwWriteTransfer(
          v12,
          &EventDWMVsyncSignal,
          v11,
          *((_DWORD *)this + 98),
          *((_DWORD *)this + 112),
          0,
          *((_DWORD *)this + 99),
          *((_DWORD *)this + 34));
      KePulseEvent(*((PRKEVENT *)this + 47), 0, 0);
      if ( *(_QWORD *)this )
      {
        DXGGLOBAL::GetGlobal();
        Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
        HOSTVMMONITORMAPPING::TriggerRemoteVsync(
          (KSPIN_LOCK *)(v29 + 304888),
          *(struct _LUID *)((char *)Adapter + 404),
          *((_DWORD *)this + 65),
          0,
          0);
      }
    }
    v16 = (struct _KEVENT *)*((_QWORD *)this + 48);
    if ( v16 && *((_DWORD *)this + 98) <= *((_DWORD *)this + 112) )
      KeSetEvent(v16, 0, 0);
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_DWORD *)this + 34) != 2 && (*((_DWORD *)this + 238) & 2) != 0 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 48LL))(*((_QWORD *)this + 16));
  if ( *(_QWORD *)this )
  {
    v30 = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
    *((_DWORD *)this + 99) = *((_DWORD *)this + 726) + DXGADAPTER::NumberOfVSyncWaiter(v30, *((_DWORD *)this + 64));
  }
  if ( bTracingEnabled )
  {
    if ( *(_QWORD *)this )
    {
      KeQueryPerformanceCounter(0LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        {
          v31 = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
          *(_DWORD *)v34 = *((_DWORD *)this + 65);
          McTemplateK0pqxqqipqx_EtwWriteTransfer(*(unsigned int *)v34, v32, v33, v31, *(_QWORD *)v34);
        }
      }
    }
  }
}
