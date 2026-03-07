__int64 zzzStartFade()
{
  GreSetDCOwnerEx(*(_QWORD *)&gfade[2], 0LL, 0LL, 1LL);
  GreSetBitmapOwner(*(_QWORD *)&gfade[4], 0LL);
  zzzShowFade();
  gfade[11] = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
            - (40 * gfade[10] + 255) / 0xFF;
  return SetSystemTimer(gTermIO[1], 65526, (gfade[12] & 0x80u) != 0 ? 50 : 10, (int)xxxSystemTimerProc, 1);
}
