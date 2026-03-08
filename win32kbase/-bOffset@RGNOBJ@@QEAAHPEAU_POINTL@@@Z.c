/*
 * XREFs of ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C00455F0
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C001B660 (-bCompute@DC@@QEAAHXZ.c)
 *     GreOffsetRgn @ 0x1C0042C20 (GreOffsetRgn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0048B20 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?vOffset@EPATHOBJ@@QEAAXAEAVEPOINTL@@@Z @ 0x1C0181740 (-vOffset@EPATHOBJ@@QEAAXAEAVEPOINTL@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C018BD80 (EngUpdateDeviceSurface.c)
 * Callees:
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

__int64 __fastcall RGNOBJ::bOffset(int **this, struct _POINTL *a2)
{
  int *v2; // r11
  __int64 x; // rdi
  __int64 y; // r10
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  int v13; // r9d
  unsigned int *i; // rax
  __int64 v15; // rdx
  unsigned int *v16; // r8
  __int128 v17; // [rsp+20h] [rbp-48h]

  v2 = *this;
  x = a2->x;
  y = a2->y;
  if ( (*this)[13] == 1 )
    return 1LL;
  v6 = v2[14];
  v7 = v2[16];
  v8 = v2[15];
  v9 = v2[17];
  if ( (int)v6 < (int)v7 && (int)v8 < (int)v9 )
  {
    if ( (unsigned __int64)(x + v6 + 0x80000000LL) > 0xFFFFFFFF
      || (unsigned __int64)(y + v9 + 0x80000000LL) > 0xFFFFFFFF
      || (v10 = x + v7, (unsigned __int64)(v10 + 0x80000000LL) > 0xFFFFFFFF)
      || (v11 = y + v8, DWORD2(v17) = v10, (unsigned __int64)(v11 + 0x80000000LL) > 0xFFFFFFFF)
      || (DWORD1(v17) = v11,
          (((_DWORD)x + (_DWORD)v6) & 0xF8000000) != 0 && (((_DWORD)x + (_DWORD)v6) & 0xF8000000) != -134217728)
      || (((((_DWORD)y + (_DWORD)v9) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((v10 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((v11 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
    {
      EngSetLastError(0x216u);
      return 0LL;
    }
    LODWORD(v17) = x + v6;
    HIDWORD(v17) = y + v9;
    *(_OWORD *)(v2 + 14) = v17;
    v13 = (*this)[13];
    for ( i = (unsigned int *)*((_QWORD *)*this + 4); v13; i += *i + 4 )
    {
      i[1] += y;
      --v13;
      i[2] += y;
      v15 = *i;
      if ( (_DWORD)v15 )
      {
        v16 = &i[v15 + 3];
        do
        {
          *--v16 += x;
          LODWORD(v15) = v15 - 1;
        }
        while ( (_DWORD)v15 );
      }
    }
    i[-*(i - 1) - 2] = 0x7FFFFFFF;
    *(_DWORD *)(*((_QWORD *)*this + 4) + 4LL) = 0x80000000;
  }
  return 1LL;
}
