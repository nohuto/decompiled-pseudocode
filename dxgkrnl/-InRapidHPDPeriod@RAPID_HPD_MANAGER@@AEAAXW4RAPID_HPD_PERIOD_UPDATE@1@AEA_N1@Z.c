__int64 __fastcall RAPID_HPD_MANAGER::InRapidHPDPeriod(__int64 a1, int a2, bool *a3, bool *a4)
{
  __int64 result; // rax
  bool v6; // r10
  bool v7; // r8
  int v8; // ecx

  result = MEMORY[0xFFFFF78000000014];
  v6 = MEMORY[0xFFFFF78000000014] < (__int64)(*(_QWORD *)(a1 + 56) + (unsigned int)(10000 * *(_DWORD *)(a1 + 24)));
  *a3 = v6;
  v7 = result < *(_QWORD *)(a1 + 72) + (unsigned int)(10000 * *(_DWORD *)(a1 + 28));
  *a4 = v7;
  if ( a2 == 1 || a2 == 2 && v6 && v7 )
    *(_QWORD *)(a1 + 56) = result;
  v8 = *(_DWORD *)(a1 + 88);
  if ( v8 == 1 )
  {
    *a3 = 1;
  }
  else
  {
    result = *a3;
    if ( v8 == 2 )
      result = 0LL;
    *a3 = result;
  }
  return result;
}
