unsigned __int64 __fastcall MiFillSessionWorkingSetEntry(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v4; // r9

  *(_DWORD *)a1 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 328);
  v2 = *(_QWORD *)(a2 + 320);
  *(_QWORD *)(a1 + 24) = 0LL;
  result = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 8) = v2;
  v4 = *(_QWORD *)(a2 + 40);
  if ( result >= v2 )
    result = v2;
  *(_QWORD *)(a1 + 16) = v4;
  if ( result < v4 )
    v4 = result;
  *(_QWORD *)(a1 + 32) = v4;
  return result;
}
