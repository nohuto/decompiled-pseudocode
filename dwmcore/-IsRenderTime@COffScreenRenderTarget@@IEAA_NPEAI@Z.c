/*
 * XREFs of ?IsRenderTime@COffScreenRenderTarget@@IEAA_NPEAI@Z @ 0x18012CD1A
 * Callers:
 *     ?ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ @ 0x18012CD90 (-ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall COffScreenRenderTarget::IsRenderTime(COffScreenRenderTarget *this, unsigned int *a2)
{
  unsigned __int64 v4; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  v4 = 1000 * (PerformanceCount.QuadPart - *((_QWORD *)this + 21)) / g_qpcFrequency.QuadPart;
  if ( v4 < 0x10 )
  {
    *a2 = 16 - v4;
    return 0;
  }
  else
  {
    *a2 = 0;
    return 1;
  }
}
