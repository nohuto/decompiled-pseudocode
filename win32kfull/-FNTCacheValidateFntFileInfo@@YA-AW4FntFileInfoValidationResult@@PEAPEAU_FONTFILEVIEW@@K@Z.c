__int64 __fastcall FNTCacheValidateFntFileInfo(Gre::Base *a1, unsigned int a2)
{
  Gre::Base *v3; // rdi
  _QWORD *v4; // rcx
  unsigned int v5; // ebx
  unsigned int v6; // esi
  _QWORD *v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1;
  Gre::Base::Globals(a1);
  v5 = 0;
  v6 = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD **)v3;
      v13 = 0LL;
      v14 = 0LL;
      if ( !(unsigned int)Win32FileInfo(v7[10], &v14, &v13) )
        break;
      v9 = *(_QWORD **)v3;
      if ( **(_QWORD **)v3 != v14 || *((_DWORD *)v9 + 6) != (_DWORD)v13 )
        v5 = 1;
      *v9 = v14;
      ++v6;
      v4 = *(_QWORD **)v3;
      v3 = (Gre::Base *)((char *)v3 + 8);
      *((_DWORD *)v4 + 6) = v13;
      if ( v6 >= a2 )
        goto LABEL_7;
    }
    v5 = 2;
    SGDGetSessionState(v8);
  }
  else
  {
LABEL_7:
    v10 = SGDGetSessionState(v4);
    if ( v5 == 1 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 19392LL);
      if ( v11 )
        *(_DWORD *)(v11 + 16) |= 2u;
    }
  }
  return v5;
}
