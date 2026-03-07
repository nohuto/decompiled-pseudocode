__int64 __fastcall GetAltTabInfo(int a1, __int64 a2, CHAR *a3, ULONG a4, int a5)
{
  __int64 v8; // rdi
  struct tagSwitchWndInfo *v9; // rax
  __int64 v10; // rax
  struct _LARGE_UNICODE_STRING *StrName; // rax
  ULONG BytesInMultiByteString[4]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v14; // [rsp+40h] [rbp-18h] BYREF

  v8 = a1;
  if ( gspwndAltTab && (v9 = Getpswi(gspwndAltTab)) != 0LL )
  {
    *(_DWORD *)(a2 + 4) = *((_DWORD *)v9 + 10);
    *(_DWORD *)(a2 + 8) = *((_DWORD *)v9 + 14);
    *(_DWORD *)(a2 + 12) = *((_DWORD *)v9 + 15);
    *(_DWORD *)(a2 + 16) = *((_DWORD *)v9 + 17);
    *(_DWORD *)(a2 + 20) = *((_DWORD *)v9 + 18);
    *(_DWORD *)(a2 + 24) = *((_DWORD *)v9 + 29);
    *(_DWORD *)(a2 + 28) = *((_DWORD *)v9 + 29);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)((char *)v9 + 84);
    if ( a4 && (int)v8 >= 0 )
    {
      if ( (int)v8 < *((_DWORD *)v9 + 10)
        && (_mm_lfence(), (v10 = HMValidateHandleNoSecure(*(_QWORD *)(*((_QWORD *)v9 + 2) + 8 * v8 + 32), 1)) != 0) )
      {
        if ( a5 )
        {
          BytesInMultiByteString[0] = 0;
          RtlUnicodeToMultiByteN(
            a3,
            a4 - 1,
            BytesInMultiByteString,
            *(PCWCH *)(v10 + 184),
            *(_DWORD *)(*(_QWORD *)(v10 + 40) + 184LL));
          if ( BytesInMultiByteString[0] >= a4 )
          {
            *a3 = 0;
            return 0LL;
          }
          a3[BytesInMultiByteString[0]] = 0;
        }
        else
        {
          v14 = 0LL;
          StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                      (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v10 + 184),
                      (struct _LARGE_UNICODE_STRING *)&v14);
          TextCopy((__int64)StrName, a3, a4);
        }
      }
      else if ( a5 )
      {
        *a3 = 0;
      }
      else
      {
        *(_WORD *)a3 = 0;
      }
    }
    return 1LL;
  }
  else
  {
    UserSetLastError(1168);
    return 0LL;
  }
}
