__int64 __fastcall CHolographicClient::OnExclusiveViewActivate(
        CHolographicClient *this,
        struct CHolographicExclusiveView *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rax

  v2 = (__int64 *)*((_QWORD *)this + 3);
  v3 = *v2;
  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64 *, _QWORD, char *, _QWORD, _DWORD))(v3 + 120))(
             v2,
             *((unsigned int *)a2 + 38),
             (char *)a2 + 160,
             *((unsigned int *)a2 + 19),
             *((_DWORD *)a2 + 18));
  else
    return (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _DWORD))(v3 + 120))(v2, 0LL, 0LL, 0LL, 0);
}
