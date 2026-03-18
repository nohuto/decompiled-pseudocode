/*
 * XREFs of PointerInfoCopyOutHelperInternal @ 0x1C01C6B70
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     GetDPITransformationMonitor @ 0x1C01B9BB4 (GetDPITransformationMonitor.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01B9DD8 (RemapHimetricPointsForMultiMonDigitizers.c)
 */

__int64 __fastcall PointerInfoCopyOutHelperInternal(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, ULONG64 a6)
{
  unsigned int v9; // edi
  int AdjustedPointerLocations; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  int v16; // r14d
  int v17; // r14d
  ULONG64 v18; // rax
  _OWORD *v19; // rdx
  _OWORD *v20; // rax
  __int64 v22; // [rsp+58h] [rbp-C0h] BYREF
  __int64 DPITransformationMonitor; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-A8h] BYREF
  _QWORD v26[5]; // [rsp+78h] [rbp-A0h] BYREF
  __int128 v27; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v28; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v29; // [rsp+C0h] [rbp-58h] BYREF

  v9 = 0;
  v22 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26[0] = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  AdjustedPointerLocations = GetAdjustedPointerLocations(
                               *(_QWORD *)(a1 + 40),
                               *(_QWORD *)(a1 + 48),
                               *(_QWORD *)(a1 + 56),
                               *(_QWORD *)(a1 + 64),
                               a2,
                               &v22,
                               &v25,
                               &v24,
                               v26,
                               a3,
                               0);
  if ( (*((_DWORD *)PtiCurrentShared(v12, v11, v13, v14) + 318) & 0x2000) != 0 )
    AdjustedPointerLocations = 0;
  if ( a4 == 2 || a4 == 5 )
  {
    v28 = *(_OWORD *)(a1 + 112);
    v29 = *(_OWORD *)(a1 + 128);
  }
  v15 = HMValidateHandleNoSecure(*(_QWORD *)(a1 + 32), 1);
  if ( v15 && (*(_DWORD *)(*(_QWORD *)(v15 + 40) + 288LL) & 0xF) != 2 )
  {
    if ( !AdjustedPointerLocations )
    {
      v22 = *(_QWORD *)(a1 + 40);
      v25 = *(_QWORD *)(a1 + 48);
      v24 = *(_QWORD *)(a1 + 56);
      v26[0] = *(_QWORD *)(a1 + 64);
    }
    DPITransformationMonitor = GetDPITransformationMonitor(v22, v15);
    v16 = PhysicalToLogicalDPIPoint(&v22, &v22, 0LL, &DPITransformationMonitor) | AdjustedPointerLocations;
    AdjustedPointerLocations = PhysicalToLogicalDPIPoint(&v24, &v24, 0LL, &DPITransformationMonitor) | v16;
    if ( a4 == 2 || a4 == 5 )
    {
      v17 = PhysicalToLogicalDPIRect(&v28, &v28, 0LL, &DPITransformationMonitor) | AdjustedPointerLocations;
      AdjustedPointerLocations = PhysicalToLogicalDPIRect(&v29, &v29, 0LL, &DPITransformationMonitor) | v17;
    }
    if ( *(_DWORD *)*gpDispInfo > 1u && a3 && !*(_DWORD *)(*(_QWORD *)(a3 + 16) + 1336LL) && *(_DWORD *)(a3 + 24) != 7 )
    {
      v27 = *(_OWORD *)(a3 + 176);
      RemapHimetricPointsForMultiMonDigitizers((__int64)&v27, DPITransformationMonitor, &v25, v26);
      AdjustedPointerLocations = 1;
    }
  }
  switch ( a4 )
  {
    case 1:
      if ( a5 != 96 )
        goto LABEL_36;
      v20 = (_OWORD *)a6;
      if ( a6 >= MmUserProbeAddress )
        v20 = (_OWORD *)MmUserProbeAddress;
      *v20 = *(_OWORD *)(a1 + 8);
      v20[1] = *(_OWORD *)(a1 + 24);
      v20[2] = *(_OWORD *)(a1 + 40);
      v20[3] = *(_OWORD *)(a1 + 56);
      v20[4] = *(_OWORD *)(a1 + 72);
      v20[5] = *(_OWORD *)(a1 + 88);
      goto LABEL_35;
    case 2:
      goto LABEL_27;
    case 3:
      if ( a5 != 120 )
        goto LABEL_36;
      v18 = a6;
      if ( a6 >= MmUserProbeAddress )
        v18 = MmUserProbeAddress;
      *(_OWORD *)v18 = *(_OWORD *)(a1 + 8);
      *(_OWORD *)(v18 + 16) = *(_OWORD *)(a1 + 24);
      *(_OWORD *)(v18 + 32) = *(_OWORD *)(a1 + 40);
      *(_OWORD *)(v18 + 48) = *(_OWORD *)(a1 + 56);
      *(_OWORD *)(v18 + 64) = *(_OWORD *)(a1 + 72);
      *(_OWORD *)(v18 + 80) = *(_OWORD *)(a1 + 88);
      *(_OWORD *)(v18 + 96) = *(_OWORD *)(a1 + 104);
      *(_QWORD *)(v18 + 112) = *(_QWORD *)(a1 + 120);
LABEL_35:
      v9 = 1;
      goto LABEL_36;
    case 5:
LABEL_27:
      if ( a5 != 144 )
        goto LABEL_36;
      v19 = (_OWORD *)a6;
      if ( a6 >= MmUserProbeAddress )
        v19 = (_OWORD *)MmUserProbeAddress;
      *v19 = *(_OWORD *)(a1 + 8);
      v19[1] = *(_OWORD *)(a1 + 24);
      v19[2] = *(_OWORD *)(a1 + 40);
      v19[3] = *(_OWORD *)(a1 + 56);
      v19[4] = *(_OWORD *)(a1 + 72);
      v19[5] = *(_OWORD *)(a1 + 88);
      v19[6] = *(_OWORD *)(a1 + 104);
      v19[7] = *(_OWORD *)(a1 + 120);
      v19[8] = *(_OWORD *)(a1 + 136);
      goto LABEL_35;
  }
  v9 = 0;
LABEL_36:
  if ( v9 )
  {
    if ( AdjustedPointerLocations )
    {
      *(_QWORD *)(a6 + 32) = v22;
      *(_QWORD *)(a6 + 40) = v25;
      *(_QWORD *)(a6 + 48) = v24;
      *(_QWORD *)(a6 + 56) = v26[0];
      if ( a4 == 2 || a4 == 5 )
      {
        *(_OWORD *)(a6 + 104) = v28;
        *(_OWORD *)(a6 + 120) = v29;
      }
    }
  }
  return v9;
}
