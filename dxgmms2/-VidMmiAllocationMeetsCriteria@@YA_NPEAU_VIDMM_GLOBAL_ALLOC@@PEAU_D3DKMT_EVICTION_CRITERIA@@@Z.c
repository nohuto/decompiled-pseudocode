bool __fastcall VidMmiAllocationMeetsCriteria(struct _VIDMM_GLOBAL_ALLOC *a1, struct _D3DKMT_EVICTION_CRITERIA *a2)
{
  bool result; // al
  UINT64 v3; // rax

  result = 1;
  if ( a2 )
  {
    v3 = *((_QWORD *)a1 + 2);
    if ( v3 < a2->MinimumSize
      || v3 > a2->MaximumSize
      || (a2->Value & 1) != 0 && (**((_DWORD **)a1 + 67) & 0xC0000000) == 0 )
    {
      return 0;
    }
  }
  return result;
}
