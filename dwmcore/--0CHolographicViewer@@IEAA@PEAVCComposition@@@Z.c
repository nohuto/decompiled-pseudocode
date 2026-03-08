/*
 * XREFs of ??0CHolographicViewer@@IEAA@PEAVCComposition@@@Z @ 0x1802A82B0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CHolographicViewer *__fastcall CHolographicViewer::CHolographicViewer(
        CHolographicViewer *this,
        struct CComposition *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CHolographicViewer::`vftable'{for `CResource'};
  *((_QWORD *)this + 8) = &CHolographicViewer::`vftable'{for `IHolographicViewer'};
  *((_QWORD *)this + 9) = &CHolographicViewer::`vftable'{for `IHolographicViewerBufferSource'};
  *((_DWORD *)this + 20) = 0;
  *(_OWORD *)((char *)this + 84) = 0LL;
  *(_OWORD *)((char *)this + 100) = 0LL;
  *(_OWORD *)((char *)this + 116) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_BYTE *)this + 160) = 0;
  *((_DWORD *)this + 20) = _InterlockedIncrement(&dword_1803E2078);
  *((_QWORD *)this + 21) = *((_QWORD *)a2 + 33);
  InitializeSRWLock((PSRWLOCK)this + 23);
  return this;
}
