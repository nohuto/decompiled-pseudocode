bool __fastcall lambda_18e42bef8aab6193ee3628fe412f6142_::_lambda_invoker_cdecl_(__int64 a1, _OWORD *a2)
{
  __int128 v5; // [rsp+20h] [rbp-18h]

  *a2 = 0LL;
  if ( (((*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) + 0x80) & 0xBF) == 0
    && IsWindowActivateable(*(const struct tagWND **)(a1 + 120)) )
  {
    *(_QWORD *)&v5 = *(_QWORD *)(a1 + 120);
    *((_QWORD *)&v5 + 1) = 2LL;
    *a2 = v5;
  }
  return *(_QWORD *)a2 != 0LL;
}
