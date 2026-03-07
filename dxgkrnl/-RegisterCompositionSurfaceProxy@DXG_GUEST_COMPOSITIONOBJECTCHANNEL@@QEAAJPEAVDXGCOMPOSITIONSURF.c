__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::RegisterCompositionSurfaceProxy(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        struct DXGCOMPOSITIONSURFACEPROXY *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  signed __int32 v5; // eax
  signed __int32 v6; // ett

  v3 = (*(__int64 (__fastcall **)(_QWORD, struct DXGCOMPOSITIONSURFACEPROXY *, __int64))(**((_QWORD **)this + 1) + 56LL))(
         *((_QWORD *)this + 1),
         a2,
         18LL);
  v4 = 0;
  if ( v3 )
  {
    *((_DWORD *)a2 + 4) = v3;
    _m_prefetchw((char *)a2 + 8);
    v5 = *((_DWORD *)a2 + 2);
    do
    {
      if ( !v5 )
        break;
      v6 = v5;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)a2 + 2, v5 + 1, v5);
    }
    while ( v6 != v5 );
  }
  else
  {
    v4 = -1073741801;
    WdLogSingleEntry2(3LL, a2, -1073741801LL);
  }
  return v4;
}
