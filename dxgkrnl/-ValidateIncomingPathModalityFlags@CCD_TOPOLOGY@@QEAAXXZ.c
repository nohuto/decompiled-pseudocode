void __fastcall CCD_TOPOLOGY::ValidateIncomingPathModalityFlags(CCD_TOPOLOGY *this)
{
  unsigned int i; // ebx
  __int64 v3; // rax
  unsigned __int16 v4; // cx
  const signed __int64 *PathDescriptor; // rdi

  for ( i = 0; ; ++i )
  {
    v3 = *((_QWORD *)this + 8);
    v4 = v3 ? *(_WORD *)(v3 + 20) : 0;
    if ( i >= v4 )
      break;
    PathDescriptor = (const signed __int64 *)CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( _bittest64(PathDescriptor, 0x34u) )
    {
      WdLogSingleEntry1(1LL, 1245LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(PathDescriptor->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_PATH_SMI_TMI_FORCED_FIXED) == 0",
        1245LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*PathDescriptor & 0x800000) != 0 )
    {
      if ( (*PathDescriptor & 0x100) == 0 )
      {
        WdLogSingleEntry1(1LL, 1252LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"PathDescriptor->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_SMI_VALID",
          1252LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (*(_DWORD *)PathDescriptor & 0x20000) == 0 )
      {
        WdLogSingleEntry1(1LL, 1253LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"PathDescriptor->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_CONTENT_SIZE_VALID",
          1253LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
  }
}
