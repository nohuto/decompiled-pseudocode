/*
 * XREFs of ?Initialize@CD2DEffect@@IEAAJPEAUID2D1Effect@@@Z @ 0x18024D3AC
 * Callers:
 *     ?Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z @ 0x18024D2DC (-Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x18023AE9C (-AddHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 */

__int64 __fastcall CD2DEffect::Initialize(CD2DEffect *this, struct ID2D1Effect *a2)
{
  __int64 *v3; // rdi
  _QWORD *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  char *v7; // rcx

  *((_QWORD *)this + 10) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)a2 + 8LL))(a2);
  v3 = (__int64 *)*((_QWORD *)this + 3);
  v4 = (_QWORD *)((char *)this + 40);
  v5 = *v3;
  if ( *(__int64 **)(*v3 + 8) != v3 )
    __fastfail(3u);
  *v4 = v5;
  *((_QWORD *)this + 6) = v3;
  *(_QWORD *)(v5 + 8) = v4;
  *v3 = (__int64)v4;
  v6 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 32) = 1;
  v7 = (char *)this + *(int *)(v6 + 8) + 16;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v7 + 24LL))(v7) )
    *((_BYTE *)this + 34) = 1;
  if ( *((_BYTE *)this + 33) )
  {
    ++*((_DWORD *)v3 + 4);
    if ( *((_BYTE *)this + 34) )
      CD2DContext::AddHwProtectedResource((CD2DContext *)v3[3]);
  }
  return 0LL;
}
