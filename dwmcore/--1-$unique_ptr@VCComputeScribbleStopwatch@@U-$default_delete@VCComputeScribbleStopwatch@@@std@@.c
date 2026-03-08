/*
 * XREFs of ??1?$unique_ptr@VCComputeScribbleStopwatch@@U?$default_delete@VCComputeScribbleStopwatch@@@std@@@std@@QEAA@XZ @ 0x1801FF458
 * Callers:
 *     ?Create@CComputeScribbleStopwatch@@SAJPEAUID3D12CommandQueue@@PEAPEAV1@@Z @ 0x18020677C (-Create@CComputeScribbleStopwatch@@SAJPEAUID3D12CommandQueue@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??1CComputeScribbleStopwatch@@QEAA@XZ @ 0x1801FF65C (--1CComputeScribbleStopwatch@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<CComputeScribbleStopwatch>::~unique_ptr<CComputeScribbleStopwatch>(
        CComputeScribbleStopwatch **a1)
{
  CComputeScribbleStopwatch *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CComputeScribbleStopwatch::~CComputeScribbleStopwatch(*a1);
    operator delete(v1);
  }
}
