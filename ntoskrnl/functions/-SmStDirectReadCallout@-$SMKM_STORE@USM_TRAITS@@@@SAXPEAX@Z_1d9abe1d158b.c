void __fastcall SMKM_STORE<SM_TRAITS>::SmStDirectReadCallout(_QWORD *a1)
{
  unsigned int Issue; // edi

  *((_DWORD *)a1 + 6) = 0;
  Issue = SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue(*a1, a1[1], a1[2]);
  ST_STORE<SM_TRAITS>::StReleaseReadContext((union _SLIST_HEADER *)*a1, a1[2]);
  if ( Issue != -1073741550 )
  {
    SMKM_STORE<SM_TRAITS>::SmStDirectReadComplete(*a1, a1[1], Issue);
    *((_DWORD *)a1 + 6) = 1;
  }
}
