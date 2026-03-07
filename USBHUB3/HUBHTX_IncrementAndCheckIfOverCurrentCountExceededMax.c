__int64 __fastcall HUBHTX_IncrementAndCheckIfOverCurrentCountExceededMax(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 1448);
  *(_QWORD *)(a1 + 1448) = MEMORY[0xFFFFF78000000014];
  if ( v1 > 30000000 )
    *(_BYTE *)(a1 + 1456) = 0;
  ++*(_BYTE *)(a1 + 1456);
  result = 3089LL;
  if ( *(_BYTE *)(a1 + 1456) <= 5u )
    return 3005LL;
  return result;
}
