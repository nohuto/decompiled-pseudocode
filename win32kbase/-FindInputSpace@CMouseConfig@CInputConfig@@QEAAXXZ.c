void __fastcall CInputConfig::CMouseConfig::FindInputSpace(CInputConfig::CMouseConfig *this)
{
  char v2; // bp
  CInputConfig *v3; // r14
  _DWORD *v4; // rsi
  CInputConfig *v5; // rdx
  CInputConfig *i; // r8
  _QWORD **v7; // rax
  _DWORD *v8; // rcx
  _DWORD *v9; // rdx

  *((_QWORD *)this + 1) = 0LL;
  if ( *(_DWORD *)this || (v2 = 1, *((_DWORD *)this + 1)) )
    v2 = 0;
  v3 = gpInputConfig;
  v4 = 0LL;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v5 = *(CInputConfig **)v3;
  for ( i = **(CInputConfig ***)v3; ; i = *(CInputConfig **)i )
  {
    v7 = 0LL;
    if ( v5 != v3 )
      v7 = (_QWORD **)((char *)v5 + 16);
    if ( !v7 )
      break;
    v8 = 0LL;
    if ( v5 != v3 )
      v8 = (_DWORD *)((char *)v5 + 16);
    if ( v2 )
    {
      v9 = v8 + 2;
      if ( (v8[2] & 1) != 0 )
        goto LABEL_11;
    }
    else
    {
      if ( *(_DWORD *)this == *v8 && *((_DWORD *)this + 1) == v8[1] )
      {
LABEL_11:
        *((_QWORD *)this + 1) = v8;
        break;
      }
      v9 = v8 + 2;
    }
    if ( (*v9 & 1) != 0 || !v4 )
      v4 = v8;
    v5 = i;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  if ( !*((_QWORD *)this + 1) )
  {
    *((_QWORD *)this + 1) = v4;
    if ( !v4 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 859LL);
  }
}
