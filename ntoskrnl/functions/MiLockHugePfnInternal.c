__int64 __fastcall MiLockHugePfnInternal(__int64 a1, char a2)
{
  __int64 v3; // r14
  __int64 v4; // rcx
  char v5; // di
  unsigned __int64 v6; // rsi
  unsigned __int32 v7; // r8d
  bool v8; // zf
  signed __int32 v9; // eax
  int v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0;
  v3 = qword_140C67A78;
  v4 = ((a1 - qword_140C67A70) >> 3) & 0x3FFFFF;
  v5 = v4 & 0x1F;
  v6 = (unsigned __int64)(unsigned int)v4 >> 5;
  v7 = *(_DWORD *)(qword_140C67A78 + 4 * v6);
  while ( ((v7 >> v5) & 1) == 0 )
  {
LABEL_5:
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 4 * v6), v7 | (1 << v5), v7);
    v8 = v7 == v9;
    v7 = v9;
    if ( v8 )
      return 1LL;
  }
  while ( (a2 & 1) == 0 )
  {
    KeYieldProcessorEx(&v11);
    v7 = *(_DWORD *)(v3 + 4 * v6);
    if ( ((v7 >> v5) & 1) == 0 )
      goto LABEL_5;
  }
  return 0LL;
}
