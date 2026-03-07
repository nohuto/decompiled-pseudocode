__int64 __fastcall IopPortAddAllocation(__int64 a1, __int64 *a2)
{
  __int64 v3; // r9
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 result; // rax
  int v8; // r9d
  __int64 v9; // r10
  __int64 i; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2[4];
  v5 = *(_QWORD *)(v3 + 32);
  LOBYTE(v3) = *((_BYTE *)a2 + 66);
  RtlAddRange(*(_QWORD *)(a1 + 48), *a2, a2[1], v3, 2 * (*(_DWORD *)(a2[5] + 36) & 1) + 1, 0LL, v5);
  v6 = *a2;
  for ( i = *a2;
        ;
        RtlAddRange(
          *(_QWORD *)(a1 + 48),
          i,
          *(_DWORD *)(v9 + 16) + i - 1,
          v8,
          2 * (*(_DWORD *)(v9 + 36) & 1) + 1,
          0LL,
          *(_QWORD *)(a2[4] + 32)) )
  {
    result = IopPortGetNextAlias(*(unsigned __int16 *)(*(_QWORD *)(a2[5] + 40) + 4LL), v6, &i);
    if ( !(_BYTE)result )
      break;
    v6 = i;
    LOBYTE(v8) = *((_BYTE *)a2 + 66) | 0x10;
  }
  return result;
}
