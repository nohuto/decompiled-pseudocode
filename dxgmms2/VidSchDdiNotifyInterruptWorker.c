// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchDdiNotifyInterruptWorker(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned int v6; // edx
  __int64 v8; // rbp
  int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 *v22; // rbp
  int v23; // ebx
  int v24; // r8d
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 *v39; // r15
  __int64 v40; // r15
  unsigned __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  PSLIST_ENTRY v48; // rax
  int v49; // eax
  _QWORD *v50; // rdx
  __int64 v51; // rcx
  _QWORD *v52; // rdx
  __int64 v53; // rcx
  unsigned int v54; // eax
  unsigned int v55; // ebp
  PSLIST_ENTRY v56; // rbx
  __int64 v57; // rcx
  __int64 v58; // r8
  unsigned int v59; // [rsp+80h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 744);
  v59 = 0;
  v6 = *(_DWORD *)a2;
  v8 = a1;
  if ( v6 <= 0x12 )
  {
    v9 = 263304;
    if ( _bittest(&v9, v6) )
    {
      if ( (*(_DWORD *)(v4 + 36) & 0x10) != 0 )
      {
        if ( *(_DWORD *)(v4 + 80) > 1u && (*(_DWORD *)(a2 + 72) & 1) != 0 )
        {
          if ( v6 == 7 )
          {
            v24 = *(_DWORD *)(a2 + 12);
          }
          else if ( v6 == 10 )
          {
            v24 = *(_DWORD *)(a2 + 12);
          }
          else
          {
            v24 = v6 == 18 ? *(_DWORD *)(a2 + 12) : *(_DWORD *)(a2 + 24);
          }
          if ( !v24 )
          {
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 281LL, 6LL, v4, 0LL, 0LL);
            __debugbreak();
LABEL_48:
            v25 = *(unsigned int *)(v4 + 6056);
            *(_QWORD *)(v4 + 8 * v25 + 6064) = v3;
            v26 = 10 * v25;
            *(_OWORD *)(v4 + 8 * v26 + 6096) = *(_OWORD *)a2;
            *(_OWORD *)(v4 + 8 * v26 + 6112) = *(_OWORD *)(a2 + 16);
            *(_OWORD *)(v4 + 8 * v26 + 6128) = *(_OWORD *)(a2 + 32);
            *(_OWORD *)(v4 + 8 * v26 + 6144) = *(_OWORD *)(a2 + 48);
            *(_OWORD *)(v4 + 8 * v26 + 6160) = *(_OWORD *)(a2 + 64);
            *(_DWORD *)(v4 + 6056) = ((unsigned __int8)*(_DWORD *)(v4 + 6056) + 1) & 3;
            return;
          }
        }
        v3 = MEMORY[0xFFFFF78000000320];
        v10 = VidSchiProcessIsrVSync((struct _VIDSCH_GLOBAL *)v4, (struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *)a2);
        if ( v10 == -1 || v10 >= *(_DWORD *)(v4 + 40) )
          goto LABEL_48;
        _mm_lfence();
        v11 = *(_QWORD *)(v4 + 8LL * v10 + 3200);
        v12 = *(unsigned int *)(v11 + 44332);
        *(_QWORD *)(v11 + 8 * v12 + 44336) = v3;
        v13 = 10 * v12;
        *(_OWORD *)(v11 + 8 * v13 + 44368) = *(_OWORD *)a2;
        *(_OWORD *)(v11 + 8 * v13 + 44384) = *(_OWORD *)(a2 + 16);
        *(_OWORD *)(v11 + 8 * v13 + 44400) = *(_OWORD *)(a2 + 32);
        *(_OWORD *)(v11 + 8 * v13 + 44416) = *(_OWORD *)(a2 + 48);
        *(_OWORD *)(v11 + 8 * v13 + 44432) = *(_OWORD *)(a2 + 64);
        *(_DWORD *)(v11 + 44332) = ((unsigned __int8)*(_DWORD *)(v11 + 44332) + 1) & 3;
        return;
      }
    }
  }
  switch ( v6 )
  {
    case 1u:
      if ( (*(_DWORD *)(v4 + 36) & 1) == 0 )
        return;
      v14 = *(_DWORD *)(a2 + 12) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 16) + v4 + 88);
      if ( a3 )
      {
        if ( _bittest64(
               *(const signed __int64 **)(v4 + 592),
               *(_DWORD *)(a2 + 12) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 16) + v4 + 88)) )
        {
          return;
        }
      }
      v15 = *(__int64 **)(v4 + 632);
      if ( (unsigned int)v14 < *(_DWORD *)(v4 + 704) )
        v15 += v14;
      v16 = *v15;
      if ( *(_DWORD *)(*v15 + 16) == 1 )
        return;
      if ( a3 && *(_DWORD *)(v16 + 16) == 2 )
      {
        v27 = *(unsigned __int16 *)(v16 + 4);
        g_DxgMmsBugcheckExportIndex = 1;
        v20 = WdLogSingleEntry5(0LL, 281LL, 16LL, v4, v27, 0LL);
        __debugbreak();
      }
      else
      {
        v17 = *(unsigned int *)(a2 + 8);
        v18 = *(unsigned int *)(v16 + 64);
        v19 = *(_QWORD *)(v16 + 24);
        v59 = v17;
        if ( (_DWORD)v17 == (_DWORD)v18 || (_DWORD)v17 == *(_DWORD *)(v16 + 72) )
          goto LABEL_24;
        v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 152), 0, 0);
        if ( v20 >= (unsigned int)v18 )
        {
          if ( (unsigned int)v17 <= v20 && (unsigned int)v17 >= (unsigned int)v18 )
          {
LABEL_24:
            VidSchiProcessIsrCompletedPacket(v16, v17, a3, a2);
            return;
          }
          goto LABEL_52;
        }
      }
      if ( (unsigned int)v17 <= v20 || (unsigned int)v17 >= (unsigned int)v18 )
        goto LABEL_24;
LABEL_52:
      if ( *(_BYTE *)(v19 + 53) )
      {
        *(_DWORD *)(v16 + 2032) = 1;
        *(_BYTE *)(v16 + 2025) = 1;
        return;
      }
      v28 = *(_QWORD *)(v19 + 16);
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 1LL, v17, v18, v28);
      __debugbreak();
      goto LABEL_55;
    case 0xBu:
LABEL_55:
      if ( (*(_DWORD *)(v4 + 36) & 1) != 0 )
      {
        v29 = *(_DWORD *)(a2 + 8) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 12) + v4 + 88);
        v30 = v29;
        if ( !a3 || !_bittest64(*(const signed __int64 **)(v4 + 592), v29) )
        {
          v31 = *(__int64 **)(v4 + 632);
          if ( (unsigned int)v29 < *(_DWORD *)(v4 + 704) )
            v31 += v29;
          v32 = *v31;
          if ( *(_DWORD *)(*v31 + 16) != 1 )
          {
            if ( a3 && *(_DWORD *)(v32 + 16) == 2 )
            {
              v33 = *(unsigned __int16 *)(v32 + 4);
              g_DxgMmsBugcheckExportIndex = 1;
              WdLogSingleEntry5(0LL, 281LL, 16LL, v4, v33, 0LL);
              __debugbreak();
            }
            VidSchiProcessIsrMonitoredFenceSignaled(v32, v30);
          }
        }
      }
      return;
    case 2u:
      if ( (*(_DWORD *)(v4 + 36) & 1) == 0 )
        return;
      v21 = *(_DWORD *)(a2 + 16) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 20) + v4 + 88);
      if ( a3 )
      {
        if ( _bittest64(
               *(const signed __int64 **)(v4 + 592),
               *(_DWORD *)(a2 + 16) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 20) + v4 + 88)) )
        {
          return;
        }
      }
      v22 = *(__int64 **)(v4 + 632);
      if ( (unsigned int)v21 < *(_DWORD *)(v4 + 704) )
        v22 += v21;
      v8 = *v22;
      if ( *(_DWORD *)(v8 + 16) == 1 )
        return;
      if ( !a3 || *(_DWORD *)(v8 + 16) != 2 )
      {
        if ( (unsigned int)VidSchiVerifyDriverReportedFenceId((struct _VIDSCH_NODE *)v8, *(_DWORD *)(a2 + 8), 1, 0LL)
          && (unsigned int)VidSchiVerifyDriverReportedFenceId((struct _VIDSCH_NODE *)v8, *(_DWORD *)(a2 + 12), 0, &v59) )
        {
          do
          {
            v23 = VidSchiProcessIsrCompletedPacket(v8, v59, a3, a2);
            VidSchiProcessIsrPreemptedPacket(v8, *(unsigned int *)(a2 + 8), a3, a2);
          }
          while ( v23 );
        }
        return;
      }
      v34 = *(unsigned __int16 *)(v8 + 4);
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 16LL, v4, v34, 0LL);
      __debugbreak();
      break;
  }
  if ( v6 == 4 )
  {
    v35 = *(unsigned int *)(a2 + 8);
    v36 = *(unsigned int *)(a2 + 20);
    v37 = *(unsigned int *)(a2 + 16);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 13LL, v37, v36, v35);
    __debugbreak();
  }
  switch ( v6 )
  {
    case 9u:
      if ( (*(_DWORD *)(v4 + 36) & 4) == 0 )
        return;
      VidSchiValidatePageFaultFlags(*(enum _DXGK_PAGE_FAULT_FLAGS *)(a2 + 32));
      v38 = *(_DWORD *)(a2 + 48) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + v4 + 88);
      if ( a3
        && _bittest64(
             *(const signed __int64 **)(v4 + 592),
             *(_DWORD *)(a2 + 48) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + v4 + 88)) )
      {
        LogPageFaultInformation(1LL, v8, a2);
        return;
      }
      v39 = *(__int64 **)(v4 + 632);
      if ( (unsigned int)v38 < *(_DWORD *)(v4 + 704) )
        v39 += v38;
      v40 = *v39;
      v41 = *(unsigned int *)(v40 + 12);
      if ( (v41 & 2) != 0 && (*(_BYTE *)(a2 + 32) & 2) == 0 )
      {
        v42 = *(unsigned int *)(a2 + 44);
        v43 = *(unsigned int *)(a2 + 40);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 13LL, (v41 >> 1) & 1, v43, v42);
        __debugbreak();
      }
      if ( *(_DWORD *)(v40 + 16) == 1 )
      {
        v44 = a2;
        v45 = 2LL;
        v46 = v8;
      }
      else
      {
        if ( a3 && *(_DWORD *)(v40 + 16) == 2 )
        {
          v47 = *(unsigned __int16 *)(v40 + 4);
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 281LL, 16LL, v4, v47, 0LL);
          __debugbreak();
        }
        if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
        {
          v48 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v40 + 6272));
          if ( v48 )
          {
            v48[2].Next = (struct _SLIST_ENTRY *)v40;
            *((_QWORD *)&v48[2].Next + 1) = *(unsigned int *)(a2 + 8);
            *((_QWORD *)&v48[3].Next + 1) = *(_QWORD *)(a2 + 16);
            LODWORD(v48[5].Next) = *(_DWORD *)(a2 + 24);
            HIDWORD(v48[5].Next) = *(_DWORD *)(a2 + 28);
            *((_DWORD *)&v48[5].Next + 2) = *(_DWORD *)(a2 + 32);
            v48[3].Next = *(struct _SLIST_ENTRY **)(a2 + 40);
            *((_DWORD *)&v48[4].Next + 2) = *(_DWORD *)(a2 + 48);
            *((_DWORD *)&v48[4].Next + 3) = *(_DWORD *)(a2 + 52);
            *((_DWORD *)&v48[5].Next + 3) = *(_DWORD *)(a2 + 56);
            LODWORD(v48[6].Next) = *(_DWORD *)(a2 + 60);
            v48[4].Next = *(struct _SLIST_ENTRY **)(a2 + 64);
            LODWORD(v48->Next) = 12;
            ExpInterlockedPushEntrySList((PSLIST_HEADER)(v4 + 1776), v48 + 1);
          }
          else
          {
            WdLogSingleEntry1(1LL, *(unsigned __int16 *)(v40 + 4));
            ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"The list of pending HW queue page faulted interrupts is full on node %d. There must be severe contention o"
               "n the scheduler spin lock. This interrupt will be ignored.",
              *(unsigned __int16 *)(v40 + 4),
              0LL,
              0LL,
              0LL,
              0LL);
          }
          return;
        }
        if ( !(unsigned int)VidSchiVerifyDriverReportedFenceId((struct _VIDSCH_NODE *)v40, *(_DWORD *)(a2 + 8), 0, &v59) )
          return;
        VidSchiProcessIsrCompletedPacket(v40, v59, a3, a2);
        VidSchiProcessIsrFaultedPacket(v40, v59, a3, a2);
        v49 = *(_DWORD *)(a2 + 32);
        v44 = a2;
        v46 = v8;
        if ( (v49 & 4) != 0 )
        {
          v45 = 3LL;
        }
        else if ( (v49 & 8) != 0 )
        {
          v45 = 4LL;
        }
        else
        {
          v45 = 5LL;
        }
      }
      LogPageFaultInformation(v45, v46, v44);
      return;
    case 0xFu:
      if ( (*(_DWORD *)(v4 + 36) & 1) != 0 )
      {
        v50 = *(_QWORD **)(v4 + 632);
        v51 = *(_DWORD *)(a2 + 8) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 12) + v4 + 88);
        if ( (unsigned int)v51 < *(_DWORD *)(v4 + 704) )
          v50 += v51;
        VidSchiProcessIsrSchedulingLogFull(*v50);
      }
      break;
    case 0x10u:
      if ( (*(_DWORD *)(v4 + 36) & 1) != 0 )
      {
        v52 = *(_QWORD **)(v4 + 632);
        v53 = *(_DWORD *)(a2 + 8) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 12) + v4 + 88);
        if ( (unsigned int)v53 < *(_DWORD *)(v4 + 704) )
          v52 += v53;
        VidSchiProcessIsrGpuEngineTimeout(*v52);
      }
      break;
    case 0x11u:
      if ( (*(_DWORD *)(v4 + 36) & 1) != 0 )
        VidSchiProcessIsrSuspendContextCompleted(v4, a2);
      break;
    case 0xCu:
      if ( (*(_DWORD *)(v4 + 36) & 1) != 0 )
        VidSchiProcessIsrHwQueuePageFaulted(v4, a2);
      break;
    case 0xEu:
      v54 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(
              *(ADAPTER_DISPLAY **)(*(_QWORD *)(v4 + 16) + 2920LL),
              *(_DWORD *)(a2 + 8));
      v55 = v54;
      if ( v54 == -1 )
      {
        WdLogSingleEntry0(1LL);
        ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Dropping invalid VidPnTargetId for interrupt type DXGK_INTERRUPT_PERIODIC_MONITORED_FENCE_SIGNALED",
          7978LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else if ( (unsigned __int8)*(_DWORD *)(a2 + 12) < 8u )
      {
        v56 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v4 + 8LL * v54 + 3200) + 78816LL));
        if ( v56 )
        {
          HIDWORD(v56[2].Next) = *(_DWORD *)(a2 + 12);
          LODWORD(v56[2].Next) = v55;
          LODWORD(v56->Next) = 14;
          ExpInterlockedPushEntrySList((PSLIST_HEADER)(v4 + 1776), v56 + 1);
          if ( (byte_1C00769C1 & 2) != 0 )
            McTemplateK0qq_EtwWriteTransfer(
              v57,
              &EventPeriodicFrameNotificationInterrupt,
              v58,
              LODWORD(v56[2].Next),
              HIDWORD(v56[2].Next));
        }
        else
        {
          WdLogSingleEntry2(1LL, *(unsigned int *)(a2 + 8), *(unsigned int *)(a2 + 12));
          ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Out of Periodic Cookies, can't process DXGK_INTERRUPT_PERIODIC_MONITORED_FENCE_SIGNALED with VidPnTargetId:%"
             "d NotificationID:%d",
            *(unsigned int *)(a2 + 8),
            *(unsigned int *)(a2 + 12),
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        WdLogSingleEntry0(1LL);
        ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Dropping invalid NotificationID for interrupt type DXGK_INTERRUPT_PERIODIC_MONITORED_FENCE_SIGNALED",
          7985LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      break;
  }
}
