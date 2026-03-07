struct _DXGKARG_SETPOINTERSHAPE *__fastcall DISPLAY_SOURCE::GetClippedCursor(DISPLAY_SOURCE *this, char a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  void *v6; // rcx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 5466LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsCoreResourceSharedOwner()",
      5466LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( !*((_QWORD *)this + 111) && a2 )
  {
    v5 = 4LL * (unsigned int)(*(_DWORD *)(v4 + 2240) * *(_DWORD *)(v4 + 2244));
    if ( !is_mul_ok((unsigned int)(*(_DWORD *)(v4 + 2240) * *(_DWORD *)(v4 + 2244)), 4uLL) )
      v5 = -1LL;
    *((_QWORD *)this + 111) = operator new[](v5, 0x4B677844u, 256LL);
  }
  v6 = (void *)*((_QWORD *)this + 111);
  if ( v6 )
    memset(v6, 0, 4 * *(unsigned int *)(v4 + 2240) * (unsigned __int64)*(unsigned int *)(v4 + 2244));
  return (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 864);
}
