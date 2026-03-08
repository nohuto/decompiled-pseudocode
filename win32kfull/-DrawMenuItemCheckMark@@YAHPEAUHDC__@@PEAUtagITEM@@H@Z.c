/*
 * XREFs of ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0236044
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1C0239598 (xxxRealDrawMenuItem.c)
 * Callees:
 *     PrepareHDCBITSBitmap @ 0x1C00162BC (PrepareHDCBITSBitmap.c)
 *     GetDpiForSystem @ 0x1C0045E5C (GetDpiForSystem.c)
 *     NtGdiBitBltInternal @ 0x1C005E110 (NtGdiBitBltInternal.c)
 *     GreExtGetObjectW @ 0x1C0065580 (GreExtGetObjectW.c)
 *     NtGdiAlphaBlend @ 0x1C0083DC0 (NtGdiAlphaBlend.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00D05EC (GetOemBitmapInfoForDpi.c)
 *     GreGetLayout @ 0x1C0111738 (GreGetLayout.c)
 *     GreSetBkColor @ 0x1C0113964 (GreSetBkColor.c)
 *     GreSetTextColor @ 0x1C0113D94 (GreSetTextColor.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     BltColor @ 0x1C0242064 (BltColor.c)
 */

__int64 __fastcall DrawMenuItemCheckMark(HDC a1, struct tagITEM *a2)
{
  int v2; // esi
  unsigned int v5; // r15d
  int v6; // r14d
  int DpiForSystem; // eax
  char *OemBitmapInfoForDpi; // rax
  __int64 v9; // r8
  __int16 *v10; // rbx
  int v11; // ecx
  int v12; // eax
  int v13; // r13d
  __int64 v14; // rcx
  HBRUSH v15; // rbp
  __int64 v16; // r14
  bool v17; // zf
  char v18; // al
  int v19; // eax
  __int64 v20; // rdx
  int v22; // [rsp+60h] [rbp-C8h]
  unsigned int v23; // [rsp+64h] [rbp-C4h]
  int v24; // [rsp+68h] [rbp-C0h]
  _WORD v25[24]; // [rsp+70h] [rbp-B8h] BYREF
  int v26; // [rsp+A0h] [rbp-88h]

  v2 = 2;
  v5 = 1;
  v6 = 1;
  DpiForSystem = GetDpiForSystem((__int64)a1);
  OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(63LL, DpiForSystem);
  v9 = *(_QWORD *)a2;
  v10 = (__int16 *)OemBitmapInfoForDpi;
  v11 = *(_DWORD *)(*(_QWORD *)a2 + 76LL) - *((__int16 *)OemBitmapInfoForDpi + 3);
  v12 = 0;
  if ( v11 >= 0 )
    v12 = v11;
  v13 = v12 / 2;
  v14 = *(_DWORD *)(v9 + 4) & 8;
  if ( (*(_DWORD *)(v9 + 4) & 8) != 0 )
    v15 = *(HBRUSH *)(v9 + 24);
  else
    v15 = *(HBRUSH *)(v9 + 32);
  if ( v15 )
  {
    v16 = GreSelectBitmap(ghdcMem2, v15);
    if ( v16 )
    {
      memset_0(v25, 0, 0x68uLL);
      v23 = GreSetTextColor((__int64)a1, 0LL);
      v24 = GreSetBkColor(a1, 0xFFFFFF);
      if ( (**(_DWORD **)a2 & 0x2000) != 0 )
        v2 = *(_DWORD *)(*(_QWORD *)a2 + 72LL) - v10[2];
      if ( (unsigned int)GreExtGetObjectW(v15, 104LL, v25) == 104 && v25[23] == 32 && !v26 )
      {
        LOBYTE(v22) = 0;
        HIWORD(v22) = 511;
        v17 = (GreGetLayout(a1) & 1) == 0;
        v18 = 0;
        if ( !v17 )
          v18 = 0x80;
        BYTE1(v22) = v18;
        NtGdiAlphaBlend((Gre::Base *)a1, v2, v13, v10[3], v10[3], ghdcMem2, 0, 0, v10[2], v10[3], v22);
      }
      else
      {
        NtGdiBitBltInternal(a1, v2, v13, v10[2], v10[3], ghdcMem2, 0, 0, 12060490, 0xFFFFFF, 0);
      }
      GreSetTextColor((__int64)a1, v23);
      GreSetBkColor(a1, v24);
      GreSelectBitmap(ghdcMem2, v16);
    }
  }
  else if ( (_DWORD)v14 )
  {
    if ( (*(_DWORD *)v9 & 0x200) != 0 )
    {
      v19 = GetDpiForSystem(v14);
      v10 = (__int16 *)GetOemBitmapInfoForDpi(64LL, v19);
    }
    if ( (GreGetLayout(a1) & 1) != 0 && a1 != *(HDC *)(gpDispInfo + 72LL) )
      v6 = 3;
    if ( PrepareHDCBITSBitmap(0LL, v20) )
      BltColor(a1, v13, v10[2], v10[3], *v10, v10[1], v6);
  }
  else
  {
    return 0;
  }
  return v5;
}
