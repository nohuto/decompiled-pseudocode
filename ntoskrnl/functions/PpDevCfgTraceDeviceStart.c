void __fastcall PpDevCfgTraceDeviceStart(_DWORD *a1)
{
  bool v1; // zf

  if ( a1[75] == 771
    || a1[75] == 772
    || a1[75] == 773
    || a1[75] == 774
    || a1[75] == 775
    || a1[75] == 776
    || a1[75] == 777 )
  {
    v1 = (a1[99] & 0x6000) == 0;
  }
  else
  {
    if ( a1[75] == 778 || (a1[99] & 0x2000) == 0 )
      goto LABEL_12;
    v1 = a1[101] == 56;
  }
  if ( !v1 )
  {
LABEL_12:
    a1[176] &= ~1u;
    PiDevCfgLogDeviceStarted((__int64)a1);
  }
}
