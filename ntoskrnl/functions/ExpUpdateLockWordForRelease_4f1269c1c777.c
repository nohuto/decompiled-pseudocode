signed __int64 __fastcall ExpUpdateLockWordForRelease(signed __int64 *a1, int a2, char a3)
{
  __int64 v4; // r10
  signed __int64 v6; // rax
  BOOL v7; // r8d
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  signed __int64 v10; // rcx
  signed __int64 v11; // rtt

  v4 = a2;
  _m_prefetchw(a1);
  v6 = *a1;
  do
  {
    v7 = a1[2] || *((_DWORD *)a1 + 14);
    v8 = v6 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( v7 )
      v8 = v6 | 2;
    v9 = v8 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( !a3 )
      v9 = v8;
    v10 = v9;
    if ( (v9 & 1) == 0 && (_DWORD)v4 )
      v10 = v9 + 4 * v4;
    if ( v10 == v6 )
      break;
    v11 = v6;
    v6 = _InterlockedCompareExchange64(a1, v10, v6);
  }
  while ( v11 != v6 );
  return v10;
}
