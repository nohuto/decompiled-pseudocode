struct Gre::Base::SESSION_GLOBALS *DrvCloseRemoteGraphicsDevices()
{
  Gre::Base *v0; // rcx
  struct Gre::Base::SESSION_GLOBALS *result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 DxgkWin32kInterface; // rax

  if ( !(unsigned int)UserIsUserCritSecIn() )
    WdLogSingleEntry0(1LL);
  result = Gre::Base::Globals(v0);
  v4 = result;
  v5 = *((_QWORD *)result + 168);
  if ( v5 )
  {
    v6 = *((_QWORD *)result + 168);
    do
    {
      v7 = *(_QWORD *)(v5 + 128);
      if ( (*(_DWORD *)(v5 + 160) & 0x4000000) != 0 )
      {
        *(_QWORD *)(v6 + 128) = v7;
        v8 = v7;
        if ( v6 != v5 )
          v8 = v6;
        v6 = v8;
        if ( *((_QWORD *)v4 + 168) == v5 )
          *((_QWORD *)v4 + 168) = v7;
        if ( *((_QWORD *)v4 + 170) == v5 )
          *((_QWORD *)v4 + 170) = v8;
        --*((_DWORD *)v4 + 352);
        if ( *(_QWORD *)(v5 + 296) )
        {
          DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v3, v2);
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(DxgkWin32kInterface + 400))(
            *(_QWORD *)(v5 + 272),
            0LL,
            *(_QWORD *)(v5 + 280));
          *(_QWORD *)(v5 + 272) = 0LL;
          *(_QWORD *)(v5 + 288) = 0LL;
          *(_QWORD *)(v5 + 296) = 0LL;
        }
        result = (struct Gre::Base::SESSION_GLOBALS *)DrvCleanupOneGraphicsDevice(v5);
      }
      else
      {
        v6 = v5;
      }
      v5 = v7;
    }
    while ( v7 );
  }
  return result;
}
