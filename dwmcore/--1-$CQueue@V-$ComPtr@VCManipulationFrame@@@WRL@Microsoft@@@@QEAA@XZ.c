/*
 * XREFs of ??1?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x18010DFF4
 * Callers:
 *     _dynamic_atexit_destructor_for__CManipulationManager::s_InputQueue__ @ 0x1801200C0 (_dynamic_atexit_destructor_for__CManipulationManager--s_InputQueue__.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x18019D43C (-Remove@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA-AV-$ComPtr@VCManipulation.c)
 */

void __fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::~CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  bool v4; // bl
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  do
  {
    LOBYTE(a3) = 1;
    CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(a1, &v5, a3, 0LL);
    v4 = v5 != 0;
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v5);
  }
  while ( v4 );
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
}
