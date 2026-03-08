/*
 * XREFs of SepTokenFromAccessInformation @ 0x1402065D0
 * Callers:
 *     SeQuerySecurityAttributesTokenAccessInformation @ 0x140205220 (SeQuerySecurityAttributesTokenAccessInformation.c)
 *     SeAccessCheckFromState @ 0x140206940 (SeAccessCheckFromState.c)
 *     SeTokenFromAccessInformation @ 0x1402FCD70 (SeTokenFromAccessInformation.c)
 * Callees:
 *     RtlSidHashInitialize @ 0x140310020 (RtlSidHashInitialize.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

unsigned int *__fastcall SepTokenFromAccessInformation(unsigned int **a1, __int64 a2)
{
  int v4; // eax
  unsigned int *v5; // rcx
  unsigned int v6; // edi
  unsigned int v7; // eax
  _DWORD *v8; // rcx
  __int64 v9; // r8
  int v10; // edx
  unsigned int *v11; // rax
  unsigned int *v12; // rax
  int v13; // eax
  unsigned int v14; // edx
  _DWORD *v15; // rcx
  unsigned int *result; // rax

  memset((void *)a2, 0, 0x498uLL);
  *(_QWORD *)(a2 + 24) = a1[3];
  v4 = *((_DWORD *)a1 + 8);
  *(_DWORD *)(a2 + 192) = v4;
  if ( v4 == 2 )
    *(_DWORD *)(a2 + 196) = *((_DWORD *)a1 + 9);
  v5 = a1[2];
  v6 = 0;
  v7 = *v5;
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a2 + 72) = 0LL;
  *(_QWORD *)(a2 + 80) = 0LL;
  if ( v7 )
  {
    v8 = v5 + 3;
    v9 = v7;
    do
    {
      v10 = *(v8 - 2);
      if ( (unsigned int)(v10 - 2) <= 0x22 )
      {
        *(_QWORD *)(a2 + 64) |= 1LL << v10;
        if ( (*v8 & 2) != 0 )
          *(_QWORD *)(a2 + 72) |= 1LL << v10;
        if ( (*v8 & 1) != 0 )
          *(_QWORD *)(a2 + 80) |= 1LL << v10;
      }
      v8 += 3;
      --v9;
    }
    while ( v9 );
  }
  *(_DWORD *)(a2 + 124) = **a1;
  *(_QWORD *)(a2 + 152) = *((_QWORD *)*a1 + 1);
  RtlSidHashInitialize(*((_QWORD *)*a1 + 1), **a1, a2 + 232);
  *(_DWORD *)(a2 + 128) = *a1[1];
  *(_QWORD *)(a2 + 160) = *((_QWORD *)a1[1] + 1);
  RtlSidHashInitialize(*((_QWORD *)a1[1] + 1), *a1[1], a2 + 504);
  *(_DWORD *)(a2 + 800) = *a1[8];
  *(_QWORD *)(a2 + 792) = *((_QWORD *)a1[8] + 1);
  RtlSidHashInitialize(*((_QWORD *)a1[8] + 1), *a1[8], a2 + 808);
  v11 = a1[7];
  if ( v11 )
    *(_QWORD *)(a2 + 784) = v11;
  v12 = a1[9];
  if ( v12 )
    *(_QWORD *)(a2 + 1104) = v12;
  v13 = *((_DWORD *)a1 + 11);
  v14 = *(_DWORD *)(a2 + 124);
  *(_DWORD *)(a2 + 208) = -1;
  *(_DWORD *)(a2 + 200) = v13;
  *(_DWORD *)(a2 + 212) = *((_DWORD *)a1 + 10);
  if ( v14 )
  {
    v15 = (_DWORD *)(*(_QWORD *)(a2 + 152) + 8LL);
    do
    {
      if ( (*v15 & 0x40) != 0 && *(_DWORD *)(a2 + 208) == -1 )
        *(_DWORD *)(a2 + 208) = v6;
      ++v6;
      v15 += 4;
    }
    while ( v6 < v14 );
  }
  result = a1[10];
  *(_QWORD *)(a2 + 776) = result;
  return result;
}
