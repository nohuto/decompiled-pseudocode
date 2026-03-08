/*
 * XREFs of SymCryptFdefModDivPow2 @ 0x1403FE4B8
 * Callers:
 *     SymCryptModDivPow2 @ 0x1403F3A90 (SymCryptModDivPow2.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

void __fastcall SymCryptFdefModDivPow2(__int64 a1, unsigned int *a2, unsigned int a3, unsigned int *a4)
{
  int v4; // ebx
  char *v5; // r13
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v11; // r14d
  int v12; // r12d
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned int *v15; // r10
  __int64 v16; // r15
  unsigned int *v17; // r11
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rax

  v4 = *(_DWORD *)(a1 + 4);
  v5 = (char *)(a1 + 128);
  xHalTimerWatchdogStop();
  if ( a3 <= 1 || a2 == a4 )
  {
    if ( !a3 )
      return;
  }
  else
  {
    memmove(a4, a2, (unsigned int)(v4 << 6));
    a2 = a4;
  }
  v9 = 16 * v4;
  do
  {
    v10 = *a2;
    v11 = 1;
    v12 = -(*a2 & 1);
    v13 = (unsigned int)v10 + (v12 & *(_DWORD *)v5);
    v14 = (v10 + (unsigned __int64)((unsigned int)v12 & *(_DWORD *)v5)) >> 32;
    if ( v9 > 1 )
    {
      v15 = a2 + 1;
      v16 = v9 - 1;
      v17 = a4;
      v11 = v9;
      do
      {
        v18 = *v15 + v14;
        v19 = v12 & *(unsigned int *)((char *)v15++ + v5 - (char *)a2);
        v20 = v19 + v18;
        v14 = (v19 + v18) >> 32;
        v21 = (v20 << 32) | v13;
        v13 = HIDWORD(v21);
        *v17++ = v21 >> 1;
        --v16;
      }
      while ( v16 );
    }
    a4[v11 - 1] = (v13 >> 1) | ((_DWORD)v14 << 31);
    --a3;
  }
  while ( a3 );
}
