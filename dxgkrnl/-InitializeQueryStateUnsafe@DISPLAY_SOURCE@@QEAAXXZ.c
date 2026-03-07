void __fastcall DISPLAY_SOURCE::InitializeQueryStateUnsafe(DISPLAY_SOURCE *this)
{
  unsigned int v2; // eax
  __int64 i; // rdi
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 632LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 9656LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9656LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = *((_DWORD *)this + 940);
  for ( i = 0LL; (unsigned int)i < v2; i = (unsigned int)(i + 1) )
  {
    LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, i);
    if ( LatestPlaneConfigInternal && (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
    {
      *((_BYTE *)this + i + 2904) = 1;
      memset((char *)this + 80 * i + 2920, 0, 0x50uLL);
    }
    else
    {
      *((_BYTE *)this + i + 2904) = 0;
    }
    v2 = *((_DWORD *)this + 940);
  }
  *((_DWORD *)this + 941) = v2;
  *((_BYTE *)this + 3720) = 1;
  *(_OWORD *)((char *)this + 3724) = 0LL;
  *(_OWORD *)((char *)this + 3740) = 0LL;
  *((_DWORD *)this + 939) = 0;
}
