__int16 __fastcall GetAsyncKeyState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // di
  __int16 v5; // r15
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // r14
  unsigned __int8 v10; // bp
  unsigned __int64 v11; // rdi
  unsigned int v12; // ebp
  __int64 v13; // rcx
  __int64 v14; // rdx
  char v15; // si
  __int16 result; // ax
  __int64 v17; // rax

  v4 = a1;
  if ( (unsigned int)a1 >= 0x100 )
  {
    UserSetLastError(87);
    return 0;
  }
  else
  {
    v5 = 0;
    v6 = SGDGetUserSessionState(a1, a2, a3, a4);
    v9 = v4;
    v10 = v4;
    v11 = (unsigned __int64)v4 >> 3;
    v12 = v10 & 7;
    v13 = v12;
    LOBYTE(v14) = *(_BYTE *)(v11 + v6 + 14120);
    if ( ((unsigned __int8)v14 & (unsigned __int8)(1 << v12)) != 0 )
    {
      v17 = SGDGetUserSessionState(v12, v14, v7, v8);
      v5 = 1;
      v13 = *(unsigned __int8 *)(v17 + v11 + 14120);
      LODWORD(v13) = v13 & ~(1 << v12);
      *(_BYTE *)(v17 + v11 + 14120) = v13;
    }
    v15 = *(_BYTE *)((v9 >> 2) + SGDGetUserSessionState(v13, v14, v7, v8) + 13992) & (1 << (2 * (v9 & 3)));
    result = v5 | 0x8000;
    if ( !v15 )
      return v5;
  }
  return result;
}
