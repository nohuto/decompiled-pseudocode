__int64 __fastcall VPTPContact::VPTPContact(__int64 a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 *v5; // rax
  __int64 v6; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  *(_WORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_DWORD *)(a1 + 28) = a2;
  *(_QWORD *)(a1 + 32) = a3;
  if ( (_QWORD *)*a3 == a3 )
  {
    v8 = a2;
    v9 = 1;
    SendMessageTo(18LL, (__int64)&v8, 8LL, a4);
  }
  v5 = *(__int64 **)(a1 + 32);
  v6 = *v5;
  if ( *(__int64 **)(*v5 + 8) != v5 )
    __fastfail(3u);
  *(_QWORD *)(a1 + 8) = v5;
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(v6 + 8) = a1;
  *v5 = a1;
  return a1;
}
