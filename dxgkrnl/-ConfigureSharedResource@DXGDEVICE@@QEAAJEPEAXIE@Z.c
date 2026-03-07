__int64 __fastcall DXGDEVICE::ConfigureSharedResource(
        DXGDEVICE *this,
        char a2,
        void *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  __int64 v6; // rbx
  struct DXGPROCESS *Current; // rbp
  unsigned int v10; // ecx
  __int64 v11; // r10
  int v12; // edx
  struct DXGRESOURCE *v13; // rdx
  DXGDEVICE *v14; // r9
  unsigned int v15; // ebx
  __int64 v17; // r8
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF

  v6 = a4;
  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 5454LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 5454LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !(_DWORD)v6 )
  {
    v15 = -1073741811;
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    return v15;
  }
  Current = DXGPROCESS::GetCurrent();
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v10 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( v10 >= *((_DWORD *)Current + 74) )
    goto LABEL_12;
  v11 = *((_QWORD *)Current + 35);
  if ( (((unsigned int)v6 >> 25) & 0x60) != (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0x60) )
    goto LABEL_12;
  if ( (*(_DWORD *)(v11 + 16LL * v10 + 8) & 0x2000) != 0 )
    goto LABEL_12;
  v12 = *(_DWORD *)(v11 + 16LL * v10 + 8) & 0x1F;
  if ( !v12 )
    goto LABEL_12;
  if ( v12 != 4 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_12:
    v13 = 0LL;
    goto LABEL_13;
  }
  v13 = *(struct DXGRESOURCE **)(v11 + 16LL * v10);
LABEL_13:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v18, v13);
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( v18 )
  {
    v14 = *(DXGDEVICE **)(v18 + 8);
    if ( v14 == this )
    {
      if ( (*(_DWORD *)(v18 + 4) & 1) != 0 )
      {
        v15 = DXGDEVICE::ConfigureSharedResourceHelper(this, a2, a3, *(struct DXGSHAREDRESOURCE **)(v18 + 56), a5, 1);
      }
      else
      {
        v15 = -1073741811;
        WdLogSingleEntry3(3LL, this, v18, -1073741811LL);
      }
    }
    else
    {
      v15 = -1073741811;
      WdLogSingleEntry4(3LL, this, v18, v14, -1073741811LL);
    }
  }
  else
  {
    v17 = v6;
    v15 = -1073741811;
    WdLogSingleEntry3(3LL, this, v17, -1073741811LL);
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v18);
  return v15;
}
