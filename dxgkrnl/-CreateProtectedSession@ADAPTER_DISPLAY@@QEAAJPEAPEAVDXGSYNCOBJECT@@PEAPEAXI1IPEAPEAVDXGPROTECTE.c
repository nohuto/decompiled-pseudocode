/*
 * XREFs of ?CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C0343A9C
 * Callers:
 *     DxgkCreateProtectedSession @ 0x1C0344700 (DxgkCreateProtectedSession.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000E280 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGPROTECTEDSESSION@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C0055CA4 (--0DXGPROTECTEDSESSION@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z @ 0x1C0055D2C (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z.c)
 *     ??_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z @ 0x1C0055FA0 (--_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z.c)
 *     ?Initialize@DXGPROTECTEDSESSION@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1I@Z @ 0x1C0344020 (-Initialize@DXGPROTECTEDSESSION@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1I@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateProtectedSession(
        DXGADAPTER **this,
        struct DXGSYNCOBJECT **a2,
        void **a3,
        unsigned int a4,
        void **a5,
        unsigned int a6,
        struct DXGPROTECTEDSESSION **a7)
{
  DXGPROTECTEDSESSION *v11; // rax
  DXGPROTECTEDSESSION *v12; // rax
  struct DXGPROTECTEDSESSION *v13; // rbx
  int v14; // ebp
  struct DXGPROTECTEDSESSION **v16; // rax
  DXGADAPTER *v17; // rcx
  _BYTE v18[16]; // [rsp+50h] [rbp-28h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 864LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsCoreResourceSharedOwner()",
      864LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a7 )
  {
    WdLogSingleEntry1(1LL, 866LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ppProtectedSession", 866LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a7 = 0LL;
  v11 = (DXGPROTECTEDSESSION *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(160LL);
  if ( v11 && (v12 = DXGPROTECTEDSESSION::DXGPROTECTEDSESSION(v11, (struct ADAPTER_DISPLAY *)this), (v13 = v12) != 0LL) )
  {
    v14 = DXGPROTECTEDSESSION::Initialize(v12, a2, a3, a4, a5, a6);
    if ( v14 >= 0 )
    {
      DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX(
        (DXGPROTECTEDSESSIONMUTEX *)v18,
        (struct ADAPTER_DISPLAY *)this);
      v16 = this + 89;
      v17 = this[89];
      if ( *((DXGADAPTER ***)v17 + 1) != this + 89 )
        __fastfail(3u);
      *(_QWORD *)v13 = v17;
      *((_QWORD *)v13 + 1) = v16;
      *((_QWORD *)v17 + 1) = v13;
      *v16 = v13;
      if ( v18[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
      _InterlockedIncrement64((volatile signed __int64 *)this[2] + 3);
      *a7 = v13;
      return 0LL;
    }
    else
    {
      DXGPROTECTEDSESSION::`scalar deleting destructor'(v13);
      return (unsigned int)v14;
    }
  }
  else
  {
    WdLogSingleEntry2(6LL, this, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"ADAPTER_DISPLAY 0x%I64x: Unable to allocate protected session object, returning 0x%I64x",
      (__int64)this,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
