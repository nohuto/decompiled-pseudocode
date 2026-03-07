__int64 __fastcall DxgMonitor::EDIDCACHE::GetEdidForTarget(
        DxgMonitor::EDIDCACHE *this,
        struct _LUID a2,
        unsigned int a3,
        char a4,
        unsigned __int8 *const a5,
        enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *a6)
{
  _QWORD *v11; // rax
  unsigned int i; // ecx
  unsigned int v13; // ebx
  __int64 v14; // rcx
  _BYTE v15[40]; // [rsp+30h] [rbp-28h] BYREF
  LONG HighPart; // [rsp+6Ch] [rbp+14h]

  HighPart = a2.HighPart;
  if ( !a5 )
    return 3221225713LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (DxgMonitor::EDIDCACHE *)((char *)this + 616), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  v11 = (_QWORD *)((char *)this + 20);
  for ( i = 0; i < 4; ++i )
  {
    if ( *((_DWORD *)v11 - 1) == a2.LowPart && *v11 == __PAIR64__(a3, HighPart) )
    {
      v14 = 152LL * i;
      *(_OWORD *)a5 = *(_OWORD *)((char *)this + v14 + 32);
      *((_OWORD *)a5 + 1) = *(_OWORD *)((char *)this + v14 + 48);
      *((_OWORD *)a5 + 2) = *(_OWORD *)((char *)this + v14 + 64);
      *((_OWORD *)a5 + 3) = *(_OWORD *)((char *)this + v14 + 80);
      *((_OWORD *)a5 + 4) = *(_OWORD *)((char *)this + v14 + 96);
      *((_OWORD *)a5 + 5) = *(_OWORD *)((char *)this + v14 + 112);
      *((_OWORD *)a5 + 6) = *(_OWORD *)((char *)this + v14 + 128);
      *((_OWORD *)a5 + 7) = *(_OWORD *)((char *)this + v14 + 144);
      if ( a6 )
        *a6 = *(enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *)((char *)this + v14 + 28);
      goto LABEL_10;
    }
    v11 += 19;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  if ( a4 && (int)DxgMonitor::EDIDCACHE::ReadEdidFromRegistry(a3, a5, a6) >= 0 )
  {
    DxgMonitor::EDIDCACHE::AddEdid(this, a2, a3, 0, a5, *a6);
LABEL_10:
    v13 = 0;
    goto LABEL_14;
  }
  v13 = -1073741275;
LABEL_14:
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  return v13;
}
