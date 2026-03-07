bool __fastcall CCD_TOPOLOGY::IsMatchingSource(
        const struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1,
        const struct _LUID *a2,
        int a3)
{
  return *((_DWORD *)a1 + 6) == a3 && *((_DWORD *)a1 + 4) == a2->LowPart && *((_DWORD *)a1 + 5) == a2->HighPart;
}
