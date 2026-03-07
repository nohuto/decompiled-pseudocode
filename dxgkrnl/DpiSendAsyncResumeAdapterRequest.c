LONG __fastcall DpiSendAsyncResumeAdapterRequest(__int64 a1)
{
  _QWORD *v2; // rdx
  _QWORD *v3; // rax

  WdLogSingleEntry3(9LL, a1, 0LL, 0LL);
  *(_DWORD *)(a1 + 4032) = 2;
  v2 = *(_QWORD **)(a1 + 3992);
  v3 = (_QWORD *)(a1 + 4008);
  if ( *v2 != a1 + 3984 )
    __fastfail(3u);
  *v3 = a1 + 3984;
  *(_QWORD *)(a1 + 4016) = v2;
  *v2 = v3;
  *(_QWORD *)(a1 + 3992) = v3;
  return KeSetEvent((PRKEVENT)(a1 + 3952), 0, 0);
}
