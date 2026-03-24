/*
 * XREFs of ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024B9B8
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1C024D8A4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreSetTextColor @ 0x1C0044618 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00446A0 (GreSetBkColor.c)
 *     GreGetLayout @ 0x1C0045FB4 (GreGetLayout.c)
 *     GetDpiForSystem @ 0x1C0063CBC (GetDpiForSystem.c)
 *     GreExtGetObjectW @ 0x1C0083108 (GreExtGetObjectW.c)
 *     NtGdiAlphaBlend @ 0x1C00851E0 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0088690 (NtGdiBitBltInternal.c)
 *     GetOemBitmapInfoForDpi @ 0x1C010748C (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C010759C (PrepareHDCBITSBitmap.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     BltColor @ 0x1C0250BFC (BltColor.c)
 */

__int64 __fastcall DrawMenuItemCheckMark(HDC a1, struct tagITEM *a2)
{
  int v2; // edi
  unsigned int v5; // r15d
  int v6; // ebp
  unsigned int DpiForSystem; // eax
  char *OemBitmapInfoForDpi; // rax
  __int64 v9; // r8
  __int16 *v10; // rbx
  int v11; // ecx
  int v12; // eax
  int v13; // r13d
  __int64 v14; // rcx
  HSURF v15; // r14
  __int64 v16; // rbp
  bool v17; // zf
  char v18; // al
  unsigned int v19; // eax
  int v21; // [rsp+60h] [rbp-C8h]
  int v22; // [rsp+64h] [rbp-C4h]
  int v23; // [rsp+68h] [rbp-C0h]
  _DWORD v24[28]; // [rsp+70h] [rbp-B8h] BYREF

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
    v15 = *(HSURF *)(v9 + 24);
  else
    v15 = *(HSURF *)(v9 + 32);
  if ( v15 )
  {
    v16 = GreSelectBitmap(*(_QWORD *)ghdcMem2, v15);
    if ( v16 )
    {
      memset(v24, 0, 0x68uLL);
      v22 = GreSetTextColor(a1, 0);
      v23 = GreSetBkColor(a1, 0xFFFFFF);
      if ( (**(_DWORD **)a2 & 0x2000) != 0 )
        v2 = *(_DWORD *)(*(_QWORD *)a2 + 72LL) - v10[2];
      if ( (unsigned int)GreExtGetObjectW(v15, 104LL, (char *)v24) == 104 && HIWORD(v24[11]) == 32 && !v24[12] )
      {
        LOBYTE(v21) = 0;
        HIWORD(v21) = 511;
        v17 = (GreGetLayout(a1) & 1) == 0;
        v18 = 0;
        if ( !v17 )
          v18 = 0x80;
        BYTE1(v21) = v18;
        NtGdiAlphaBlend((XLATEOBJ *)a1, v2, v13, v10[3], v10[3], *(POINTL *)ghdcMem2, 0, 0, v10[2], v10[3], v21);
      }
      else
      {
        NtGdiBitBltInternal(a1, v2, v13, v10[2], v10[3], *(HDC *)ghdcMem2, 0, 0, 12060490, 0xFFFFFFu, 0);
      }
      GreSetTextColor(a1, v22);
      GreSetBkColor(a1, v23);
      GreSelectBitmap(*(_QWORD *)ghdcMem2, v16);
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
    if ( PrepareHDCBITSBitmap(0LL) )
      BltColor(a1, v13, v10[2], v10[3], *v10, v10[1], v6);
  }
  else
  {
    return 0;
  }
  return v5;
}
