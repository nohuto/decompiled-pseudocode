/*
 * XREFs of ??0CContainerVectorShape@@QEAA@PEAVCComposition@@@Z @ 0x1800B8A24
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CShapeTree@@QEAA@PEAVCComposition@@@Z @ 0x1800B8124 (--0CShapeTree@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CVectorShape@@IEAA@PEAVCComposition@@@Z @ 0x1800B8E0C (--0CVectorShape@@IEAA@PEAVCComposition@@@Z.c)
 */

CContainerVectorShape *__fastcall CContainerVectorShape::CContainerVectorShape(
        CContainerVectorShape *this,
        struct CComposition *a2,
        int a3)
{
  CContainerVectorShape *v3; // r10
  __int64 v4; // r11
  CContainerVectorShape *result; // rax

  if ( a3 )
  {
    *((_QWORD *)this + 8) = &CContainerVectorShape::`vbtable'{for `CContent'};
    *((_QWORD *)this + 20) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
    *((_QWORD *)this + 19) = &IContent::`vftable'{for `IContent'};
    *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 20) + 4LL) + 160) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  }
  CVectorShape::CVectorShape(this, a2);
  *(_QWORD *)v3 = &CContainerVectorShape::`vftable';
  *(_QWORD *)((char *)v3 + *(int *)(*(_QWORD *)v4 + 4LL) + 64) = &CContainerVectorShape::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v3 + *(int *)(*(_QWORD *)v4 + 8LL) + 64) = &CContainerVectorShape::`vftable'{for `IContent'};
  *(_DWORD *)((char *)v3 + *(int *)(*(_QWORD *)v4 + 4LL) + 60) = *(_DWORD *)(*(_QWORD *)v4 + 4LL) - 72;
  result = v3;
  *(_DWORD *)((char *)v3 + *(int *)(*(_QWORD *)v4 + 8LL) + 60) = *(_DWORD *)(*(_QWORD *)v4 + 8LL) - 88;
  *((_QWORD *)v3 + 13) = 0LL;
  *((_QWORD *)v3 + 14) = 0LL;
  *((_QWORD *)v3 + 15) = 0LL;
  return result;
}
