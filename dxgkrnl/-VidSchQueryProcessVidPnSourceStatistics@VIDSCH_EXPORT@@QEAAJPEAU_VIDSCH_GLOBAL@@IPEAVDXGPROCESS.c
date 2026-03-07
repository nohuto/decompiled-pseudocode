__int64 __fastcall VIDSCH_EXPORT::VidSchQueryProcessVidPnSourceStatistics(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        struct DXGPROCESS *a4,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_VIDPNSOURCE_INFORMATION *a5)
{
  __int64 v5; // rbx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d

  v5 = *((_QWORD *)a4 + 8);
  if ( !v5 || (v5 = *(_QWORD *)(v5 + 8LL * (unsigned int)(*(_DWORD *)this - 1) + 16)) == 0 )
  {
    WdLogSingleEntry1(1LL, 1260LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(v10, v9, v11, 0LL, 2, -1, L"pVidSchProcess", 1260LL, 0LL, 0LL, 0LL, 0LL);
  }
  return (*(__int64 (__fastcall **)(struct _VIDSCH_GLOBAL *, _QWORD, __int64, struct _D3DKMT_QUERYSTATISTICS_PROCESS_VIDPNSOURCE_INFORMATION *))(*((_QWORD *)this + 1) + 736LL))(
           a2,
           a3,
           v5,
           a5);
}
