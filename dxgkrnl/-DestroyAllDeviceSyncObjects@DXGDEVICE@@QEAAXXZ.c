void __fastcall DXGDEVICE::DestroyAllDeviceSyncObjects(DXGDEVICE *this)
{
  DXGDEVICESYNCOBJECT **v2; // rdi
  DXGDEVICESYNCOBJECT *v3; // rbx

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 2557LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 2557LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)this + 240) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL) + 8LL) + 616LL))();
    *((_QWORD *)this + 240) = 0LL;
  }
  v2 = (DXGDEVICESYNCOBJECT **)((char *)this + 544);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (DXGDEVICESYNCOBJECT *)v2 )
      break;
    if ( v3 )
    {
      DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(*v2);
      ExFreePoolWithTag(v3, 0);
    }
  }
}
