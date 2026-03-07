BOOL __stdcall EngControlSprites(WNDOBJ *pwo, FLONG fl)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  HDEV v7; // [rsp+50h] [rbp+18h] BYREF
  char v8; // [rsp+58h] [rbp+20h] BYREF

  if ( fl - 1 > 1 )
    return 0;
  v7 = *(HDEV *)(*(_QWORD *)(*(_QWORD *)&pwo[3].coClient.iUniq + 32LL) + 48LL);
  v5 = *((_QWORD *)v7 + 3);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v8, (struct PDEVOBJ *)&v7);
  v6 = 0LL;
  if ( *(_DWORD *)(v5 + 140) )
  {
    do
    {
      vSpDeviceControlSprites(*(HDEV *)(*(_QWORD *)(v5 + 144) + 8 * v6), (struct EWNDOBJ *)pwo, fl);
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < *(_DWORD *)(v5 + 140) );
  }
  else
  {
    vSpDeviceControlSprites(v7, (struct EWNDOBJ *)pwo, fl);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v8);
  return 1;
}
