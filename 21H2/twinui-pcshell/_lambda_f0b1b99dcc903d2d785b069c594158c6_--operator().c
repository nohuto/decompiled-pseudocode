/*
 * XREFs of _lambda_f0b1b99dcc903d2d785b069c594158c6_::operator() @ 0x180356C8C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f0b1b99dcc903d2d785b069c594158c6___::Run @ 0x180357A20 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f0b1b99dcc903d2d785b069c594158c6___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_f0b1b99dcc903d2d785b069c594158c6_::operator()(_DWORD **a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  char v8; // di
  int v9; // eax
  __int64 v10; // rdx
  _QWORD *v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  const char *v20; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v23; // [rsp+30h] [rbp+8h] BYREF
  __int64 v24; // [rsp+38h] [rbp+10h] BYREF

  v24 = 0LL;
  v2 = *((_QWORD *)*a1 + 10);
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    v4 = v24;
    v24 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, &v24);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        102LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v5);
    v23 = 0LL;
    v6 = *((_QWORD *)*a1 + 8);
    v23 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v6 + 88LL))(v6, &v23);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        105LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v7);
    v8 = 0;
    if ( (*a1[1] & 1) != ((*a1)[24] & 1) )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD *))(*v23 + 152LL))(v23);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          111LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v9);
    }
    v10 = (unsigned int)*a1[1];
    v11 = *a1;
    v12 = *a1[1] & 2;
    if ( ((*a1[1] & 2) != 0) != (((*a1)[24] >> 1) & 1) )
    {
      LOBYTE(v10) = (_DWORD)v12 != 0;
      v13 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v23 + 56LL))(v23, v10);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          116LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v13);
      v8 = 1;
      v11 = *a1;
      LODWORD(v10) = *a1[1];
    }
    v14 = v10 & 4;
    if ( ((_DWORD)v14 != 0) != ((*((_DWORD *)v11 + 24) >> 2) & 1) )
    {
      LOBYTE(v14) = (_DWORD)v14 != 0;
      v15 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD *, __int64))(*v23 + 136LL))(v23, v14, v11, v12);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          122LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v15);
    }
    v16 = *a1[1] & 8;
    if ( ((*a1[1] & 8) != 0) != (((*a1)[24] >> 3) & 1) )
    {
      LOBYTE(v16) = (_DWORD)v16 != 0;
      v17 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD *, __int64))(*v23 + 104LL))(v23, v16, v11, v12);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          127LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v17);
      v8 = 1;
    }
    if ( v8 )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD *, bool, _QWORD, __int64))(*v23 + 88LL))(
              v23,
              (*(_BYTE *)a1[1] & 0xA) == 10,
              *v23,
              v12);
      if ( v18 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          134LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v18);
    }
    v19 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, __int64))(*(_QWORD *)v24 + 56LL))(v24, v16, v11, v12);
    if ( v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        137LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v19);
    (*a1)[24] = *a1[1];
    if ( v23 )
      (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8D,
                           (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v20);
  }
  return result;
}
