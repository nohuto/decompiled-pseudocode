/*
 * XREFs of ?VSyncStateChange@VSYNC_TIME_STATS@@QEAAXW4_DXGK_CRTC_VSYNC_STATE@@0@Z @ 0x1C004829C
 * Callers:
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x1C004A448 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 * Callees:
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x1C00323F4 (McTemplateK0qxxx_EtwWriteTransfer.c)
 */

void __fastcall VSYNC_TIME_STATS::VSyncStateChange(VSYNC_TIME_STATS *this, enum _DXGK_CRTC_VSYNC_STATE a2, int a3)
{
  LARGE_INTEGER v6; // rax
  LARGE_INTEGER v7; // rcx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r10
  union _LARGE_INTEGER v12; // [rsp+78h] [rbp+20h] BYREF

  v12.QuadPart = 0LL;
  v6 = KeQueryPerformanceCounter(&v12);
  if ( !a3 )
  {
    if ( (unsigned int)(a2 - 1) > 1 )
      return;
    v8 = v6.QuadPart - *(_QWORD *)this;
    if ( is_mul_ok(v8, 0x3E8uLL) )
    {
      v9 = v8 * (unsigned __int128)0x3E8uLL / (unsigned __int64)v12.QuadPart;
    }
    else
    {
      v7.QuadPart = 1000 * (v8 / v12.QuadPart);
      v9 = v7.QuadPart + 1000 * (v8 % v12.QuadPart) / v12.QuadPart;
    }
    if ( a2 == DXGK_VSYNC_DISABLE_KEEP_PHASE )
      *((_QWORD *)this + 3) += v9;
    else
      *((_QWORD *)this + 4) += v9;
    goto LABEL_21;
  }
  if ( a3 == 1 )
  {
    if ( a2 )
      return;
    v9 = v6.QuadPart - *(_QWORD *)this;
    if ( is_mul_ok(v9, 0x3E8uLL) )
    {
      v10 = v9 * (unsigned __int128)0x3E8uLL / (unsigned __int64)v12.QuadPart;
    }
    else
    {
      v7.QuadPart = 1000 * (v9 / v12.QuadPart);
      v10 = v7.QuadPart + 1000 * (v9 % v12.QuadPart) / v12.QuadPart;
    }
    *((_QWORD *)this + 2) += v10;
    goto LABEL_21;
  }
  if ( a3 == 2 && a2 == DXGK_VSYNC_DISABLE_KEEP_PHASE )
  {
    v9 = v6.QuadPart - *(_QWORD *)this;
    if ( is_mul_ok(v9, 0x3E8uLL) )
    {
      v11 = v9 * (unsigned __int128)0x3E8uLL / (unsigned __int64)v12.QuadPart;
    }
    else
    {
      v7.QuadPart = 1000 * (v9 / v12.QuadPart);
      v11 = v7.QuadPart + 1000 * (v9 % v12.QuadPart) / v12.QuadPart;
    }
    *((_QWORD *)this + 3) += v11;
LABEL_21:
    *(LARGE_INTEGER *)this = v6;
    if ( (byte_1C00769C4 & 1) != 0 )
      McTemplateK0qxxx_EtwWriteTransfer(
        v7.QuadPart,
        &EventVSyncTimeStatistics,
        v9,
        a3,
        *((_QWORD *)this + 2),
        *((_QWORD *)this + 3),
        *((_QWORD *)this + 4));
  }
}
