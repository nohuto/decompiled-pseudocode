/*
 * XREFs of ?DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z @ 0x1C03130A8
 * Callers:
 *     NtDxgkCreateDoorbell @ 0x1C031BA20 (NtDxgkCreateDoorbell.c)
 * Callees:
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0001198 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0001314 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ??0DXGDOORBELLAPILOCKS@@QEAA@PEAVDXGHWQUEUE@@PEAJ@Z @ 0x1C0051758 (--0DXGDOORBELLAPILOCKS@@QEAA@PEAVDXGHWQUEUE@@PEAJ@Z.c)
 *     ??1DXGDOORBELLAPILOCKS@@QEAA@XZ @ 0x1C00518A0 (--1DXGDOORBELLAPILOCKS@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z @ 0x1C0311AE4 (-AllocateElements@-$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z.c)
 *     ?CreateDoorbell@DXGHWQUEUE@@QEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z @ 0x1C0311FAC (-CreateDoorbell@DXGHWQUEUE@@QEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z.c)
 */

__int64 __fastcall DxgkCreateDoorbellInternal(struct _D3DKMT_CREATE_DOORBELL *a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_CREATE_DOORBELL *v3; // r15
  void *v4; // r12
  ULONG64 v5; // rcx
  ULONG64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  size_t v14; // r8
  const void *v15; // rdx
  PVOID v16; // rcx
  char *v17; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v19; // rcx
  __int64 CurrentProcess; // rax
  int Doorbell; // esi
  __int64 v22; // rcx
  __int64 v23; // rax
  const wchar_t *v24; // r9
  struct DXGHWQUEUE *v25; // r14
  __int64 v26; // rax
  __int64 v27; // r8
  size_t v28; // r8
  PVOID v29; // rdx
  void *v30; // rcx
  char *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // [rsp+50h] [rbp-1C8h] BYREF
  __int64 v35; // [rsp+58h] [rbp-1C0h]
  char v36; // [rsp+60h] [rbp-1B8h]
  int v37; // [rsp+68h] [rbp-1B0h] BYREF
  unsigned int v38[4]; // [rsp+70h] [rbp-1A8h] BYREF
  void *Src[2]; // [rsp+80h] [rbp-198h]
  __int128 v40; // [rsp+90h] [rbp-188h]
  __int64 v41; // [rsp+A0h] [rbp-178h]
  struct DXGHWQUEUE *v42; // [rsp+A8h] [rbp-170h] BYREF
  _BYTE v43[16]; // [rsp+B0h] [rbp-168h] BYREF
  void *v44; // [rsp+C0h] [rbp-158h]
  __m128i v45; // [rsp+C8h] [rbp-150h]
  __int64 v46; // [rsp+D8h] [rbp-140h]
  int v47; // [rsp+E0h] [rbp-138h]
  PVOID P; // [rsp+E8h] [rbp-130h] BYREF
  _BYTE v49[16]; // [rsp+F0h] [rbp-128h] BYREF
  int v50; // [rsp+100h] [rbp-118h]
  _BYTE v51[224]; // [rsp+110h] [rbp-108h] BYREF

  v3 = a1;
  v34 = -1;
  v35 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v36 = 1;
    v34 = 2220;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2220);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v34, 2220);
  *(_OWORD *)v38 = 0LL;
  *(_OWORD *)Src = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  P = 0LL;
  v50 = 0;
  v4 = 0LL;
  v44 = 0LL;
  v5 = MmUserProbeAddress;
  v6 = (ULONG64)v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v6 = MmUserProbeAddress;
  *(_OWORD *)v38 = *(_OWORD *)v6;
  *(_OWORD *)Src = *(_OWORD *)(v6 + 16);
  v40 = *(_OWORD *)(v6 + 32);
  v41 = *(_QWORD *)(v6 + 48);
  if ( Src[1] )
  {
    if ( LODWORD(Src[0]) )
    {
LABEL_18:
      if ( LODWORD(Src[0]) > 0x10 )
      {
        WdLogSingleEntry3(2LL, LODWORD(Src[0]), 16LL, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"PrivateDriverDataSize 0x%I64x is greater than max permitted size 0x%I64x, returning 0x%I64x",
          LODWORD(Src[0]),
          16LL,
          -1073741811LL,
          0LL,
          0LL);
        if ( P != v49 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v50 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
        if ( v36 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v34);
        }
        return 3221225485LL;
      }
      if ( LODWORD(Src[0]) )
      {
        if ( !PagedPoolZeroedArray<unsigned char,16>::AllocateElements((__int64 *)&P, (unsigned int)Src[0]) )
        {
          WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741801LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Out of memory allocating 0x%x bytes for private driver data, returning 0x%x",
            LODWORD(Src[0]),
            -1073741801LL,
            0LL,
            0LL,
            0LL);
          if ( P != v49 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v50 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
          if ( v36 )
          {
            LOBYTE(v12) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v34);
          }
          return 3221225495LL;
        }
        v14 = LODWORD(Src[0]);
        v15 = Src[1];
        v16 = P;
        v17 = (char *)Src[1] + LODWORD(Src[0]);
        if ( v17 < Src[1] || (unsigned __int64)v17 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v16, v15, v14);
        v4 = Src[1];
        v44 = Src[1];
        Src[1] = P;
      }
      Current = DXGPROCESS::GetCurrent(v5);
      if ( Current )
      {
        if ( (v38[3] & 0xFFFFFFFC) == 0 )
        {
          v42 = 0LL;
          DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v43, v38[0], Current, &v42, 0);
          v25 = v42;
          if ( v42 && *((_BYTE *)v42 + 140) )
          {
            v37 = 0;
            DXGDOORBELLAPILOCKS::DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v51, v42, &v37);
            Doorbell = v37;
            if ( v37 >= 0 )
            {
              if ( (v38[3] & 1) == 0
                || (v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL) + 16LL) + 16LL)
                                    + 2928LL),
                    v45 = *(__m128i *)(v26 + 1272),
                    v46 = *(_QWORD *)(v26 + 1288),
                    v47 = *(_DWORD *)(v26 + 1296),
                    (_mm_cvtsi128_si32(v45) & 1) != 0) )
              {
                v27 = *((_QWORD *)v25 + 18);
                if ( v27 )
                {
                  Doorbell = -1073741811;
                  WdLogSingleEntry3(2LL, v25, v27, -1073741811LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Can not create doorbell on DXGHWQueue 0x%I64x as DXGDOORBELL 0x%I64x already exists, returning 0x%I64x",
                    (__int64)v25,
                    *((_QWORD *)v25 + 18),
                    -1073741811LL,
                    0LL,
                    0LL);
                }
                else
                {
                  Doorbell = DXGHWQUEUE::CreateDoorbell((DXGDOORBELL **)v25, (struct _D3DKMT_CREATE_DOORBELL *)v38);
                  v37 = Doorbell;
                  if ( Doorbell >= 0 )
                  {
                    *(_QWORD *)&v40 = *(_QWORD *)(*((_QWORD *)v25 + 18) + 48LL);
                    *((_QWORD *)&v40 + 1) = *(_QWORD *)(*((_QWORD *)v25 + 18) + 64LL);
                    v41 = *(_QWORD *)(*((_QWORD *)v25 + 18) + 128LL);
                    Src[1] = v4;
                    v44 = 0LL;
                    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
                      v3 = (struct _D3DKMT_CREATE_DOORBELL *)MmUserProbeAddress;
                    *(_OWORD *)v3 = *(_OWORD *)v38;
                    *((_OWORD *)v3 + 1) = *(_OWORD *)Src;
                    *((_OWORD *)v3 + 2) = v40;
                    *((_QWORD *)v3 + 6) = v41;
                    if ( LODWORD(Src[0]) )
                    {
                      v28 = LODWORD(Src[0]);
                      v29 = P;
                      v30 = Src[1];
                      v31 = (char *)Src[1] + LODWORD(Src[0]);
                      if ( (unsigned __int64)v31 > MmUserProbeAddress || v31 <= Src[1] )
                        *(_BYTE *)MmUserProbeAddress = 0;
                      memmove(v30, v29, v28);
                    }
                  }
                }
              }
              else
              {
                Doorbell = -1073741811;
                WdLogSingleEntry1(2LL, -1073741811LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"RequireSecondaryCpuVA flag set but adapter does not support secondary doorbell, returning 0x%I64x",
                  -1073741811LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            DXGDOORBELLAPILOCKS::~DXGDOORBELLAPILOCKS((DXGDOORBELLAPILOCKS *)v51);
          }
          else
          {
            Doorbell = -1073741811;
            WdLogSingleEntry2(2LL, v38[0], -1073741811LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"invalid hHwQueue 0x%I64x, returning 0x%I64x",
              v38[0],
              -1073741811LL,
              0LL,
              0LL,
              0LL);
          }
          DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v43);
          goto LABEL_64;
        }
        Doorbell = -1073741811;
        WdLogSingleEntry2(2LL, v38[3], -1073741811LL);
        v23 = v38[3];
        v24 = L"Reserved bits in Flags (0x%I64x) should not be set, returning 0x%I64x";
      }
      else
      {
        CurrentProcess = PsGetCurrentProcess(v19);
        Doorbell = -1073741811;
        WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
        v23 = PsGetCurrentProcess(v22);
        v24 = L"unexpected process 0x%I64x, returning 0x%I64x";
      }
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v24, v23, -1073741811LL, 0LL, 0LL, 0LL);
LABEL_64:
      if ( P != v49 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v50 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
      if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v34);
      return (unsigned int)Doorbell;
    }
  }
  else if ( !LODWORD(Src[0]) )
  {
    goto LABEL_18;
  }
  WdLogSingleEntry1(2LL, 3437LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"PrivateDriverData pointer and size don't match",
    3437LL,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( P != v49 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v50 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v34);
  return -1073741811LL;
}
