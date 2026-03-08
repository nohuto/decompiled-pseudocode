/*
 * XREFs of VidSchiCreateNode @ 0x1C00B6A5C
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C00B5B90 (VidSchInitializeAdapter.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C00035E0 (VidSchiInterlockedInsertTailList.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage @ 0x1C0019B44 (Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiCreateNode(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r13d
  __int64 v5; // r12
  __int64 v7; // r15
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 Pool2; // rax
  __int64 v12; // rbx
  BOOL v13; // eax
  __int64 v14; // r8
  int v15; // ecx
  __int64 v16; // rdx
  unsigned int v17; // edi
  __int64 v18; // rdx
  int v19; // eax
  unsigned int v20; // edi
  int v21; // ecx
  __int64 v22; // r15
  unsigned int v23; // edi
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // r15
  unsigned int v33; // r15d
  __int64 v34; // rcx
  int *v35; // rcx
  int v36; // eax

  v4 = a4;
  v5 = a2;
  v7 = a3;
  v8 = 224 * *(_DWORD *)(a1 + 2620) + 11296;
  if ( v8 < 0x2D00 )
  {
    WdLogSingleEntry0(1LL);
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
    return 0LL;
  }
  Pool2 = ExAllocatePool2(64LL, v8, 828467542LL);
  v12 = Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    return 0LL;
  }
  *(_DWORD *)Pool2 = 828467542;
  *(_QWORD *)(Pool2 + 24) = a1;
  *(_WORD *)(Pool2 + 4) = v4;
  *(_WORD *)(Pool2 + 6) = v5;
  *(_WORD *)(Pool2 + 8) = v7;
  *(_QWORD *)(Pool2 + 1736) = 0LL;
  *(_QWORD *)(Pool2 + 1744) = 0LL;
  if ( (_WORD)v7 == 0x7FFF )
  {
    *(_DWORD *)(Pool2 + 12) |= 0x40u;
  }
  else
  {
    v13 = *(_DWORD *)(a1 + 80) == 1
       || *(_WORD *)(344LL * (unsigned __int16)v5 + *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2808LL) + 2) == (unsigned __int16)v7;
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2808LL);
    v15 = 0;
    v16 = 344LL * (unsigned __int16)v5;
    if ( (*(_DWORD *)(v16 + v14 + 16) & 0x20) != 0 )
      LOBYTE(v15) = *(_DWORD *)(v16 + v14 + 24) == (unsigned __int16)v7;
    v17 = (4 * v15) | v13 & 0xFFFFFFFB | *(_DWORD *)(v12 + 12) & 0xFFFFFFFA;
    v18 = *(_QWORD *)(v14 + 344 * v5 + 32);
    if ( !v18 || (v19 = 2, (*(_BYTE *)(74 * v7 + v18 + 68) & 1) == 0) )
      v19 = 0;
    v20 = v19 | v17 & 0xFFFFFFFD;
    *(_DWORD *)(v12 + 12) = v20;
    if ( (v20 & 2) != 0 )
    {
      if ( !v18 || (v21 = 32, (*(_BYTE *)(74 * v7 + v18 + 68) & 2) == 0) )
        v21 = 0;
      v22 = 74 * v7;
      v23 = v21 | v20 & 0xFFFFFFDF;
      if ( v18 )
        v24 = *(_BYTE *)(v18 + v22 + 68) & 8;
      else
        v24 = 0;
      v20 = v24 | v23 & 0xFFFFFFF7;
      *(_DWORD *)(v12 + 12) = v20;
    }
    else
    {
      v22 = 74 * v7;
    }
    if ( (v20 & 2) != 0 )
    {
      v25 = 0;
      if ( v18 )
        v25 = *(unsigned __int16 *)(v22 + v18 + 70);
      *(_WORD *)(a1 + 56) = 257;
      v26 = v25;
      if ( !v25 )
        v26 = 0xFFFF;
      *(_DWORD *)(v12 + 1724) = v26;
    }
    if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
    {
      v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 2808LL) + 344 * v5 + 32);
      if ( v27 )
        v28 = *(_BYTE *)(v22 + v27 + 72) != 0 ? 0x10 : 0;
      else
        v28 = 0;
      v20 = v28 | v20 & 0xFFFFFFEF;
      *(_DWORD *)(v12 + 12) = v20;
    }
    if ( (v20 & 1) != 0 )
    {
      if ( (_DWORD)v5 )
      {
        if ( ((v20 & 2) != 0) != *(_BYTE *)(a1 + 55) || ((v20 & 0x20) != 0) != *(_BYTE *)(a1 + 58) )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 281LL, 20480LL, v5, 0LL, 0LL);
          __debugbreak();
          JUMPOUT(0x1C00B6EC7LL);
        }
      }
      else
      {
        *(_BYTE *)(a1 + 55) = (v20 & 2) != 0;
        *(_BYTE *)(a1 + 58) = (v20 & 0x20) != 0;
      }
    }
    v4 = a4;
  }
  KeInitializeEvent((PRKEVENT)(v12 + 11248), SynchronizationEvent, 0);
  v29 = (_QWORD *)(v12 + 2056);
  v30 = 32LL;
  do
  {
    v29[1] = v29;
    *v29 = v29;
    v29 += 2;
    --v30;
  }
  while ( v30 );
  *(_QWORD *)(v12 + 2576) = v12 + 2568;
  v31 = v12 + 240;
  *(_QWORD *)(v12 + 2568) = v12 + 2568;
  v32 = 3LL;
  *(_QWORD *)(v12 + 2592) = v12 + 2584;
  *(_QWORD *)(v12 + 2584) = v12 + 2584;
  *(_QWORD *)(v12 + 2608) = v12 + 2600;
  *(_QWORD *)(v12 + 2600) = v12 + 2600;
  *(_QWORD *)(v12 + 2624) = v12 + 2616;
  *(_QWORD *)(v12 + 2616) = v12 + 2616;
  *(_QWORD *)(v12 + 2640) = v12 + 2632;
  *(_QWORD *)(v12 + 2632) = v12 + 2632;
  do
  {
    *(_OWORD *)v31 = 0LL;
    *(_OWORD *)(v31 + 16) = 0LL;
    *(_OWORD *)(v31 + 32) = 0LL;
    *(_QWORD *)(v31 + 48) = 0LL;
    KeInitializeEvent((PRKEVENT)v31, SynchronizationEvent, 0);
    v31 += 56LL;
    --v32;
  }
  while ( v32 );
  v33 = 0;
  *(_QWORD *)(v12 + 416) = v12 + 408;
  *(_QWORD *)(v12 + 408) = v12 + 408;
  *(_QWORD *)(v12 + 432) = v12 + 424;
  *(_QWORD *)(v12 + 424) = v12 + 424;
  *(_QWORD *)(v12 + 1704) = v12 + 1696;
  *(_QWORD *)(v12 + 1696) = v12 + 1696;
  *(_QWORD *)(v12 + 11288) = v12 + 11280;
  for ( *(_QWORD *)(v12 + 11280) = v12 + 11280; v33 < *(_DWORD *)(a1 + 2620); ++v33 )
  {
    v34 = 224LL * v33;
    *(_DWORD *)(v34 + v12 + 11296) = 912353622;
    VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(a1 + 1736), v12 + 11280, (_QWORD *)(v34 + v12 + 11312), 0LL);
  }
  v35 = *(int **)(a1 + 2568);
  if ( v4 < *(_DWORD *)(a1 + 2608) )
    v35 += v4;
  v36 = *v35;
  *(_DWORD *)(v12 + 11272) = -1;
  *(_DWORD *)(v12 + 2872) = v36;
  *(_QWORD *)(v12 + 2928) = VidSchiNodePerfTracingThread;
  result = v12;
  *(_BYTE *)(v12 + 11276) = 1;
  *(_QWORD *)(v12 + 2936) = v12;
  *(_QWORD *)(v12 + 2912) = 0LL;
  return result;
}
