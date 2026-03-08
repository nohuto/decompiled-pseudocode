/*
 * XREFs of ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C022E530
 * Callers:
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022E6C4 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 * Callees:
 *     PrepareHDCBITSBitmap @ 0x1C00162BC (PrepareHDCBITSBitmap.c)
 *     GetDpiForSystem @ 0x1C0045E5C (GetDpiForSystem.c)
 *     FillRect @ 0x1C00881F8 (FillRect.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00D05EC (GetOemBitmapInfoForDpi.c)
 *     BltIcon @ 0x1C011375C (BltIcon.c)
 */

void __fastcall BltMe4Times(unsigned int a1, __int64 a2, int a3, XLATEOBJ *a4, struct tagCURSOR *a5, char a6)
{
  unsigned int v6; // r15d
  int v8; // ebx
  int v9; // r14d
  Gre::Base *v10; // r13
  HBRUSH v11; // rsi
  __int64 v12; // rcx
  int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // rax
  int v15; // r12d
  LONG v16; // edi
  LONG v17; // ebx
  LONG v18; // ecx
  int v19; // edi
  int v20; // esi
  __int64 v21; // rbx
  int v22; // [rsp+50h] [rbp-58h]
  __int64 v23; // [rsp+58h] [rbp-50h]
  RECT v24; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+B0h] [rbp+8h]
  unsigned int v28; // [rsp+D8h] [rbp+30h]

  v25 = a1;
  v6 = a1;
  v8 = a2;
  v9 = 1;
  v10 = (Gre::Base *)PrepareHDCBITSBitmap(0LL, a2);
  if ( v10 )
  {
    v28 = a6 & 0x10;
    if ( v28 )
      v11 = *(HBRUSH *)(gpsi + 4856LL);
    else
      v11 = *(HBRUSH *)(gpsi + 4712LL);
    v12 = 2LL;
    v23 = 2LL;
    v22 = (v8 - a3) / 2;
    do
    {
      DpiForSystem = GetDpiForSystem(v12);
      OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(v6, DpiForSystem);
      v15 = 8913094;
      v16 = *OemBitmapInfoForDpi;
      v17 = OemBitmapInfoForDpi[1];
      v18 = v16 + OemBitmapInfoForDpi[2];
      LODWORD(OemBitmapInfoForDpi) = OemBitmapInfoForDpi[3];
      v24.right = v18;
      v24.left = v16;
      v24.top = v17;
      v24.bottom = v17 + (_DWORD)OemBitmapInfoForDpi;
      FillRect((HDC)v10, &v24, v11);
      v19 = v22 + v16;
      v20 = v22 + v17;
      v21 = 2LL;
      do
      {
        BltIcon(v10, v19 + 1, v20, a3, a3, a4, (__int64)a5, (v9 ^ 1) + 1, v15);
        v9 ^= 1u;
        v15 = 6684742;
        --v21;
      }
      while ( v21 );
      v6 = ++v25;
      v12 = gpsi;
      if ( v28 )
        v11 = *(HBRUSH *)(gpsi + 4816LL);
      else
        v11 = *(HBRUSH *)(gpsi + 4720LL);
      --v23;
    }
    while ( v23 );
  }
}
