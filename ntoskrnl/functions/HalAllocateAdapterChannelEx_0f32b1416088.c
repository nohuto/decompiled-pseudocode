__int64 __fastcall HalAllocateAdapterChannelEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  _QWORD *v9; // rbx
  __int64 result; // rax
  __int64 v11; // rax

  if ( !a3 || *(_DWORD *)a3 != 1 )
    return 3221225485LL;
  if ( (a5 & 1) != 0 )
  {
    v9 = a8;
    if ( a6 )
    {
      if ( !a8 )
        goto LABEL_13;
    }
    else if ( !a8 )
    {
      return 3221225485LL;
    }
    *a8 = 0LL;
  }
  else
  {
    if ( !a6 )
      return 3221225485LL;
    v9 = a8;
    if ( a8 )
      return 3221225485LL;
  }
LABEL_13:
  *(_DWORD *)(a3 + 8) = 0;
  *(_QWORD *)(a3 + 88) = 0LL;
  *(_QWORD *)(a3 + 64) = a2;
  v11 = *(_QWORD *)(a2 + 32);
  *(_DWORD *)(a3 + 36) |= 2u;
  *(_QWORD *)(a3 + 72) = v11;
  *(_QWORD *)(a3 + 48) = a7;
  result = HalpAllocateAdapterChannel(a1, (int)a3 + 16, a4, *(_DWORD *)(a1 + 252) >> 12, a5, a6);
  if ( !(_DWORD)result )
  {
    if ( v9 )
      *v9 = *(_QWORD *)(a1 + 240);
  }
  return result;
}
