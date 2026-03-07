NTSTATUS __stdcall RtlCmEncodeMemIoResource(
        PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor,
        UCHAR Type,
        ULONGLONG Length,
        ULONGLONG Start)
{
  USHORT v4; // dx
  ULONGLONG v6; // r9
  __int16 v7; // ax

  if ( ((Type - 3) & 0xFB) != 0 && (Type != 1 || Length > 0xFFFFFFFF) )
    return -1073741811;
  Descriptor->u.Generic.Start.QuadPart = Start;
  if ( Type == 1 )
  {
    Descriptor->Type = 1;
    goto LABEL_5;
  }
  v4 = Descriptor->Flags & 0xF1FF;
  Descriptor->Flags = v4;
  if ( Length <= 0xFFFFFFFF )
  {
    Descriptor->Type = 3;
LABEL_5:
    Descriptor->u.Generic.Length = Length;
    return 0;
  }
  if ( Length > 0xFFFFFFFF00LL )
  {
    if ( Length > 0xFFFFFFFF0000LL )
    {
      if ( Length <= 0xFFFFFFFF00000000uLL )
      {
        v6 = HIDWORD(Length);
        if ( Length == HIDWORD(Length) << 32 )
        {
          v7 = 2048;
          goto LABEL_14;
        }
      }
    }
    else
    {
      v6 = Length >> 16;
      if ( Length == (unsigned __int64)(unsigned int)(Length >> 16) << 16 )
      {
        v7 = 1024;
        goto LABEL_14;
      }
    }
  }
  else
  {
    v6 = Length >> 8;
    if ( Length == (unsigned __int64)(unsigned int)(Length >> 8) << 8 )
    {
      v7 = 512;
LABEL_14:
      Descriptor->Type = 7;
      Descriptor->Flags = v7 | v4;
      Descriptor->u.Generic.Length = v6;
      return 0;
    }
  }
  return -1073741823;
}
