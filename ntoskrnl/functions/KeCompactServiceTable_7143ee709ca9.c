__int64 __fastcall KeCompactServiceTable(ULONG_PTR a1, unsigned __int8 *a2, unsigned int a3, __int64 a4, int a5)
{
  _DWORD *v6; // r11
  __int64 v7; // rdi
  unsigned int v8; // eax

  v6 = (_DWORD *)a1;
  if ( a3 )
  {
    v7 = a3;
    do
    {
      v8 = *a2++;
      *v6 = (v8 >> 2) | (16 * (*v6 + a5 - a1));
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  return KiLockServiceTable(a1);
}
