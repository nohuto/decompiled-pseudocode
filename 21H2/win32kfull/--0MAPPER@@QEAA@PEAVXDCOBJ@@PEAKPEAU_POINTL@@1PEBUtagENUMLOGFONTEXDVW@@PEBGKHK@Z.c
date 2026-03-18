/*
 * XREFs of ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C001E390
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C001D14C (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bUseMetaPtoD@DC@@QEBAHXZ @ 0x1C00162C4 (-bUseMetaPtoD@DC@@QEBAHXZ.c)
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C001EDA4 (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

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
  __int64 v21; // rax
  char v22; // cl
  unsigned int *v23; // rax
  DC **v24; // r10
  int v25; // r9d
  __int64 v26; // rax
  char v27; // bl
  __int64 v28; // rcx
  int v29; // edx
  int v30; // eax
  __int16 *v31; // rdx
  __int16 v32; // ax
  int v33; // eax
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  struct _POINTL *v35; // rcx
  __int64 x; // rdx
  int v37; // eax
  unsigned int v38; // eax
  struct _POINTL *v39; // rcx
  int y; // eax
  int v41; // edx
  LONG v42; // eax
  int v43; // ecx
  unsigned int v44; // eax
  int v45; // ecx
  bool v46; // zf
  struct _POINTL *v47; // rax
  int v48; // edx
  int v49; // ecx
  int v50; // ecx
  int v51; // ebp
  int v52; // ecx
  bool v53; // sf
  int v54; // ecx
  MAPPER *result; // rax
  int v56; // r9d
  unsigned __int16 v57; // cx
  unsigned __int16 *v58; // rdi
  unsigned __int16 v59; // ax
  unsigned __int16 v60; // cx
  unsigned __int16 v61; // r8
  int v62; // edx
  int v63; // eax
  __int64 v64; // rax
  struct _POINTL *v65; // [rsp+68h] [rbp+20h] BYREF

  v65 = a4;
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
    v57 = v16[1];
    v58 = (unsigned __int16 *)(v16 + 1);
    if ( (unsigned __int16)(v57 - 48) <= 9u )
    {
      do
      {
        v59 = v57;
        do
        {
          if ( v59 >= 0x30u )
          {
            v60 = v59;
            if ( v59 <= 0x39u )
              break;
          }
          v60 = v58[1];
          ++v58;
          v59 = v60;
        }
        while ( v60 );
        if ( !v60 )
          break;
        v61 = v58[1];
        ++v58;
        v62 = v60 - 48;
        if ( v61 )
        {
          do
          {
            if ( (unsigned __int16)(v61 - 48) > 9u )
              break;
            ++v58;
            v63 = v61;
            v61 = *v58;
            v62 = v63 + 2 * (5 * v62 - 24);
          }
          while ( *v58 );
        }
        v64 = v14++;
        *((_DWORD *)this + v64 + 25) = v62;
        v57 = *v58;
      }
      while ( *v58 );
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
  *((_DWORD *)this + 70) = a9;
  v21 = *((_QWORD *)this + 1);
  *((_DWORD *)this + 45) = -2;
  v22 = *(_BYTE *)(v21 + 23);
  v23 = a5;
  *((_QWORD *)this + 29) = a5;
  *((_BYTE *)this + 284) = v22;
  *v23 = 0;
  *((_QWORD *)this + 28) = v65;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = -1;
  *((_QWORD *)this + 27) = a3;
  *a3 = 0;
  **((_DWORD **)this + 28) = 1;
  *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
  v24 = *(DC ***)this;
  v25 = *((_DWORD *)this + 63) | ~(*(_DWORD *)(*(_QWORD *)(**(_QWORD **)this + 48LL) + 40LL) << 11) & 0x40000;
  *((_DWORD *)this + 63) = v25;
  v26 = *((_QWORD *)*v24 + 122);
  if ( *(_DWORD *)(v26 + 208) == 1 && ((*(_DWORD *)(v26 + 340) & 2) != 0 || !(unsigned int)DC::bUseMetaPtoD(*v24)) )
  {
    v27 = a10;
    v25 |= 0x1000u;
    *((_DWORD *)this + 63) = v25;
  }
  else
  {
    v27 = -65;
  }
  v28 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v28 + 26) == 2 )
  {
    v29 = *((_DWORD *)*v24 + 130);
    if ( (v29 & 1) == 0 || (v29 & 2) != 0 )
    {
      v25 |= 0x8000u;
      *((_DWORD *)this + 63) = v25;
    }
  }
  v30 = *(_DWORD *)(v28 + 16);
  if ( v30 == 400 || v30 == 700 )
  {
    v25 |= 0x10000000u;
    *((_DWORD *)this + 63) = v25;
  }
  v31 = (__int16 *)*((_QWORD *)this + 2);
  v32 = *v31;
  if ( *v31 == 77 )
  {
    if ( v31[1] == 83
      && v31[2] == 32
      && v31[3] == 83
      && v31[4] == 72
      && v31[5] == 69
      && v31[6] == 76
      && v31[7] == 76
      && v31[8] == 32
      && v31[9] == 68
      && v31[10] == 76
      && v31[11] == 71
      && !v31[12] )
    {
      *((_DWORD *)this + 63) |= 0x8000000u;
    }
  }
  else
  {
    switch ( v32 )
    {
      case 'S':
        if ( v31[1] != 89 )
          break;
        if ( v31[2] == 83 && v31[3] == 84 && v31[4] == 69 && v31[5] == 77 && !v31[6] )
        {
          *((_DWORD *)this + 63) = v25 | 0x2000;
          if ( (*(_BYTE *)(v28 + 27) & 0xF) == 1 )
            *((_QWORD *)this + 2) = L"FIXEDSYS";
        }
        else if ( v31[1] == 89 && v31[2] == 77 && v31[3] == 66 && v31[4] == 79 && v31[5] == 76 )
        {
          v56 = v25 | 0x4000000;
LABEL_82:
          *((_DWORD *)this + 63) = v56;
        }
        break;
      case 'T':
        if ( v31[1] == 77 && v31[2] == 83 && v31[3] == 32 && v31[4] == 82 && v31[5] == 77 && v31[6] == 78 && !v31[7] )
        {
          v56 = v25 | 0x800000;
          goto LABEL_82;
        }
        break;
      case '@':
        v56 = v25 | 0x2000000;
        goto LABEL_82;
      default:
        break;
    }
  }
  *((_DWORD *)this + 41) = *(_DWORD *)v28;
  v33 = *(_DWORD *)(v28 + 4);
  if ( v33 < 0 )
    v33 = -v33;
  *((_DWORD *)this + 42) = v33;
  v65 = (struct _POINTL *)*((_QWORD *)*v24 + 6);
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v65, v31);
  v35 = v65;
  x = (unsigned int)v65[5].x;
  if ( (x & 1) != 0 && (x = (CurrentThreadDpiAwarenessContext & 0xF) - 1, (unsigned int)x > 1) )
    v37 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
  else
    v37 = v65[268].x;
  *((_DWORD *)this + 61) = v37;
  v38 = W32GetCurrentThreadDpiAwarenessContext(v35, x);
  v39 = v65;
  if ( (v65[5].x & 1) != 0 && (v38 & 0xF) - 1 > 1 )
    y = (v38 >> 8) & 0x1FF;
  else
    y = v65[268].y;
  *((_DWORD *)this + 62) = y;
  v41 = *((_DWORD *)this + 63) | ((unsigned int)v39[269].x >> 5) & 0x100;
  *((_DWORD *)this + 63) = v41;
  v42 = v39[269].x;
  v43 = 0;
  if ( (v42 & 8) != 0 )
    v43 = 1024;
  *((_DWORD *)this + 63) = v41 | v43;
  v44 = PDEVOBJ::cFonts((PDEVOBJ *)&v65);
  v45 = 0;
  v46 = v44 == 0;
  v47 = v65;
  if ( !v46 )
    v45 = 512;
  v48 = v45 | *((_DWORD *)this + 63);
  v49 = 0;
  *((_DWORD *)this + 63) = v48;
  if ( !v47[263].y )
    v49 = 0x10000;
  v50 = v48 | v49;
  *((_DWORD *)this + 63) = v50;
  if ( v47[263].y == 4 )
    v11 = 0x20000000;
  v51 = v50 | v11;
  v52 = *((_DWORD *)this + 41);
  *((_DWORD *)this + 63) = v51;
  v53 = v52 < 0;
  if ( !v52 )
  {
    v52 = v47[224].y;
    v51 |= 8u;
    *((_DWORD *)this + 63) = v51;
    v53 = v52 < 0;
    *((_DWORD *)this + 41) = v52;
  }
  if ( v53 )
  {
    v51 |= 2u;
    *((_DWORD *)this + 63) = v51;
    *((_DWORD *)this + 41) = -v52;
  }
  v54 = *(_DWORD *)(*((_QWORD *)this + 1) + 16LL);
  *((_DWORD *)this + 43) = v54;
  if ( !v54 )
  {
    v51 |= 0x200000u;
    *((_DWORD *)this + 43) = 400;
    *((_DWORD *)this + 63) = v51;
  }
  if ( !**((_WORD **)this + 2) )
  {
    MAPPER::bGetFaceName(this);
    v51 = *((_DWORD *)this + 63);
  }
  result = this;
  *((_DWORD *)this + 63) = v51 | v27 & 0x40 | 1;
  return result;
}
