/*
 * XREFs of ?EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z @ 0x1C027BCA0
 * Callers:
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C027DD98 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngNineGrid @ 0x1C00D7950 (EngNineGrid.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
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
  unsigned int v8; // edi
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // edx
  __int64 v17; // [rsp+60h] [rbp-69h] BYREF
  __int64 v18; // [rsp+68h] [rbp-61h] BYREF
  __int64 v19; // [rsp+70h] [rbp-59h] BYREF
  __int64 v20; // [rsp+78h] [rbp-51h] BYREF
  _QWORD v21[4]; // [rsp+80h] [rbp-49h] BYREF
  struct _RECTL *v22; // [rsp+A0h] [rbp-29h]
  _DWORD v23[6]; // [rsp+A8h] [rbp-21h] BYREF

  v8 = 0;
  v22 = a7;
  v23[1] = *(_DWORD *)a8;
  v23[2] = *((_DWORD *)a8 + 1);
  v23[3] = *((_DWORD *)a8 + 2);
  v23[4] = *((_DWORD *)a8 + 3);
  v13 = *(_QWORD *)a1;
  v23[0] = 5;
  v23[5] = 0;
  v14 = *(_QWORD *)(v13 + 976);
  v21[0] = 33488896LL;
  v20 = 0LL;
  v19 = 0LL;
  v15 = *(_DWORD *)(v14 + 184);
  LODWORD(v13) = *(_DWORD *)(v14 + 176);
  v18 = 0LL;
  v17 = 0LL;
  if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                       &v20,
                       0LL,
                       0,
                       (__int64)a2,
                       (__int64)a2,
                       (__int64)a3,
                       (__int64)a3,
                       v15,
                       v13,
                       0,
                       0) )
  {
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v19,
                         0LL,
                         0,
                         (__int64)a2,
                         (__int64)gppalRGB,
                         (__int64)a3,
                         (__int64)a3,
                         0,
                         0,
                         0,
                         0) )
    {
      v21[1] = v19;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           &v18,
                           0LL,
                           0,
                           (__int64)a2,
                           (__int64)gppalRGB,
                           (__int64)a3,
                           (__int64)a3,
                           0,
                           0,
                           0,
                           0) )
      {
        v21[2] = v18;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             &v17,
                             0LL,
                             0,
                             (__int64)gppalRGB,
                             (__int64)a2,
                             (__int64)a3,
                             (__int64)a3,
                             0,
                             0,
                             0,
                             0) )
        {
          v21[3] = v17;
          v8 = EngNineGrid(a4, (__int64)a5, 0LL, v20, (__int64)a6, (__int64)v22, (__int64)v23, (__int64)v21);
        }
      }
    }
  }
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v17);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v18);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v19);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v20);
  return v8;
}
