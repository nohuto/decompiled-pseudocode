/*
 * XREFs of ??1CScopedClipStack@@QEAA@XZ @ 0x18003C724
 * Callers:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18003C524 (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x18003C7B0 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?clear@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18003C89C (-clear@-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippingScopeState@.c)
 *     ?clear@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18003C8C8 (-clear@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClipStackState@CS.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 */

void __fastcall CScopedClipStack::~CScopedClipStack(void **this)
{
  CScopedClipStack *v2; // rcx
  void *v3; // rcx
  bool v4; // zf

  CScopedClipStack::Clear((CScopedClipStack *)this);
  operator delete(this[292]);
  operator delete(this[288]);
  detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::clear(this + 233);
  v2 = (CScopedClipStack *)this[233];
  this[233] = 0LL;
  if ( v2 == (CScopedClipStack *)(this + 236) )
    v2 = 0LL;
  operator delete(v2);
  detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::clear(this);
  v3 = *this;
  v4 = *this == this + 3;
  *this = 0LL;
  if ( v4 )
    v3 = 0LL;
  operator delete(v3);
}
