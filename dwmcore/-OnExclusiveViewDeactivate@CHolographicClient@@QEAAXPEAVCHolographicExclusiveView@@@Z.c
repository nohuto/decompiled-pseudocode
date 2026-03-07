void __fastcall CHolographicClient::OnExclusiveViewDeactivate(
        CHolographicClient *this,
        struct CHolographicExclusiveView *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rax

  v2 = (__int64 *)*((_QWORD *)this + 3);
  v3 = *v2;
  if ( a2 )
    (*(void (__fastcall **)(__int64 *, _QWORD, char *))(v3 + 128))(v2, *((unsigned int *)a2 + 38), (char *)a2 + 160);
  else
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v3 + 128))(v2, 0LL, 0LL);
}
