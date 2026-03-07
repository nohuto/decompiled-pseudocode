const struct DXGALLOCATION *__fastcall DISPLAY_SOURCE::GetPlaneAllocationUnsafe(DISPLAY_SOURCE *this, unsigned int a2)
{
  __int64 v2; // rbx
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax

  v2 = 0LL;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 632LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 9558LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9558LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, a2);
  if ( LatestPlaneConfigInternal && (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
    return *(const struct DXGALLOCATION **)LatestPlaneConfigInternal;
  return (const struct DXGALLOCATION *)v2;
}
