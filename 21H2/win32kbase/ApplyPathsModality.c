/*
 * XREFs of ApplyPathsModality @ 0x1C00787AC
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0065F30 (DrvSetDisplayConfig.c)
 * Callees:
 *     ApplyPathModalityToCdsRegistryStore @ 0x1C0075D00 (ApplyPathModalityToCdsRegistryStore.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C0078988 (DrvNotifyModeChangeStartStop.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00C1E50 (GreIncrementDisplaySettingsUniqueness.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplyPathsModality(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        struct _ERESOURCE *a4,
        struct _MDEV *a5,
        _BYTE *a6,
        void **a7,
        int *a8,
        _DWORD *a9,
        __int64 a10)
{
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // ebx
  unsigned int v20; // esi
  __int64 v21; // rdx
  int v22; // eax
  unsigned int v23; // ebx
  unsigned int v24; // r9d
  __int64 v25; // rcx
  unsigned int v26; // r8d
  __int64 v27; // rdx
  int *v29; // r10

  *a6 = 0;
  v14 = ApplyPathModalityToCdsRegistryStore(a1);
  if ( v14 < 0 )
  {
    *a8 = v14;
    *a9 = 50;
    return 0xFFFFFFFFLL;
  }
  else
  {
    LOBYTE(v15) = 1;
    DrvNotifyModeChangeStartStop(v15);
    if ( *(_DWORD *)(a1 + 40) || *(_QWORD *)(a1 + 48) )
      WdLogSingleEntry0(1LL);
    v16 = a2;
    LODWORD(v16) = a2 | 0x20000;
    v17 = ((__int64 (__fastcall *)(__int64, __int64, __int64))qword_1C0296700)(v16, a1, a10);
    if ( v17 < 0 )
    {
      v23 = -1;
      *a6 = 1;
      *a8 = v17;
      *a9 = 51;
    }
    else
    {
      v18 = *(_DWORD *)(a1 + 40);
      if ( !v18 || !*(_QWORD *)(a1 + 48) )
      {
        WdLogSingleEntry0(1LL);
        v18 = *(_DWORD *)(a1 + 40);
      }
      v19 = (a2 & 0x400000) != 0;
      v20 = 0;
      if ( v18 )
      {
        v21 = *(_QWORD *)(a1 + 48);
        do
        {
          if ( (v19 & 1) != 0 )
          {
            v29 = (int *)(v21 + 340LL * v20);
            if ( v29[22] != v29[30] )
            {
              WdLogSingleEntry4(4LL, v29[1], (unsigned int)*v29);
              v21 = *(_QWORD *)(a1 + 48);
              v19 &= ~1u;
            }
          }
          if ( *(_BYTE *)(340LL * v20 + v21 + 76) )
            a3 = 1;
          ++v20;
        }
        while ( v20 < *(_DWORD *)(a1 + 40) );
      }
      v22 = DrvChangeDisplaySettingsInternal(
              0LL,
              0LL,
              (struct D3DKMT_GETPATHSMODALITY *)a1,
              a4,
              0,
              1,
              a5,
              a7,
              0,
              1,
              a3,
              1,
              v19);
      v23 = v22;
      if ( v22 < 0 )
      {
        *a6 = 1;
        *a8 = -1073741823;
        *a9 = 16;
      }
      else if ( v22 == 1 )
      {
        v23 = -1;
        *a8 = -1073741823;
        *a9 = 52;
      }
      ((void (__fastcall *)(__int64))qword_1C0296708)(a1);
      if ( v23 == 2 )
      {
        v24 = *(_DWORD *)(a1 + 40);
        if ( v24 )
        {
          v25 = *(_QWORD *)(a1 + 48);
          if ( v25 )
          {
            v26 = 0;
            while ( 1 )
            {
              v27 = 340LL * v26;
              if ( *(_DWORD *)(v27 + v25 + 88)
                || *(_DWORD *)(v27 + v25 + 92)
                || *(_DWORD *)(v27 + v25 + 124)
                || *(_DWORD *)(v27 + v25 + 132) )
              {
                break;
              }
              if ( ++v26 >= v24 )
                goto LABEL_25;
            }
            v23 = 0;
            *a7 = a5;
            GreIncrementDisplaySettingsUniqueness();
          }
        }
      }
    }
LABEL_25:
    DrvNotifyModeChangeStartStop(0LL);
    return v23;
  }
}
