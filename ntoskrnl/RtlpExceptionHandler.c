__int64 __fastcall RtlpExceptionHandler(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = 1LL;
  if ( (*(_DWORD *)(a1 + 4) & 0x66) == 0 )
  {
    *(_QWORD *)(a4 + 24) = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 24LL);
    return 2LL;
  }
  return result;
}
