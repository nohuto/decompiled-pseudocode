/*
 * XREFs of ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0155234
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00B7030 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0031174 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C01177BC (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0155820 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z @ 0x1C01569BC (-cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C0156B48 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall vSpSmallUnderlayCopy(
        struct SPRITE *a1,
        struct _POINTL *a2,
        struct _SURFOBJ *a3,
        struct _POINTL *a4,
        struct _SURFOBJ *a5,
        int a6,
        int a7,
        struct _RECTL *a8,
        struct _RECTL *a9)
{
  __int64 v9; // r15
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  PVOID *v14; // rbx
  int v15; // eax
  struct _POINTL *v16; // rsi
  struct _RECTL *v17; // rdi
  unsigned int v18; // r13d
  int v19; // ebx
  struct SPRITE *i; // rcx
  struct SPRITE *v21; // rax
  struct SPRITE *v22; // rsi
  int v23; // r15d
  PVOID *v24; // rbx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rdi
  struct _SURFOBJ *v28; // r9
  int v29; // ecx
  struct _RECTL v32; // [rsp+58h] [rbp-89h] BYREF
  struct _POINTL v33; // [rsp+68h] [rbp-79h] BYREF
  int v34; // [rsp+70h] [rbp-71h]
  int v35; // [rsp+74h] [rbp-6Dh]
  struct _RECTL v36; // [rsp+78h] [rbp-69h] BYREF
  struct _RECTL v37[4]; // [rsp+90h] [rbp-51h] BYREF

  v9 = *((_QWORD *)a1 + 2);
  v32 = 0LL;
  v36 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)v9 + 40LL) & 0x400) == 0 )
  {
    if ( bIntersect(a9, a8, &v32) )
    {
      p_pvScan0 = 0LL;
      v33.x = a6 + v32.left;
      v34 = a6 + v32.right;
      v33.y = a7 + v32.top;
      v35 = a7 + v32.bottom;
      if ( a3 )
      {
        hsurf = (int)a3[1].hsurf;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          p_pvScan0 = &a3[-1].pvScan0;
          GreLockDisplayDevice(a3->hdev);
        }
      }
      v14 = 0LL;
      if ( a5 )
      {
        v15 = (int)a5[1].hsurf;
        if ( (v15 & 0x80004000) != 0 && (v15 & 0x200) == 0 )
        {
          v14 = &a5[-1].pvScan0;
          GreLockDisplayDevice(a5->hdev);
        }
      }
      v16 = a2;
      INVOKEOFFCOPYBITS(a2, a3, a4, a5, 0LL, 0LL, &v32, &v33);
      if ( v14 )
        GreUnlockDisplayDevice(v14[6]);
      if ( p_pvScan0 )
        GreUnlockDisplayDevice(p_pvScan0[6]);
    }
    else
    {
      v16 = a2;
    }
    v17 = a8;
    v18 = cSpSubtract(a8, a9, v37);
    v19 = 0;
    do
      vSpReadFromScreen((struct _SPRITESTATE *)v9, v16, a3, &v37[v19++]);
    while ( v19 != v18 );
    for ( i = *(struct SPRITE **)(v9 + 8); ; i = (struct SPRITE *)*((_QWORD *)v22 + 3) )
    {
      v21 = pSpFindInZ(i, v17);
      v22 = v21;
      if ( !v21 )
        break;
      if ( v21 != a1 )
      {
        v23 = 0;
        do
        {
          if ( bIntersect(&v37[v23], (const struct _RECTL *)v22 + 5, &v36) )
          {
            v24 = 0LL;
            if ( a3 )
            {
              v25 = (int)a3[1].hsurf;
              if ( (v25 & 0x80004000) != 0 && (v25 & 0x200) == 0 )
              {
                v24 = &a3[-1].pvScan0;
                GreLockDisplayDevice(a3->hdev);
              }
            }
            v26 = *((_QWORD *)v22 + 20);
            v27 = 0LL;
            v28 = (struct _SURFOBJ *)v26;
            if ( v26 )
            {
              v29 = *(_DWORD *)(v26 + 88);
              if ( (v29 & 0x80004000) != 0 && (v29 & 0x200) == 0 )
              {
                v27 = v26 - 24;
                GreLockDisplayDevice(*(_QWORD *)(v26 - 24 + 48));
                v28 = (struct _SURFOBJ *)*((_QWORD *)v22 + 20);
              }
            }
            INVOKEOFFCOPYBITS(a2, a3, (struct _POINTL *)v22 + 21, v28, 0LL, 0LL, &v36, (struct _POINTL *)&v36);
            if ( v27 )
              GreUnlockDisplayDevice(*(_QWORD *)(v27 + 48));
            if ( v24 )
              GreUnlockDisplayDevice(v24[6]);
          }
          ++v23;
        }
        while ( v23 != v18 );
        v17 = a8;
      }
      SINGLEREADERLOCK::vUnlock((struct SPRITE *)((char *)v22 + 248));
    }
  }
}
