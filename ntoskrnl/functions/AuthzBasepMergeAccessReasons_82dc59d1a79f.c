bool __fastcall AuthzBasepMergeAccessReasons(_DWORD *a1, __int64 a2, int a3)
{
  _DWORD *v3; // r9
  __int64 v4; // rdx
  __int64 v5; // r11
  int v6; // ebx
  bool result; // al

  v3 = a1;
  v4 = a2 - (_QWORD)a1;
  v5 = 32LL;
  do
  {
    v6 = *(_DWORD *)((char *)v3 + v4);
    result = (a3 & v6) == 0;
    if ( (v6 & 0xFF0000) != 0 || !result )
    {
      if ( a3 )
        *v3 |= a3 & *(_DWORD *)((char *)v3 + v4);
      else
        *v3 = v6;
    }
    ++v3;
    --v5;
  }
  while ( v5 );
  return result;
}
