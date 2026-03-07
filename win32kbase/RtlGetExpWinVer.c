__int64 __fastcall RtlGetExpWinVer(__int64 a1)
{
  int MajorSubsystemVersion; // ebx
  WORD MinorSubsystemVersion; // di
  void *v3; // rcx
  PIMAGE_NT_HEADERS v4; // rax

  LOBYTE(MajorSubsystemVersion) = 3;
  LOBYTE(MinorSubsystemVersion) = 10;
  v3 = (void *)(a1 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v3 )
  {
    if ( !(_WORD)v3 )
    {
      v4 = RtlImageNtHeader(v3);
      if ( v4 )
      {
        MajorSubsystemVersion = v4->OptionalHeader.MajorSubsystemVersion;
        if ( MajorSubsystemVersion == 1 )
          LOBYTE(MajorSubsystemVersion) = 3;
        else
          MinorSubsystemVersion = v4->OptionalHeader.MinorSubsystemVersion;
      }
    }
  }
  return (unsigned __int8)MinorSubsystemVersion | (unsigned int)(unsigned __int16)((unsigned __int8)MajorSubsystemVersion << 8);
}
