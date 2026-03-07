struct RFONT *__fastcall ESTROBJ::GetLinkedRfontOnIndex(ESTROBJ *this, int a2, struct RFONTOBJ *a3)
{
  int v3; // r9d
  _QWORD *v4; // rdx

  if ( (*((_DWORD *)this + 58) & 0x1400) == 0 )
    return *(struct RFONT **)a3;
  v3 = *(_DWORD *)(*((_QWORD *)this + 26) + 4LL * a2);
  v4 = *(_QWORD **)a3;
  if ( v3 )
  {
    switch ( v3 )
    {
      case 1:
        return (struct RFONT *)v4[90];
      case 2:
        return (struct RFONT *)v4[91];
      case 3:
        return (struct RFONT *)v4[92];
      default:
        return *(struct RFONT **)(v4[93] + 8LL * (unsigned int)(v3 - 4));
    }
  }
  return (struct RFONT *)v4;
}
