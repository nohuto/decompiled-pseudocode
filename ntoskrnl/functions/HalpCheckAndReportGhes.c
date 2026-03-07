char __fastcall HalpCheckAndReportGhes(__int64 a1)
{
  char v2; // si
  _QWORD *v3; // rcx
  _DWORD *v4; // rdi
  _DWORD *v6; // rbp

  v2 = 0;
  v3 = *(_QWORD **)(a1 + 40);
  if ( *v3 != -1LL )
  {
    if ( !*(_QWORD *)(a1 + 56) )
      *(_QWORD *)(a1 + 56) = MmMapIoSpaceEx(*v3, *(unsigned int *)(a1 + 48), 516LL);
    v4 = *(_DWORD **)(a1 + 56);
    if ( v4 )
    {
      if ( (*v4 & 2) != 0 )
      {
        HalpExtractGenericErrorData(a1);
        v6 = (_DWORD *)(a1 + 96);
        if ( *(_DWORD *)(a1 + 96) != 12 )
        {
          *v4 &= ~2u;
LABEL_13:
          PshedRetrieveErrorInfo(*(_QWORD *)(a1 + 24), a1 + 88);
          if ( *v6 == 12 )
            HalpSignalRAS(a1);
          WheaReportHwError(*(_QWORD *)(a1 + 24));
          return 1;
        }
      }
      else
      {
        if ( (*v4 & 1) == 0 )
          return v2;
        HalpExtractGenericErrorData(a1);
        v6 = (_DWORD *)(a1 + 96);
        if ( *(_DWORD *)(a1 + 96) != 12 )
        {
          *v4 &= ~1u;
          goto LABEL_13;
        }
      }
      *v4 = 0;
      goto LABEL_13;
    }
  }
  return v2;
}
