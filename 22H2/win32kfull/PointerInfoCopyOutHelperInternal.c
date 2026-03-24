/*
 * XREFs of PointerInfoCopyOutHelperInternal @ 0x1C01F1EE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     GetDPITransformationMonitor @ 0x1C01E50B0 (GetDPITransformationMonitor.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01E562C (RemapHimetricPointsForMultiMonDigitizers.c)
 */

__int64 __fastcall PointerInfoCopyOutHelperInternal(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, ULONG64 a6)
{
  int AdjustedPointerLocations; // esi
  __int64 v10; // rax
  int v11; // esi
  int v12; // esi
  ULONG64 v13; // rax
  _OWORD *v14; // rdx
  _OWORD *v15; // rax
  unsigned int v17; // [rsp+50h] [rbp-B8h]
  __int64 v18; // [rsp+58h] [rbp-B0h] BYREF
  __int64 DPITransformationMonitor; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v22[5]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v23; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v24; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v25; // [rsp+C0h] [rbp-48h] BYREF

  v17 = 0;
  v18 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22[0] = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  AdjustedPointerLocations = GetAdjustedPointerLocations(
                               *(_QWORD *)(a1 + 40),
                               *(_QWORD *)(a1 + 48),
                               *(_QWORD *)(a1 + 56),
                               *(_QWORD *)(a1 + 64),
                               a2,
                               &v18,
                               &v21,
                               &v20,
                               v22,
                               a3);
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1232) & 0x2000) != 0 )
    AdjustedPointerLocations = 0;
  if ( a4 == 2 || a4 == 5 )
  {
    v24 = *(_OWORD *)(a1 + 112);
    v25 = *(_OWORD *)(a1 + 128);
  }
  v10 = HMValidateHandleNoSecure(*(_QWORD *)(a1 + 32), 1);
  if ( v10 && (*(_DWORD *)(*(_QWORD *)(v10 + 40) + 288LL) & 0xF) != 2 )
  {
    if ( !AdjustedPointerLocations )
    {
      v18 = *(_QWORD *)(a1 + 40);
      v21 = *(_QWORD *)(a1 + 48);
      v20 = *(_QWORD *)(a1 + 56);
      v22[0] = *(_QWORD *)(a1 + 64);
    }
    DPITransformationMonitor = GetDPITransformationMonitor(v18, v10);
    v11 = PhysicalToLogicalDPIPoint(&v18, &v18, 0LL, &DPITransformationMonitor) | AdjustedPointerLocations;
    AdjustedPointerLocations = PhysicalToLogicalDPIPoint(&v20, &v20, 0LL, &DPITransformationMonitor) | v11;
    if ( a4 == 2 || a4 == 5 )
    {
      v12 = PhysicalToLogicalDPIRect(&v24, &v24, 0LL, &DPITransformationMonitor) | AdjustedPointerLocations;
      AdjustedPointerLocations = PhysicalToLogicalDPIRect(&v25, &v25, 0LL, &DPITransformationMonitor) | v12;
    }
    if ( *(_DWORD *)*gpDispInfo > 1u && a3 && !*(_DWORD *)(*(_QWORD *)(a3 + 16) + 1344LL) && *(_DWORD *)(a3 + 24) != 7 )
    {
      v23 = *(_OWORD *)(a3 + 176);
      RemapHimetricPointsForMultiMonDigitizers((__int64)&v23, DPITransformationMonitor, &v21, v22);
      AdjustedPointerLocations = 1;
    }
  }
  switch ( a4 )
  {
    case 1:
      if ( a5 != 96 )
        goto LABEL_36;
      v15 = (_OWORD *)a6;
      if ( a6 >= MmUserProbeAddress )
        v15 = (_OWORD *)MmUserProbeAddress;
      *v15 = *(_OWORD *)(a1 + 8);
      v15[1] = *(_OWORD *)(a1 + 24);
      v15[2] = *(_OWORD *)(a1 + 40);
      v15[3] = *(_OWORD *)(a1 + 56);
      v15[4] = *(_OWORD *)(a1 + 72);
      v15[5] = *(_OWORD *)(a1 + 88);
      goto LABEL_35;
    case 2:
      goto LABEL_27;
    case 3:
      if ( a5 != 120 )
        goto LABEL_36;
      v13 = a6;
      if ( a6 >= MmUserProbeAddress )
        v13 = MmUserProbeAddress;
      *(_OWORD *)v13 = *(_OWORD *)(a1 + 8);
      *(_OWORD *)(v13 + 16) = *(_OWORD *)(a1 + 24);
      *(_OWORD *)(v13 + 32) = *(_OWORD *)(a1 + 40);
      *(_OWORD *)(v13 + 48) = *(_OWORD *)(a1 + 56);
      *(_OWORD *)(v13 + 64) = *(_OWORD *)(a1 + 72);
      *(_OWORD *)(v13 + 80) = *(_OWORD *)(a1 + 88);
      *(_OWORD *)(v13 + 96) = *(_OWORD *)(a1 + 104);
      *(_QWORD *)(v13 + 112) = *(_QWORD *)(a1 + 120);
LABEL_35:
      v17 = 1;
      goto LABEL_36;
    case 5:
LABEL_27:
      if ( a5 != 144 )
        goto LABEL_36;
      v14 = (_OWORD *)a6;
      if ( a6 >= MmUserProbeAddress )
        v14 = (_OWORD *)MmUserProbeAddress;
      *v14 = *(_OWORD *)(a1 + 8);
      v14[1] = *(_OWORD *)(a1 + 24);
      v14[2] = *(_OWORD *)(a1 + 40);
      v14[3] = *(_OWORD *)(a1 + 56);
      v14[4] = *(_OWORD *)(a1 + 72);
      v14[5] = *(_OWORD *)(a1 + 88);
      v14[6] = *(_OWORD *)(a1 + 104);
      v14[7] = *(_OWORD *)(a1 + 120);
      v14[8] = *(_OWORD *)(a1 + 136);
      goto LABEL_35;
  }
  v17 = 0;
LABEL_36:
  if ( v17 )
  {
    if ( AdjustedPointerLocations )
    {
      *(_QWORD *)(a6 + 32) = v18;
      *(_QWORD *)(a6 + 40) = v21;
      *(_QWORD *)(a6 + 48) = v20;
      *(_QWORD *)(a6 + 56) = v22[0];
      if ( a4 == 2 || a4 == 5 )
      {
        *(_OWORD *)(a6 + 104) = v24;
        *(_OWORD *)(a6 + 120) = v25;
      }
    }
  }
  return v17;
}
