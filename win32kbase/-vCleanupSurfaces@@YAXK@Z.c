/*
 * XREFs of ?vCleanupSurfaces@@YAXK@Z @ 0x1C006DCE4
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C006D158 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x1C0029684 (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockCheck @ 0x1C0049E60 (HmgShareLockCheck.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004E7E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004E850 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     HmgNextOwned @ 0x1C006DD80 (HmgNextOwned.c)
 */

void __fastcall vCleanupSurfaces(unsigned int a1)
{
  unsigned int v2; // ebx
  int *v3; // rax
  int v4; // ecx
  int *v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v2 = 0;
  while ( 1 )
  {
    v2 = HmgNextOwned(v2, a1, &v6);
    if ( !v2 )
      break;
    if ( (BYTE2(v6) & 0x1F) == 5 )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v5);
      v3 = (int *)HmgShareLockCheck(v6, 5);
      v5 = v3;
      if ( v3 )
      {
        v4 = v3[28];
        if ( v4 >= 0 || (v4 & 0x40000) != 0 )
        {
          SURFREF::bDeleteSurface((SURFREF *)&v5);
          v3 = v5;
        }
        if ( v3 )
          HmgDecrementShareReferenceCountEx(v3, 0LL);
      }
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v5);
    }
  }
}
