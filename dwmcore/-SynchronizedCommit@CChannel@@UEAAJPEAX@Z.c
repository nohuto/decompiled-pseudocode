__int64 __fastcall CChannel::SynchronizedCommit(CChannel *this, void *a2)
{
  __int64 v2; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // rbp
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // edi
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-48h]
  int v18; // [rsp+20h] [rbp-48h]
  _DWORD v19[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v20; // [rsp+38h] [rbp-30h]
  int v21; // [rsp+40h] [rbp-28h]
  int v22; // [rsp+44h] [rbp-24h]
  __int64 v23; // [rsp+48h] [rbp-20h]
  __int64 v24; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+70h] [rbp+8h]

  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 56LL))(*((_QWORD *)this + 8));
    v5 = v26;
  }
  else
  {
    v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 184);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  }
  v7 = *((_QWORD *)this + 8);
  if ( v7 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 72LL))(v7, a2);
    v9 = v14;
    if ( v14 >= 0 )
      goto LABEL_7;
    v15 = (unsigned int)v14;
    v16 = 570LL;
  }
  else
  {
    v8 = *((_QWORD *)this + 22);
    if ( !v8 && !a2 )
      goto LABEL_6;
    v11 = *((_DWORD *)this + 18);
    v20 = 0LL;
    v22 = 0;
    v24 = 0LL;
    v21 = v11;
    v12 = *((_QWORD *)this + 7);
    v23 = v8;
    v19[1] = 40;
    v19[0] = 8;
    LOBYTE(v6) = *((_BYTE *)this + 233);
    v13 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, void *, __int64))(**(_QWORD **)(v12 + 8) + 8LL))(
            *(_QWORD *)(v12 + 8),
            v19,
            a2,
            v6);
    v9 = v13;
    if ( v13 >= 0 )
    {
      *((_QWORD *)this + 22) = 0LL;
LABEL_6:
      *((_BYTE *)this + 233) = 0;
LABEL_7:
      v9 = 0;
      goto LABEL_8;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x105,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
      (const char *)(unsigned int)v13,
      v17);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x131,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)v9,
      v18);
    v15 = v9;
    v16 = 574LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)v15,
    v17);
LABEL_8:
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
  else
    LeaveCriticalSection(v5);
  return v9;
}
