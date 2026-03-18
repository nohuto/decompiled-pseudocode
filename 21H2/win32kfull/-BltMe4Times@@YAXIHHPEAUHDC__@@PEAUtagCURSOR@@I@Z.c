/*
 * XREFs of ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C0242E14
 * Callers:
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C00B967C (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     BltIcon @ 0x1C00BE16C (BltIcon.c)
 *     FillRect @ 0x1C00C1CEC (FillRect.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00C3124 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C00C37D8 (PrepareHDCBITSBitmap.c)
 */

void __fastcall BltMe4Times(unsigned int a1, __int64 a2, int a3, HDC a4, struct tagCURSOR *a5, char a6)
{
  unsigned int v6; // r15d
  int v8; // ebx
  int v9; // r14d
  HDC v10; // r13
  HBRUSH v11; // rsi
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rdx
  int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // rax
  int v17; // r12d
  LONG v18; // edi
  LONG v19; // ebx
  LONG v20; // ecx
  int v21; // edi
  int v22; // esi
  __int64 v23; // rbx
  int v24; // [rsp+50h] [rbp-58h]
  __int64 v25; // [rsp+58h] [rbp-50h]
  RECT v26; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v27; // [rsp+B0h] [rbp+8h]
  unsigned int v30; // [rsp+D8h] [rbp+30h]

  v27 = a1;
  v6 = a1;
  v8 = a2;
  v9 = 1;
  v10 = (HDC)PrepareHDCBITSBitmap(0LL, a2);
  if ( v10 )
  {
    v30 = a6 & 0x10;
    if ( v30 )
      v11 = *(HBRUSH *)(gpsi + 4856LL);
    else
      v11 = *(HBRUSH *)(gpsi + 4712LL);
    v12 = v8 - a3;
    v13 = 2LL;
    v25 = 2LL;
    v14 = (unsigned int)(v12 >> 31);
    LODWORD(v14) = v12 % 2;
    v24 = v12 / 2;
    do
    {
      DpiForSystem = GetDpiForSystem(v13, v14);
      OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(v6, DpiForSystem);
      v17 = 8913094;
      v18 = *OemBitmapInfoForDpi;
      v19 = OemBitmapInfoForDpi[1];
      v20 = v18 + OemBitmapInfoForDpi[2];
      LODWORD(OemBitmapInfoForDpi) = OemBitmapInfoForDpi[3];
      v26.right = v20;
      v26.left = v18;
      v26.top = v19;
      v26.bottom = v19 + (_DWORD)OemBitmapInfoForDpi;
      FillRect(v10, &v26, v11);
      v21 = v24 + v18;
      v22 = v24 + v19;
      v23 = 2LL;
      do
      {
        BltIcon(v10, v21 + 1, v22, a3, a3, a4, (__int64)a5, (v9 ^ 1) + 1, v17);
        v9 ^= 1u;
        v17 = 6684742;
        --v23;
      }
      while ( v23 );
      v6 = ++v27;
      v13 = gpsi;
      if ( v30 )
        v11 = *(HBRUSH *)(gpsi + 4816LL);
      else
        v11 = *(HBRUSH *)(gpsi + 4720LL);
      --v25;
    }
    while ( v25 );
  }
}
