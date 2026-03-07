_QWORD **__fastcall lambda_cfa85ae072c89c165dff36c328ecf84d_::operator()(_QWORD **a1)
{
  _QWORD **result; // rax
  _QWORD *v3; // rdx
  __int64 v4; // r8
  _QWORD *v5; // rdi
  _QWORD *v6; // rax

  while ( 1 )
  {
    result = (_QWORD **)*a1;
    v3 = (_QWORD *)**a1;
    if ( v3 == *a1 )
      break;
    v4 = *v3;
    v5 = v3 - 1;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v6 = (_QWORD *)v3[1], (_QWORD *)*v6 != v3) )
      __fastfail(3u);
    *v6 = v4;
    *(_QWORD *)(v4 + 8) = v6;
    (*(void (__fastcall **)(_QWORD *))(*v5 + 56LL))(v3 - 1);
    (*(void (__fastcall **)(_QWORD *, __int64))*v5)(v5, 1LL);
  }
  return result;
}
