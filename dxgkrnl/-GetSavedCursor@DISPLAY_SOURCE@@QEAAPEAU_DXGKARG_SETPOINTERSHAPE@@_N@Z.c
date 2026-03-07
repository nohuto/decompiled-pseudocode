struct _DXGKARG_SETPOINTERSHAPE *__fastcall DISPLAY_SOURCE::GetSavedCursor(DISPLAY_SOURCE *this, char a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 5441LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsCoreResourceSharedOwner()",
      5441LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( !*((_QWORD *)this + 106) && a2 )
  {
    v5 = 4LL * (unsigned int)(*(_DWORD *)(v4 + 2240) * *(_DWORD *)(v4 + 2244));
    if ( !is_mul_ok((unsigned int)(*(_DWORD *)(v4 + 2240) * *(_DWORD *)(v4 + 2244)), 4uLL) )
      v5 = -1LL;
    *((_QWORD *)this + 106) = operator new[](v5, 0x4B677844u, 256LL);
  }
  return (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 824);
}
