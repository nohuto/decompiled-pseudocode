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
