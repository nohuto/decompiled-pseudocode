struct SPRITE *__fastcall pSpReverseFindInZForPidLock(struct SPRITE *a1, struct _RECTL *a2)
{
  int v2; // r8d
  int v3; // r9d
  int v4; // r10d
  int v5; // r11d

  while ( a1
       && ((unsigned int)bIsCursorSprite(a1)
        || !*((_QWORD *)a1 + 16)
        || (*(_DWORD *)a1 & 0x400) != 0
        || *((_DWORD *)a1 + 20) > v4
        || *((_DWORD *)a1 + 21) > v5
        || *((_DWORD *)a1 + 22) < v2
        || *((_DWORD *)a1 + 23) < v3) )
    a1 = (struct SPRITE *)*((_QWORD *)a1 + 4);
  return a1;
}
