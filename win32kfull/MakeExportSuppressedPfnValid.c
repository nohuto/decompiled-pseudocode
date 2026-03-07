NTSTATUS __fastcall MakeExportSuppressedPfnValid(__int64 a1)
{
  NTSTATUS result; // eax
  int v3; // [rsp+30h] [rbp-9h] BYREF
  __int64 ProcessInformation; // [rsp+38h] [rbp-1h] BYREF
  _QWORD v5[2]; // [rsp+40h] [rbp+7h] BYREF
  _DWORD v6[2]; // [rsp+50h] [rbp+17h] BYREF
  int *v7; // [rsp+58h] [rbp+1Fh]
  _QWORD *v8; // [rsp+60h] [rbp+27h]
  __int64 v9; // [rsp+68h] [rbp+2Fh]
  __int64 v10; // [rsp+70h] [rbp+37h]
  _QWORD v11[2]; // [rsp+78h] [rbp+3Fh] BYREF

  ProcessInformation = 7LL;
  v3 = 0;
  result = ZwQueryInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessCookie|ProcessUserModeIOPL,
             &ProcessInformation,
             8u,
             0LL);
  if ( result >= 0 && (ProcessInformation & 0x200000000LL) != 0 )
  {
    v6[1] = 0;
    v9 = 0LL;
    v10 = 0LL;
    v5[0] = a1 & 0xFFFFFFFFFFFFF000uLL;
    v7 = &v3;
    v5[1] = 4096LL;
    v8 = v11;
    v11[1] = 4LL;
    v11[0] = a1 & 0xFFF;
    v6[0] = 1;
    return ZwSetInformationVirtualMemory(-1LL, 2LL, 1LL, v5, v6, 40, v3);
  }
  return result;
}
