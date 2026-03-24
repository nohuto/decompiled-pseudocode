/*
 * XREFs of ?LoadApiSetHost@@YAJPEAU_Win32kApiSetHost@@PEAU_UNICODE_STRING@@@Z @ 0x1C009C798
 * Callers:
 *     ?ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z @ 0x1C009C630 (-ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z.c)
 * Callees:
 *     ?FormFullImageName@@YAKPEBU_UNICODE_STRING@@PEAU1@1@Z @ 0x1C00B42D0 (-FormFullImageName@@YAKPEBU_UNICODE_STRING@@PEAU1@1@Z.c)
 */

__int64 __fastcall LoadApiSetHost(struct _Win32kApiSetHost *a1, struct _UNICODE_STRING *a2)
{
  struct _UNICODE_STRING *v4; // r14
  bool v5; // r15
  unsigned int v6; // edi
  int v7; // esi
  unsigned int SystemImage; // ebx
  struct _UNICODE_STRING v10; // [rsp+38h] [rbp-59h] BYREF
  UNICODE_STRING String2; // [rsp+48h] [rbp-49h] BYREF
  __int128 v12; // [rsp+58h] [rbp-39h]
  PVOID P[2]; // [rsp+68h] [rbp-29h] BYREF
  _QWORD v14[2]; // [rsp+78h] [rbp-19h] BYREF
  _OWORD SystemInformation[3]; // [rsp+88h] [rbp-9h] BYREF
  __int64 v16; // [rsp+B8h] [rbp+27h]

  *(_QWORD *)&v10.Length = 2883626LL;
  v14[0] = 3932218LL;
  *(_QWORD *)&String2.Length = 1966108LL;
  v10.Buffer = (PWSTR)L"\\SystemRoot\\System32\\";
  v14[1] = L"\\SystemRoot\\System32\\Drivers\\";
  v4 = &v10;
  v16 = 0LL;
  v5 = 0;
  String2.Buffer = L"win32kfull.sys";
  memset(SystemInformation, 0, sizeof(SystemInformation));
  if ( !RtlCompareUnicodeString(a2, &String2, 1u) )
  {
    *(_QWORD *)&v12 = 5505106LL;
    *((_QWORD *)&v12 + 1) = L"\\SystemRoot\\System32\\Drivers\\hidparse.sys";
    SystemInformation[0] = v12;
    v5 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, SystemInformation, 0x38uLL) >= 0;
  }
  v6 = -2147483647;
  *(_OWORD *)P = 0LL;
  v7 = 0;
  while ( 1 )
  {
    ++v7;
    if ( !FormFullImageName(v4, a2, (struct _UNICODE_STRING *)P) )
      break;
    SystemImage = MmLoadSystemImage(P, 0LL, 0LL, v6, (char *)a1 + 40, (char *)a1 + 32);
    ExFreePoolWithTag(P[1], 0);
    P[1] = 0LL;
    if ( SystemImage == -1073741411 || SystemImage == -1073741554 )
    {
      SystemImage = 0;
      goto LABEL_12;
    }
    if ( SystemImage == -1073741772 )
    {
      v6 &= ~1u;
      v4 = (struct _UNICODE_STRING *)v14;
      if ( v7 < 2 )
        continue;
    }
    goto LABEL_12;
  }
  SystemImage = -1073741801;
LABEL_12:
  if ( v5 )
    ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (char *)&SystemInformation[1] + 8, 8uLL);
  return SystemImage;
}
