__int64 RotBarInit()
{
  _DWORD *v0; // rax

  v0 = pbih;
  PaletteNum = 0;
  AnimBarPos = 0;
  PltRotBarStatus = 1;
  *((_DWORD *)pbih + 4) = 0;
  v0[8] = 0;
  v0[9] = 0;
  v0[1] = 1;
  v0[2] = 1;
  v0[6] = 2834;
  v0[7] = 2834;
  *v0 = 40;
  v0[3] = 262145;
  v0[5] = 4;
  VidScreenToBufferBlt(&Square1, 0LL, 0LL, 6LL, 9, 4);
  VidScreenToBufferBlt(&Square2, 8LL, 0LL, 6LL, 9, 4);
  VidScreenToBufferBlt(&Square3, 16LL, 0LL, 6LL, 9, 4);
  return VidSolidColorFill(0LL, 0LL, 22LL, 9LL, 0);
}
