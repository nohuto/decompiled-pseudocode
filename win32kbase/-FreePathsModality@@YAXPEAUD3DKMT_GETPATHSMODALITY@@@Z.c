void __fastcall FreePathsModality(struct D3DKMT_GETPATHSMODALITY *a1, __int64 a2)
{
  __int64 DxgkWin32kInterface; // rax

  if ( a1 )
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
    (*(void (__fastcall **)(struct D3DKMT_GETPATHSMODALITY *))(DxgkWin32kInterface + 184))(a1);
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a1);
  }
}
