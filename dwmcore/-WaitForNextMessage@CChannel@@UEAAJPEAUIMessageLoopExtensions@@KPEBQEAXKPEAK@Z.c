__int64 __fastcall CChannel::WaitForNextMessage(
        CChannel *this,
        struct _RTL_CRITICAL_SECTION *a2,
        unsigned int a3,
        void *const *a4,
        unsigned int a5,
        unsigned int *a6)
{
  __int64 v7; // r15
  __int64 v8; // r14
  struct _RTL_CRITICAL_SECTION *v9; // r12
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ebx
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // [rsp+20h] [rbp-E0h]
  int v23; // [rsp+20h] [rbp-E0h]
  _DWORD v26[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h]
  int v28; // [rsp+60h] [rbp-A0h]
  int v29; // [rsp+64h] [rbp-9Ch]
  __int64 v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+70h] [rbp-90h]
  _QWORD v32[64]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+1C8h]

  v7 = a3;
  if ( a3 && !a4 || a3 > 0x3F )
  {
    v13 = -2147024809;
    v18 = 656LL;
    goto LABEL_21;
  }
  v8 = *((_QWORD *)this + 8);
  if ( v8 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 56LL))(*((_QWORD *)this + 8));
    v9 = a2;
  }
  else
  {
    v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 184);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  }
  v11 = *((_QWORD *)this + 8);
  if ( v11 )
  {
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 72LL))(v11, 0LL);
    v13 = v19;
    if ( v19 >= 0 )
      goto LABEL_9;
    v20 = (unsigned int)v19;
    v21 = 570LL;
  }
  else
  {
    v12 = *((_QWORD *)this + 22);
    if ( !v12 )
    {
LABEL_8:
      *((_BYTE *)this + 233) = 0;
LABEL_9:
      v13 = 0;
      goto LABEL_10;
    }
    v15 = *((_DWORD *)this + 18);
    v27 = 0LL;
    v29 = 0;
    v31 = 0LL;
    v28 = v15;
    v16 = *((_QWORD *)this + 7);
    v30 = v12;
    v26[1] = 40;
    v26[0] = 8;
    LOBYTE(v10) = *((_BYTE *)this + 233);
    v17 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, __int64))(**(_QWORD **)(v16 + 8) + 8LL))(
            *(_QWORD *)(v16 + 8),
            v26,
            0LL,
            v10);
    v13 = v17;
    if ( v17 >= 0 )
    {
      *((_QWORD *)this + 22) = 0LL;
      goto LABEL_8;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x105,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
      (const char *)(unsigned int)v17,
      v22);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x131,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v13,
      v23);
    v20 = (unsigned int)v13;
    v21 = 574LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)v20,
    v22);
LABEL_10:
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 80LL))(v8);
  else
    LeaveCriticalSection(v9);
  if ( v13 < 0 )
  {
    v18 = 658LL;
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
    if ( *((CChannel **)this + 10) != (CChannel *)((char *)this + 80) )
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
      *a6 = v7;
      return 0LL;
    }
    ResetEvent(*((HANDLE *)this + 12));
    memcpy_0(v32, a4, 8 * v7);
    v32[v7] = *((_QWORD *)this + 12);
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
    v22 = 0;
    v13 = (*(__int64 (__fastcall **)(struct _RTL_CRITICAL_SECTION *, _QWORD, _QWORD *, _QWORD))&a2->DebugInfo->EntryCount)(
            a2,
            (unsigned int)(v7 + 1),
            v32,
            a5);
    if ( v13 >= 0 )
      return 0LL;
    v18 = 686LL;
  }
LABEL_21:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)(unsigned int)v13,
    v22);
  return (unsigned int)v13;
}
