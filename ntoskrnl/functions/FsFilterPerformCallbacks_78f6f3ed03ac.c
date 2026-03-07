__int64 __fastcall FsFilterPerformCallbacks(__int64 a1, char a2, char a3, _DWORD *a4)
{
  __int64 v4; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int16 v11; // r11
  __int64 (__fastcall *v12)(__int64, _QWORD *); // r8
  __int64 v13; // rcx
  unsigned __int16 v14; // ax
  _QWORD *v15; // rsi
  _QWORD *v16; // rdx
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 (__fastcall *v20)(__int64, _QWORD *); // [rsp+88h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v20 = 0LL;
  v19 = 0LL;
  *a4 = 2;
  if ( !v4 )
    return 0LL;
  while ( 1 )
  {
    v9 = *(unsigned __int8 *)(a1 + 4);
    v10 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 48LL);
    *(_QWORD *)(a1 + 8) = v4;
    FsFilterGetCallbacks(v9, v4, &v20, &v19);
    v12 = v20;
    v13 = v19;
    if ( !v20 )
      break;
    if ( v19 )
      goto LABEL_4;
    v15 = 0LL;
LABEL_7:
    if ( !v12 )
      goto LABEL_13;
    if ( v15 )
      v16 = v15 + 2;
    else
      v16 = 0LL;
    result = v12(a1, v16);
    if ( (int)result < 0 )
    {
      if ( !a2 )
      {
        if ( !v10 )
          goto LABEL_36;
        goto LABEL_12;
      }
      if ( !v10 )
      {
LABEL_36:
        if ( !a3 )
          KeBugCheckEx(0x22u, (int)result, 0LL, 0x3B8uLL, 0LL);
        *a4 |= 1u;
      }
      if ( !v15 )
        return result;
LABEL_40:
      --*(_WORD *)(a1 + 74);
      return result;
    }
    if ( (_DWORD)result )
    {
      if ( !v15 )
        return result;
      goto LABEL_40;
    }
LABEL_12:
    v11 = -1;
LABEL_13:
    v18 = *(_QWORD *)(a1 + 8);
    if ( v4 == v18 )
    {
      if ( !v10 )
      {
        if ( v15 )
          *(_WORD *)(a1 + 74) += v11;
      }
      v4 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 48LL);
    }
    else
    {
      *(_DWORD *)(a1 + 64) |= 4u;
      v4 = v18;
    }
LABEL_16:
    if ( !v4 )
      return 0LL;
  }
  if ( !v19 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 48LL);
    if ( !v10 )
      *a4 &= ~2u;
    goto LABEL_16;
  }
LABEL_4:
  v14 = *(_WORD *)(a1 + 74);
  if ( v14 < *(_WORD *)(a1 + 72) )
  {
    v15 = (_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL * *(unsigned __int16 *)(a1 + 74));
    *(_WORD *)(a1 + 74) = v14 + 1;
    if ( v15 )
    {
      *v15 = v4;
      v15[1] = *(_QWORD *)(a1 + 16);
      v15[2] = 0LL;
      v15[3] = v13;
      goto LABEL_7;
    }
  }
  if ( !a2 )
    KeBugCheckEx(0x22u, 0LL, 0LL, 0LL, 0LL);
  return 3221225626LL;
}
