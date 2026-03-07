unsigned __int64 __fastcall UpdateKeyStateForMessage(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned __int64 result; // rax
  char v11; // cl
  int v12; // eax
  int v13; // eax
  char v14; // [rsp+48h] [rbp+18h] BYREF
  int v15; // [rsp+50h] [rbp+20h] BYREF
  int v16; // [rsp+58h] [rbp+28h] BYREF

  v4 = *(_DWORD *)(a2 + 24);
  LOBYTE(a4) = 0;
  v14 = 0;
  LOBYTE(a3) = 1;
  if ( v4 <= 0x202 )
  {
    if ( v4 == 514 )
    {
      LOBYTE(a3) = 0;
LABEL_17:
      v11 = 1;
LABEL_20:
      v14 = v11;
      goto LABEL_14;
    }
    v6 = v4 - 255;
    if ( !v6 )
    {
      v15 = 0;
      v16 = 0;
      result = (unsigned __int64)ApiSetEditionGetKeyStateUpdateParamsForRawInput(
                                   a1,
                                   a2,
                                   (__int64)&v14,
                                   (__int64)&v15,
                                   (__int64)&v16);
      v11 = v14;
      LOBYTE(a3) = v15 != 0;
      LOBYTE(a4) = v16 != 0;
      goto LABEL_13;
    }
    v7 = v6 - 1;
    if ( !v7 )
      goto LABEL_11;
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 3;
      if ( !v9 )
        goto LABEL_11;
      result = v9 - 1;
      if ( (_DWORD)result )
      {
        if ( (_DWORD)result != 252 )
          return result;
        goto LABEL_17;
      }
    }
    LOBYTE(a3) = 0;
LABEL_11:
    v11 = *(_BYTE *)(a2 + 32);
    result = *(_QWORD *)(a2 + 40);
    v14 = v11;
    a4 = result >> 24;
    LOBYTE(a4) = BYTE3(result) & 1;
    if ( v11 == 16 )
    {
      result &= ~0x1000000uLL;
      *(_QWORD *)(a2 + 40) = result;
    }
LABEL_13:
    if ( v11 )
    {
LABEL_14:
      LOBYTE(a2) = v11;
      return anonymous_namespace_::UpdateKeyState(*(_QWORD *)(a1 + 432), a2, a3, a4);
    }
    return result;
  }
  result = v4 - 516;
  if ( !(_DWORD)result )
  {
LABEL_33:
    v11 = 2;
    v14 = 2;
    goto LABEL_13;
  }
  result = (unsigned int)(result - 1);
  if ( !(_DWORD)result )
  {
    LOBYTE(a3) = 0;
    goto LABEL_33;
  }
  v12 = result - 2;
  if ( !v12 )
    goto LABEL_19;
  v13 = v12 - 1;
  if ( !v13 )
  {
    LOBYTE(a3) = 0;
LABEL_19:
    v11 = 4;
    goto LABEL_20;
  }
  result = (unsigned int)(v13 - 3);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result != 1 )
      return result;
    LOBYTE(a3) = 0;
  }
  if ( *(_WORD *)(a2 + 34) == 1 )
  {
    v11 = 5;
    goto LABEL_20;
  }
  if ( *(_WORD *)(a2 + 34) == 2 )
  {
    v11 = 6;
    goto LABEL_20;
  }
  return result;
}
