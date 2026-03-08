/*
 * XREFs of ??1?$unique_ptr@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@U?$default_delete@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@std@@@std@@QEAA@XZ @ 0x180288F50
 * Callers:
 *     CAsyncTask_CD3DDevice::D3D12Resources_::Start__lambda_88358cf897930614284adb3422b4c545___ @ 0x180288B2C (CAsyncTask_CD3DDevice--D3D12Resources_--Start__lambda_88358cf897930614284adb3422b4c545___.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??1?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAA@XZ @ 0x180288ED0 (--1-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<CAsyncTask<CD3DDevice::D3D12Resources>>::~unique_ptr<CAsyncTask<CD3DDevice::D3D12Resources>>(
        __int64 *a1)
{
  void *v1; // rbx

  v1 = (void *)*a1;
  if ( *a1 )
  {
    CAsyncTask<CD3DDevice::D3D12Resources>::~CAsyncTask<CD3DDevice::D3D12Resources>(*a1);
    operator delete(v1);
  }
}
