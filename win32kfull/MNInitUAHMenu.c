__int64 __fastcall MNInitUAHMenu(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  v3 = 0LL;
  if ( a1 )
    v3 = *a1;
  *(_QWORD *)a3 = v3;
  *(_QWORD *)(a3 + 8) = a2;
  result = a1[5];
  *(_DWORD *)(a3 + 16) = *(_DWORD *)(result + 40);
  return result;
}
