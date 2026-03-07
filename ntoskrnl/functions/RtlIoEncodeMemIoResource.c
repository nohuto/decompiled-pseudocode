NTSTATUS __stdcall RtlIoEncodeMemIoResource(
        PIO_RESOURCE_DESCRIPTOR Descriptor,
        UCHAR Type,
        ULONGLONG Length,
        ULONGLONG Alignment,
        ULONGLONG MinimumAddress,
        ULONGLONG MaximumAddress)
{
  USHORT v6; // dx
  ULONGLONG v8; // r10
  ULONGLONG v9; // r8
  __int64 j; // rax
  __int64 i; // rax
  ULONGLONG v12; // rax
  __int16 v13; // ax
  ULONGLONG v14; // rax
  ULONGLONG v15; // rax
  ULONGLONG v16; // rax

  if ( ((Type - 3) & 0xFB) != 0 && (Type != 1 || Length > 0xFFFFFFFF || Alignment > 0xFFFFFFFF) )
    return -1073741811;
  *(_OWORD *)&Descriptor->u.BusNumber.MaxBusNumber = __PAIR128__(MaximumAddress, MinimumAddress);
  if ( Type == 1 )
  {
    Descriptor->Type = 1;
    goto LABEL_6;
  }
  v6 = Descriptor->Flags & 0xF1FF;
  Descriptor->Flags = v6;
  if ( Length <= 0xFFFFFFFF )
  {
    if ( Alignment <= 0xFFFFFFFF )
    {
      Descriptor->Type = 3;
LABEL_6:
      Descriptor->u.Port.Length = Length;
      Descriptor->u.Port.Alignment = Alignment;
      return 0;
    }
LABEL_18:
    v8 = Length >> 8;
    if ( Length == (unsigned __int64)(unsigned int)(Length >> 8) << 8 && Alignment <= 0xFFFFFFFF00LL )
    {
      v9 = Alignment >> 8;
      for ( i = (unsigned int)(Alignment >> 8); Alignment != i << 8; i = (unsigned int)v9 )
      {
        v12 = Alignment;
        Alignment *= 2LL;
        if ( Alignment < v12 )
          return -1073741823;
        LODWORD(v9) = Alignment >> 8;
      }
      v13 = 512;
LABEL_25:
      Descriptor->Type = 7;
      Descriptor->Flags = v13 | v6;
      Descriptor->u.Port.Length = v8;
      Descriptor->u.Port.Alignment = v9;
      return 0;
    }
    return -1073741823;
  }
  if ( Length <= 0xFFFFFFFF00LL )
    goto LABEL_18;
  if ( Length > 0xFFFFFFFF0000LL )
  {
    if ( Length <= 0xFFFFFFFF00000000uLL )
    {
      v8 = HIDWORD(Length);
      if ( Length == HIDWORD(Length) << 32 && Alignment <= 0xFFFFFFFF00000000uLL )
      {
        v9 = HIDWORD(Alignment);
        v15 = HIDWORD(Alignment);
        while ( Alignment != v15 << 32 )
        {
          v16 = Alignment;
          Alignment *= 2LL;
          if ( Alignment < v16 )
            return -1073741823;
          v15 = HIDWORD(Alignment);
          v9 = HIDWORD(Alignment);
        }
        v13 = 2048;
        goto LABEL_25;
      }
    }
  }
  else
  {
    v8 = Length >> 16;
    if ( Length == (unsigned __int64)(unsigned int)(Length >> 16) << 16 && Alignment <= 0xFFFFFFFF0000LL )
    {
      v9 = Alignment >> 16;
      for ( j = (unsigned int)(Alignment >> 16); Alignment != j << 16; j = (unsigned int)v9 )
      {
        v14 = Alignment;
        Alignment *= 2LL;
        if ( Alignment < v14 )
          return -1073741823;
        LODWORD(v9) = Alignment >> 16;
      }
      v13 = 1024;
      goto LABEL_25;
    }
  }
  return -1073741823;
}
