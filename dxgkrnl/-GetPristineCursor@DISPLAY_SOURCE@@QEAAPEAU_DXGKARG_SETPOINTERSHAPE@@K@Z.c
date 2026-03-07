struct _DXGKARG_SETPOINTERSHAPE *__fastcall DISPLAY_SOURCE::GetPristineCursor(DISPLAY_SOURCE *this, unsigned int a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rax

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 5409LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsCoreResourceSharedOwner()",
      5409LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 204) < (unsigned int)v3 )
  {
    operator delete(*((void **)this + 100));
    *((_DWORD *)this + 204) = 0;
    v4 = operator new[](v3, 0x4B677844u, 256LL);
    *((_QWORD *)this + 100) = v4;
    if ( v4 )
      *((_DWORD *)this + 204) = v3;
  }
  return (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 776);
}
