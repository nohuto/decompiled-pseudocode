/*
 * XREFs of ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C0096FB8
 * Callers:
 *     bDeleteBrush @ 0x1C00C82E0 (bDeleteBrush.c)
 * Callees:
 *     bDeleteSurface @ 0x1C0019110 (bDeleteSurface.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C001E824 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C001F08C (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0063C24 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall BRUSH::vDeleteIcmDIBs(BRUSH *this)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  int v3; // edi
  _BYTE v4[32]; // [rsp+20h] [rbp-38h] BYREF
  SURFACE *v5; // [rsp+40h] [rbp-18h]

  v1 = *((_QWORD *)this + 11);
  KeAcquireGuardedMutex(ghfmMemory);
  if ( v1 )
  {
    do
    {
      v2 = *(_QWORD *)(v1 + 16);
      v3 = 0;
      SURFREF::SURFREF((SURFREF *)v4, *(HSURF *)(v1 + 8));
      if ( v5 )
      {
        SURFACE::vDec_cRef(v5);
        v3 = 1;
      }
      SURFREF::~SURFREF((SURFREF *)v4);
      if ( v3 )
        bDeleteSurface(*(_QWORD *)(v1 + 8));
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)v1);
      v1 = v2;
    }
    while ( v2 );
  }
  KeReleaseGuardedMutex(ghfmMemory);
}
