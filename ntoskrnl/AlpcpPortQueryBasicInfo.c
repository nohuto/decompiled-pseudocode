__int64 __fastcall AlpcpPortQueryBasicInfo(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  if ( a3 < 0x10 )
  {
    result = 3221225476LL;
  }
  else
  {
    *(_DWORD *)a2 = *(_DWORD *)(a1 + 256) & 0x3FF0000;
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 400);
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 56);
    result = 0LL;
  }
  if ( a4 )
    *a4 = 16;
  return result;
}
