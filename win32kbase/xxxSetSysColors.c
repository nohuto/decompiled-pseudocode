/*
 * XREFs of xxxSetSysColors @ 0x1C001A31C
 * Callers:
 *     NtUserSetSysColors @ 0x1C0017020 (NtUserSetSysColors.c)
 *     xxxODI_ColorInit @ 0x1C0018A90 (xxxODI_ColorInit.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C00C8EE0 (-ResetSystemColors@@YAXXZ.c)
 * Callees:
 *     IsCreateBitmapStripSupported @ 0x1C0017470 (IsCreateBitmapStripSupported.c)
 *     SetSysColor @ 0x1C001A584 (SetSysColor.c)
 *     GreGetDeviceCaps @ 0x1C003EAF0 (GreGetDeviceCaps.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxSetSysColors(__int64 a1, unsigned int a2, char *a3, char *a4, unsigned int a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rsi
  int v9; // eax
  unsigned int *v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  __int64 v20; // rcx

  v5 = a5;
  v6 = a2;
  if ( (a5 & 1) != 0
    && qword_1C02D7030
    && (int)qword_1C02D7030() >= 0
    && (!qword_1C02D7038 || !(unsigned int)qword_1C02D7038(16LL)) )
  {
    return 0LL;
  }
  if ( (int)GreGetDeviceCaps(*((HDC *)gpDispInfo + 7), 24) <= 16 )
    v5 = a5 | 8;
  v9 = 1146882;
  if ( (v5 & 4) != 0 )
  {
    if ( (_DWORD)v6 )
    {
      v10 = (unsigned int *)a4;
      v11 = v6;
      do
      {
        v12 = *(unsigned int *)((char *)v10 + a3 - a4);
        if ( (unsigned int)v12 <= 0x14 && _bittest(&v9, v12) )
        {
          SetSysColor(v12, *v10, v5);
          v9 = 1146882;
        }
        ++v10;
        --v11;
      }
      while ( v11 );
      goto LABEL_11;
    }
  }
  else if ( (_DWORD)v6 )
  {
LABEL_11:
    v13 = v6;
    do
    {
      v14 = *(unsigned int *)a3;
      a3 += 4;
      v15 = *(unsigned int *)a4;
      a4 += 4;
      if ( (unsigned int)v14 < 0x1F && ((v5 & 4) == 0 || (unsigned int)v14 > 0x14 || !_bittest(&v9, v14)) )
        SetSysColor(v14, v15, v5);
      v9 = 1146882;
      --v13;
    }
    while ( v13 );
  }
  if ( (v5 & 1) != 0 )
  {
    if ( qword_1C02D7040 && (int)qword_1C02D7040() >= 0 && qword_1C02D7048 )
      qword_1C02D7048();
    if ( (int)IsCreateBitmapStripSupported() >= 0 && qword_1C02D70E8 )
      qword_1C02D70E8();
    if ( qword_1C02D7050 && (int)qword_1C02D7050() >= 0 && qword_1C02D7058 )
      qword_1C02D7058(-1LL, 21LL, 0LL);
    if ( qword_1C02D7060 && (int)qword_1C02D7060() >= 0 )
    {
      v17 = *((_QWORD *)gptiCurrent + 57);
      if ( v17 )
        v18 = *(_QWORD *)(*(_QWORD *)(v17 + 8) + 24LL);
      else
        v18 = 0LL;
      if ( qword_1C02D7068 )
        qword_1C02D7068(v18, 1LL, 66693LL);
      if ( *((struct tagDESKTOP **)gptiCurrent + 57) != grpdeskRitInput )
      {
        v19 = (_QWORD *)*((_QWORD *)grpdeskRitInput + 1);
        if ( (*(_DWORD *)(*v19 + 64LL) & 1) == 0 )
        {
          v20 = v19[3];
          if ( v20 )
          {
            if ( qword_1C02D7068 )
              qword_1C02D7068(v20, 1LL, 66693LL);
          }
        }
      }
    }
  }
  return 1LL;
}
