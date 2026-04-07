/*
 * XREFs of ?RemoveChild@CVisualProxy@@QEAAJPEAV1@@Z @ 0x18003EE3C
 * Callers:
 *     ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x1800199F8 (-ConnectToParent@CVisual@@QEAAJ_N@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024BC0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::RemoveChild(CVisualProxy *this, struct CVisualProxy *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 440LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           *(unsigned int *)(*((_QWORD *)a2 + 2) + 24LL));
}
