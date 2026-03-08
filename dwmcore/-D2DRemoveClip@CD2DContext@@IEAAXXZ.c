/*
 * XREFs of ?D2DRemoveClip@CD2DContext@@IEAAXXZ @ 0x1800D0BBC
 * Callers:
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180091E58 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDevice3@@@Z @ 0x1800D07C0 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDevice3@@@Z.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x1800F58AC (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CD2DContext::D2DRemoveClip(CD2DContext *this)
{
  *((_BYTE *)this + 439) = 1;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 26) + 80LL))(*((_QWORD *)this + 26), 0LL, 1LL);
}
