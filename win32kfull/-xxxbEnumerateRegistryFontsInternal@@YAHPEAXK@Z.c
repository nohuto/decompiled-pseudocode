/*
 * XREFs of ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C00356C8
 * Callers:
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C00B87A0 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C00B88F8 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C00B8A98 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 * Callees:
 *     xxxClientAddFontResourceW @ 0x1C003458C (xxxClientAddFontResourceW.c)
 *     ?vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z @ 0x1C003589C (-vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035F20 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     ThreadLockExchange @ 0x1C010A0D0 (ThreadLockExchange.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C01BBFDC (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall xxxbEnumerateRegistryFontsInternal(HANDLE KeyHandle, unsigned int a2)
{
  ULONG v4; // r14d
  __int64 result; // rax
  __int64 v6; // rdi
  ULONG i; // esi
  NTSTATUS v8; // eax
  unsigned __int64 v9; // rax
  __int16 v10; // bx
  WCHAR *v11; // r15
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  void *v14; // rbx
  ULONG ResultLength; // [rsp+38h] [rbp-69h] BYREF
  __int128 v16; // [rsp+40h] [rbp-61h] BYREF
  __int64 v17; // [rsp+50h] [rbp-51h]
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-49h] BYREF
  _BYTE v19[4]; // [rsp+68h] [rbp-39h] BYREF
  int v20; // [rsp+6Ch] [rbp-35h]
  unsigned __int16 v21[4]; // [rsp+B8h] [rbp+17h] BYREF
  wchar_t v22; // [rsp+C0h] [rbp+1Fh]

  memset_0(v19, 0, 0x48uLL);
  v4 = 1074;
  *(_QWORD *)v21 = *(_QWORD *)L".FON";
  v22 = aFon[4];
  ResultLength = 0;
  v17 = 0LL;
  v16 = 0LL;
  result = Win32AllocPoolZInit(1074LL, 1919972181LL);
  v6 = result;
  if ( result )
  {
    PushW32ThreadLock(result, &v16, Win32FreePool);
    for ( i = 0; ; ++i )
    {
      v8 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, (PVOID)v6, v4 - 10, &ResultLength);
      if ( v8 != -2147483643 && v8 != -1073741789 )
        goto LABEL_5;
      ResultLength += 10;
      v13 = Win32AllocPoolZInit(ResultLength, 1919972181LL);
      v14 = (void *)v13;
      if ( v13 )
      {
        ThreadLockExchange(v13, &v16);
        Win32FreePool((void *)v6);
        v4 = ResultLength;
        v6 = (__int64)v14;
        v8 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, v14, ResultLength - 10, &ResultLength);
        if ( v8 != -2147483643 && v8 != -1073741789 )
        {
LABEL_5:
          if ( v8 < 0 )
          {
            PopAndFreeAlwaysW32ThreadLock(&v16);
            return 1LL;
          }
          if ( *(_DWORD *)(v6 + 4) == 1 )
          {
            v9 = (unsigned __int64)*(unsigned int *)(v6 + 16) >> 1;
            v10 = *(_WORD *)(v6 + 2 * v9 + 20);
            *(_WORD *)(v6 + 2 * v9 + 20) = 0;
            vCheckMMInstance((unsigned __int16 *)(v6 + 20), (struct tagDESIGNVECTOR *)v19);
            *(_WORD *)(v6 + 2 * ((unsigned __int64)*(unsigned int *)(v6 + 16) >> 1) + 20) = v10;
            v11 = (WCHAR *)(v6 + *(unsigned int *)(v6 + 8));
            if ( wcschr(v11, 0x2Eu) )
            {
              v12 = (unsigned __int64)v19 & -(__int64)(v20 != 0);
              DestinationString = 0LL;
              RtlInitUnicodeString(&DestinationString, v11);
              xxxClientAddFontResourceW((void **)&DestinationString, a2, v12);
            }
            else
            {
              RtlStringCchCatW(v11, (unsigned __int64)(v4 - *(_DWORD *)(v6 + 8)) >> 1, v21);
            }
          }
        }
      }
    }
  }
  return result;
}
