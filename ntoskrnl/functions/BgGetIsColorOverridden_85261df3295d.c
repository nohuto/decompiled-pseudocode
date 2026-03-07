char __fastcall BgGetIsColorOverridden(_DWORD *a1)
{
  if ( !(_BYTE)qword_140C0E530 )
    return 0;
  *a1 = HIDWORD(qword_140C0E530);
  return 1;
}
