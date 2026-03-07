PVOID __stdcall FONTOBJ_pvTrueTypeFontFile(FONTOBJ *pfo, ULONG *pcjFile)
{
  void *v2; // rbx
  FONTOBJ *v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v4 = pfo;
  *pcjFile = 0;
  if ( pfo )
    v2 = RFONTOBJ::pvFile((RFONTOBJ *)&v4, pcjFile);
  v4 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4);
  return v2;
}
