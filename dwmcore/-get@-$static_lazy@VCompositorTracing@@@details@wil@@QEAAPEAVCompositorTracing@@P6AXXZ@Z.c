__int64 *__fastcall wil::details::static_lazy<CompositorTracing>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  v7 = 0LL;
  if ( InitOnceBeginInitialize(&`CompositorTracing::Instance'::`2'::wrapper, 0, (PBOOL)&v6, (LPVOID *)&v7) && (_DWORD)v6 )
  {
    v4 = &`CompositorTracing::Instance'::`2'::wrapper;
    v7 = &qword_1803E6E68;
    qword_1803E6E68 = (__int64)&CompositorTracing::`vftable';
    qword_1803E6E80 = (__int64)&`CompositorTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<CompositorTracing>::Completer::~Completer(&v4);
  }
  return v7;
}
