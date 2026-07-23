/*
 * XREFs of PopPepComponentGetWork @ 0x140283198
 * Callers:
 *     PopPepProcessEvent @ 0x140282F54 (PopPepProcessEvent.c)
 * Callees:
 *     PopPepStartActivity @ 0x140282EF8 (PopPepStartActivity.c)
 *     PopPepGetReadyActivityType @ 0x140283898 (PopPepGetReadyActivityType.c)
 */

char __fastcall PopPepComponentGetWork(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r10d
  __int64 v5; // r11
  volatile signed __int32 *v8; // r14
  int v9; // ebp
  unsigned int v10; // edx
  __int64 v11; // rax
  unsigned int *v12; // rcx
  int v13; // eax
  __int64 v14; // r11
  char started; // al
  int ReadyActivityType; // eax
  volatile signed __int32 *v17; // rsi
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
      goto LABEL_12;
  }
  if ( v5 )
  {
    v17 = (volatile signed __int32 *)(v5 + 104);
    if ( *(_DWORD *)(v5 + 104) > v3 )
    {
      v18 = PopPepGetReadyActivityType(v5 + 56, 1LL, 3LL);
      started = PopPepStartActivity(a1, v19, v19 + 56, v18, v17, a3);
      goto LABEL_10;
    }
  }
  if ( *(_BYTE *)(a1 + 125) == 1 )
  {
    v10 = *(_DWORD *)(a1 + 180);
    v11 = v3;
    if ( v10 )
    {
      v12 = (unsigned int *)(a1 + 288);
      while ( *v12 <= v3 )
      {
        v11 = (unsigned int)(v11 + 1);
        v12 += 50;
        if ( (unsigned int)v11 >= v10 )
          goto LABEL_16;
      }
      v13 = PopPepGetReadyActivityType(a1 + 200 * v11 + 240, 1LL, 3LL);
      started = PopPepStartActivity(a1, v14 + 184, v14 + 240, v13, (volatile signed __int32 *)(v14 + 288), a3);
      goto LABEL_10;
    }
  }
LABEL_16:
  if ( !v9 )
    return v3;
  v20 = *(_DWORD *)(a1 + 180);
  v21 = v3;
  if ( !v20 )
  {
LABEL_21:
    ReadyActivityType = PopPepGetReadyActivityType(a1 + 72, 4LL, 5LL);
LABEL_12:
    started = PopPepStartActivity(a1, 0LL, a1 + 72, ReadyActivityType, v8, a3);
LABEL_10:
    LOBYTE(v3) = started;
    return v3;
  }
  v22 = (unsigned int *)(a1 + 288);
  while ( *v22 <= v3 )
  {
    ++v21;
    v22 += 50;
    if ( v21 >= v20 )
      goto LABEL_21;
  }
  return v3;
}
