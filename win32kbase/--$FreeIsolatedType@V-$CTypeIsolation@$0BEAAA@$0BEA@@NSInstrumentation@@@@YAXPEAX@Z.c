__int64 __fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 6504LL);
  v3 = *(_QWORD *)(result + 32);
  if ( v3 )
    return NSInstrumentation::CTypeIsolation<81920,320>::Free(v3, a1);
  return result;
}
