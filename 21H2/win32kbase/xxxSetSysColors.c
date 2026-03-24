/*
 * XREFs of xxxSetSysColors @ 0x1C001F16C
 * Callers:
 *     NtUserSetSysColors @ 0x1C000B8B0 (NtUserSetSysColors.c)
 *     xxxODI_ColorInit @ 0x1C000EC60 (xxxODI_ColorInit.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C00A9A18 (-ResetSystemColors@@YAXXZ.c)
 * Callees:
 *     SetSysColor @ 0x1C001F3E0 (SetSysColor.c)
 *     GreGetDeviceCaps @ 0x1C0091480 (GreGetDeviceCaps.c)
 *     IsCreateBitmapStripSupported @ 0x1C00B6404 (IsCreateBitmapStripSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxSetSysColors(__int64 a1, unsigned int a2, char *a3, char *a4, unsigned int a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rbp
  char *v8; // r14
  int v9; // edi
  int v10; // eax
  unsigned int *v11; // rsi
  signed __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  __int64 v26; // rcx

  v5 = a5;
  v6 = a2;
  v8 = a3;
  v9 = -1073741637;
  if ( (a5 & 1) != 0 )
  {
    v19 = qword_1C0257AA8 ? qword_1C0257AA8() : -1073741637;
    if ( v19 >= 0 )
    {
      v20 = (int)qword_1C0257AB0;
      if ( qword_1C0257AB0 )
        v20 = qword_1C0257AB0(16LL);
      if ( !v20 )
        return 0LL;
    }
  }
  if ( (int)GreGetDeviceCaps(*(HDC *)(gpDispInfo + 56), 24) <= 16 )
    v5 = a5 | 8;
  v10 = 1146882;
  if ( (v5 & 4) == 0 )
    goto LABEL_12;
  if ( (_DWORD)v6 )
  {
    v11 = (unsigned int *)a4;
    v12 = v8 - a4;
    v13 = v6;
    do
    {
      v14 = *(unsigned int *)((char *)v11 + v12);
      if ( (unsigned int)v14 <= 0x14 && _bittest(&v10, v14) )
      {
        SetSysColor(v14, *v11, v5);
        v10 = 1146882;
      }
      ++v11;
      --v13;
    }
    while ( v13 );
    v8 = a3;
LABEL_12:
    if ( (_DWORD)v6 )
    {
      v15 = v6;
      do
      {
        v16 = *(unsigned int *)v8;
        v8 += 4;
        v17 = *(unsigned int *)a4;
        a4 += 4;
        if ( (unsigned int)v16 < 0x1F && ((v5 & 4) == 0 || (unsigned int)v16 > 0x14 || !_bittest(&v10, v16)) )
          SetSysColor(v16, v17, v5);
        v10 = 1146882;
        --v15;
      }
      while ( v15 );
    }
  }
  if ( (v5 & 1) != 0 )
  {
    if ( qword_1C0257AB8 )
      v21 = qword_1C0257AB8();
    else
      v21 = -1073741637;
    if ( v21 >= 0 && qword_1C0257AC0 )
      qword_1C0257AC0();
    if ( (int)IsCreateBitmapStripSupported() >= 0 && qword_1C0257B60 )
      qword_1C0257B60();
    if ( qword_1C0257AC8 )
      v22 = qword_1C0257AC8();
    else
      v22 = -1073741637;
    if ( v22 >= 0 && qword_1C0257AD0 )
      qword_1C0257AD0(-1LL, 21LL, 0LL);
    if ( qword_1C0257AD8 )
      v9 = qword_1C0257AD8();
    if ( v9 >= 0 )
    {
      v23 = *((_QWORD *)gptiCurrent + 57);
      if ( v23 )
        v24 = *(_QWORD *)(*(_QWORD *)(v23 + 8) + 24LL);
      else
        v24 = 0LL;
      if ( qword_1C0257AE0 )
        qword_1C0257AE0(v24, 1LL, 66693LL);
      if ( *((struct tagDESKTOP **)gptiCurrent + 57) != grpdeskRitInput )
      {
        v25 = (_QWORD *)*((_QWORD *)grpdeskRitInput + 1);
        if ( (*(_DWORD *)(*v25 + 64LL) & 1) == 0 )
        {
          v26 = v25[3];
          if ( v26 )
          {
            if ( qword_1C0257AE0 )
              qword_1C0257AE0(v26, 1LL, 66693LL);
          }
        }
      }
    }
  }
  return 1LL;
}
