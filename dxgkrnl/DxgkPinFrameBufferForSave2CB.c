__int64 __fastcall DxgkPinFrameBufferForSave2CB(__int64 a1, __int64 a2)
{
  int v2; // ebx
  DXGADAPTER *DxgAdapter; // rax

  v2 = *(_DWORD *)(a2 + 16);
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  return DXGADAPTER::PinFrameBufferForSave(
           DxgAdapter,
           *(_DWORD *)a2,
           *(_QWORD *)(a2 + 8),
           2 * (v2 & 1u),
           0LL,
           (struct _DXGK_ADL **)(a2 + 24));
}
