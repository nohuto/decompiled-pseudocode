/*
 * XREFs of ??1?$MakeAllocator@VHotKeyCallback@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14000A880
 * Callers:
 *     ??$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z @ 0x14000A694 (--$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140005940 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<HotKeyCallback>::~MakeAllocator<HotKeyCallback>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
