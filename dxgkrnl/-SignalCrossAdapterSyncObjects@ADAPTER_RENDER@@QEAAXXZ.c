void __fastcall ADAPTER_RENDER::SignalCrossAdapterSyncObjects(ADAPTER_RENDER *this)
{
  struct DXGGLOBAL *Global; // rax
  __int64 *i; // rbx
  __int64 v4; // rax
  int v5; // [rsp+40h] [rbp-28h]
  _BYTE v6[16]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v7; // [rsp+70h] [rbp+8h] BYREF
  __int64 v8; // [rsp+78h] [rbp+10h] BYREF

  if ( !*(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v6, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v6);
    for ( i = (__int64 *)*((_QWORD *)this + 30); i != (__int64 *)((char *)this + 240) && i; i = (__int64 *)*i )
    {
      if ( *((_BYTE *)i + 26) )
      {
        v4 = i[4];
        v7 = -1LL;
        v8 = v4;
        LOBYTE(v5) = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64 *, _DWORD, __int64 *, int))(*(_QWORD *)(*((_QWORD *)this + 92) + 8LL) + 640LL))(
          0LL,
          0LL,
          0LL,
          0LL,
          1,
          &v8,
          0,
          &v7,
          v5);
      }
    }
    if ( v6[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v6);
  }
}
