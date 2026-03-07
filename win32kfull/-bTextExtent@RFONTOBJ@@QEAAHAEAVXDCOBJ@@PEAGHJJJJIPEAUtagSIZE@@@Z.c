__int64 __fastcall RFONTOBJ::bTextExtent(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        char a9,
        struct tagSIZE *a10)
{
  struct tagSIZE *v10; // rdi
  int v11; // r15d
  int v13; // ebx
  __int64 v14; // r13
  struct XDCOBJ *v16; // rax
  int v17; // esi
  int v18; // r8d
  int v19; // ecx
  unsigned __int16 *v20; // rdx
  signed int v21; // r12d
  int v22; // edi
  GLYPHDEF **p_pgdf; // rcx
  __int64 v24; // r8
  int ppo_high; // edx
  bool v26; // zf
  int v27; // esi
  float *v28; // rcx
  LONG v29; // edx
  Gre::Base *v30; // rcx
  __int64 v32; // rax
  int v33; // ebx
  int v34; // ecx
  int v35; // r8d
  __int16 v36; // r8
  unsigned __int16 *v37; // r9
  __int64 v38; // rdx
  __int16 v39; // ax
  LONG cx; // edx
  int v41; // [rsp+30h] [rbp-D0h] BYREF
  int v42; // [rsp+34h] [rbp-CCh] BYREF
  int v43; // [rsp+38h] [rbp-C8h]
  unsigned __int16 *v44; // [rsp+40h] [rbp-C0h]
  struct XDCOBJ *v45; // [rsp+48h] [rbp-B8h]
  struct tagSIZE *v46; // [rsp+50h] [rbp-B0h]
  unsigned __int16 *v47; // [rsp+58h] [rbp-A8h]
  struct _GLYPHPOS v48; // [rsp+60h] [rbp-A0h] BYREF

  v10 = a10;
  v11 = 0;
  v41 = 0;
  v13 = 0;
  v14 = a4;
  v47 = a3;
  v16 = a2;
  v45 = a2;
  v46 = a10;
  if ( a6 )
  {
    v32 = *(_QWORD *)this;
    v42 = 0;
    bFToL((float)a6 * *(float *)(v32 + 404), &v42, 0);
    v16 = v45;
    v11 = v42;
  }
  v17 = 0;
  v18 = 0;
  v19 = v14;
  v20 = a3;
  v43 = v14;
  v44 = a3;
  if ( (_DWORD)v14 )
  {
    v42 = 0;
    while ( 1 )
    {
      v21 = v19;
      if ( v19 > 82 )
        v21 = 82;
      if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, v21, &v48, v20, v16, 0LL) )
        return 0LL;
      if ( v21 > 0 )
      {
        v22 = v42;
        p_pgdf = &v48.pgdf;
        v24 = (unsigned int)v21;
        do
        {
          ppo_high = HIDWORD((*p_pgdf)[1].ppo);
          v17 += ppo_high;
          if ( v11 < 0 && ppo_high + v11 <= 0 )
            ++v22;
          p_pgdf += 3;
          --v24;
        }
        while ( v24 );
        v42 = v22;
        v10 = v46;
      }
      v26 = v43 == v21;
      v19 = v43 - v21;
      v43 -= v21;
      v20 = &v44[v21];
      v16 = v45;
      v44 = v20;
      if ( v26 )
      {
        v18 = v42;
        goto LABEL_15;
      }
    }
  }
  else
  {
LABEL_15:
    if ( a6 )
    {
      if ( (a9 & 1) != 0
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 104LL) + 40LL) & 1) != 0
        && (*(_DWORD *)(*(_QWORD *)this + 716LL) & 4) == 0 )
      {
        v33 = v14;
        if ( a6 <= 0 )
          v33 = v14 - 1;
      }
      else
      {
        v33 = v14 - v18;
      }
      v13 = v11 * v33;
    }
    if ( bCalcBreakExtra(*(_DWORD *)(*(_QWORD *)this + 404LL), a7, a8, (__int64)&v41) )
    {
      v34 = v41;
      v35 = *(_DWORD *)(*(_QWORD *)this + 468LL);
      if ( v11 + v35 + v41 < 0 )
        v34 = -(v35 + v11);
      if ( (a9 & 2) != 0 )
        v36 = *(_WORD *)(*(_QWORD *)this + 464LL);
      else
        v36 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL) + 118LL);
      if ( (int)v14 > 0 )
      {
        v37 = v47;
        v38 = v14;
        do
        {
          v39 = *v37++;
          if ( v39 == v36 )
            v13 += v34;
          --v38;
        }
        while ( v38 );
      }
    }
    v27 = v13 + v17;
    if ( (a9 & 1) != 0 )
      v27 += 16 * RFONTOBJ::lOverhang(this);
    if ( (unsigned int)EFLOAT::bIs1Over16((EFLOAT *)(*(_QWORD *)this + 680LL)) )
    {
      v10->cx = (v27 + 8) >> 4;
    }
    else
    {
      v41 = 0;
      bFToL((float)v27 * *v28, &v41, 0);
      v10->cx = v41;
    }
    if ( (unsigned int)EFLOAT::bIs1Over16((EFLOAT *)(*(_QWORD *)this + 684LL)) )
    {
      v10->cy = v29;
    }
    else
    {
      v41 = 0;
      bFToL((float)(16 * v29) * *(float *)v30, &v41, 0);
      v10->cy = v41;
    }
    if ( *((_DWORD *)Gre::Base::Globals(v30) + 39)
      && *(_DWORD *)(*(_QWORD *)this + 208LL) == 1
      && (*(_DWORD *)(*(_QWORD *)this + 716LL) & 0x200014) == 0x200000
      && (a5 == 900 || a5 == 2700) )
    {
      cx = v10->cx;
      v10->cx = v10->cy;
      v10->cy = cx;
    }
    return 1LL;
  }
}
