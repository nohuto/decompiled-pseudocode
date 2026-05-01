/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b522e0f61b2c95c1f6d3fcbc5e751112___::Run @ 0x1800CB240
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_b522e0f61b2c95c1f6d3fcbc5e751112_::operator() @ 0x1800CAD84 (_lambda_b522e0f61b2c95c1f6d3fcbc5e751112_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b522e0f61b2c95c1f6d3fcbc5e751112___::Run(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 result; // rax

  result = lambda_b522e0f61b2c95c1f6d3fcbc5e751112_::operator()((_QWORD **)(a1 + 16), a2, a3, a4);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
