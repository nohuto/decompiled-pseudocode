/*
 * XREFs of ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C00D1CB0
 * Callers:
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C0044400 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreSetLayout @ 0x1C00D1C50 (GreSetLayout.c)
 * Callees:
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C018C300 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 */

__int64 __fastcall DC::dwSetLayout(DC *this, int a2, int a3)
{
  __int64 v3; // r9
  DC *v4; // r10
  unsigned int v5; // r11d
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // edx
  int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // [rsp+30h] [rbp+8h]
  __int64 v14; // [rsp+30h] [rbp+8h]
  __int64 v15; // [rsp+48h] [rbp+20h]

  v3 = *((_QWORD *)this + 122);
  v4 = this;
  v5 = *(_DWORD *)(v3 + 108);
  *(_DWORD *)(v3 + 108) = a3;
  if ( (((unsigned __int8)a3 ^ (unsigned __int8)v5) & 7) != 0 )
  {
    v7 = *((_QWORD *)this + 122);
    v13 = *(_QWORD *)(v7 + 316);
    v15 = *(_QWORD *)(v7 + 324);
    if ( (a3 & 1) != 0 )
      *(_DWORD *)(v7 + 104) = 8;
    LODWORD(v13) = -(int)v13;
    LODWORD(v15) = -(int)v15;
    *(_QWORD *)(*((_QWORD *)v4 + 122) + 316LL) = v13;
    *(_QWORD *)(*((_QWORD *)v4 + 122) + 324LL) = v15;
    if ( a2 == -1 )
    {
      DC::MirrorWindowOrg(v4);
    }
    else
    {
      v8 = *((_QWORD *)v4 + 122);
      HIDWORD(v14) = HIDWORD(*(_QWORD *)(v8 + 308));
      LODWORD(v14) = a2 - *(_QWORD *)(v8 + 308);
      *(_QWORD *)(v8 + 308) = v14;
    }
    v9 = *((_QWORD *)v4 + 122);
    if ( (*(_BYTE *)(v9 + 272) & 6) != 6 )
    {
      *(_DWORD *)(v9 + 272) ^= 2u;
      v9 = *((_QWORD *)v4 + 122);
    }
    v10 = *((_DWORD *)v4 + 62);
    v11 = v10 | 4;
    v12 = v10 & 0xFFFFFFFB;
    if ( (*((_DWORD *)v4 + 62) & 4) == 0 )
      v12 = v11;
    *((_DWORD *)v4 + 62) = v12;
    *(_DWORD *)(v9 + 340) |= 0x4090u;
  }
  return v5;
}
