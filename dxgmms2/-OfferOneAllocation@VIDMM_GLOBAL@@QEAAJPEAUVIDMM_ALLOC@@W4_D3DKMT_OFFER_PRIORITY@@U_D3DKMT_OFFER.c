/*
 * XREFs of ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C00AE880
 * Callers:
 *     ?OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C00AE848 (-OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_O.c)
 * Callees:
 *     VidSchSubmitDeviceCommand @ 0x1C0015360 (VidSchSubmitDeviceCommand.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C0015940 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pu_EtwWriteTransfer @ 0x1C002F25C (McTemplateK0pu_EtwWriteTransfer.c)
 *     VidSchFlushDevice @ 0x1C00AB9F0 (VidSchFlushDevice.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OfferOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        enum _D3DKMT_OFFER_PRIORITY a3,
        struct _D3DKMT_OFFER_FLAGS a4)
{
  char v4; // bl
  __int64 v5; // rsi
  struct VIDMM_ALLOC *v6; // r12
  VIDMM_GLOBAL *v7; // r13
  unsigned int v8; // ebp
  __int64 v9; // rdi
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // r8
  signed __int16 v13; // r15
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rax
  VIDMM_GLOBAL *v18; // rcx
  VIDMM_GLOBAL **v19; // rdx
  bool v20; // r9
  __int64 v21; // r8
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  _QWORD *i; // r14
  _QWORD *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r13
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v32; // rax
  __int64 *v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 **v36; // rax
  int v37; // esi
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // r9d
  int v41; // esi
  int v42; // eax
  __int64 v43; // rcx
  int v44; // r9d
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // r9d
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // [rsp+20h] [rbp-D8h]
  bool v56; // [rsp+50h] [rbp-A8h]
  char v57; // [rsp+51h] [rbp-A7h]
  __int128 v58; // [rsp+58h] [rbp-A0h] BYREF
  int v59; // [rsp+70h] [rbp-88h] BYREF
  __int64 v60; // [rsp+74h] [rbp-84h]
  __int64 v61; // [rsp+7Ch] [rbp-7Ch]
  int v62; // [rsp+84h] [rbp-74h]
  void (__fastcall *v63)(_QWORD *); // [rsp+88h] [rbp-70h]
  __int64 v64; // [rsp+90h] [rbp-68h]
  int v65; // [rsp+98h] [rbp-60h]
  __int128 v66; // [rsp+9Ch] [rbp-5Ch]
  __int64 v67; // [rsp+ACh] [rbp-4Ch]
  __int64 v68; // [rsp+B4h] [rbp-44h]
  int v69; // [rsp+BCh] [rbp-3Ch]

  v4 = (char)a4.0;
  v5 = a3;
  v6 = a2;
  v7 = this;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  v8 = 0;
  v9 = **(_QWORD **)v6;
  v10 = **(_DWORD **)(v9 + 536);
  if ( (v10 & 0x40000000) != 0 || v10 < 0 )
  {
    WdLogSingleEntry1(3LL, v6);
    return 3221225485LL;
  }
  if ( (unsigned int)(v5 - 1) > 3 )
  {
    WdLogSingleEntry2(3LL, v6, v5);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v9 + 504, 0LL);
  if ( *(_DWORD *)(v9 + 360) )
  {
    if ( (*((_BYTE *)v7 + 40936) & 0x10) == 0 )
    {
      WdLogSingleEntry1(3LL, v6);
      if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
      {
        ExReleasePushLockExclusiveEx(v9 + 504, 0LL);
        KeLeaveCriticalRegion();
        return 3221225485LL;
      }
    }
  }
  if ( (_DWORD)v5 == 2 )
  {
    *(_DWORD *)(v9 + 456) = 2;
  }
  else
  {
    v37 = v5 - 1;
    if ( v37 )
    {
      v41 = v37 - 2;
      if ( v41 )
      {
        if ( v41 == 1 )
        {
          v42 = 4;
          if ( *(_DWORD *)(v9 + 400) < 0xA0000000 )
            v42 = 2;
          *(_DWORD *)(v9 + 456) = v42;
        }
      }
      else
      {
        *(_DWORD *)(v9 + 456) = 3;
      }
    }
    else
    {
      *(_DWORD *)(v9 + 456) = 1;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v6 + 12) + 8LL));
  v56 = 0;
  v57 = 0;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v9 + 320) == KeGetCurrentThread() )
  {
    if ( *(int *)(v9 + 328) <= 0 )
    {
      WdLogSingleEntry1(1LL, 491LL);
      v55 = 491LL;
      DxgkLogInternalTriageEvent(v43, 262146LL);
    }
    ++*(_DWORD *)(v9 + 328);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v9 + 304, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v44 = *(_DWORD *)(v9 + 332);
        if ( v44 != -1 && (byte_1C00769C1 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v11, &EventBlockThread, v12, v44);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v9 + 312));
      ExAcquirePushLockExclusiveEx(v9 + 304, 0LL);
    }
    if ( *(_QWORD *)(v9 + 320) )
    {
      WdLogSingleEntry1(1LL, 515LL);
      v55 = 515LL;
      DxgkLogInternalTriageEvent(v45, 262146LL);
    }
    if ( *(_DWORD *)(v9 + 328) )
    {
      WdLogSingleEntry1(1LL, 516LL);
      v55 = 516LL;
      DxgkLogInternalTriageEvent(v46, 262146LL);
    }
    *(_QWORD *)(v9 + 320) = KeGetCurrentThread();
    *(_DWORD *)(v9 + 328) = 1;
  }
  v13 = _InterlockedCompareExchange16((volatile signed __int16 *)(*((_QWORD *)v6 + 12) + 4LL), 1, 0);
  ExReleasePushLockExclusiveEx(v9 + 504, 0LL);
  KeLeaveCriticalRegion();
  if ( !v13 )
  {
    if ( (v4 & 2) == 0 && !dword_1C007656C
      || (*((_BYTE *)v7 + 40936) & 0x10) != 0
      || (*(_DWORD *)(v9 + 72) & 0x6000) != 0 )
    {
      v57 = 0;
    }
    else
    {
      v32 = *(_QWORD *)(v9 + 88);
      *(_DWORD *)(v9 + 76) |= 0x40u;
      v57 = 1;
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v32 + 8) + 32LL) + 456LL),
        *(_QWORD *)(v9 + 8));
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 88) + 8LL) + 32LL)
                                                        + 448LL));
    }
  }
  if ( *(struct _KTHREAD **)(v9 + 320) != KeGetCurrentThread() )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v9 + 296, 0LL, 0LL);
  if ( *(int *)(v9 + 328) <= 0 )
  {
    WdLogSingleEntry1(1LL, 535LL);
    v55 = 535LL;
    DxgkLogInternalTriageEvent(v47, 262146LL);
  }
  v14 = (*(_DWORD *)(v9 + 328))-- == 1;
  if ( v14 )
  {
    *(_QWORD *)(v9 + 320) = 0LL;
    ExReleasePushLockExclusiveEx(v9 + 304, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v7 != (VIDMM_GLOBAL *)-39976LL && *((struct _KTHREAD **)v7 + 4998) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    v55 = 1453LL;
    DxgkLogInternalTriageEvent(v48, 262146LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v7 + 39976, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v40 = *((_DWORD *)v7 + 10000);
      if ( v40 != -1 && (byte_1C00769C1 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, &EventBlockThread, v16, v40);
    }
    ExAcquirePushLockExclusiveEx((char *)v7 + 39976, 0LL);
  }
  *((_QWORD *)v7 + 4998) = KeGetCurrentThread();
  if ( !v13 )
  {
    v17 = (_QWORD *)((char *)v7 + 39960);
    v18 = (VIDMM_GLOBAL *)(v9 + 424);
    v19 = (VIDMM_GLOBAL **)*((_QWORD *)v7 + 4996);
    v20 = *v17 == (_QWORD)v17;
    v56 = v20;
    if ( *v19 == (VIDMM_GLOBAL *)((char *)v7 + 39960) )
    {
      *(_QWORD *)v18 = v17;
      *(_QWORD *)(v9 + 432) = v19;
      *v19 = v18;
      *((_QWORD *)v7 + 4996) = v18;
      *(_QWORD *)(v9 + 464) = *((_QWORD *)v7 + 579);
      if ( !v57 )
        goto LABEL_33;
      v33 = (__int64 *)(v9 + 440);
      v34 = *(unsigned int *)(*((_QWORD *)v7 + 3) + 240LL);
      v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 88) + 8LL) + 16LL) + 8 * v34) + 424LL;
      v36 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 88) + 8LL) + 16LL) + 8 * v34) + 432LL);
      if ( *v36 == (__int64 *)v35 )
      {
        *v33 = v35;
        *(_QWORD *)(v9 + 448) = v36;
        *v36 = v33;
        *(_QWORD *)(v35 + 8) = v33;
        v56 = v20;
        *((_QWORD *)v7 + 4998) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v7 + 39976, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_34;
      }
    }
    __fastfail(3u);
  }
LABEL_33:
  *((_QWORD *)v7 + 4998) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v7 + 39976, 0LL);
  KeLeaveCriticalRegion();
  if ( !v13 )
  {
LABEL_34:
    if ( (**(_DWORD **)(v9 + 536) & 0x20000000) != 0 )
    {
      if ( (v4 & 2) != 0 || dword_1C007656C )
      {
        v38 = *(_QWORD *)(v9 + 8);
        ++*((_DWORD *)v7 + 1964);
        *((_QWORD *)v7 + 983) += v38;
      }
      v39 = *(_QWORD *)(v9 + 8);
      ++*((_DWORD *)v7 + 1960);
      *((_QWORD *)v7 + 981) += v39;
    }
    *((_QWORD *)v7 + 979) += *(_QWORD *)(v9 + 8);
    ++*((_DWORD *)v7 + 1956);
    if ( (v4 & 1) == 0 )
    {
      v60 = 0LL;
      v63 = VIDMM_GLOBAL::VidMmiOfferAllocationCallback;
      v61 = 0LL;
      v62 = 0;
      v64 = 0LL;
      v66 = 0uLL;
      v67 = 0LL;
      v68 = 0LL;
      v69 = 0;
      v65 = 3;
      v59 = 1;
      KeEnterCriticalRegion();
      if ( *(struct _KTHREAD **)(v9 + 320) == KeGetCurrentThread() )
      {
        if ( *(int *)(v9 + 328) <= 0 )
        {
          WdLogSingleEntry1(1LL, 491LL);
          v55 = 491LL;
          DxgkLogInternalTriageEvent(v49, 262146LL);
        }
        ++*(_DWORD *)(v9 + 328);
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v9 + 304, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v50 = *(_DWORD *)(v9 + 332);
            if ( v50 != -1 && (byte_1C00769C1 & 1) != 0 )
              McTemplateK0q_EtwWriteTransfer(v22, &EventBlockThread, v21, v50);
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v9 + 312));
          ExAcquirePushLockExclusiveEx(v9 + 304, 0LL);
        }
        if ( *(_QWORD *)(v9 + 320) )
        {
          WdLogSingleEntry1(1LL, 515LL);
          v55 = 515LL;
          DxgkLogInternalTriageEvent(v51, 262146LL);
        }
        if ( *(_DWORD *)(v9 + 328) )
        {
          WdLogSingleEntry1(1LL, 516LL);
          v55 = 516LL;
          DxgkLogInternalTriageEvent(v52, 262146LL);
        }
        *(_QWORD *)(v9 + 320) = KeGetCurrentThread();
        *(_DWORD *)(v9 + 328) = 1;
      }
      v23 = *(_QWORD **)(v9 + 272);
      if ( v23 != (_QWORD *)(v9 + 272) )
      {
        do
        {
          for ( i = (_QWORD *)*(v23 - 2); i != v23 - 2; i = (_QWORD *)*i )
          {
            v25 = i - 5;
            if ( (*(_DWORD *)(i - 1) & 1) == 0 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v25[12] + 8LL));
              v26 = v25[1];
              *(_QWORD *)((char *)&v66 + 4) = i - 5;
              v27 = *(_QWORD *)(v26 + 32);
              v28 = VidSchSubmitDeviceCommand(v27, (__int64)&v59, v21);
              if ( v28 < 0 )
              {
                WdLogSingleEntry1(3LL, v28);
                v58 = 0LL;
                LODWORD(v58) = 5;
                VidSchFlushDevice(v27, (int *)&v58, 0xFFFFFFFD, 0LL);
                v59 = 0;
                VidSchSubmitDeviceCommand(v27, (__int64)&v59, v53);
              }
            }
          }
          v23 = (_QWORD *)*v23;
        }
        while ( v23 != (_QWORD *)(v9 + 272) );
        v6 = a2;
        v7 = this;
      }
      if ( *(struct _KTHREAD **)(v9 + 320) != KeGetCurrentThread() )
        WdLogSingleEntry5(0LL, 275LL, 4LL, v9 + 296, 0LL, 0LL);
      if ( *(int *)(v9 + 328) <= 0 )
      {
        WdLogSingleEntry1(1LL, 535LL);
        v55 = 535LL;
        DxgkLogInternalTriageEvent(v54, 262146LL);
      }
      v14 = (*(_DWORD *)(v9 + 328))-- == 1;
      if ( v14 )
      {
        *(_QWORD *)(v9 + 320) = 0LL;
        ExReleasePushLockExclusiveEx(v9 + 304, 0LL);
      }
      KeLeaveCriticalRegion();
    }
    if ( v56 )
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)v7 + 176LL), 0, 0);
    goto LABEL_60;
  }
  WdLogSingleEntry2(3LL, v6, *(unsigned __int16 *)(*((_QWORD *)v6 + 12) + 4LL));
  v8 = DxgkVidMmAllowFailOnOfferReclaimErrors() != 0 ? 0xC000000D : 0;
LABEL_60:
  VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v6);
  if ( bTracingEnabled )
  {
    if ( (byte_1C00769C1 & 1) != 0 )
    {
      LOBYTE(v55) = *(_BYTE *)(v9 + 456);
      McTemplateK0pu_EtwWriteTransfer((unsigned __int8)v55, v29, v30, v6, v55);
    }
  }
  return v8;
}
