__int64 __fastcall DXGGLOBAL::OpenSyncObject(
        PERESOURCE *this,
        unsigned int a2,
        struct DXGSYNCOBJECT **a3,
        unsigned int *a4,
        struct DXGADAPTERSYNCOBJECT **a5)
{
  __int64 v5; // rsi
  unsigned __int64 Current; // rax
  int v10; // ecx
  struct DXGGLOBAL *Global; // rax
  DXGSYNCOBJECT *ObjectA; // rbx
  __int64 result; // rax
  __int64 v14; // rbx
  __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rbx
  int v18; // edx
  _BYTE v19[16]; // [rsp+60h] [rbp-28h] BYREF

  v5 = a2;
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 2803LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ppSyncObject", 2803LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 2804LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"phSyncObject", 2804LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGGLOBAL::IsSyncObjectLockSharedOwner(this) )
  {
    WdLogSingleEntry1(1LL, 2805LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsSyncObjectLockSharedOwner()", 2805LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a3 = 0LL;
  *a4 = 0;
  Current = (unsigned __int64)DXGPROCESS::GetCurrent();
  v10 = *(_DWORD *)(Current + 424);
  if ( (v10 & 0x180) != 0 )
  {
    if ( (v10 & 0x100) != 0 )
      v14 = *(_QWORD *)(Current + 608);
    else
      v14 = Current & -(__int64)((v10 & 0x80u) != 0);
    v15 = v14 + 248;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v14 + 248));
    v16 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
    if ( v16 < *(_DWORD *)(v14 + 296) )
    {
      v17 = *(_QWORD *)(v14 + 280);
      if ( (((unsigned int)v5 >> 25) & 0x60) == (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0x60)
        && (*(_DWORD *)(v17 + 16LL * v16 + 8) & 0x2000) == 0 )
      {
        v18 = *(_DWORD *)(v17 + 16LL * v16 + 8) & 0x1F;
        if ( v18 )
        {
          if ( v18 == 8 )
          {
            ObjectA = *(DXGSYNCOBJECT **)(v17 + 16LL * v16);
            goto LABEL_25;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    ObjectA = 0LL;
LABEL_25:
    _InterlockedDecrement((volatile signed __int32 *)(v15 + 16));
    ExReleasePushLockSharedEx(v15, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_10;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v19);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  Global = DXGGLOBAL::GetGlobal();
  ObjectA = (DXGSYNCOBJECT *)DXGGLOBAL::GetObjectA((__int64)Global, v5, 8);
  if ( v19[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
LABEL_10:
  if ( !ObjectA )
  {
    WdLogSingleEntry1(3LL, v5);
    return 3221225485LL;
  }
  if ( (unsigned int)(*((_DWORD *)ObjectA + 50) - 5) <= 1 )
  {
    WdLogSingleEntry1(3LL, 2838LL);
    return 3221225485LL;
  }
  result = DXGSYNCOBJECT::Open(ObjectA, 0LL, 0LL, 0LL, a4, 0LL, 0LL, 0, a5, 0, DXGDEVICE::DestroyFlagsDefault);
  if ( (int)result >= 0 )
    *a3 = ObjectA;
  return result;
}
