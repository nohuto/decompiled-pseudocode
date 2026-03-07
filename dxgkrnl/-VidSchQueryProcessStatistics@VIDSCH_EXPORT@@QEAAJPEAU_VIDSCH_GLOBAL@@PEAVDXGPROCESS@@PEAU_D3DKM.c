__int64 __fastcall VIDSCH_EXPORT::VidSchQueryProcessStatistics(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_GLOBAL *a2,
        struct DXGPROCESS *a3,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION *a4)
{
  __int64 v4; // rbx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d

  v4 = *((_QWORD *)a3 + 8);
  if ( !v4 || (v4 = *(_QWORD *)(v4 + 8LL * (unsigned int)(*(_DWORD *)this - 1) + 16)) == 0 )
  {
    WdLogSingleEntry1(1LL, 1221LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(v9, v8, v10, 0LL, 2, -1, L"pVidSchProcess", 1221LL, 0LL, 0LL, 0LL, 0LL);
  }
  return (*(__int64 (__fastcall **)(struct _VIDSCH_GLOBAL *, __int64, struct _D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION *))(*((_QWORD *)this + 1) + 712LL))(
           a2,
           v4,
           a4);
}
