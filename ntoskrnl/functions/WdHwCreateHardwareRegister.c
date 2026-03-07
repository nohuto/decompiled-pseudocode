__int64 __fastcall WdHwCreateHardwareRegister(
        LARGE_INTEGER PhysicalAddress,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  unsigned int v4; // edi
  char v6; // bp
  __int64 v8; // rcx
  unsigned __int8 v9; // r14
  __int64 Method; // rax
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // rax
  char v14; // r9
  __int64 v15; // r15
  PVOID QuadPart; // rax

  v4 = 0;
  v6 = a2;
  if ( !PhysicalAddress.QuadPart )
    return (unsigned int)-1073741811;
  if ( (unsigned __int8)(a3 - 1) > 2u )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v8 = (unsigned int)a3 - 1;
  v9 = 1 << (a3 - 1);
  LOBYTE(v8) = a2;
  LOBYTE(a2) = v9;
  Method = WdHwpGetReadMethod(v8, a2);
  LOBYTE(v11) = v6;
  v12 = Method;
  v13 = WdHwpGetWriteMethod(v11);
  v15 = v13;
  if ( !v12 || !v13 )
    return (unsigned int)-1073741811;
  if ( v6 )
  {
    if ( v6 == v14 )
    {
      QuadPart = (PVOID)PhysicalAddress.QuadPart;
      goto LABEL_11;
    }
    return (unsigned int)-1073741811;
  }
  QuadPart = HalMapIoSpace(PhysicalAddress, v9, MmNonCached);
  if ( QuadPart )
  {
LABEL_11:
    *(_DWORD *)(a4 + 10) = 0;
    *(_WORD *)(a4 + 14) = 0;
    *(LARGE_INTEGER *)a4 = PhysicalAddress;
    *(_BYTE *)(a4 + 8) = v6;
    *(_BYTE *)(a4 + 9) = v9;
    *(_QWORD *)(a4 + 16) = QuadPart;
    *(_QWORD *)(a4 + 24) = v12;
    *(_QWORD *)(a4 + 32) = v15;
    return v4;
  }
  return (unsigned int)-1073741670;
}
