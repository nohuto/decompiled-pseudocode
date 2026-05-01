/*
 * XREFs of ?GetAsArray@CVirtualDesktopCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804A6C50
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180044910 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopCollection::GetAsArray(
        CVirtualDesktopCollection *this,
        const struct _GUID *a2,
        void **a3)
{
  const struct _GUID *v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  _QWORD *v11; // rdi
  _QWORD *v12; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v15; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  v8 = CEnumerableObjectCollection::CreateInstance(v7, v6, &v15);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = (_QWORD *)*((_QWORD *)this + 6);
    v12 = &v11[*((_QWORD *)this + 7)];
    while ( v11 != v12 )
    {
      v8 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v15 + 40LL))(v15, *v11);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 167LL;
        goto LABEL_9;
      }
      ++v11;
    }
    v8 = (**(__int64 (__fastcall ***)(void *, const struct _GUID *, void **))v15)(v15, a2, a3);
    v9 = v8;
    if ( v8 >= 0 )
      goto LABEL_10;
    v10 = 169LL;
  }
  else
  {
    v10 = 164LL;
  }
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
    (const char *)(unsigned int)v8);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  return v9;
}
