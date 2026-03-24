/*
 * XREFs of DefSetText @ 0x1C004AF8C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0049E28 (xxxRealDefWindowProc.c)
 *     NtUserDefSetText @ 0x1C0155230 (NtUserDefSetText.c)
 * Callees:
 *     DwmAsyncTextChange @ 0x1C00471A0 (DwmAsyncTextChange.c)
 *     DesktopAlloc @ 0x1C004B200 (DesktopAlloc.c)
 *     _IsTopLevelWindow @ 0x1C006FBE8 (_IsTopLevelWindow.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00FCF38 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00FCF9C (DesktopVerifyHeapLargeUnicodeString.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 */

__int64 __fastcall DefSetText(__int64 *a1, unsigned int *a2)
{
  __int64 v4; // rsi
  ULONG v5; // eax
  unsigned int v6; // eax
  __int64 v7; // rdx
  PVOID *v8; // r15
  __int64 v9; // rax
  unsigned int v10; // esi
  BOOL v11; // r12d
  WCHAR *v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  void *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  struct _LARGE_UNICODE_STRING *StrName; // rax
  _OWORD v21[3]; // [rsp+40h] [rbp-38h] BYREF
  ULONG BytesInUnicodeString; // [rsp+90h] [rbp+18h] BYREF

  BytesInUnicodeString = 0;
  v4 = a1[3];
  if ( !v4 || !a2 || !*((_QWORD *)a2 + 1) )
  {
    v10 = 1;
LABEL_28:
    *(_DWORD *)(a1[5] + 184) = 0;
    goto LABEL_22;
  }
  v5 = *a2;
  if ( *a2 >= 0x3FFFFFFE )
  {
    v10 = 0;
    goto LABEL_28;
  }
  if ( (a2[1] & 0x80000000) != 0 )
    v6 = 2 * v5;
  else
    v6 = v5 & 0xFFFFFFFE;
  v7 = v6 + 2;
  BytesInUnicodeString = v6 + 2;
  v8 = (PVOID *)(a1 + 23);
  if ( a1[23] )
  {
    v21[0] = 0LL;
    StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(a1 + 23),
                (struct _LARGE_UNICODE_STRING *)v21);
    DesktopVerifyHeapLargeUnicodeString(v4, StrName);
    v7 = BytesInUnicodeString;
  }
  if ( (*(_DWORD *)(a1[5] + 188) & 0x7FFFFFFFu) < (unsigned int)v7 )
  {
    if ( *v8 )
    {
      RtlFreeHeap(*(PVOID *)(v4 + 128), 0, *v8);
      v7 = BytesInUnicodeString;
    }
    v9 = DesktopAlloc(v4, v7, 4LL);
    if ( v9 )
      *((_QWORD *)*(v8 - 18) + 24) = v9 - ((_BYTE *)*(v8 - 18) - (_BYTE *)*(v8 - 17));
    else
      *((_QWORD *)*(v8 - 18) + 24) = 0LL;
    *v8 = (PVOID)v9;
    *(_DWORD *)(a1[5] + 184) = 0;
    if ( !*v8 )
    {
      *(_DWORD *)(a1[5] + 188) &= 0x80000000;
LABEL_33:
      v10 = 0;
      goto LABEL_22;
    }
    *(_DWORD *)(a1[5] + 188) ^= (BytesInUnicodeString ^ *(_DWORD *)(a1[5] + 188)) & 0x7FFFFFFF;
    LODWORD(v7) = BytesInUnicodeString;
  }
  v10 = 1;
  v11 = 1;
  if ( *a2 )
  {
    v12 = (WCHAR *)*v8;
    if ( (a2[1] & 0x80000000) != 0 )
    {
      v11 = RtlMultiByteToUnicodeN(v12, v7, &BytesInUnicodeString, *((const CHAR **)a2 + 1), *a2) >= 0;
      LODWORD(v7) = BytesInUnicodeString + 2;
      BytesInUnicodeString += 2;
    }
    else
    {
      memmove(v12, *((const void **)a2 + 1), *a2);
      LODWORD(v7) = BytesInUnicodeString;
    }
  }
  v13 = a1[5];
  if ( !v11 )
  {
    *(_DWORD *)(v13 + 184) = 0;
    goto LABEL_33;
  }
  *(_DWORD *)(v13 + 184) = v7 - 2;
  *((_WORD *)*v8 + ((unsigned __int64)*(unsigned int *)(a1[5] + 184) >> 1)) = 0;
LABEL_22:
  if ( (unsigned int)IsTopLevelWindow(a1) && (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v17 = (void *)ReferenceDwmApiPort(v16, v15);
    DwmAsyncTextChange(v17, *a1, v18, v19);
  }
  return v10;
}
