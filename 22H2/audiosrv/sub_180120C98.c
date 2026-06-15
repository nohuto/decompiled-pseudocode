/*
 * XREFs of sub_180120C98 @ 0x180120C98
 * Callers:
 *     sub_180121318 @ 0x180121318 (sub_180121318.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     sub_1801214DC @ 0x1801214DC (sub_1801214DC.c)
 */

__int64 __fastcall sub_180120C98(const void **a1, _BYTE *a2, __int64 a3)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  _QWORD *v13; // rdi
  __int64 v14; // r15
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  char *v17; // rcx
  size_t v18; // r8

  v6 = (a2 - (_BYTE *)*a1) / 20;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) / 20;
  if ( v7 == 0xCCCCCCCCCCCCCCCLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) / 20;
  v10 = v9 >> 1;
  if ( v9 <= 0xCCCCCCCCCCCCCCCLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 20 * v11;
  if ( v11 > 0xCCCCCCCCCCCCCCCLL )
    v12 = -1LL;
  v13 = sub_180008EAC(v12);
  v14 = 5 * v6;
  *(_OWORD *)((char *)v13 + 4 * v14) = *(_OWORD *)a3;
  *((_DWORD *)v13 + v14 + 4) = *(_DWORD *)(a3 + 16);
  v15 = a1[1];
  v16 = *a1;
  v17 = (char *)v13;
  if ( a2 == v15 )
  {
    v18 = v15 - v16;
  }
  else
  {
    memmove(v13, v16, a2 - (_BYTE *)*a1);
    v17 = (char *)v13 + 4 * v14 + 20;
    v18 = (_BYTE *)a1[1] - a2;
    v16 = a2;
  }
  memmove(v17, v16, v18);
  sub_1801214DC(a1, v13, v8, v11);
  return (__int64)*a1 + 4 * v14;
}
