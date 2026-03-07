__int64 __fastcall VIDSCH_EXPORT::VidSchQueryProcessNodeStatistics(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_GLOBAL *a2,
        unsigned __int16 a3,
        unsigned int a4,
        struct DXGPROCESS *a5,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_NODE_INFORMATION *a6)
{
  __int64 v10; // rbx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d

  v10 = *((_QWORD *)a5 + 8);
  if ( !v10 || (v10 = *(_QWORD *)(v10 + 8LL * (unsigned int)(*(_DWORD *)this - 1) + 16)) == 0 )
  {
    WdLogSingleEntry1(1LL, 1247LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(v12, v11, v13, 0LL, 2, -1, L"pVidSchProcess", 1247LL, 0LL, 0LL, 0LL, 0LL);
  }
  return (*(__int64 (__fastcall **)(struct _VIDSCH_GLOBAL *, _QWORD, _QWORD, __int64, struct _D3DKMT_QUERYSTATISTICS_PROCESS_NODE_INFORMATION *))(*((_QWORD *)this + 1) + 728LL))(
           a2,
           a3,
           a4,
           v10,
           a6);
}
