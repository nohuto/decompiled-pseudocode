__int64 __fastcall ACPIWmiRegisterGuids(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  char *v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-18h]

  *a3 = 0;
  *(_QWORD *)&v7 = 0x477D2D48DAB01D4DLL;
  *((_QWORD *)&v7 + 1) = 0x6BF0E60CADDAC3B1LL;
  if ( a2 >= 0xCA )
  {
    memset(a1, 0, 0xCAuLL);
    a1[3] = 170;
    *a1 = 202;
    a1[4] = 1;
    a1[2] = 56;
    a1[10] |= 0x81000u;
    a1[11] = 0;
    *((_QWORD *)a1 + 6) = 0LL;
    *(_OWORD *)(a1 + 6) = v7;
    *((_WORD *)a1 + 28) = 112;
    *(_OWORD *)((char *)a1 + 58) = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI";
    *(_OWORD *)((char *)a1 + 74) = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Services\\ACPI";
    *(_OWORD *)((char *)a1 + 90) = *(_OWORD *)L"e\\System\\CurrentControlSet\\Services\\ACPI";
    *(_OWORD *)((char *)a1 + 106) = *(_OWORD *)L"\\CurrentControlSet\\Services\\ACPI";
    *(_OWORD *)((char *)a1 + 122) = *(_OWORD *)L"ControlSet\\Services\\ACPI";
    *(_OWORD *)((char *)a1 + 138) = *(_OWORD *)L"et\\Services\\ACPI";
    *(_OWORD *)((char *)a1 + 154) = *(_OWORD *)L"ces\\ACPI";
    v6 = (char *)a1 + (unsigned int)a1[3];
    *(_WORD *)v6 = 30;
    *(_OWORD *)(v6 + 2) = *(_OWORD *)L"ACPIMOFResource";
    *(_QWORD *)(v6 + 18) = *(_QWORD *)L"esource";
    *(_DWORD *)(v6 + 26) = *(_DWORD *)L"rce";
    *((_WORD *)v6 + 15) = aAcpimofresourc[14];
    *a3 = 202;
  }
  else
  {
    if ( a2 < 4 )
      return 3221225507LL;
    *a1 = 202;
    *a3 = 4;
  }
  return 0LL;
}
