__int64 __fastcall DXGSESSIONDATA::VailUnregisterCompositionSurfaceProxy(
        DXGSESSIONDATA *this,
        struct DXGCOMPOSITIONSURFACEPROXY *a2)
{
  struct DXGFASTMUTEX *v2; // r14
  unsigned int v5; // edi
  struct _EX_RUNDOWN_REF *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _BYTE v10[8]; // [rsp+20h] [rbp-10h] BYREF
  char v11; // [rsp+28h] [rbp-8h]

  v2 = (DXGSESSIONDATA *)((char *)this + 18904);
  v5 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGSESSIONDATA *)((char *)this + 18904), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  if ( *((_QWORD *)this + 2370) )
    ++*((_DWORD *)this + 4738);
  if ( v11 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  v6 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 2370);
  if ( v6 && ExAcquireRundownProtection(v6 + 8) )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2370) + 72LL) + 64LL)) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2370) + 16LL), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
      v7 = *((unsigned int *)a2 + 4);
      v8 = *(_QWORD *)(*((_QWORD *)this + 2370) + 88LL);
      *((_DWORD *)a2 + 4) = 0;
      if ( (_DWORD)v7 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v8 + 8) + 64LL))(*(_QWORD *)(v8 + 8), v7, 18LL);
        DXGCOMPOSITIONSURFACEPROXY::Release(a2);
      }
      if ( v11 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(*((_QWORD *)this + 2370) + 72LL) + 64LL));
    }
    else
    {
      v5 = -2147483611;
      WdLogSingleEntry2(3LL, 2LL, -2147483611LL);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 2370) + 64LL));
  }
  else
  {
    v5 = -2147483611;
    WdLogSingleEntry2(3LL, 1LL, -2147483611LL);
  }
  if ( *((_QWORD *)this + 2370) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, v2, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
    DXGSESSIONDATA::ReleaseVailGuestReference(this);
    if ( v11 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  }
  return v5;
}
