/*
 * XREFs of ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0284E20
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0110C1C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C001B784 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C001CFDC (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z @ 0x1C028186C (-cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0283F18 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C0285FA8 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
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
  int v18; // r13d
  int v19; // ebx
  struct SPRITE *i; // rcx
  int v21; // r15d
  PVOID *v22; // rbx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdi
  int v26; // ecx
  struct SPRITE *v27; // rax
  struct SPRITE *v28; // rsi
  struct _RECTL v31; // [rsp+58h] [rbp-89h] BYREF
  struct _POINTL v32; // [rsp+68h] [rbp-79h] BYREF
  int v33; // [rsp+70h] [rbp-71h]
  int v34; // [rsp+74h] [rbp-6Dh]
  struct _RECTL v35; // [rsp+78h] [rbp-69h] BYREF
  struct _RECTL v36[4]; // [rsp+90h] [rbp-51h] BYREF

  v9 = *((_QWORD *)a1 + 2);
  v31 = 0LL;
  v35 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)v9 + 40LL) & 0x400) == 0 )
  {
    if ( bIntersect(a9, a8, &v31) )
    {
      p_pvScan0 = 0LL;
      v32.x = a6 + v31.left;
      v33 = a6 + v31.right;
      v32.y = a7 + v31.top;
      v34 = a7 + v31.bottom;
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
      INVOKEOFFCOPYBITS(a2, a3, a4, a5, 0LL, 0LL, &v31, &v32);
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
    v18 = cSpSubtract(a8, a9, v36);
    v19 = 0;
    do
      vSpReadFromScreen((struct _SPRITESTATE *)v9, v16, a3, &v36[v19++]);
    while ( v19 != v18 );
    for ( i = *(struct SPRITE **)(v9 + 8); ; i = (struct SPRITE *)*((_QWORD *)v28 + 3) )
    {
      v27 = pSpFindInZ(i, v17);
      v28 = v27;
      if ( !v27 )
        break;
      if ( v27 != a1 )
      {
        v21 = 0;
        do
        {
          if ( bIntersect(&v36[v21], (const struct _RECTL *)v28 + 5, &v35) )
          {
            v22 = 0LL;
            if ( a3 )
            {
              v23 = (int)a3[1].hsurf;
              if ( (v23 & 0x80004000) != 0 && (v23 & 0x200) == 0 )
              {
                v22 = &a3[-1].pvScan0;
                GreLockDisplayDevice(a3->hdev);
              }
            }
            v24 = *((_QWORD *)v28 + 20);
            v25 = 0LL;
            if ( v24 )
            {
              v26 = *(_DWORD *)(v24 + 88);
              if ( (v26 & 0x80004000) != 0 && (v26 & 0x200) == 0 )
              {
                v25 = v24 - 24;
                GreLockDisplayDevice(*(_QWORD *)(v24 - 24 + 48));
              }
            }
            INVOKEOFFCOPYBITS(
              a2,
              a3,
              (struct _POINTL *)v28 + 21,
              *((struct _SURFOBJ **)v28 + 20),
              0LL,
              0LL,
              &v35,
              (struct _POINTL *)&v35);
            if ( v25 )
              GreUnlockDisplayDevice(*(_QWORD *)(v25 + 48));
            if ( v22 )
              GreUnlockDisplayDevice(v22[6]);
          }
          ++v21;
        }
        while ( v21 != v18 );
        v17 = a8;
      }
      SINGLEREADERLOCK::vUnlock((struct SPRITE *)((char *)v28 + 248));
    }
  }
}
