CHAR __stdcall RtlUpperChar(CHAR Character)
{
  RtlpIsUtf8Process();
  if ( (unsigned __int8)(Character - 97) <= 0x19u )
    return Character ^ 0x20;
  return Character;
}
