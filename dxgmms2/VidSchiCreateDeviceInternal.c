__int64 __fastcall VidSchiCreateDeviceInternal(__int64 a1, __int128 *a2, __int64 a3, __int64 *a4)
{
  struct DXGPROCESS *Current; // r15
  __int64 Pool2; // rax
  __int64 v10; // rbx
  __int128 v11; // xmm0
  __int64 v12; // xmm1_8
  __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // r8
  int v18; // ecx
  int v19; // eax
  unsigned int v21; // edx
  DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION *KmdProcessHandle; // rax
  ADAPTER_RENDER *v23; // rcx
  bool v24; // zf
  HANDLE CurrentProcessId; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned int v28; // edi
  int v29; // eax
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 v30; // [rsp+70h] [rbp-48h] BYREF

  *a4 = 0LL;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    Current = *(struct DXGPROCESS **)(g_pVidSchSystemProcess + 8);
  }
  else
  {
    if ( !a3 )
    {
      WdLogSingleEntry0(3LL);
      return 3221225485LL;
    }
    Current = DXGPROCESS::GetCurrent();
  }
  Pool2 = ExAllocatePool2(64LL, 1712LL, 862021974LL);
  v10 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 862021974;
    *(_QWORD *)(Pool2 + 8) = a3;
    ExInitializeResourceLite((PERESOURCE)(Pool2 + 968));
    v11 = *a2;
    *(_DWORD *)(v10 + 504) = -1;
    v12 = *((_QWORD *)a2 + 2);
    *(_OWORD *)(v10 + 48) = v11;
    *(_QWORD *)(v10 + 32) = a1;
    *(_QWORD *)(v10 + 64) = v12;
    VidSchiReadDeviceConfiguration(v10);
    *(_QWORD *)(v10 + 80) = v10 + 72;
    *(_QWORD *)(v10 + 72) = v10 + 72;
    *(_QWORD *)(v10 + 96) = v10 + 88;
    *(_QWORD *)(v10 + 88) = v10 + 88;
    *(_QWORD *)(v10 + 1616) = v10 + 1608;
    *(_QWORD *)(v10 + 1608) = v10 + 1608;
    *(_QWORD *)(v10 + 128) = v10 + 120;
    *(_QWORD *)(v10 + 120) = v10 + 120;
    *(_QWORD *)(v10 + 144) = v10 + 136;
    *(_QWORD *)(v10 + 136) = v10 + 136;
    *(_QWORD *)(v10 + 160) = v10 + 152;
    *(_QWORD *)(v10 + 152) = v10 + 152;
    *(_QWORD *)(v10 + 176) = v10 + 168;
    *(_QWORD *)(v10 + 168) = v10 + 168;
    VidSchSetQueuedPresentLimit(v10, 0LL);
    memset64((void *)(v10 + 376), 1uLL, 0x10uLL);
    VidSchiIncrementDeviceReference(v10);
    VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(a1 + 1728), a1 + 296, (_QWORD *)(v10 + 104), 0LL);
    if ( (*(_DWORD *)a2 & 1) != 0 )
    {
      v13 = g_pVidSchSystemProcess;
    }
    else
    {
      v13 = *((_QWORD *)Current + 8);
      if ( v13 )
        v13 = *(_QWORD *)(v13 + 24);
    }
    v14 = *(unsigned int *)(a1 + 4);
    *(_QWORD *)(v10 + 40) = v13;
    v15 = *(_DWORD *)(*(_QWORD *)(v13 + 2624) + 4 * (v14 >> 5));
    if ( _bittest(&v15, v14 & 0x1F) )
    {
      LODWORD(v16) = -1073741790;
      goto LABEL_28;
    }
    LODWORD(v16) = VidSchiOpenProcessAdapterInfo(v13, a1);
    if ( (int)v16 >= 0 )
    {
      v18 = *(_DWORD *)a2;
      *(_BYTE *)(v10 + 240) = 1;
      if ( (v18 & 1) != 0 )
      {
        v21 = *(_DWORD *)(a1 + 4);
        memset(&v30, 0, 24);
        v30.OutputFlags.Value = _mm_cvtsi128_si32((__m128i)0LL) | 1;
        KmdProcessHandle = (DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION *)DXGPROCESS::GetKmdProcessHandle(Current, v21);
        v23 = *(ADAPTER_RENDER **)(a1 + 8);
        v30.pPostComposition = KmdProcessHandle;
        LODWORD(v16) = ADAPTER_RENDER::DdiCreateDevice(v23, &v30);
        if ( (int)v16 < 0 )
          goto LABEL_28;
        v24 = bTracingEnabled == 0;
        *(_QWORD *)(v10 + 16) = *(_QWORD *)&v30.VidPnSourceId;
        if ( !v24 )
        {
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (byte_1C00769C1 & 4) != 0 )
            McTemplateK0ppqpttqpqp_EtwWriteTransfer(
              v26,
              &EventCreateDevice,
              v17,
              CurrentProcessId,
              *(_QWORD *)(a1 + 16));
        }
      }
      else
      {
        *(_QWORD *)(v10 + 16) = *(_QWORD *)(a3 + 616);
      }
      if ( (*(_DWORD *)(v10 + 48) & 2) == 0 )
      {
LABEL_15:
        *a4 = v10;
        return (unsigned int)v16;
      }
      if ( *(_BYTE *)(a1 + 2212) )
      {
        v28 = 0;
        if ( !*(_DWORD *)(a1 + 40) )
          goto LABEL_15;
        while ( 1 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v28 + 3200) + 4LL) )
          {
            LOBYTE(v17) = 1;
            v29 = VidSchControlVSyncDevice(v10, 2LL, v17, v28);
            v16 = v29;
            if ( v29 < 0 )
              break;
          }
          if ( ++v28 >= *(_DWORD *)(a1 + 40) )
            goto LABEL_15;
        }
      }
      else
      {
        LOBYTE(v17) = 1;
        v19 = VidSchControlVSyncDevice(v10, 2LL, v17, 4294967293LL);
        v16 = v19;
        if ( v19 >= 0 )
          goto LABEL_15;
      }
      WdLogSingleEntry1(1LL, v16);
      DxgkLogInternalTriageEvent(v27, 0x40000LL);
    }
LABEL_28:
    VidSchTerminateDevice((char *)v10);
    return (unsigned int)v16;
  }
  WdLogSingleEntry0(3LL);
  return 3221225495LL;
}
