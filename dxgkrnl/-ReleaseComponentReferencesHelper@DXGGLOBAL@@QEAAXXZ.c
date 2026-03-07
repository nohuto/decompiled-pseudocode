void __fastcall DXGGLOBAL::ReleaseComponentReferencesHelper(DXGGLOBAL *this)
{
  volatile signed __int32 **v1; // r14
  volatile signed __int32 *v2; // rdi
  volatile signed __int32 *v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  int v6; // eax
  unsigned int i; // esi
  _BYTE v8[16]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v9[144]; // [rsp+30h] [rbp-A8h] BYREF

  v1 = (volatile signed __int32 **)((char *)this + 768);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGGLOBAL *)((char *)this + 672), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v2 = *v1;
  while ( v2 != (volatile signed __int32 *)v1 && v2 )
  {
    v3 = v2;
    v2 = *(volatile signed __int32 **)v2;
    if ( *((_DWORD *)v3 + 926) )
    {
      _m_prefetchw((const void *)(v3 + 6));
      v4 = *((_QWORD *)v3 + 3);
      while ( v4 )
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange64((volatile signed __int64 *)v3 + 3, v4 + 1, v4);
        if ( v5 == v4 )
        {
          LOBYTE(v4) = 1;
          break;
        }
      }
      if ( (_BYTE)v4 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v9, (struct DXGADAPTER *const)v3, 0LL);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v3);
        v6 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v9, 0LL);
        if ( v6 < 0 )
        {
          WdLogSingleEntry2(3LL, v3, v6);
        }
        else
        {
          for ( i = 0; i < *((_DWORD *)v3 + 792); ++i )
          {
            if ( !*(_DWORD *)(520LL * i + *((_QWORD *)v3 + 378) + 208) )
              DXGADAPTER::SetPowerComponentIdleCBInternal((DXGADAPTER *)v3, i, 0);
          }
          _InterlockedDecrement(v3 + 926);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v9);
      }
      else
      {
        WdLogSingleEntry1(3LL, v3);
      }
    }
  }
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
}
