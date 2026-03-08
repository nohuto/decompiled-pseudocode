/*
 * XREFs of MiInitializeZeroingAttributes @ 0x140B6C098
 * Callers:
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeZeroingAttributes(unsigned int a1)
{
  int v1; // r11d
  __int64 v2; // r8
  unsigned int v3; // eax
  unsigned int *v4; // r10
  unsigned int *v5; // rcx
  __int64 result; // rax
  _DWORD *v7; // rcx
  unsigned int v8; // ecx
  int *v9; // r8
  int *v10; // rdx
  unsigned int *v11; // r9

  v1 = 2 - ((byte_140C65818 & 4) != 0);
  v2 = qword_140C65720 + 376LL * a1;
  v3 = 0;
  v4 = (unsigned int *)(v2 + 112);
  v5 = (unsigned int *)(v2 + 112);
  do
  {
    *v5 = v3;
    v5[1] = v3;
    v5[2] = v3;
    v5[3] = v3;
    v5 += 4;
    ++v3;
  }
  while ( v3 < 3 );
  LODWORD(result) = 0;
  v7 = (_DWORD *)(v2 + 160);
  do
  {
    *v7 = result;
    result = (unsigned int)(result + 1);
    ++v7;
  }
  while ( (unsigned int)result < 3 );
  v8 = 0;
  *(_DWORD *)(v2 + 172) = v1;
  v9 = (int *)(v2 + 124);
  do
  {
    if ( ((unsigned __int8)(1 << v8) & (unsigned __int8)byte_140C65818) != 0 )
    {
      LODWORD(result) = 0;
      v10 = v9 - 3;
      v11 = v4;
      do
      {
        *v11 = v8;
        v11 += 4;
        *v10 = result;
        result = (unsigned int)(result + 1);
        ++v10;
      }
      while ( (unsigned int)result <= 3 );
      *v9 = v1;
    }
    ++v8;
    ++v4;
    v9 += 4;
  }
  while ( v8 < 3 );
  return result;
}
