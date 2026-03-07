__int64 __fastcall TdrTimedOperationStart(__int64 a1, __int64 *a2, char a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1 || *(_WORD *)a1 != 40 || !a2 )
    return 3221225485LL;
  *(_QWORD *)(a1 + 8) = retaddr;
  *(_BYTE *)(a1 + 17) = 0;
  *(_BYTE *)(a1 + 16) = a3 != 0;
  v4 = *a2;
  *(_QWORD *)(a1 + 24) = *a2;
  if ( v4 < 0 )
  {
    v4 = -v4;
    *(_QWORD *)(a1 + 24) = v4;
  }
  v5 = *(_QWORD *)(a1 + 24);
  if ( v4 > 50000000 )
    v5 = 50000000LL;
  *(_QWORD *)(a1 + 24) = v5;
  *(__int64 *)(a1 + 24) /= (__int64)KeQueryTimeIncrement();
  *(_QWORD *)(a1 + 32) = MEMORY[0xFFFFF78000000320];
  return 0LL;
}
