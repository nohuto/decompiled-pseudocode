__int64 __fastcall MagControl(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v8; // r8d
  _QWORD *ThreadContext; // rax
  _QWORD *v10; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 *v16; // rax

  v4 = 0;
  if ( a3 )
  {
    v8 = a3 - 1;
    if ( v8 )
    {
      if ( (unsigned int)(v8 - 1) >= 2 )
        return (unsigned int)-1073741811;
    }
    else
    {
      ThreadContext = MagpFindThreadContext(a1, a2);
      if ( ThreadContext )
      {
        if ( (*((_DWORD *)ThreadContext + 8))-- == 1 )
          MagContextThreadCallout(v10, ThreadContext[2], ThreadContext, 1);
      }
      else
      {
        return (unsigned int)-1073741772;
      }
    }
  }
  else
  {
    v12 = MagpFindThreadContext(a1, a2);
    if ( v12 )
    {
      ++*((_DWORD *)v12 + 8);
    }
    else
    {
      v13 = Win32AllocPoolZInit(56LL, 1735226197LL);
      v14 = v13;
      if ( v13 )
      {
        v15 = (_QWORD *)(v13 + 40);
        *(_QWORD *)(v14 + 16) = a2;
        v15[1] = v15;
        *v15 = v15;
        *(_DWORD *)(a2 + 1272) |= 8u;
        *(_DWORD *)(v14 + 32) = 1;
        *(_QWORD *)(v14 + 24) = a4;
        v16 = (__int64 *)a1[1];
        if ( (_QWORD *)*v16 != a1 )
          __fastfail(3u);
        *(_QWORD *)v14 = a1;
        *(_QWORD *)(v14 + 8) = v16;
        *v16 = v14;
        a1[1] = v14;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return v4;
}
