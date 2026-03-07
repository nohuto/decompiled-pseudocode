__int64 __fastcall DXGCONTEXT::UnreserveDmaBuffersForBlts(DXGCONTEXT *this)
{
  __int64 v2; // rax
  __int64 i; // rdi
  __int64 v4; // rcx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 7877LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      7877LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = *((_QWORD *)this + 46);
  if ( v2 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 94); i = (unsigned int)(i + 1) )
    {
      v4 = *(_QWORD *)(v2 + 8 * i);
      if ( v4 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 760LL)
                                                            + 8LL)
                                                + 496LL))(
          v4,
          0LL);
        *(_QWORD *)(*((_QWORD *)this + 46) + 8 * i) = 0LL;
        v2 = *((_QWORD *)this + 46);
      }
    }
    *((_QWORD *)this + 46) = 0LL;
    *((_DWORD *)this + 94) = 0;
  }
  return 0LL;
}
