__int64 __fastcall CInputQueue::Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ecx
  __int128 v7; // xmm1
  __int64 v8; // xmm0_8
  int v10; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 12) != 3 || (v10 = 0, UserGetWindowThreadProcessId(a2, &v10), v10) && *(_DWORD *)a3 == v10 )
  {
    v6 = 0;
    if ( (unsigned int)(*(_DWORD *)(a1 + 12) - 2) > 1 )
      goto LABEL_5;
    if ( !qword_1C02D72A8 )
      return (unsigned int)-1073741637;
    v6 = qword_1C02D72A8(a2, a1);
    if ( v6 >= 0 )
    {
LABEL_5:
      v7 = *(_OWORD *)(a3 + 16);
      *(_OWORD *)(a1 + 24) = *(_OWORD *)a3;
      *(_QWORD *)(a1 + 16) = a2;
      v8 = *(_QWORD *)(a3 + 32);
      *(_OWORD *)(a1 + 40) = v7;
      *(_QWORD *)(a1 + 56) = v8;
    }
    return (unsigned int)v6;
  }
  return 3221225485LL;
}
