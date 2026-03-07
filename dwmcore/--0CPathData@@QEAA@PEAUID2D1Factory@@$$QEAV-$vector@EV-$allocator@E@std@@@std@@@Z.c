__int64 __fastcall CPathData::CPathData(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CPathData::`vftable';
  v4 = a3[2];
  v5 = a3[1];
  v6 = *a3;
  a3[2] = 0LL;
  a3[1] = 0LL;
  *a3 = 0LL;
  *(_QWORD *)(a1 + 16) = v6;
  *(_QWORD *)(a1 + 24) = v5;
  *(_QWORD *)(a1 + 32) = v4;
  *(_QWORD *)(a1 + 40) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_DWORD *)(a1 + 52) = 0;
  result = a1;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_BYTE *)(a1 + 72) = 0;
  return result;
}
