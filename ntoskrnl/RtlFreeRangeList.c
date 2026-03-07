_QWORD *__fastcall RtlFreeRangeList(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // r8
  _QWORD *v6; // rdx

  *(_DWORD *)(a1 + 16) = 0;
  result = *(_QWORD **)a1;
  *(_DWORD *)(a1 + 20) = 0;
  v3 = result - 5;
  while ( 1 )
  {
    v4 = *result - 40LL;
    if ( (_QWORD *)a1 == result )
      break;
    v5 = *result;
    if ( *(_QWORD **)(*result + 8LL) != result || (v6 = (_QWORD *)result[1], (_QWORD *)*v6 != result) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    RtlpDeleteRangeListEntry(v3);
    v3 = (_QWORD *)v4;
    result = (_QWORD *)(v4 + 40);
  }
  return result;
}
