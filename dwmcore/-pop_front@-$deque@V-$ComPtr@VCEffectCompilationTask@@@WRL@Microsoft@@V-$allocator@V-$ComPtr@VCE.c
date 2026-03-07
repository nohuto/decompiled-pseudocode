__int64 __fastcall std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_front(_QWORD *a1)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // rcx

  v2 = a1[3] & 1LL;
  result = a1[1];
  v4 = *(_QWORD *)(result + 8 * ((a1[2] - 1LL) & (a1[3] >> 1)));
  v5 = *(_QWORD *)(v4 + 8 * v2);
  if ( v5 )
  {
    *(_QWORD *)(v4 + 8 * v2) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  if ( a1[4]-- == 1LL )
    a1[3] = 0LL;
  else
    ++a1[3];
  return result;
}
