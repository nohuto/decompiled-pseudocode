/*
 * XREFs of ?EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z @ 0x1C027DB00
 * Callers:
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C027FAF8 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0084E50 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B565C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngNineGrid @ 0x1C00C8C30 (EngNineGrid.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
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
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v19; // [rsp+68h] [rbp-61h] BYREF
  __int64 v20; // [rsp+70h] [rbp-59h] BYREF
  __int64 v21; // [rsp+78h] [rbp-51h] BYREF
  __int64 v22; // [rsp+80h] [rbp-49h] BYREF
  struct _RECTL *v23; // [rsp+88h] [rbp-41h]
  int v24; // [rsp+90h] [rbp-39h] BYREF
  __int64 v25; // [rsp+98h] [rbp-31h]
  __int64 v26; // [rsp+A0h] [rbp-29h]
  __int64 v27; // [rsp+A8h] [rbp-21h]
  _DWORD v28[6]; // [rsp+B0h] [rbp-19h] BYREF

  v8 = 0;
  v23 = a7;
  v28[0] = 5;
  v28[5] = 0;
  v24 = 33488896;
  v28[1] = *(_DWORD *)a8;
  v28[2] = *((_DWORD *)a8 + 1);
  v28[3] = *((_DWORD *)a8 + 2);
  v28[4] = *((_DWORD *)a8 + 3);
  v12 = *(_QWORD *)a1;
  v22 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v13 = *(_QWORD *)(v12 + 976);
  v19 = 0LL;
  if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                       &v22,
                       0LL,
                       0,
                       (__int64)a2,
                       (__int64)a2,
                       (__int64)a3,
                       (__int64)a3,
                       *(_DWORD *)(v13 + 184),
                       *(_DWORD *)(v13 + 176),
                       0,
                       0) )
  {
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v21,
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
      v25 = v21;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           &v20,
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
        v26 = v20;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             &v19,
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
          v27 = v19;
          v8 = EngNineGrid(a4, (__int64)a5, 0LL, v22, (__int64)a6, (__int64)v23, (__int64)v28, (__int64)&v24);
        }
      }
    }
  }
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v19, v14);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v20, v15);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v21, v16);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v22, v17);
  return v8;
}
