__int64 __fastcall CChannel::PostMessageToChannel(CChannel *this, const struct MIL_MESSAGE *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  _OWORD *v6; // rbx
  CChannel **v7; // rcx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _OWORD *v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  v4 = HrAlloc(0x30uLL, (void **)&v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A5,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v4,
      v9);
    return v5;
  }
  else
  {
    v6 = v11;
    v11[1] = *(_OWORD *)a2;
    *((_QWORD *)v6 + 4) = *((_QWORD *)a2 + 2);
    *((_DWORD *)v6 + 10) = *((_DWORD *)a2 + 6);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
    v7 = (CChannel **)*((_QWORD *)this + 11);
    if ( *v7 != (CChannel *)((char *)this + 80) )
      __fastfail(3u);
    *(_QWORD *)v6 = (char *)this + 80;
    *((_QWORD *)v6 + 1) = v7;
    *v7 = (CChannel *)v6;
    *((_QWORD *)this + 11) = v6;
    SetEvent(*((HANDLE *)this + 12));
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
    return 0LL;
  }
}
