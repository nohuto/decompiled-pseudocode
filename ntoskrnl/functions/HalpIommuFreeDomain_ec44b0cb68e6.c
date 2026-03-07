void __fastcall HalpIommuFreeDomain(__int64 a1, __int64 a2)
{
  void (__fastcall *v4)(_QWORD, __int64, _QWORD); // rax

  if ( !HalpHvIommu )
  {
    HalpIommuFlushDomainTB(a1, a2, 0, 0LL);
    v4 = *(void (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 80);
    if ( v4 )
      v4(*(_QWORD *)(a1 + 16), a2, 0LL);
    if ( *(_DWORD *)a2 != 3 || (*(_BYTE *)(a2 + 16) & 4) == 0 )
      HalpIommuFreeDomainId(a1, *(unsigned int *)(a2 + 48));
  }
}
