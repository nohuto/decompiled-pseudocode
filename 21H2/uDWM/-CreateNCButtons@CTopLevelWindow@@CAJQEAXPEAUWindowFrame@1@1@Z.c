/*
 * XREFs of ?CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z @ 0x18004955C
 * Callers:
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180048C5C (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180049F3C (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::CreateNCButtons(
        void *const a1,
        struct CTopLevelWindow::WindowFrame *a2,
        struct CTopLevelWindow::WindowFrame *a3)
{
  unsigned int v3; // ebx
  char v6; // dl
  __int64 *v7; // rsi
  unsigned int v8; // r14d
  __int64 v9; // rdi
  int v10; // eax
  HRESULT ThemeMargins; // eax
  __int64 v12; // r8
  MARGINS *v13; // rdx
  MARGINS pMargins; // [rsp+40h] [rbp-C0h] BYREF
  struct _MARGINS v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+60h] [rbp-A0h]
  char *v18; // [rsp+68h] [rbp-98h] BYREF
  int v19; // [rsp+70h] [rbp-90h]
  char *v20; // [rsp+78h] [rbp-88h]
  int v21; // [rsp+80h] [rbp-80h]
  char *v22; // [rsp+88h] [rbp-78h]
  int v23; // [rsp+90h] [rbp-70h]
  char *v24; // [rsp+98h] [rbp-68h]
  int v25; // [rsp+A0h] [rbp-60h]
  char *v26; // [rsp+A8h] [rbp-58h]
  int v27; // [rsp+B0h] [rbp-50h]
  char *v28; // [rsp+B8h] [rbp-48h]
  int v29; // [rsp+C0h] [rbp-40h]
  char *v30; // [rsp+C8h] [rbp-38h]
  int v31; // [rsp+D0h] [rbp-30h]
  char *v32; // [rsp+D8h] [rbp-28h]
  int v33; // [rsp+E0h] [rbp-20h]
  char *v34; // [rsp+E8h] [rbp-18h]
  int v35; // [rsp+F0h] [rbp-10h]
  char *v36; // [rsp+F8h] [rbp-8h]
  int v37; // [rsp+100h] [rbp+0h]
  char *v38; // [rsp+108h] [rbp+8h]
  int v39; // [rsp+110h] [rbp+10h]
  char *v40; // [rsp+118h] [rbp+18h]

  v3 = 0;
  if ( a2 == *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 32) )
  {
    v17 = -1;
    v6 = 1;
  }
  else
  {
    v6 = 0;
    v17 = 3;
  }
  v18 = (char *)a2 + 8;
  v20 = (char *)a2 + 40;
  v19 = v6 != 0 ? -1 : 5;
  v22 = (char *)a3 + 8;
  v21 = v6 != 0 ? -1 : 4;
  v24 = (char *)a3 + 40;
  v23 = v6 != 0 ? -1 : 6;
  v26 = (char *)a2 + 72;
  v25 = v6 != 0 ? -1 : 88;
  v28 = (char *)a2 + 104;
  v27 = v6 != 0 ? -1 : 90;
  v30 = (char *)a3 + 72;
  v29 = v6 != 0 ? -1 : 89;
  v32 = (char *)a3 + 104;
  v31 = v6 != 0 ? -1 : 91;
  v34 = (char *)a2 + 136;
  v33 = v6 != 0 ? -1 : 7;
  v36 = (char *)a3 + 136;
  v35 = v6 != 0 ? -1 : 8;
  v37 = v6 != 0 ? 36 : 9;
  v38 = (char *)a2 + 168;
  v7 = (__int64 *)&v18;
  v39 = v6 != 0 ? 37 : 10;
  v8 = 0;
  v40 = (char *)a3 + 168;
  while ( 1 )
  {
    if ( *((_DWORD *)v7 - 2) == -1 )
      goto LABEL_9;
    v9 = *v7;
    v10 = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(a1, *((_DWORD *)v7 - 2), 4u, &v16, *v7);
    v3 = v10;
    if ( v10 < 0 )
      break;
    ThemeMargins = GetThemeMargins(a1, 0LL, *((_DWORD *)v7 - 2), 0, 3602, 0LL, &pMargins);
    v12 = 0LL;
    v3 = ThemeMargins;
    if ( ThemeMargins < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ThemeMargins, 0x3A3u);
      return v3;
    }
    if ( *(_DWORD *)(v9 + 24) )
    {
      do
      {
        v13 = *(MARGINS **)(*(_QWORD *)v9 + 8 * v12);
        v12 = (unsigned int)(v12 + 1);
        v13[4] = pMargins;
      }
      while ( (unsigned int)v12 < *(_DWORD *)(v9 + 24) );
    }
LABEL_9:
    ++v8;
    v7 += 2;
    if ( v8 >= 0xC )
      return v3;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x3A2u);
  return v3;
}
