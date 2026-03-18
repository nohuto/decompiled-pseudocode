/*
 * XREFs of ?vCleanupSurfaces@@YAXK@Z @ 0x1C00357E4
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C0034CE8 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     HmgNextOwned @ 0x1C0035880 (HmgNextOwned.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003F8A0 (--1SURFREF@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0040814 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004086C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x1C004BD9C (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C005E508 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 */

void __fastcall vCleanupSurfaces(unsigned int a1)
{
  unsigned int v2; // ebx
  int v3; // edx
  int v4; // eax
  _BYTE v5[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]
  char v7; // [rsp+68h] [rbp+10h] BYREF
  HSURF v8; // [rsp+70h] [rbp+18h] BYREF

  v8 = 0LL;
  v2 = 0;
  while ( 1 )
  {
    v2 = HmgNextOwned(v2, a1, &v8);
    if ( !v2 )
      break;
    if ( (BYTE2(v8) & 0x1F) == 5 )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v7);
      SURFREF::SURFREF((SURFREF *)v5, v8);
      if ( v6 )
      {
        v4 = *(_DWORD *)(v6 + 112);
        if ( v4 >= 0 || (v4 & 0x40000) != 0 )
          SURFREF::bDeleteSurface((SURFREF *)v5, v3);
      }
      SURFREF::~SURFREF((SURFREF *)v5);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v7);
    }
  }
}
