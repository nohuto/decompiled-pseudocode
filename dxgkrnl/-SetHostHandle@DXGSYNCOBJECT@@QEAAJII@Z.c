__int64 __fastcall DXGSYNCOBJECT::SetHostHandle(DXGSYNCOBJECT *this, int a2, int a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rbx
  struct _KTHREAD **v8; // rsi
  char *v9; // rdi
  __int64 v10; // rax

  if ( (*((_BYTE *)this + 204) & 1) == 0 )
  {
    *((_DWORD *)this + 24) = a3;
    return 0LL;
  }
  v6 = operator new[](0x18uLL, 0x4B677844u, 256LL);
  v7 = (_QWORD *)v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)v6 = 0LL;
    *(_DWORD *)(v6 + 20) = a3;
    v8 = (struct _KTHREAD **)((char *)this + 32);
    *(_DWORD *)(v6 + 16) = a2;
    DXGFASTMUTEX::Acquire((DXGSYNCOBJECT *)((char *)this + 32));
    v9 = (char *)this + 104;
    v10 = *(_QWORD *)v9;
    if ( *(char **)(*(_QWORD *)v9 + 8LL) != v9 )
      __fastfail(3u);
    *v7 = v10;
    v7[1] = v9;
    *(_QWORD *)(v10 + 8) = v7;
    *(_QWORD *)v9 = v7;
    DXGFASTMUTEX::Release(v8);
    return 0LL;
  }
  WdLogSingleEntry1(6LL, 5704LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate DXG_HOST_HANDLE_MAP",
    5704LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
