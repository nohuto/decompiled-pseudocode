__int64 __fastcall DpiGetDriverDataSizeFromVersion(int a1, unsigned int a2, int a3, int *a4)
{
  int v5; // eax

  *a4 = a3;
  if ( !a1 )
  {
    if ( a2 < 0x2001 )
    {
      *a4 = 496;
    }
    else if ( a2 < 0x2002 )
    {
      *a4 = 544;
    }
    else if ( a2 < 0x2003 )
    {
      *a4 = 552;
    }
    else if ( a2 < 0x3001 )
    {
      *a4 = 568;
    }
    else if ( a2 < 0x3002 )
    {
      *a4 = 576;
    }
    else if ( a2 < 0x3004 )
    {
      *a4 = 624;
    }
    else if ( a2 < 0x3005 )
    {
      *a4 = 632;
    }
    else if ( a2 < 0x300D )
    {
      *a4 = 656;
    }
    else if ( a2 < 0x4000 )
    {
      *a4 = 664;
    }
    else if ( a2 < 0x4002 )
    {
      *a4 = 696;
    }
    else if ( a2 < 0x5000 )
    {
      *a4 = 712;
    }
    else if ( a2 < 0x6000 )
    {
      *a4 = 832;
    }
    else if ( a2 < 0x6002 )
    {
      *a4 = 864;
    }
    else if ( a2 < 0x7000 )
    {
      *a4 = 880;
    }
    else if ( a2 < 0x7002 )
    {
      *a4 = 936;
    }
    else if ( a2 < 0x7003 )
    {
      *a4 = 952;
    }
    else if ( a2 < 0x7004 )
    {
      *a4 = 1008;
    }
    else if ( a2 < 0x8000 )
    {
      *a4 = 1032;
    }
    else if ( a2 < 0x9000 )
    {
      *a4 = 1056;
    }
    else if ( a2 < 0x9002 )
    {
      *a4 = 1104;
    }
    else if ( a2 < 0x9003 )
    {
      *a4 = 1112;
    }
    else if ( a2 < 0x9005 )
    {
      *a4 = 1128;
    }
    else if ( a2 < 0x9006 )
    {
      *a4 = 1144;
    }
    else if ( a2 < 0xA001 )
    {
      *a4 = 1152;
    }
    else if ( a2 < 0xA002 )
    {
      *a4 = 1160;
    }
    else if ( a2 < 0xA005 )
    {
      *a4 = 1168;
    }
    else if ( a2 < 0xA007 )
    {
      *a4 = 1176;
    }
    else if ( a2 < 0xA009 )
    {
      *a4 = 1184;
    }
    else if ( a2 < 0xB002 )
    {
      *a4 = 1192;
    }
    else if ( a2 < 0xB003 )
    {
      *a4 = 1208;
    }
    else if ( a2 < 0xE003 )
    {
      *a4 = 1232;
    }
    else if ( a2 < 0xF001 )
    {
      *a4 = 1264;
    }
    else if ( a2 < 0xF003 )
    {
      *a4 = 1288;
    }
    else if ( a2 >= 0x10003 )
    {
      v5 = a3;
      if ( a2 < 0x10004 )
        v5 = 1328;
      *a4 = v5;
    }
    else
    {
      *a4 = 1296;
    }
  }
  return 0LL;
}
