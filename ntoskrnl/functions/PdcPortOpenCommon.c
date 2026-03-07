__int64 __fastcall PdcPortOpenCommon(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        __int64 *a4,
        int a5,
        int a6,
        NTSTRSAFE_PCWSTR pszSrc,
        int a8,
        _QWORD *a9)
{
  void *v13; // rdi
  __int64 Pool2; // rax
  _QWORD *v15; // rsi
  __int64 v16; // rax
  _DWORD *v17; // rax
  NTSTATUS v18; // ebx
  _QWORD v20[100]; // [rsp+30h] [rbp-338h] BYREF

  memset(v20, 0, sizeof(v20));
  v13 = 0LL;
  *a9 = 0LL;
  Pool2 = ExAllocatePool2(256LL, 1768LL, 1348691024LL);
  v15 = (_QWORD *)Pool2;
  if ( !Pool2 )
    goto LABEL_14;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_DWORD *)Pool2 = 1348691024;
  *(_QWORD *)(Pool2 + 1744) = a3;
  *(_DWORD *)(Pool2 + 16) = a1;
  *(_DWORD *)(Pool2 + 20) = a2;
  v16 = *a4;
  v15[219] = *a4;
  if ( !v16 && (((a2 - 4) & 0xFFFFFFFA) != 0 || a2 == 9) )
  {
    v18 = -1073741583;
    goto LABEL_15;
  }
  HIDWORD(v20[5]) = 5;
  v20[7] = __PAIR64__(a2, a1);
  if ( pszSrc )
    RtlStringCchCopyW((NTSTRSAFE_PWSTR)&v20[30] + 2, 0x40uLL, pszSrc);
  v20[1] = 0LL;
  v20[2] = 0LL;
  v20[0] = 52429560LL;
  v17 = (_DWORD *)ExAllocatePool2(256LL, 216LL, 1348691024LL);
  v13 = v17;
  if ( !v17 )
  {
LABEL_14:
    v18 = -1073741801;
    goto LABEL_15;
  }
  *v17 = 1;
  *((_QWORD *)v17 + 2) = v15;
  *((_QWORD *)v17 + 1) = v20;
  v18 = ZwPowerInformation(PdcInvocation, v17, 0xD8u, 0LL, 0);
  if ( v18 >= 0 )
  {
    *a9 = v15;
    v18 = 0;
LABEL_10:
    ExFreePoolWithTag(v13, 0);
    return (unsigned int)v18;
  }
LABEL_15:
  if ( v15 )
    PdcpPortReleaseResources(v15);
  if ( v13 )
    goto LABEL_10;
  return (unsigned int)v18;
}
