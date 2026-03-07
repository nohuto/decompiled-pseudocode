__int64 __fastcall UpdateRawKeyState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  unsigned int v5; // r14d
  int v6; // esi
  unsigned __int64 v7; // rbx
  unsigned int v8; // ebp
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax

  v4 = a1;
  v5 = (unsigned __int8)a2;
  v6 = a1 & 3;
  v7 = (unsigned __int64)(unsigned __int8)a1 >> 2;
  v8 = 2 * v6;
  if ( (_BYTE)a2 )
  {
    v9 = SGDGetUserSessionState(a1, a2, a3, a4);
    v10 = *(unsigned __int8 *)(v9 + v7 + 14056) & ~(1 << v8);
  }
  else
  {
    v13 = SGDGetUserSessionState(a1, a2, a3, a4);
    v16 = v8;
    LOBYTE(v17) = *(_BYTE *)(v7 + v13 + 14056);
    if ( ((unsigned __int8)v17 & (unsigned __int8)(1 << v8)) == 0 )
    {
      v18 = SGDGetUserSessionState(v8, v17, v14, v15);
      v16 = (unsigned int)(2 * v6 + 1);
      v17 = *(unsigned __int8 *)(v18 + v7 + 14056);
      LODWORD(v17) = v17 ^ (1 << (2 * v6 + 1));
      *(_BYTE *)(v18 + v7 + 14056) = v17;
    }
    v9 = SGDGetUserSessionState(v16, v17, v14, v15);
    v10 = *(unsigned __int8 *)(v9 + v7 + 14056) | (1 << v8);
  }
  *(_BYTE *)(v9 + v7 + 14056) = v10;
  if ( (unsigned __int8)(v4 - 16) <= 2u )
  {
    v11 = 4 >> (v4 - 16);
  }
  else
  {
    v11 = 8LL;
    if ( (unsigned __int8)(v4 - 91) > 1u )
      v11 = 0LL;
  }
  return ApiSetEditionUpdateModifiersForHotkey(v5, v11);
}
