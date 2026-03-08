/*
 * XREFs of ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00F449A
 * Callers:
 *     ?GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C022D62C (-GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseC.c)
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1C022F184 (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 * Callees:
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C00157DC (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C00159F0 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z.c)
 *     rand @ 0x1C00DAEF8 (rand.c)
 *     GetNormalizedMouseSensitivityFactor @ 0x1C00F4192 (GetNormalizedMouseSensitivityFactor.c)
 *     DoAccel @ 0x1C0217870 (DoAccel.c)
 */

void __fastcall CMouseProcessor::ApplyAccelerationToDelta(
        CMouseProcessor *this,
        __int64 a2,
        __int64 a3,
        struct tagPOINT a4,
        bool a5,
        struct _SUBPIXELS *a6,
        int *a7,
        int *a8)
{
  int v9; // edi
  int v10; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int NormalizedMouseSensitivityFactor; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // r8d
  int v25; // edx
  struct _SUBPIXELS *v26; // rbx
  int v27; // edx
  int v28; // eax
  __int64 v29[2]; // [rsp+20h] [rbp-10h] BYREF
  int v30; // [rsp+58h] [rbp+28h] BYREF
  int v31; // [rsp+60h] [rbp+30h] BYREF

  v31 = a3;
  v30 = a2;
  v9 = a3;
  v10 = a2;
  if ( a5 )
  {
    v15 = *(_QWORD *)(((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SGDGetUserSessionState)(this, a2, a3, a4)
                    + 16008);
    if ( *(_BYTE *)(v15 + 112) || (*(_DWORD *)(SGDGetUserSessionState(v13, v12, v14, v15) + 16820) & 0x40) == 0 )
    {
      v16 = v29;
      v17 = 1LL;
LABEL_7:
      DoAccel(v17, &v30, &v31, v16);
      v9 = v31;
      v10 = v30;
      goto LABEL_20;
    }
  }
  if ( *(_BYTE *)(*(_QWORD *)(((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SGDGetUserSessionState)(
                                this,
                                a2,
                                a3,
                                a4)
                            + 16008)
                + 112LL) )
  {
    v16 = (__int64 *)a6;
    v17 = 0LL;
    goto LABEL_7;
  }
  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v29);
  InputConfig::Mouse::RegionFromPoint(a4, (struct CLockedInputSpaceRegion *)v29);
  NormalizedMouseSensitivityFactor = GetNormalizedMouseSensitivityFactor(v29[0], v18, v19, v20);
  if ( NormalizedMouseSensitivityFactor == 256 )
  {
    v28 = rand();
    v26 = a6;
    *(_DWORD *)a6 = v28 % 0x10000;
    v27 = rand() % 0x10000;
  }
  else
  {
    if ( v10 )
    {
      v22 = *((_DWORD *)this + 13) + v10 * NormalizedMouseSensitivityFactor;
      v10 = v22 / 256;
      v23 = v22 % 256;
      *((_DWORD *)this + 13) = v22 % 256;
      if ( v22 < 0 && v23 > 0 )
      {
        ++v10;
        *((_DWORD *)this + 13) = v23 - 256;
      }
    }
    if ( v9 )
    {
      v24 = *((_DWORD *)this + 14) + v9 * NormalizedMouseSensitivityFactor;
      v9 = v24 / 256;
      v25 = v24 % 256;
      *((_DWORD *)this + 14) = v24 % 256;
      if ( v24 < 0 && v25 > 0 )
      {
        ++v9;
        *((_DWORD *)this + 14) = v25 - 256;
      }
    }
    v26 = a6;
    *(_DWORD *)a6 = *((_DWORD *)this + 13) << 8;
    v27 = *((_DWORD *)this + 14) << 8;
  }
  *((_DWORD *)v26 + 1) = v27;
  ExReleaseResourceLite(*(PERESOURCE *)v29[1]);
  KeLeaveCriticalRegion();
LABEL_20:
  *a7 = v10;
  *a8 = v9;
}
