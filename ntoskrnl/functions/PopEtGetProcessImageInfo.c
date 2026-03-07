__int64 __fastcall PopEtGetProcessImageInfo(__int64 a1, __int64 a2)
{
  __int64 ProcessSectionBaseAddress; // rax
  __int64 v4; // rax

  *(_QWORD *)a2 = 0LL;
  if ( (*(_DWORD *)(a1 + 2172) & 1) == 0 )
  {
    ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(a1);
    if ( ProcessSectionBaseAddress )
    {
      v4 = RtlImageNtHeader(ProcessSectionBaseAddress);
      if ( v4 )
      {
        *(_DWORD *)a2 = *(_DWORD *)(v4 + 88);
        *(_DWORD *)(a2 + 4) = *(_DWORD *)(v4 + 8);
      }
    }
  }
  return 0LL;
}
