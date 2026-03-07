unsigned __int8 __fastcall DXGDEVICE::HasContextWithHintType(DXGDEVICE *this, enum _D3DKMT_CLIENTHINT a2)
{
  _DWORD *i; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 5354LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      5354LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( i = (_DWORD *)*((_QWORD *)this + 62); ; i = *(_DWORD **)i )
  {
    if ( i == (_DWORD *)((char *)this + 496) || !i )
      return 0;
    if ( i[36] == a2 )
      break;
  }
  return 1;
}
