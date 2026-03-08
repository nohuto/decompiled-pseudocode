/*
 * XREFs of ??1?$unique_ptr@VCComputeScribbleSynchronizer@@U?$default_delete@VCComputeScribbleSynchronizer@@@std@@@std@@QEAA@XZ @ 0x180201508
 * Callers:
 *     ?Create@CComputeScribbleSynchronizer@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x180206E74 (-Create@CComputeScribbleSynchronizer@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??1CComputeScribbleSynchronizer@@QEAA@XZ @ 0x1802015BC (--1CComputeScribbleSynchronizer@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<CComputeScribbleSynchronizer>::~unique_ptr<CComputeScribbleSynchronizer>(
        CComputeScribbleSynchronizer **a1)
{
  CComputeScribbleSynchronizer *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CComputeScribbleSynchronizer::~CComputeScribbleSynchronizer(*a1);
    operator delete(v1);
  }
}
