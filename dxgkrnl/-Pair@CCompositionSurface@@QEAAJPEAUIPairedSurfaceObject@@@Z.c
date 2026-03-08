/*
 * XREFs of ?Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x1C007C144
 * Callers:
 *     ?Pair@CompositionSurfaceObject@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x1C0059F40 (-Pair@CompositionSurfaceObject@@QEAAJPEAUIPairedSurfaceObject@@@Z.c)
 * Callees:
 *     ?FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z @ 0x1C00016E8 (-FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z.c)
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C000DB08 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C007BB00 (-GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z @ 0x1C007C270 (-PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z.c)
 */

__int64 __fastcall CCompositionSurface::Pair(CCompositionSurface *this, struct IPairedSurfaceObject *a2)
{
  int v2; // ebx
  struct CCompositionBuffer *RenderingBuffer; // rax
  struct CCompositionBuffer *v7; // rsi
  struct CCompositionBuffer *ActiveBuffer; // rax
  __int64 v9; // rdx
  struct CCompositionBuffer *v10; // r15
  __int64 v11; // rdx
  struct CFlipExBuffer *v12; // rax
  struct CFlipExBuffer *v13; // rax

  v2 = 0;
  if ( *((_QWORD *)this + 13) )
    return 3221226768LL;
  RenderingBuffer = CCompositionSurface::GetRenderingBuffer(this);
  v7 = RenderingBuffer;
  if ( RenderingBuffer
    && (*(unsigned int (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)RenderingBuffer + 8LL))(RenderingBuffer) != 2 )
  {
    v2 = -1073741790;
  }
  ActiveBuffer = CCompositionSurface::GetActiveBuffer(this);
  v10 = ActiveBuffer;
  if ( !ActiveBuffer
    || (*(unsigned int (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)ActiveBuffer + 8LL))(ActiveBuffer) == 2 )
  {
    if ( v2 >= 0 )
    {
      *((_QWORD *)this + 13) = a2;
      LOBYTE(v9) = 1;
      (*(void (__fastcall **)(struct IPairedSurfaceObject *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v9);
      if ( !v7 || (v12 = CFlipExBuffer::FromBuffer(v7), v2 = CCompositionSurface::PairBind(this, v12), v2 >= 0) )
      {
        if ( !v10 || v10 == v7 )
          return (unsigned int)v2;
        if ( v7 )
        {
          LOBYTE(v11) = 1;
          (*(void (__fastcall **)(struct IPairedSurfaceObject *, __int64))(*(_QWORD *)a2 + 32LL))(a2, v11);
        }
        v13 = CFlipExBuffer::FromBuffer(v10);
        v2 = CCompositionSurface::PairBind(this, v13);
        if ( v2 >= 0 )
          return (unsigned int)v2;
      }
    }
  }
  else
  {
    v2 = -1073741790;
  }
  (*(void (__fastcall **)(struct IPairedSurfaceObject *, _QWORD))(*(_QWORD *)a2 + 8LL))(a2, 0LL);
  *((_QWORD *)this + 13) = 0LL;
  return (unsigned int)v2;
}
