/*
 * XREFs of PointerInfoCopyOutHelperInternal @ 0x1C01C7CD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     GetDPITransformationMonitor @ 0x1C01BAD54 (GetDPITransformationMonitor.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01BAF78 (RemapHimetricPointsForMultiMonDigitizers.c)
 */

__int64 __fastcall PointerInfoCopyOutHelperInternal(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, ULONG64 a6)
{
  unsigned int v9; // edi
  int AdjustedPointerLocations; // r14d
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // r14d
  int v14; // r14d
  ULONG64 v15; // rax
  _OWORD *v16; // rdx
  _OWORD *v17; // rax
  __int64 v19; // [rsp+58h] [rbp-C0h] BYREF
  __int64 DPITransformationMonitor; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-A8h] BYREF
  _QWORD v23[5]; // [rsp+78h] [rbp-A0h] BYREF
  __int128 v24; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v25; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v26; // [rsp+C0h] [rbp-58h] BYREF

  v9 = 0;
  v19 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23[0] = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  AdjustedPointerLocations = GetAdjustedPointerLocations(
                               *(_QWORD *)(a1 + 40),
                               *(_QWORD *)(a1 + 48),
                               *(_QWORD *)(a1 + 56),
                               *(_QWORD *)(a1 + 64),
                               a2,
                               &v19,
                               &v22,
                               &v21,
                               v23,
                               a3,
                               0);
  if ( (*((_DWORD *)PtiCurrentShared(v11) + 318) & 0x2000) != 0 )
    AdjustedPointerLocations = 0;
  if ( a4 == 2 || a4 == 5 )
  {
    v25 = *(_OWORD *)(a1 + 112);
    v26 = *(_OWORD *)(a1 + 128);
  }
  v12 = HMValidateHandleNoSecure(*(_QWORD *)(a1 + 32), 1);
  if ( v12 && (*(_DWORD *)(*(_QWORD *)(v12 + 40) + 288LL) & 0xF) != 2 )
  {
    if ( !AdjustedPointerLocations )
    {
      v19 = *(_QWORD *)(a1 + 40);
      v22 = *(_QWORD *)(a1 + 48);
      v21 = *(_QWORD *)(a1 + 56);
      v23[0] = *(_QWORD *)(a1 + 64);
    }
    DPITransformationMonitor = GetDPITransformationMonitor(v19, v12);
    v13 = PhysicalToLogicalDPIPoint(&v19, &v19, 0LL, &DPITransformationMonitor) | AdjustedPointerLocations;
    AdjustedPointerLocations = PhysicalToLogicalDPIPoint(&v21, &v21, 0LL, &DPITransformationMonitor) | v13;
    if ( a4 == 2 || a4 == 5 )
    {
      v14 = PhysicalToLogicalDPIRect(&v25, &v25, 0LL, &DPITransformationMonitor) | AdjustedPointerLocations;
      AdjustedPointerLocations = PhysicalToLogicalDPIRect(&v26, &v26, 0LL, &DPITransformationMonitor) | v14;
    }
    if ( *(_DWORD *)*gpDispInfo > 1u && a3 && !*(_DWORD *)(*(_QWORD *)(a3 + 16) + 1336LL) && *(_DWORD *)(a3 + 24) != 7 )
    {
      v24 = *(_OWORD *)(a3 + 176);
      RemapHimetricPointsForMultiMonDigitizers((__int64)&v24, DPITransformationMonitor, &v22, v23);
      AdjustedPointerLocations = 1;
    }
  }
  switch ( a4 )
  {
    case 1:
      if ( a5 != 96 )
        goto LABEL_36;
      v17 = (_OWORD *)a6;
      if ( a6 >= MmUserProbeAddress )
        v17 = (_OWORD *)MmUserProbeAddress;
      *v17 = *(_OWORD *)(a1 + 8);
      v17[1] = *(_OWORD *)(a1 + 24);
      v17[2] = *(_OWORD *)(a1 + 40);
      v17[3] = *(_OWORD *)(a1 + 56);
      v17[4] = *(_OWORD *)(a1 + 72);
      v17[5] = *(_OWORD *)(a1 + 88);
      goto LABEL_35;
    case 2:
      goto LABEL_27;
    case 3:
      if ( a5 != 120 )
        goto LABEL_36;
      v15 = a6;
      if ( a6 >= MmUserProbeAddress )
        v15 = MmUserProbeAddress;
      *(_OWORD *)v15 = *(_OWORD *)(a1 + 8);
      *(_OWORD *)(v15 + 16) = *(_OWORD *)(a1 + 24);
      *(_OWORD *)(v15 + 32) = *(_OWORD *)(a1 + 40);
      *(_OWORD *)(v15 + 48) = *(_OWORD *)(a1 + 56);
      *(_OWORD *)(v15 + 64) = *(_OWORD *)(a1 + 72);
      *(_OWORD *)(v15 + 80) = *(_OWORD *)(a1 + 88);
      *(_OWORD *)(v15 + 96) = *(_OWORD *)(a1 + 104);
      *(_QWORD *)(v15 + 112) = *(_QWORD *)(a1 + 120);
LABEL_35:
      v9 = 1;
      goto LABEL_36;
    case 5:
LABEL_27:
      if ( a5 != 144 )
        goto LABEL_36;
      v16 = (_OWORD *)a6;
      if ( a6 >= MmUserProbeAddress )
        v16 = (_OWORD *)MmUserProbeAddress;
      *v16 = *(_OWORD *)(a1 + 8);
      v16[1] = *(_OWORD *)(a1 + 24);
      v16[2] = *(_OWORD *)(a1 + 40);
      v16[3] = *(_OWORD *)(a1 + 56);
      v16[4] = *(_OWORD *)(a1 + 72);
      v16[5] = *(_OWORD *)(a1 + 88);
      v16[6] = *(_OWORD *)(a1 + 104);
      v16[7] = *(_OWORD *)(a1 + 120);
      v16[8] = *(_OWORD *)(a1 + 136);
      goto LABEL_35;
  }
  v9 = 0;
LABEL_36:
  if ( v9 )
  {
    if ( AdjustedPointerLocations )
    {
      *(_QWORD *)(a6 + 32) = v19;
      *(_QWORD *)(a6 + 40) = v22;
      *(_QWORD *)(a6 + 48) = v21;
      *(_QWORD *)(a6 + 56) = v23[0];
      if ( a4 == 2 || a4 == 5 )
      {
        *(_OWORD *)(a6 + 104) = v25;
        *(_OWORD *)(a6 + 120) = v26;
      }
    }
  }
  return v9;
}
