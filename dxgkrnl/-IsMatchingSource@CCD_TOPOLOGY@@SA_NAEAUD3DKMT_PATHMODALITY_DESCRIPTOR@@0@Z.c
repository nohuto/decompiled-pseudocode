bool __fastcall CCD_TOPOLOGY::IsMatchingSource(
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a2)
{
  return *((_DWORD *)a1 + 6) == *((_DWORD *)a2 + 6)
      && *((_DWORD *)a1 + 4) == *((_DWORD *)a2 + 4)
      && *((_DWORD *)a1 + 5) == *((_DWORD *)a2 + 5);
}
