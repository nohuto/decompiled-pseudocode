__int64 __fastcall NtUserGetUniformSpaceMapping(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  int v10; // r14d
  unsigned int v12; // ecx
  __int128 *v13; // rax
  __int64 v14; // rdx
  _BYTE *v15; // rdx
  __int128 v16; // [rsp+38h] [rbp-20h]

  v16 = 0LL;
  v6 = 0;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  v7 = HMValidateSharedHandle(a1);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 88);
    if ( v8 )
    {
      v9 = *((_QWORD *)gpDispInfo + 2);
      v10 = 0;
      if ( (unsigned int)DrvIsUniformSpaceMapping(v9) )
      {
        v12 = *(_DWORD *)(v9 + 20);
        if ( v12 )
        {
          v13 = (__int128 *)(v9 + 76);
          v14 = v12;
          do
          {
            if ( *(_QWORD *)((char *)v13 - 36) == v8 )
            {
              v16 = *v13;
              v10 = 1;
            }
            v13 = (__int128 *)((char *)v13 + 56);
            --v14;
          }
          while ( v14 );
        }
      }
      if ( v10 )
      {
        v6 = 1;
        v15 = a2;
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          v15 = (_BYTE *)MmUserProbeAddress;
        *v15 = *v15;
        v15[15] = v15[15];
        *a2 = v16;
      }
    }
  }
  UserSessionSwitchLeaveCrit();
  return v6;
}
