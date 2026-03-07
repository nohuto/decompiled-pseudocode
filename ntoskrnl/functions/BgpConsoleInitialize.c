__int64 __fastcall BgpConsoleInitialize(unsigned int a1, unsigned int a2, unsigned int a3)
{
  _DWORD *Memory; // rax
  _DWORD *Resolution; // rax
  __int64 v8; // r9
  int FontHandle; // ebx
  __int64 v10; // rcx
  _DWORD *v11; // rbx
  __int64 Context; // rax
  unsigned int *v13; // r8
  unsigned int v14; // edx
  unsigned int v15; // r10d
  unsigned int v16; // r9d
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int i; // r11d
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v23; // [rsp+30h] [rbp-40h] BYREF
  wchar_t *Str2; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v25[4]; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v26[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 *v27; // [rsp+58h] [rbp-18h] BYREF
  int v28; // [rsp+60h] [rbp-10h]
  int v29; // [rsp+64h] [rbp-Ch]

  v27 = 0LL;
  v28 = 0;
  v23 = 0LL;
  Str2 = 0LL;
  BgpFwAcquireLock();
  Memory = (_DWORD *)BgpFwAllocateMemory(0x5E10uLL);
  qword_140CF7760 = (__int64)Memory;
  if ( !Memory )
  {
    FontHandle = -1073741801;
    goto LABEL_12;
  }
  *Memory = 80;
  Memory[1] = 25;
  Memory[2] |= (unsigned __int16)a1;
  Memory[3] = a2;
  Memory[4] = a3;
  Resolution = BgpGetResolution(v25);
  *(_QWORD *)(v8 + 20) = *(_QWORD *)Resolution;
  LODWORD(Resolution) = Resolution[2];
  *(_QWORD *)(v8 + 40) = 0LL;
  *(_DWORD *)(v8 + 56) = 0;
  *(_DWORD *)(v8 + 28) = (_DWORD)Resolution;
  *(_DWORD *)(v8 + 32) = 15;
  *(_DWORD *)(v8 + 48) = 12;
  *(_DWORD *)(v8 + 52) = 22;
  memset((void *)(v8 + 80), 0, 0x5DC0uLL);
  v26[0] = a3;
  v26[1] = a2;
  v29 = ((unsigned __int8)~(_BYTE)a1 >> 1) & 1;
  BgpConsoleGetFontName((unsigned int)dword_140C0E518, &Str2);
  FontHandle = BgpFoGetFontHandle(Str2, &v27);
  if ( FontHandle < 0
    || (FontHandle = BgpConsoleSetPointSize(
                       *(_DWORD *)(qword_140CF7760 + 4),
                       *(_DWORD *)qword_140CF7760,
                       *(_DWORD *)(qword_140CF7760 + 24),
                       *(_DWORD *)(qword_140CF7760 + 20),
                       (__int64)v26,
                       (__int64)&v23),
        FontHandle < 0) )
  {
    v13 = (unsigned int *)qword_140CF7760;
  }
  else
  {
    v10 = qword_140CF7760;
    *(_DWORD *)(qword_140CF7760 + 32) = v28;
    v11 = (_DWORD *)(v10 + 48);
    *(_QWORD *)(v10 + 48) = v23;
    Context = BgpDisplayCharacterGetContext((__int64)v26, (int *)(v10 + 48), ~(unsigned __int8)(a1 >> 1) & 2 | 1u);
    v13 = (unsigned int *)qword_140CF7760;
    *(_QWORD *)(qword_140CF7760 + 40) = Context;
    if ( Context )
    {
      v14 = *v13;
      v15 = 0;
      v16 = v13[1];
      v13[15] = (v13[5] - *v11 * *v13) >> 1;
      v17 = v11[1] * v16;
      v18 = v13[6];
      v13[19] = 0;
      v13[17] = 0;
      v13[18] = 0;
      v13[16] = (v18 - v17) >> 1;
      if ( v14 )
      {
        do
        {
          for ( i = 0; i < v16; v16 = v13[1] )
          {
            v20 = 25LL * v15 + i++;
            v21 = 3 * v20;
            LOWORD(v13[v21 + 22]) = 32;
            v13[3 * v20 + 21] = a3;
            v13[v21 + 20] = a2;
          }
          ++v15;
        }
        while ( v15 < *v13 );
      }
      if ( (a1 & 1) != 0 )
        BgpConsoleClearScreenEx();
      FontHandle = 0;
      goto LABEL_12;
    }
    FontHandle = -1073741823;
  }
  if ( v13 )
  {
    BgpFwFreeMemory((__int64)v13);
    qword_140CF7760 = 0LL;
  }
LABEL_12:
  BgpFwReleaseLock();
  return (unsigned int)FontHandle;
}
