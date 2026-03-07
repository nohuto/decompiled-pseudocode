ULONG __stdcall KeQueryActiveProcessorCount(PKAFFINITY ActiveProcessors)
{
  __int64 v1; // rcx
  unsigned __int64 v3; // rdx

  if ( ActiveProcessors )
  {
    v3 = qword_140D1EFE8[0];
    *ActiveProcessors = qword_140D1EFE8[0];
    return (0x101010101010101LL
          * ((((v3 - ((v3 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
            + (((v3 - ((v3 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
            + ((((v3 - ((v3 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
              + (((v3 - ((v3 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  }
  else
  {
    LODWORD(v1) = KeQueryActiveProcessorCountEx(0);
  }
  return v1;
}
