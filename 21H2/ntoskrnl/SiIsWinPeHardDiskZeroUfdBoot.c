/*
 * XREFs of SiIsWinPeHardDiskZeroUfdBoot @ 0x14077B214
 * Callers:
 *     SiGetBiosSystemDisk @ 0x14077B080 (SiGetBiosSystemDisk.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _snwscanf_s @ 0x1403D7450 (_snwscanf_s.c)
 *     SiIsWinPEBoot @ 0x140602560 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceNameFromRegistry @ 0x140602788 (SiGetBootDeviceNameFromRegistry.c)
 *     SiTranslateSymbolicLink @ 0x140602B3C (SiTranslateSymbolicLink.c)
 *     SiIssueSynchronousIoctl @ 0x140973A2C (SiIssueSynchronousIoctl.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

bool __fastcall SiIsWinPeHardDiskZeroUfdBoot(int a1, __int64 a2, __int64 a3, int a4)
{
  char v4; // bl
  bool result; // al
  __int64 v6; // r8
  int v7; // r9d
  wchar_t *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // eax
  bool v12; // zf
  int v13; // [rsp+30h] [rbp-9h] BYREF
  int v14; // [rsp+34h] [rbp-5h] BYREF
  int v15; // [rsp+38h] [rbp-1h] BYREF
  wchar_t *Src; // [rsp+40h] [rbp+7h] BYREF
  wchar_t *v17; // [rsp+48h] [rbp+Fh] BYREF
  __int64 v18; // [rsp+50h] [rbp+17h] BYREF
  int v19; // [rsp+58h] [rbp+1Fh]
  __int128 v20; // [rsp+60h] [rbp+27h]
  __int128 v21; // [rsp+70h] [rbp+37h]
  __int64 v22; // [rsp+80h] [rbp+47h]

  v4 = 0;
  Src = 0LL;
  v17 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v14 = 0;
  v13 = 0;
  v18 = 0LL;
  v19 = 0;
  v15 = 0;
  result = SiIsWinPEBoot(a1, a2, a3, a4);
  if ( result )
  {
    if ( (int)SiGetBootDeviceNameFromRegistry((int)L"FirmwareBootDevice", &Src, v6, v7) >= 0 )
    {
      v8 = Src;
      v9 = -1LL;
      do
        ++v9;
      while ( Src[v9] );
      if ( snwscanf_s(Src, v9 + 1, L"multi(%d)disk(%d)rdisk(%d)", &v13, &v14, &v15) == 3
        && !v13
        && !v14
        && !v15
        && SiTranslateSymbolicLink(L"\\ArcName\\multi(0)disk(0)rdisk(0)", &v17) >= 0 )
      {
        ExFreePoolWithTag(v8, 0);
        v19 = 0;
        v11 = SiIssueSynchronousIoctl(v17, v10, &v18);
        if ( v11 >= 0 )
          v12 = HIDWORD(v21) == 7;
        else
          v12 = v11 == -1073741766;
        if ( v12 )
          return 1;
      }
    }
    return v4;
  }
  return result;
}
