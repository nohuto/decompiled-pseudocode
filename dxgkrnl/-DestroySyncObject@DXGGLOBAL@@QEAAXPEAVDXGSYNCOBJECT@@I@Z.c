void __fastcall DXGGLOBAL::DestroySyncObject(PERESOURCE *this, struct DXGSYNCOBJECT *a2, unsigned int a3)
{
  struct DXGGLOBAL *Global; // rax
  struct DXGSYNCOBJECT *v7; // rdx
  struct DXGSYNCOBJECT **v8; // rax
  struct DXGSYNCOBJECT *v9; // rax
  char *v10; // rdx
  __int64 v11; // rax
  int v12; // [rsp+40h] [rbp-30h]
  _BYTE v13[16]; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v14[16]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+38h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 2745LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSyncObject != NULL", 2745LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( ExIsResourceAcquiredExclusiveLite(this[75]) )
  {
    WdLogSingleEntry1(1LL, 2746LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!IsSyncObjectLockExclusiveOwner()",
      2746LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v14, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v14);
  if ( (*((_DWORD *)a2 + 51) & 4) != 0 && (unsigned int)(*((_DWORD *)a2 + 50) - 5) > 1 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGSYNCOBJECT *)((char *)a2 + 32), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
    v9 = (struct DXGSYNCOBJECT *)*((_QWORD *)a2 + 37);
    v10 = (char *)v9 - 48;
    if ( v9 == (struct DXGSYNCOBJECT *)((char *)a2 + 296) )
      v10 = 0LL;
    if ( v10 )
    {
      v16 = *((_QWORD *)v10 + 4);
      if ( v16 )
      {
        v11 = *((_QWORD *)v10 + 2);
        v15 = -1LL;
        LOBYTE(v12) = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64 *, _DWORD, __int64 *, int))(*(_QWORD *)(*(_QWORD *)(v11 + 736) + 8LL) + 640LL))(
          0LL,
          0LL,
          0LL,
          0LL,
          1,
          &v16,
          0,
          &v15,
          v12);
      }
    }
    if ( v13[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  }
  if ( DXGSYNCOBJECT::Close(a2, a3) )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 67));
    v7 = *(struct DXGSYNCOBJECT **)a2;
    if ( *(struct DXGSYNCOBJECT **)(*(_QWORD *)a2 + 8LL) != a2
      || (v8 = (struct DXGSYNCOBJECT **)*((_QWORD *)a2 + 1), *v8 != a2) )
    {
      __fastfail(3u);
    }
    *v8 = v7;
    *((_QWORD *)v7 + 1) = v8;
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 67);
    DXGSYNCOBJECT::Destroy(a2);
  }
  if ( v14[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v14);
}
