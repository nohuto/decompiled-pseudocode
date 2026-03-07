HSURF __fastcall NtGdiEngCreateDeviceSurface(Gre::Base *dhsurf, SIZEL a2, int a3)
{
  if ( UmpdSecurityGateNoUmpdObj(dhsurf) && !ValidUmpdSizl(a2, 0) || (unsigned int)(a3 - 1) > 7 )
    return 0LL;
  else
    return EngCreateDeviceSurface((DHSURF)dhsurf, a2, a3 | 0x8000u);
}
