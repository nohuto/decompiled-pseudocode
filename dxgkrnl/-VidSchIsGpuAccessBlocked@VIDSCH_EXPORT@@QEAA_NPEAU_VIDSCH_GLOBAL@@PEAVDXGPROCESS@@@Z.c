__int64 __fastcall VIDSCH_EXPORT::VidSchIsGpuAccessBlocked(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_GLOBAL *a2,
        struct DXGPROCESS *a3)
{
  __int64 v3; // rbx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d

  v3 = *((_QWORD *)a3 + 8);
  if ( !v3 || (v3 = *(_QWORD *)(v3 + 8LL * (unsigned int)(*(_DWORD *)this - 1) + 16)) == 0 )
  {
    WdLogSingleEntry1(1LL, 1003LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v8,
        v7,
        v9,
        0,
        2,
        -1,
        (__int64)L"pVidSchProcess",
        1003LL,
        0LL,
        0LL,
        0LL,
        0LL);
  }
  return (*(__int64 (__fastcall **)(struct _VIDSCH_GLOBAL *, __int64))(*((_QWORD *)this + 1) + 840LL))(a2, v3);
}
