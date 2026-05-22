/*
 * XREFs of ??_EBamoDockableDeviceProxy@@MEAAPEAXI@Z @ 0x1800E2BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E50 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x18003A130 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

BamoDockableDeviceProxy *__fastcall BamoDockableDeviceProxy::`vector deleting destructor'(
        BamoDockableDeviceProxy *this,
        void *a2)
{
  char v2; // di
  wil::details *v4; // rcx

  v2 = (char)a2;
  v4 = (wil::details *)*((_QWORD *)this + 6);
  if ( v4 )
    wil::details::FreeProcessHeap(v4, a2);
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))this + 4);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
