/*
 * XREFs of ?UpdateViewport@CScrollViewer@@UEAAXXZ @ 0x18042B580
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIScrollButtonContainerHost@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIScrollButtonContainerHost@@@WRL@Microsoft@@@Details@12@@Z @ 0x18042A518 (--$As@UIScrollButtonContainerHost@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$.c)
 *     ??$SendUiaPropertyEvent@_N@ElementHelpers@@YAJPEAUIMultitaskingViewElement@@H_N1@Z @ 0x18042A7C0 (--$SendUiaPropertyEvent@_N@ElementHelpers@@YAJPEAUIMultitaskingViewElement@@H_N1@Z.c)
 *     ?_UpdateViewport@CScrollViewer@@AEAAXXZ @ 0x18042BB1C (-_UpdateViewport@CScrollViewer@@AEAAXXZ.c)
 */

void __fastcall CScrollViewer::UpdateViewport(CScrollViewer *this)
{
  CScrollViewer *v1; // rbx
  __int64 v2; // rax
  _QWORD *v4; // rax
  char v5; // si
  char v6; // cl
  _QWORD *v7; // rax
  int v8; // eax
  int v9; // ebp
  char v10; // al
  __int64 v11; // rdx
  char v12; // r8
  char v13; // si
  __int64 *v14; // rcx
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF
  __int64 v18; // [rsp+48h] [rbp+10h] BYREF
  __int64 v19; // [rsp+50h] [rbp+18h] BYREF

  LODWORD(v17) = 0;
  v1 = (CScrollViewer *)((char *)this - 208);
  v2 = *((_QWORD *)this - 26);
  v17 = 0LL;
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(char *, __int64 *))(v2 + 24))((char *)this - 208, &v19);
  v5 = 1;
  v6 = 1;
  if ( !*v4 )
    goto LABEL_5;
  v7 = (_QWORD *)(*(__int64 (__fastcall **)(CScrollViewer *, __int64 *))(*(_QWORD *)v1 + 24LL))(v1, &v18);
  v8 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IScrollButtonContainerHost>(v7, &v17);
  v9 = v8;
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xE9,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerelement.cpp",
      (const char *)(unsigned int)v8);
  v6 = 3;
  if ( v9 < 0 )
LABEL_5:
    v5 = 0;
  if ( (v6 & 2) != 0 )
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 32LL))(v17);
  v10 = (*(__int64 (__fastcall **)(CScrollViewer *))(*(_QWORD *)this + 64LL))(this);
  v12 = *((_BYTE *)this + 52);
  v13 = v10;
  if ( v10 != v12 )
  {
    ElementHelpers::SendUiaPropertyEvent<bool>((__int64)v1, v11, v12, v10);
    v14 = (__int64 *)*((_QWORD *)this + 5);
    *((_BYTE *)this + 52) = v13;
    v15 = *v14;
    LOBYTE(v15) = v13;
    (*(void (__fastcall **)(__int64 *, __int64))(*v14 + 64))(v14, v15);
  }
  CScrollViewer::_UpdateViewport(v1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
}
