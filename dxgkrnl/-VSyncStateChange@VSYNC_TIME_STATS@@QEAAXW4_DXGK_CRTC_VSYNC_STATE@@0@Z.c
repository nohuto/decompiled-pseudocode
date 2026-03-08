/*
 * XREFs of ?VSyncStateChange@VSYNC_TIME_STATS@@QEAAXW4_DXGK_CRTC_VSYNC_STATE@@0@Z @ 0x1C0044CDC
 * Callers:
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z @ 0x1C0003F70 (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z.c)
 * Callees:
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x1C0025258 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x1C0044FB8 (McTemplateK0qxxx_EtwWriteTransfer.c)
 */

void __fastcall VSYNC_TIME_STATS::VSyncStateChange(
        VSYNC_TIME_STATS *this,
        enum _DXGK_CRTC_VSYNC_STATE a2,
        enum _DXGK_CRTC_VSYNC_STATE a3)
{
  LARGE_INTEGER v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // r10
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rtt
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rtt
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // rtt
  unsigned __int64 v17[2]; // [rsp+40h] [rbp-10h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp+28h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( a3 == DXGK_VSYNC_ENABLE )
  {
    if ( (unsigned int)(a2 - 1) > 1 )
      return;
    v17[0] = 0LL;
    if ( (int)RtlULongLongMult(v6.QuadPart - *(_QWORD *)this, 0x3E8uLL, v17) >= 0 )
    {
      v11 = v17[0] % v9;
      v12 = v17[0] / v9;
    }
    else
    {
      v10 = v7;
      v11 = v7 % v9;
      v7 = 1000 * (v7 / v9);
      v12 = v7 + 1000 * (v10 % v9) / v9;
    }
    if ( a2 != DXGK_VSYNC_DISABLE_KEEP_PHASE )
    {
      *((_QWORD *)this + 4) += v12;
      goto LABEL_20;
    }
LABEL_19:
    *((_QWORD *)this + 3) += v12;
LABEL_20:
    *(_QWORD *)this = v8;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
      McTemplateK0qxxx_EtwWriteTransfer(
        v7,
        v11,
        v12,
        a3,
        *((_QWORD *)this + 2),
        *((_QWORD *)this + 3),
        *((_QWORD *)this + 4));
    return;
  }
  if ( a3 == DXGK_VSYNC_DISABLE_KEEP_PHASE )
  {
    if ( a2 )
      return;
    v17[0] = 0LL;
    if ( (int)RtlULongLongMult(v6.QuadPart - *(_QWORD *)this, 0x3E8uLL, v17) >= 0 )
    {
      v11 = v17[0] % v13;
      v12 = v17[0] / v13;
    }
    else
    {
      v14 = v7;
      v11 = v7 % v13;
      v7 = 1000 * (v7 / v13);
      v12 = v7 + 1000 * (v14 % v13) / v13;
    }
    *((_QWORD *)this + 2) += v12;
    goto LABEL_20;
  }
  if ( a3 == DXGK_VSYNC_DISABLE_NO_PHASE && a2 == DXGK_VSYNC_DISABLE_KEEP_PHASE )
  {
    v17[0] = 0LL;
    if ( (int)RtlULongLongMult(v6.QuadPart - *(_QWORD *)this, 0x3E8uLL, v17) >= 0 )
    {
      v11 = v17[0] % v15;
      v12 = v17[0] / v15;
    }
    else
    {
      v16 = v7;
      v11 = v7 % v15;
      v7 = 1000 * (v7 / v15);
      v12 = v7 + 1000 * (v16 % v15) / v15;
    }
    goto LABEL_19;
  }
}
