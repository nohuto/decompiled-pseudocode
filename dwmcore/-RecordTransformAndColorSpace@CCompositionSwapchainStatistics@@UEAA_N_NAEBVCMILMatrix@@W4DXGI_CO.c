char __fastcall CCompositionSwapchainStatistics::RecordTransformAndColorSpace(
        CCompositionSwapchainStatistics *this,
        __int64 a2,
        const struct CMILMatrix *a3,
        enum DXGI_COLOR_SPACE_TYPE a4)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax

  v4 = *((_QWORD *)this + 4);
  if ( *((_QWORD *)this + 3) == v4 )
    return 0;
  v5 = *((_QWORD *)this + 4);
  *(_DWORD *)(v4 - 4) = a4;
  *(_DWORD *)(v4 - 28) = *(_DWORD *)a3;
  *(_DWORD *)(v4 - 24) = *((_DWORD *)a3 + 1);
  *(_DWORD *)(v4 - 20) = *((_DWORD *)a3 + 4);
  v6 = *((_DWORD *)a3 + 5);
  *(_DWORD *)(v5 - 12) = 0;
  *(_DWORD *)(v5 - 8) = 0;
  *(_DWORD *)(v5 - 16) = v6;
  return 1;
}
