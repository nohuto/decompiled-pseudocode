void __fastcall DISPLAY_SOURCE::SetQueryPlaneStateUnsafe(
        DISPLAY_SOURCE *this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        char a4,
        const struct tagRECT *a5,
        const struct tagRECT *a6,
        const struct tagRECT *a7,
        enum _D3DDDI_ROTATION a8,
        enum D3DKMT_MULTIPLANE_OVERLAY_BLEND a9,
        enum D3DDDI_COLOR_SPACE_TYPE a10,
        unsigned int a11)
{
  __int64 v13; // rdi

  v13 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 632LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 9701LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9701LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_BYTE *)this + v13 + 2904) = 1;
  SetPlaneConfigState(
    1,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    D3DDDIFMT_UNKNOWN,
    0,
    (DISPLAY_SOURCE *)((char *)this + 80 * v13 + 2920));
  if ( (unsigned int)v13 >= *((_DWORD *)this + 941) )
    *((_DWORD *)this + 941) = v13 + 1;
}
