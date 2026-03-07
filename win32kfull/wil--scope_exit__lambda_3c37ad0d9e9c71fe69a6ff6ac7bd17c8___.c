__int64 __fastcall wil::scope_exit__lambda_3c37ad0d9e9c71fe69a6ff6ac7bd17c8___(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = *a2;
  result = a1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
