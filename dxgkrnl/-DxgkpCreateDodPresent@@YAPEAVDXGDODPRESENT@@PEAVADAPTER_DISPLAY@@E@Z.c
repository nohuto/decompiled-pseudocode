struct DXGDODPRESENT *__fastcall DxgkpCreateDodPresent(struct ADAPTER_DISPLAY *a1, unsigned __int8 a2)
{
  unsigned __int8 *v4; // rax
  DXGDODPRESENT *v5; // rax
  unsigned int v6; // edi
  DXGDODPRESENT *v7; // rbx

  v4 = (unsigned __int8 *)operator new[](2920LL * *((unsigned int *)a1 + 24) + 144, 0x4B677844u, 64LL);
  if ( v4 )
  {
    v5 = DXGDODPRESENT::DXGDODPRESENT((DXGDODPRESENT *)v4, a1, v4 + 144, a2);
    v6 = 0;
    v7 = v5;
    if ( !*(_DWORD *)v5 )
      return v7;
    while ( (int)BLTQUEUE::Startup((char *)(*((_QWORD *)v7 + 1) + 2920LL * v6)) >= 0 )
    {
      if ( ++v6 >= *(_DWORD *)v7 )
        return v7;
    }
    DXGDODPRESENT::`scalar deleting destructor'(v7);
  }
  else
  {
    WdLogSingleEntry1(6LL, *((_QWORD *)a1 + 2));
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGDODPRESENT for display only adapter 0x%I64x!",
      *((_QWORD *)a1 + 2),
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 0LL;
}
