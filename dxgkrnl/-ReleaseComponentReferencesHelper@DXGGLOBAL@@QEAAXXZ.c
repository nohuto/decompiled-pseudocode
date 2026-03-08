/*
 * XREFs of ?ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ @ 0x1C01E4658
 * Callers:
 *     ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z @ 0x1C01E43AC (-CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z.c)
 *     ?CsExitInitiatedReleaseComponentReferencesPassiveLevel@@YAXPEAX@Z @ 0x1C01E4640 (-CsExitInitiatedReleaseComponentReferencesPassiveLevel@@YAXPEAX@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x1C001B4DC (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

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
