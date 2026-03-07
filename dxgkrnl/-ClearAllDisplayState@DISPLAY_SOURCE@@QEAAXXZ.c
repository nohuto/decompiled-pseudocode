void __fastcall DISPLAY_SOURCE::ClearAllDisplayState(DISPLAY_SOURCE *this)
{
  unsigned int i; // ebp
  struct _DISPLAY_PLANE_CONFIG_QUEUE *v3; // rdi
  __int64 v4; // rsi
  int v5; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // r8
  __int64 v8; // r9

  for ( i = 0; i < *((_DWORD *)this + 940); ++i )
  {
    while ( 1 )
    {
      v3 = (DISPLAY_SOURCE *)((char *)this + 168 * i + 1144);
      if ( IsDisplayPlaneConfigQueueEmpty(v3) )
        break;
      v4 = *(int *)v3;
      if ( (_DWORD)v4 == -1 )
      {
        WdLogSingleEntry1(1LL, 9078LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pQueue->HeadIndex != CONFIG_INDEX_INVALID",
          9078LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_DWORD *)v3 + 1) == -1 )
      {
        WdLogSingleEntry1(1LL, 9079LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pQueue->TailIndex != CONFIG_INDEX_INVALID",
          9079LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      memset((char *)v3 + 80 * v4 + 8, 0, 0x50uLL);
      v5 = *((_DWORD *)v3 + 1);
      if ( *(_DWORD *)v3 == (_DWORD)v4 )
      {
        if ( v5 == (_DWORD)v4 )
        {
          *((_DWORD *)v3 + 1) = -1;
          *(_DWORD *)v3 = -1;
        }
        else
        {
          *(_DWORD *)v3 = GetPreviousConfigIndex(v4);
        }
      }
      else if ( v5 == (_DWORD)v4 )
      {
        *((_DWORD *)v3 + 1) = GetNextConfigIndex(v4);
      }
    }
  }
  *((_DWORD *)this + 940) = 0;
  *((_BYTE *)this + 3768) = 0;
  while ( !IsPostCompositionConfigQueueEmpty((DISPLAY_SOURCE *)((char *)this + 2824)) )
    RemovePostCompositionConfig((DISPLAY_SOURCE *)((char *)this + 2824), *((_DWORD *)this + 706));
  DISPLAY_SOURCE::ClearAllQueryStateUnsafe(this);
  Global = DXGGLOBAL::GetGlobal();
  QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 187), 0LL, v7, v8);
}
