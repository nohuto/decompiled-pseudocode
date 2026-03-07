__int64 __fastcall FChildVisible(__int64 a1)
{
  char v1; // dl

  v1 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
  while ( (v1 & 0xC0) == 0x40 )
  {
    a1 = *(_QWORD *)(a1 + 104);
    if ( !a1 )
      break;
    v1 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
    if ( (v1 & 0x10) == 0 )
      return 0LL;
  }
  return 1LL;
}
