char __fastcall CitGetMonitorInfo(__int64 a1, __int64 a2)
{
  int CurrentDpiInfoFromHDev; // eax
  char v5; // dl
  __int64 v6; // rcx
  char v7; // dl
  unsigned __int16 v8; // cx
  __int64 v9; // rcx
  _BYTE v11[96]; // [rsp+20h] [rbp-68h] BYREF

  LOBYTE(CurrentDpiInfoFromHDev) = (unsigned __int8)memset(v11, 0, sizeof(v11));
  if ( a1 )
  {
    *(_WORD *)(a2 + 4) = *(_WORD *)(*(_QWORD *)(a1 + 40) + 36LL) - *(_WORD *)(*(_QWORD *)(a1 + 40) + 28LL);
    *(_WORD *)(a2 + 6) = *(_WORD *)(*(_QWORD *)(a1 + 40) + 40LL) - *(_WORD *)(*(_QWORD *)(a1 + 40) + 32LL);
    v5 = 0;
    v6 = *((_QWORD *)gpDispInfo + 13);
    while ( v6 && v6 != a1 )
    {
      v6 = *(_QWORD *)(v6 + 56);
      ++v5;
    }
    v7 = v5 & 7;
    *(_BYTE *)(a2 + 10) = v7;
    v8 = *(_WORD *)(*(_QWORD *)(a1 + 40) + 60LL);
    if ( v8 > 0x60u )
    {
      if ( v8 > 0x78u )
      {
        if ( v8 > 0x90u )
        {
          if ( v8 > 0xA8u )
          {
            if ( v8 > 0xC0u )
            {
              if ( v8 > 0xF0u )
              {
                LOBYTE(CurrentDpiInfoFromHDev) = 112;
                if ( v8 <= 0x120u )
                  LOBYTE(CurrentDpiInfoFromHDev) = 96;
              }
              else
              {
                LOBYTE(CurrentDpiInfoFromHDev) = 80;
              }
            }
            else
            {
              LOBYTE(CurrentDpiInfoFromHDev) = 64;
            }
          }
          else
          {
            LOBYTE(CurrentDpiInfoFromHDev) = 48;
          }
        }
        else
        {
          LOBYTE(CurrentDpiInfoFromHDev) = 32;
        }
      }
      else
      {
        LOBYTE(CurrentDpiInfoFromHDev) = 16;
      }
    }
    else
    {
      LOBYTE(CurrentDpiInfoFromHDev) = 0;
    }
    *(_BYTE *)(a2 + 10) = CurrentDpiInfoFromHDev | v7;
    v9 = *(_QWORD *)(a1 + 80);
    if ( v9 )
    {
      CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v9, (__int64)v11);
      if ( CurrentDpiInfoFromHDev >= 0 && (v11[92] & 4) != 0 )
        *(_BYTE *)(a2 + 10) |= 8u;
    }
  }
  return CurrentDpiInfoFromHDev;
}
