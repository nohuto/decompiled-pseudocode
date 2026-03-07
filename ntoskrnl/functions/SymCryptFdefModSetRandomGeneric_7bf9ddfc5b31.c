void __fastcall __noreturn SymCryptFdefModSetRandomGeneric(int *a1, __int64 a2, char a3, _DWORD *a4, __int64 a5)
{
  int v5; // r14d
  _DWORD *v6; // r12
  unsigned int v11; // edi
  BOOL v12; // ebx
  unsigned int v13; // eax
  unsigned int v14; // ebx

  v5 = a1[1];
  v6 = a1 + 32;
  xHalTimerWatchdogStop();
  if ( (a3 & 1) != 0 )
    v11 = 0;
  else
    v11 = 2 - ((a3 & 2) != 0);
  v12 = (a3 & 4) == 0;
  if ( (unsigned int)a1[19] < 3 )
  {
    v12 = 0;
    v13 = *v6 - 1;
    if ( v11 < v13 )
      v13 = v11;
    v11 = v13;
  }
  SymCryptFdefRawSubUint32((__int64)v6, v12 + v11, a4, v5);
  v14 = (unsigned int)(a1[19] + 7) >> 3;
  SymCryptWipe(a2 + v14, (v5 << 6) - v14);
  SymCryptCallbackRandom(a2, v14);
}
