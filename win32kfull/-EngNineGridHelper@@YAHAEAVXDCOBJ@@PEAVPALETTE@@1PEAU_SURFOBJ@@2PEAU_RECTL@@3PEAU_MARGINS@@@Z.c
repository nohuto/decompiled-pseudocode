/*
 * XREFs of ?EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z @ 0x1C027C55C
 * Callers:
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C027FF58 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C007F50C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngNineGrid @ 0x1C0080400 (EngNineGrid.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00834C0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall EngNineGridHelper(
        struct XDCOBJ *a1,
        struct PALETTE *a2,
        struct PALETTE *a3,
        struct _SURFOBJ *a4,
        struct _SURFOBJ *a5,
        struct _RECTL *a6,
        struct _RECTL *a7,
        struct _MARGINS *a8)
{
  int v8; // r12d
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // ebx
  Gre::Base *v16; // [rsp+60h] [rbp-69h] BYREF
  Gre::Base *v17; // [rsp+68h] [rbp-61h] BYREF
  Gre::Base *v18; // [rsp+70h] [rbp-59h] BYREF
  Gre::Base *v19; // [rsp+78h] [rbp-51h] BYREF
  _QWORD v20[4]; // [rsp+80h] [rbp-49h] BYREF
  struct _RECTL *v21; // [rsp+A0h] [rbp-29h]
  struct _RECTL *v22; // [rsp+A8h] [rbp-21h]
  _DWORD v23[6]; // [rsp+B0h] [rbp-19h] BYREF

  v8 = (int)a4;
  v22 = a6;
  v21 = a7;
  v19 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v20[0] = 33488896LL;
  v12 = *((_QWORD *)Gre::Base::Globals(a1) + 751);
  v23[1] = *(_DWORD *)a8;
  v23[2] = *((_DWORD *)a8 + 1);
  v23[3] = *((_DWORD *)a8 + 2);
  v23[4] = *((_DWORD *)a8 + 3);
  v13 = *(_QWORD *)a1;
  v23[0] = 5;
  v23[5] = 0;
  if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                       (Gre::Base *)&v19,
                       0LL,
                       0,
                       (__int64)a2,
                       (__int64)a2,
                       (__int64)a3,
                       (__int64)a3,
                       *(_DWORD *)(*(_QWORD *)(v13 + 976) + 184LL),
                       *(_DWORD *)(*(_QWORD *)(v13 + 976) + 176LL),
                       0,
                       0)
    && (unsigned int)EXLATEOBJ::bInitXlateObj(
                       (Gre::Base *)&v18,
                       0LL,
                       0,
                       (__int64)a2,
                       v12,
                       (__int64)a3,
                       (__int64)a3,
                       0,
                       0,
                       0,
                       0)
    && (v20[1] = v18,
        (unsigned int)EXLATEOBJ::bInitXlateObj(
                        (Gre::Base *)&v17,
                        0LL,
                        0,
                        (__int64)a2,
                        v12,
                        (__int64)a3,
                        (__int64)a3,
                        0,
                        0,
                        0,
                        0))
    && (v20[2] = v17,
        (unsigned int)EXLATEOBJ::bInitXlateObj(
                        (Gre::Base *)&v16,
                        0LL,
                        0,
                        v12,
                        (__int64)a2,
                        (__int64)a3,
                        (__int64)a3,
                        0,
                        0,
                        0,
                        0)) )
  {
    v20[3] = v16;
    v14 = EngNineGrid(v8, (__int64)a5, 0, (int)v19, (__int64)v22, (__int64)v21, (__int64)v23, (__int64)v20);
  }
  else
  {
    v14 = 0;
  }
  EXLATEOBJ::vAltUnlock(&v16);
  EXLATEOBJ::vAltUnlock(&v17);
  EXLATEOBJ::vAltUnlock(&v18);
  EXLATEOBJ::vAltUnlock(&v19);
  return v14;
}
