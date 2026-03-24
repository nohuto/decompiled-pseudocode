/*
 * XREFs of ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C0021E50
 * Callers:
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C0025C40 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C0025DD8 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C0025F30 (-xxxLoadPermanentFonts@@YAHXZ.c)
 * Callees:
 *     xxxAddFontResourceW @ 0x1C0021E04 (xxxAddFontResourceW.c)
 *     ?vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z @ 0x1C0021FF0 (-vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BFD00 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     ThreadLockExchange @ 0x1C00C15B0 (ThreadLockExchange.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C01D4470 (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall xxxbEnumerateRegistryFontsInternal(HANDLE KeyHandle, int a2)
{
  ULONG v4; // r14d
  __int64 result; // rax
  __int64 v6; // rdi
  ULONG i; // esi
  NTSTATUS v8; // eax
  unsigned __int64 v9; // rax
  __int16 v10; // bx
  WCHAR *v11; // rbx
  __int64 v12; // rax
  void *v13; // rbx
  ULONG ResultLength; // [rsp+30h] [rbp-59h] BYREF
  __int128 v15; // [rsp+38h] [rbp-51h] BYREF
  __int64 v16; // [rsp+48h] [rbp-41h]
  _DWORD v17[20]; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int16 v18[4]; // [rsp+A0h] [rbp+17h] BYREF
  wchar_t v19; // [rsp+A8h] [rbp+1Fh]

  memset(v17, 0, 0x48uLL);
  v4 = 1074;
  *(_QWORD *)v18 = *(_QWORD *)L".FON";
  v19 = aFon[4];
  ResultLength = 0;
  v16 = 0LL;
  v15 = 0LL;
  result = Win32AllocPool(1074LL, 1919972181LL);
  v6 = result;
  if ( result )
  {
    PushW32ThreadLock(result, &v15, Win32FreePool);
    for ( i = 0; ; ++i )
    {
      v8 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, (PVOID)v6, v4 - 10, &ResultLength);
      if ( v8 != -2147483643 && v8 != -1073741789 )
        goto LABEL_5;
      ResultLength += 10;
      v12 = Win32AllocPool(ResultLength, 1919972181LL);
      v13 = (void *)v12;
      if ( v12 )
      {
        ThreadLockExchange(v12, &v15);
        Win32FreePool((void *)v6);
        v4 = ResultLength;
        v6 = (__int64)v13;
        v8 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, v13, ResultLength - 10, &ResultLength);
        if ( v8 != -2147483643 && v8 != -1073741789 )
        {
LABEL_5:
          if ( v8 < 0 )
          {
            PopAndFreeAlwaysW32ThreadLock(&v15);
            return 1LL;
          }
          if ( *(_DWORD *)(v6 + 4) == 1 )
          {
            v9 = (unsigned __int64)*(unsigned int *)(v6 + 16) >> 1;
            v10 = *(_WORD *)(v6 + 2 * v9 + 20);
            *(_WORD *)(v6 + 2 * v9 + 20) = 0;
            vCheckMMInstance((unsigned __int16 *)(v6 + 20), (struct tagDESIGNVECTOR *)v17);
            *(_WORD *)(v6 + 2 * ((unsigned __int64)*(unsigned int *)(v6 + 16) >> 1) + 20) = v10;
            v11 = (WCHAR *)(v6 + *(unsigned int *)(v6 + 8));
            if ( wcschr(v11, 0x2Eu) )
              xxxAddFontResourceW(v11, a2, (unsigned __int64)v17 & -(__int64)(v17[1] != 0));
            else
              RtlStringCchCatW(v11, (unsigned __int64)(v4 - *(_DWORD *)(v6 + 8)) >> 1, v18);
          }
        }
      }
    }
  }
  return result;
}
