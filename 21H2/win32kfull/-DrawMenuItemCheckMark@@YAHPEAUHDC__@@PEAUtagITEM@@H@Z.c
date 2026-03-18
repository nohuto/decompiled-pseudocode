/*
 * XREFs of ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0246DE4
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1C0248CAC (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0027B74 (GreExtGetObjectW.c)
 *     NtGdiAlphaBlend @ 0x1C0039BB0 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     GreSetTextColor @ 0x1C00BE3F8 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00BE480 (GreSetBkColor.c)
 *     GreGetLayout @ 0x1C00C1400 (GreGetLayout.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00C3124 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C00C37D8 (PrepareHDCBITSBitmap.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     BltColor @ 0x1C024DBD4 (BltColor.c)
 */

__int64 __fastcall DrawMenuItemCheckMark(HDC a1, struct tagITEM *a2)
{
  int v2; // edi
  unsigned int v5; // r15d
  int v6; // ebp
  int DpiForSystem; // eax
  char *OemBitmapInfoForDpi; // rax
  __int64 v9; // r8
  __int16 *v10; // rbx
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // r13d
  __int64 v15; // rcx
  HBRUSH v16; // r14
  __int64 v17; // rbp
  bool v18; // zf
  char v19; // al
  int v20; // eax
  __int64 v21; // rdx
  int v23; // [rsp+60h] [rbp-C8h]
  int v24; // [rsp+64h] [rbp-C4h]
  int v25; // [rsp+68h] [rbp-C0h]
  _DWORD v26[28]; // [rsp+70h] [rbp-B8h] BYREF

  v2 = 2;
  v5 = 1;
  v6 = 1;
  DpiForSystem = GetDpiForSystem((__int64)a1, (__int64)a2);
  OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(63LL, DpiForSystem);
  v9 = *(_QWORD *)a2;
  v10 = (__int16 *)OemBitmapInfoForDpi;
  v11 = *(_DWORD *)(*(_QWORD *)a2 + 76LL) - *((__int16 *)OemBitmapInfoForDpi + 3);
  v12 = 0;
  if ( v11 >= 0 )
    v12 = v11;
  v13 = (unsigned int)(v12 >> 31);
  v14 = v12 / 2;
  v15 = *(_DWORD *)(v9 + 4) & 8;
  if ( (*(_DWORD *)(v9 + 4) & 8) != 0 )
    v16 = *(HBRUSH *)(v9 + 24);
  else
    v16 = *(HBRUSH *)(v9 + 32);
  if ( v16 )
  {
    v17 = GreSelectBitmap(ghdcMem2, v16);
    if ( v17 )
    {
      memset(v26, 0, 0x68uLL);
      v24 = GreSetTextColor(a1, 0);
      v25 = GreSetBkColor(a1, 0xFFFFFF);
      if ( (**(_DWORD **)a2 & 0x2000) != 0 )
        v2 = *(_DWORD *)(*(_QWORD *)a2 + 72LL) - v10[2];
      if ( (unsigned int)GreExtGetObjectW(v16, 104LL, (char *)v26) == 104 && HIWORD(v26[11]) == 32 && !v26[12] )
      {
        LOBYTE(v23) = 0;
        HIWORD(v23) = 511;
        v18 = (GreGetLayout(a1) & 1) == 0;
        v19 = 0;
        if ( !v18 )
          v19 = 0x80;
        BYTE1(v23) = v19;
        NtGdiAlphaBlend(a1, v2, v14, v10[3], v10[3], ghdcMem2, 0, 0, v10[2], v10[3], v23);
      }
      else
      {
        NtGdiBitBltInternal(a1, v2, v14, v10[2], v10[3], ghdcMem2, 0, 0, 12060490, 0xFFFFFF, 0);
      }
      GreSetTextColor(a1, v24);
      GreSetBkColor(a1, v25);
      GreSelectBitmap(ghdcMem2, v17);
    }
  }
  else if ( (_DWORD)v15 )
  {
    if ( (*(_DWORD *)v9 & 0x200) != 0 )
    {
      LODWORD(v13) = v12 % 2;
      v20 = GetDpiForSystem(v15, v13);
      v10 = (__int16 *)GetOemBitmapInfoForDpi(64LL, v20);
    }
    if ( (GreGetLayout(a1) & 1) != 0 && a1 != *(HDC *)(gpDispInfo + 72LL) )
      v6 = 3;
    if ( PrepareHDCBITSBitmap(0LL, v21) )
      BltColor(a1, v14, v10[2], v10[3], *v10, v10[1], v6);
  }
  else
  {
    return 0;
  }
  return v5;
}
