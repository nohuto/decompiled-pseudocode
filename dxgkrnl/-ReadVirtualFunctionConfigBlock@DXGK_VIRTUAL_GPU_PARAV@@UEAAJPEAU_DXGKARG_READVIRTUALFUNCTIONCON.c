__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::ReadVirtualFunctionConfigBlock(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK *a2)
{
  WdLogSingleEntry1(2LL, a2->VirtualFunctionIndex);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"DdiWriteVirtualFunctionConfigBlock is not supported for paravirtualization: %I64n",
    a2->VirtualFunctionIndex,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225659LL;
}
