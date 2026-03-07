_WORD *__fastcall XmIdivOp(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // rcx
  int v9; // r10d
  _DWORD *v11; // r11
  int v12; // eax
  __int64 v13; // [rsp+30h] [rbp+8h]

  v2 = *(int *)(a1 + 108);
  if ( !(_DWORD)v2 )
    longjmp((_JBTYPE *)(a1 + 160), 2);
  v3 = *(_DWORD *)(a1 + 120);
  if ( v3 )
  {
    v11 = (_DWORD *)(a1 + 32);
    if ( v3 == 1 )
    {
      v12 = (*(unsigned __int16 *)(a1 + 24) | (*(unsigned __int16 *)v11 << 16)) / *(__int16 *)(a1 + 108);
      if ( ((v12 ^ (2 * (__int16)v12)) & 0xFFFF0000) == 0 )
      {
        LODWORD(v5) = (unsigned __int16)v12;
        goto LABEL_6;
      }
    }
    else
    {
      HIDWORD(v13) = *v11;
      LODWORD(v13) = *(_DWORD *)(a1 + 24);
      v5 = v13 / v2;
      if ( HIDWORD(v5) == (int)v5 >> 31 )
        goto LABEL_6;
    }
LABEL_11:
    longjmp((_JBTYPE *)(a1 + 160), 3);
  }
  v4 = *(__int16 *)(a1 + 24) / *(char *)(a1 + 108);
  if ( ((v4 ^ (2 * (char)v4)) & 0xFFFFFF00) != 0 )
    goto LABEL_11;
  LODWORD(v5) = (unsigned __int8)v4;
LABEL_6:
  XmStoreResult(a1, v5);
  *(_QWORD *)(v6 + 88) = v7;
  return XmStoreResult(v8, v9);
}
