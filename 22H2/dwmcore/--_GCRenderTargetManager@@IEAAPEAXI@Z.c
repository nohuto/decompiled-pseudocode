/*
 * XREFs of ??_GCRenderTargetManager@@IEAAPEAXI@Z @ 0x1801551AC
 * Callers:
 *     ?Create@CRenderTargetManager@@KAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800DEE9C (-Create@CRenderTargetManager@@KAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180154BF0 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 *     ??1CRenderTargetManager@@IEAA@XZ @ 0x180155034 (--1CRenderTargetManager@@IEAA@XZ.c)
 */

CRenderTargetManager *__fastcall CRenderTargetManager::`scalar deleting destructor'(CRenderTargetManager *this)
{
  CRenderTargetManager::~CRenderTargetManager(this);
  operator delete(this);
  return this;
}
