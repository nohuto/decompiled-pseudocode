__int64 __fastcall DXGK_LOG::Initialize(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  int v5; // edi
  __int64 v7; // rax
  __int64 result; // rax

  v5 = a4;
  if ( a4 < 0x1000 || ((a4 - 1) & a4) != 0 )
    return 3221225485LL;
  v7 = operator new[](a4, 0x32356956u, a3);
  *(_QWORD *)a1 = v7;
  if ( !v7 )
    return 3221225495LL;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = -1;
  *(_QWORD *)(a1 + 24) = a5;
  result = 0LL;
  *(_DWORD *)(a1 + 8) = v5;
  return result;
}
