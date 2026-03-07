MAPPER *__fastcall MAPPER::MAPPER(
        MAPPER *this,
        struct XDCOBJ *a2,
        unsigned int *a3,
        struct _POINTL *a4,
        unsigned int *a5,
        const struct tagENUMLOGFONTEXDVW *a6,
        const unsigned __int16 *Src,
        unsigned int a8,
        int a9,
        char a10)
{
  const struct tagENUMLOGFONTEXDVW *v10; // rax
  int v11; // ebp
  unsigned int v14; // r15d
  const unsigned __int16 *v15; // rdx
  const unsigned __int16 *v16; // rdi
  unsigned __int16 i; // ax
  size_t v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // r9d
  __int64 v22; // rax
  char v23; // cl
  unsigned int *v24; // rax
  DC **v25; // r11
  int v26; // r9d
  DC *v27; // rdi
  __int64 v28; // rax
  char v29; // bl
  __int64 v30; // r10
  int v31; // r8d
  int v32; // eax
  __int16 *v33; // rcx
  __int16 v34; // ax
  int v35; // eax
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  struct _POINTL *v37; // rcx
  int x; // eax
  unsigned int v39; // eax
  struct _POINTL *v40; // rcx
  int y; // eax
  int v42; // edx
  int v43; // edx
  LONG v44; // eax
  int v45; // ecx
  unsigned int v46; // eax
  int v47; // edx
  bool v48; // zf
  struct _POINTL *v49; // rax
  int v50; // ecx
  int v51; // edx
  int v52; // ecx
  int v53; // ebp
  int v54; // ecx
  bool v55; // sf
  int v56; // ecx
  MAPPER *result; // rax
  unsigned __int16 v58; // cx
  unsigned __int16 *v59; // rdi
  unsigned __int16 v60; // ax
  unsigned __int16 v61; // cx
  unsigned __int16 v62; // r8
  int v63; // edx
  int v64; // eax
  __int64 v65; // rax
  int v66; // r8d
  struct _POINTL *v67; // [rsp+68h] [rbp+20h] BYREF

  v67 = a4;
  v10 = a6;
  v11 = 0;
  *((_DWORD *)this + 63) = 0;
  *((_QWORD *)this + 32) = 0LL;
  *(_QWORD *)this = a2;
  v14 = 0;
  v15 = Src;
  *((_QWORD *)this + 1) = v10;
  v16 = v15;
  *((_QWORD *)this + 2) = v15;
  *((_DWORD *)this + 22) = 0;
  for ( i = *v15; i; ++v16 )
  {
    if ( i == 95 && (unsigned __int16)(v16[1] - 48) <= 9u )
      break;
    i = v16[1];
  }
  v18 = 2LL * (unsigned int)(v16 - v15);
  memmove((char *)this + 24, v15, v18);
  *(_WORD *)((char *)this + v18 + 24) = 0;
  if ( *v16 == 95 )
  {
    v58 = v16[1];
    v59 = (unsigned __int16 *)(v16 + 1);
    if ( (unsigned __int16)(v58 - 48) <= 9u )
    {
      if ( v58 )
      {
        do
        {
          v60 = v58;
          do
          {
            if ( v60 >= 0x30u )
            {
              v61 = v60;
              if ( v60 <= 0x39u )
                break;
            }
            v61 = v59[1];
            ++v59;
            v60 = v61;
          }
          while ( v61 );
          if ( !v61 )
            break;
          v62 = v59[1];
          ++v59;
          v63 = v61 - 48;
          if ( v62 )
          {
            do
            {
              if ( (unsigned __int16)(v62 - 48) > 9u )
                break;
              ++v59;
              v64 = v62;
              v62 = *v59;
              v63 = v64 + 2 * (5 * v63 - 24);
            }
            while ( *v59 );
          }
          v65 = v14++;
          *((_DWORD *)this + v65 + 25) = v63;
          v58 = *v59;
        }
        while ( *v59 );
      }
    }
  }
  *((_DWORD *)this + 24) = v14;
  *((_DWORD *)this + 23) = 134248036;
  *((_QWORD *)this + 36) = 0LL;
  if ( v14 )
  {
    *((_DWORD *)this + 22) |= 1u;
  }
  else
  {
    v19 = *((_QWORD *)this + 1);
    v20 = *(unsigned int *)(v19 + 352);
    if ( (_DWORD)v20 )
      memmove((char *)this + 92, (const void *)(v19 + 348), 4 * v20 + 8);
    else
      *((_WORD *)this + 12) = 0;
  }
  v21 = 0x40000;
  *((_DWORD *)this + 70) = a9;
  v22 = *((_QWORD *)this + 1);
  *((_DWORD *)this + 45) = -2;
  v23 = *(_BYTE *)(v22 + 23);
  v24 = a5;
  *((_QWORD *)this + 29) = a5;
  *((_BYTE *)this + 284) = v23;
  *v24 = 0;
  *((_QWORD *)this + 28) = v67;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = -1;
  *((_QWORD *)this + 27) = a3;
  *a3 = 0;
  **((_DWORD **)this + 28) = 1;
  *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
  v25 = *(DC ***)this;
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)this + 48LL) + 40LL) & 0x80u) != 0 )
    v21 = 0;
  v26 = *((_DWORD *)this + 63) | v21;
  *((_DWORD *)this + 63) = v26;
  v27 = *v25;
  v28 = *((_QWORD *)*v25 + 122);
  if ( *(_DWORD *)(v28 + 208) == 1 && ((*(_DWORD *)(v28 + 340) & 2) != 0 || !(unsigned int)DC::bUseMetaPtoD(*v25)) )
  {
    v29 = a10;
    v26 |= 0x1000u;
    *((_DWORD *)this + 63) = v26;
    v27 = *v25;
  }
  else
  {
    v29 = -65;
  }
  v30 = *((_QWORD *)this + 1);
  v31 = v26;
  if ( *(_BYTE *)(v30 + 26) == 2 && !(unsigned int)DC::bDpiScaleTransform(v27) )
  {
    v31 |= 0x8000u;
    *((_DWORD *)this + 63) = v31;
  }
  v32 = *(_DWORD *)(v30 + 16);
  if ( v32 == 400 || v32 == 700 )
  {
    v31 |= 0x10000000u;
    *((_DWORD *)this + 63) = v31;
  }
  v33 = (__int16 *)*((_QWORD *)this + 2);
  v34 = *v33;
  if ( *v33 == 77 )
  {
    if ( v33[1] == 83
      && v33[2] == 32
      && v33[3] == 83
      && v33[4] == 72
      && v33[5] == 69
      && v33[6] == 76
      && v33[7] == 76
      && v33[8] == 32
      && v33[9] == 68
      && v33[10] == 76
      && v33[11] == 71
      && !v33[12] )
    {
      *((_DWORD *)this + 63) |= 0x8000000u;
    }
  }
  else
  {
    switch ( v34 )
    {
      case 'S':
        if ( v33[1] != 89 )
          break;
        if ( v33[2] == 83 && v33[3] == 84 && v33[4] == 69 && v33[5] == 77 && !v33[6] )
        {
          *((_DWORD *)this + 63) = v31 | 0x2000;
          if ( (*(_BYTE *)(v30 + 27) & 0xF) == 1 )
            *((_QWORD *)this + 2) = L"FIXEDSYS";
        }
        else if ( v33[1] == 89 && v33[2] == 77 && v33[3] == 66 && v33[4] == 79 && v33[5] == 76 )
        {
          v66 = v31 | 0x4000000;
LABEL_107:
          *((_DWORD *)this + 63) = v66;
        }
        break;
      case 'T':
        if ( v33[1] == 77 && v33[2] == 83 && v33[3] == 32 && v33[4] == 82 && v33[5] == 77 && v33[6] == 78 && !v33[7] )
        {
          v66 = v31 | 0x800000;
          goto LABEL_107;
        }
        break;
      case '@':
        v66 = v31 | 0x2000000;
        goto LABEL_107;
      default:
        break;
    }
  }
  *((_DWORD *)this + 41) = *(_DWORD *)v30;
  v35 = *(_DWORD *)(v30 + 4);
  if ( v35 < 0 )
    v35 = -v35;
  *((_DWORD *)this + 42) = v35;
  v67 = (struct _POINTL *)*((_QWORD *)*v25 + 6);
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v67);
  v37 = v67;
  if ( (v67[5].x & 1) != 0 && (CurrentThreadDpiAwarenessContext & 0xF) - 1 > 1 )
    x = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
  else
    x = v67[268].x;
  *((_DWORD *)this + 61) = x;
  v39 = W32GetCurrentThreadDpiAwarenessContext(v37);
  v40 = v67;
  if ( (v67[5].x & 1) != 0 && (v39 & 0xF) - 1 > 1 )
    y = (v39 >> 8) & 0x1FF;
  else
    y = v67[268].y;
  *((_DWORD *)this + 62) = y;
  v42 = 0;
  if ( (v40[269].x & 0x2000) != 0 )
    v42 = 256;
  v43 = *((_DWORD *)this + 63) | v42;
  *((_DWORD *)this + 63) = v43;
  v44 = v40[269].x;
  v45 = 0;
  if ( (v44 & 8) != 0 )
    v45 = 1024;
  *((_DWORD *)this + 63) = v43 | v45;
  v46 = PDEVOBJ::cFonts((PDEVOBJ *)&v67);
  v47 = 0;
  v48 = v46 == 0;
  v49 = v67;
  if ( !v48 )
    v47 = 512;
  v50 = 0;
  v51 = *((_DWORD *)this + 63) | v47;
  *((_DWORD *)this + 63) = v51;
  if ( !v49[263].y )
    v50 = 0x10000;
  v52 = v51 | v50;
  *((_DWORD *)this + 63) = v52;
  if ( v49[263].y == 4 )
    v11 = 0x20000000;
  v53 = v52 | v11;
  v54 = *((_DWORD *)this + 41);
  *((_DWORD *)this + 63) = v53;
  v55 = v54 < 0;
  if ( !v54 )
  {
    v54 = v49[224].y;
    v53 |= 8u;
    *((_DWORD *)this + 63) = v53;
    v55 = v54 < 0;
    *((_DWORD *)this + 41) = v54;
  }
  if ( v55 )
  {
    v53 |= 2u;
    *((_DWORD *)this + 63) = v53;
    *((_DWORD *)this + 41) = -v54;
  }
  v56 = *(_DWORD *)(*((_QWORD *)this + 1) + 16LL);
  *((_DWORD *)this + 43) = v56;
  if ( !v56 )
  {
    *((_DWORD *)this + 43) = 400;
    *((_DWORD *)this + 63) = v53 | 0x200000;
  }
  if ( !**((_WORD **)this + 2) )
    MAPPER::bGetFaceName(this);
  result = this;
  *((_DWORD *)this + 63) |= v29 & 0x40 | 1;
  return result;
}
