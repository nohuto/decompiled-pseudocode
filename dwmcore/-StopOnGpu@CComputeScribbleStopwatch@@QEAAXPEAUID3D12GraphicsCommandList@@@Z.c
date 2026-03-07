void __fastcall CComputeScribbleStopwatch::StopOnGpu(
        CComputeScribbleStopwatch *this,
        struct ID3D12GraphicsCommandList *a2)
{
  ((void (__fastcall *)(struct ID3D12GraphicsCommandList *, _QWORD, __int64))a2->lpVtbl->EndQuery)(
    a2,
    *((_QWORD *)this + 4),
    2LL);
  ((void (__fastcall *)(struct ID3D12GraphicsCommandList *, _QWORD, __int64))a2->lpVtbl->ResolveQueryData)(
    a2,
    *((_QWORD *)this + 4),
    2LL);
  *((_BYTE *)this + 64) = 0;
}
