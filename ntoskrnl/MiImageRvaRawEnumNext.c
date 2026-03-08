/*
 * XREFs of MiImageRvaRawEnumNext @ 0x14073A190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiImageRvaRawEnumNext(_DWORD *a1, _DWORD *a2)
{
  unsigned int v4; // eax
  _DWORD *v5; // r14
  unsigned int *v6; // rbx
  int v7; // r15d
  unsigned int v8; // ebp
  unsigned int v9; // edi
  unsigned int v10; // ecx
  int v11; // r9d
  __int64 v12; // rcx
  unsigned int v13; // ecx
  _DWORD *v14; // r8
  __int64 result; // rax

  if ( !a1[78] )
    return 0LL;
  v4 = a1[36];
  v5 = a1 + 38;
  v6 = a1 + 38;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( v4 )
  {
    v10 = a1[36];
    do
    {
      v4 = v10;
      if ( *((_QWORD *)v6 + 2) )
      {
        if ( *v6 == a1[78] )
        {
          *v6 = (*((__int64 (__fastcall **)(_DWORD *, unsigned int *, unsigned int *))v6 + 2))(a1, v6 + 6, v6 + 1);
          v10 = a1[36];
        }
        v4 = v10;
        if ( *v6 && (!v8 || v8 >= *v6) )
          v8 = *v6;
      }
      ++v9;
      v6 += 10;
      v10 = v4;
    }
    while ( v9 < v4 );
  }
  if ( a2 && v8 )
  {
    v11 = 0;
    if ( v4 )
    {
      v12 = v4;
      do
      {
        if ( *v5 == v8 )
          v11 |= v5[1];
        v5 += 10;
        --v12;
      }
      while ( v12 );
      v13 = 0;
      v14 = a1 + 32;
      do
      {
        if ( (v11 & *v14) != 0 )
          v7 |= 1 << v13;
        ++v13;
        ++v14;
      }
      while ( v13 < v4 );
    }
    *a2 = v7;
  }
  result = v8;
  a1[78] = v8;
  return result;
}
