__int64 __fastcall ObQueryTypeName(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 v5; // rdx
  int v6; // esi
  _WORD *v8; // rbx
  size_t v9; // r8
  char *v10; // rbx

  v5 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  v6 = *(unsigned __int16 *)(v5 + 16);
  *a4 = v6 + 18;
  if ( a3 < v6 + 18 )
    return 3221225476LL;
  v8 = (_WORD *)(a2 + (unsigned int)(v6 + 18) - 2);
  *v8 = 0;
  v9 = *(unsigned __int16 *)(v5 + 16);
  v10 = (char *)v8 - v9;
  memmove(v10, *(const void **)(v5 + 24), v9);
  *(_WORD *)a2 = v6;
  *(_WORD *)(a2 + 2) = v6 + 2;
  *(_QWORD *)(a2 + 8) = v10;
  return 0LL;
}
