/*
 * XREFs of BgpConsoleClearScreenEx @ 0x140AEE428
 * Callers:
 *     BgpConsoleInitialize @ 0x140AEB6E0 (BgpConsoleInitialize.c)
 *     BgpConsoleClearScreen @ 0x140AEE3F0 (BgpConsoleClearScreen.c)
 * Callees:
 *     BgpClearScreen @ 0x14066F510 (BgpClearScreen.c)
 */

__int64 BgpConsoleClearScreenEx()
{
  __int64 v0; // rax
  unsigned int v1; // ecx
  int v2; // r8d
  _DWORD *v3; // r9
  __int64 v4; // r10
  unsigned int v5; // eax
  __int64 v6; // r11
  unsigned int i; // ebx
  __int64 v8; // rcx
  __int64 v9; // rdx

  v0 = qword_140CF7760;
  v1 = *(_DWORD *)(qword_140CF7760 + 16);
  *(_DWORD *)(qword_140CF7760 + 68) = 0;
  *(_DWORD *)(v0 + 72) = 0;
  v2 = BgpClearScreen(v1);
  if ( v2 >= 0 )
  {
    v3 = (_DWORD *)qword_140CF7760;
    v4 = 0LL;
    v5 = *(_DWORD *)(qword_140CF7760 + 4);
    v6 = 80LL;
    do
    {
      for ( i = 0; i < v5; v5 = v3[1] )
      {
        v8 = v4 + i++;
        v9 = 3 * v8;
        LOWORD(v3[v9 + 22]) = 32;
        v3[3 * v8 + 21] = v3[4];
        v3[v9 + 20] = v3[3];
      }
      v4 += 25LL;
      --v6;
    }
    while ( v6 );
  }
  return (unsigned int)v2;
}
