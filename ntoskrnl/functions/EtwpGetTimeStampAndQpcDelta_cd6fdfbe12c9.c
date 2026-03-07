__int64 __fastcall EtwpGetTimeStampAndQpcDelta(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  bool v4; // zf
  int v6; // edx
  __int64 result; // rax
  __int64 v9; // rdx
  int v10; // ecx
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0;
  v4 = *(_DWORD *)(a1 + 200) == 2;
  v11 = 0LL;
  v6 = 7;
  v12 = 0LL;
  if ( !v4 )
    v6 = 3;
  result = RtlGetMultiTimePrecise((LARGE_INTEGER *)&v11, v6, &v13);
  if ( (_DWORD)result )
    goto LABEL_11;
  if ( (v13 & 2) == 0 || (v13 & 1) == 0 )
  {
    result = 3221225473LL;
LABEL_11:
    _InterlockedAnd((volatile signed __int32 *)(a1 + 816), 0xF7FFFFFF);
    return result;
  }
  v9 = v11;
  v10 = *(_DWORD *)(a1 + 200);
  *a3 = *((_QWORD *)&v11 + 1) - v11;
  if ( v10 == 2 )
    *a2 = v12;
  else
    *a2 = v9;
  return 0LL;
}
