__int64 __fastcall EtwpLoadMicroarchitecturalProfileSource(const WCHAR *a1, unsigned __int16 *a2, const wchar_t *a3)
{
  unsigned int v6; // r14d
  __int64 result; // rax
  __int64 Pool2; // rax
  char *v9; // rdi
  int CpuVendor; // eax
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  int v14; // [rsp+3Ch] [rbp-C4h] BYREF
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+44h] [rbp-BCh] BYREF
  int v17; // [rsp+48h] [rbp-B8h] BYREF
  int v18; // [rsp+4Ch] [rbp-B4h] BYREF
  int v19; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+54h] [rbp-ACh] BYREF
  int v21; // [rsp+60h] [rbp-A0h] BYREF
  int *v22; // [rsp+68h] [rbp-98h]
  int v23; // [rsp+70h] [rbp-90h] BYREF
  int *v24; // [rsp+78h] [rbp-88h]
  int v25; // [rsp+80h] [rbp-80h] BYREF
  int *v26; // [rsp+88h] [rbp-78h]
  int v27; // [rsp+90h] [rbp-70h] BYREF
  int *v28; // [rsp+98h] [rbp-68h]
  int v29; // [rsp+A0h] [rbp-60h] BYREF
  int *v30; // [rsp+A8h] [rbp-58h]
  int v31; // [rsp+B0h] [rbp-50h] BYREF
  int *v32; // [rsp+B8h] [rbp-48h]
  int v33; // [rsp+C0h] [rbp-40h] BYREF
  int *v34; // [rsp+C8h] [rbp-38h]
  int v35; // [rsp+D0h] [rbp-30h] BYREF
  int *v36; // [rsp+D8h] [rbp-28h]
  int v37; // [rsp+E0h] [rbp-20h] BYREF
  int *v38; // [rsp+E8h] [rbp-18h]
  int v39; // [rsp+F0h] [rbp-10h] BYREF
  int *v40; // [rsp+F8h] [rbp-8h]
  _QWORD v41[78]; // [rsp+110h] [rbp+10h] BYREF

  if ( !a3 )
    return 3221225473LL;
  v20 = 0;
  v16 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v17 = 0;
  v18 = 0;
  v6 = wcsnlen(a3, 0xFEuLL) + 1;
  v11 = -1;
  v12 = -1;
  v19 = 0x10000;
  memset(v41, 0, 0x268uLL);
  LODWORD(v41[4]) = 4;
  v41[0] = EtwpQueryRegistryCallback;
  v41[3] = &v21;
  v41[2] = L"Event";
  v22 = &v11;
  v41[10] = &v23;
  v41[9] = L"Unit";
  v24 = &v12;
  v41[17] = &v25;
  v41[16] = L"Interval";
  v26 = &v19;
  v41[24] = &v27;
  v41[23] = L"AllowsHalt";
  v28 = &v20;
  v41[31] = &v29;
  v41[30] = L"CMask";
  v30 = &v13;
  v41[38] = &v31;
  v41[37] = L"EdgeDetect";
  v32 = &v15;
  v41[45] = &v33;
  v41[44] = L"AnyThread";
  v21 = 4;
  v41[7] = EtwpQueryRegistryCallback;
  LODWORD(v41[11]) = 4;
  v23 = 4;
  v41[14] = EtwpQueryRegistryCallback;
  LODWORD(v41[18]) = 4;
  v25 = 4;
  v41[21] = EtwpQueryRegistryCallback;
  LODWORD(v41[25]) = 4;
  v27 = 4;
  v41[28] = EtwpQueryRegistryCallback;
  LODWORD(v41[32]) = 4;
  v29 = 4;
  v41[35] = EtwpQueryRegistryCallback;
  LODWORD(v41[39]) = 4;
  v31 = 4;
  v41[42] = EtwpQueryRegistryCallback;
  LODWORD(v41[46]) = 4;
  v34 = &v16;
  v33 = 4;
  v41[52] = &v35;
  v41[49] = EtwpQueryRegistryCallback;
  v41[51] = L"CMaskInvert";
  v36 = &v14;
  v41[59] = &v37;
  v41[58] = L"HostGuest";
  v38 = &v17;
  v41[66] = &v39;
  v41[65] = L"PmuType";
  LODWORD(v41[53]) = 4;
  v35 = 4;
  v41[56] = EtwpQueryRegistryCallback;
  LODWORD(v41[60]) = 4;
  v37 = 4;
  v41[63] = EtwpQueryRegistryCallback;
  LODWORD(v41[67]) = 4;
  v39 = 4;
  v40 = &v18;
  result = RtlpQueryRegistryValues(0x40000000LL, a1, v41, 0LL);
  if ( (int)result < 0 )
    return result;
  if ( v11 == -1 || v12 == -1 )
    return 3221225473LL;
  Pool2 = ExAllocatePool2(256LL, 2 * v6 + 280, 1350005829LL);
  v9 = (char *)Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  wcsncpy_s((wchar_t *)(Pool2 + 280), v6, a3, v6);
  *((_DWORD *)v9 + 5) = 0;
  *((_DWORD *)v9 + 4) = 2097153;
  memset(v9 + 24, 0, 0x100uLL);
  KiCopyAffinityEx((__int64)(v9 + 16), *((_WORD *)v9 + 9), a2);
  CpuVendor = KiGetCpuVendor();
  if ( CpuVendor == 2 )
  {
    *v9 = v11;
    v9[1] = v12;
    v9[2] = v13;
    v9[3] = v14;
    v9[4] = v16;
    v9[5] = v15;
  }
  else if ( CpuVendor == 1 )
  {
    *(_WORD *)v9 = v11;
    v9[2] = v12;
    v9[3] = v13;
    v9[4] = v14;
    v9[5] = v15;
    v9[6] = v17;
    v9[7] = v18;
  }
  *((_DWORD *)v9 + 2) = v19;
  ((void (__fastcall *)(__int64, _QWORD, char *))off_140C020F0[0])(20LL, 2 * v6 + 280, v9);
  ExFreePoolWithTag(v9, 0x50777445u);
  return 0LL;
}
