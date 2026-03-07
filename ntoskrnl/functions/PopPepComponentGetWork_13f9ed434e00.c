char __fastcall PopPepComponentGetWork(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r10d
  __int64 v5; // r11
  volatile signed __int32 *v8; // r14
  int v9; // ebp
  volatile signed __int32 *v10; // rsi
  unsigned int v11; // edx
  __int64 v12; // rax
  unsigned int *v13; // rcx
  int v14; // eax
  __int64 v15; // r11
  char started; // al
  int ReadyActivityType; // eax
  int v18; // eax
  __int64 v19; // r11
  unsigned int v20; // edx
  unsigned int v21; // ecx
  unsigned int *v22; // rax

  v3 = 0;
  v5 = a2;
  if ( !a3 )
    return v3;
  v8 = (volatile signed __int32 *)(a1 + 120);
  v9 = *(_DWORD *)(a1 + 120);
  if ( v9 )
  {
    ReadyActivityType = PopPepGetReadyActivityType(a1 + 72, 0LL, 0LL);
    if ( ReadyActivityType != 6 )
      goto LABEL_16;
  }
  if ( v5 )
  {
    v10 = (volatile signed __int32 *)(v5 + 104);
    if ( *(_DWORD *)(v5 + 104) > v3 )
    {
      v18 = PopPepGetReadyActivityType(v5 + 56, 1LL, 3LL);
      started = PopPepStartActivity(a1, v19, v19 + 56, v18, v10, a3);
      goto LABEL_11;
    }
  }
  if ( *(_BYTE *)(a1 + 125) == 1 )
  {
    v11 = *(_DWORD *)(a1 + 180);
    v12 = v3;
    if ( v11 )
    {
      v13 = (unsigned int *)(a1 + 296);
      while ( *v13 <= v3 )
      {
        v12 = (unsigned int)(v12 + 1);
        v13 += 52;
        if ( (unsigned int)v12 >= v11 )
          goto LABEL_13;
      }
      v14 = PopPepGetReadyActivityType(a1 + 208 * v12 + 248, 1LL, 3LL);
      started = PopPepStartActivity(a1, v15 + 192, v15 + 248, v14, (volatile signed __int32 *)(v15 + 296), a3);
      goto LABEL_11;
    }
  }
LABEL_13:
  if ( !v9 )
    return v3;
  v20 = *(_DWORD *)(a1 + 180);
  v21 = v3;
  if ( !v20 )
  {
LABEL_22:
    ReadyActivityType = PopPepGetReadyActivityType(a1 + 72, 4LL, 5LL);
LABEL_16:
    started = PopPepStartActivity(a1, 0LL, a1 + 72, ReadyActivityType, v8, a3);
LABEL_11:
    LOBYTE(v3) = started;
    return v3;
  }
  v22 = (unsigned int *)(a1 + 296);
  while ( *v22 <= v3 )
  {
    ++v21;
    v22 += 52;
    if ( v21 >= v20 )
      goto LABEL_22;
  }
  return v3;
}
