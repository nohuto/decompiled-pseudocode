/*
 * XREFs of sub_1800047A4 @ 0x1800047A4
 * Callers:
 *     sub_180004620 @ 0x180004620 (sub_180004620.c)
 *     sub_1800047A4 @ 0x1800047A4 (sub_1800047A4.c)
 * Callees:
 *     sub_1800047A4 @ 0x1800047A4 (sub_1800047A4.c)
 *     sub_1800049AC @ 0x1800049AC (sub_1800049AC.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     _Init_thread_footer @ 0x18006A3D0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18006A438 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D75C8 @ 0x1800D75C8 (sub_1800D75C8.c)
 */

LSTATUS __fastcall sub_1800047A4(
        HKEY a1,
        const wchar_t *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        REGSAM samDesired,
        LPSECURITY_ATTRIBUTES lpSecurityAttributes,
        HKEY *a8)
{
  const WCHAR *v8; // rdi
  wchar_t *v10; // rax
  wchar_t *v11; // rbx
  const WCHAR *v12; // r14
  int v13; // ebx
  int v14; // ebx
  LSTATUS result; // eax
  int v16; // ebx
  DWORD dwDisposition; // [rsp+50h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v20[528]; // [rsp+60h] [rbp-A0h] BYREF

  v8 = a2;
  if ( a8 )
    *a8 = 0LL;
  if ( !a2 )
    return 87;
  v10 = wcschr(a2, 0x5Cu);
  v11 = v10;
  if ( v10 )
  {
    if ( (unsigned __int64)(v10 - v8) < 0x104 )
    {
      o_wcsncpy_s(v20, 260LL, v8);
      v12 = (const WCHAR *)v20;
      v8 = v11 + 1;
      goto LABEL_6;
    }
    return 87;
  }
  v12 = v8;
LABEL_6:
  hKey = 0LL;
  v13 = sub_1800049AC(a1, v12, samDesired);
  if ( dword_18019EBB0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18019EBB0);
    if ( dword_18019EBB0 == -1 )
    {
      atexit(sub_18007D030);
      Init_thread_footer(&dword_18019EBB0);
    }
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    if ( (unsigned int)(v14 - 1) <= 1 )
    {
      dwDisposition = 0;
      goto LABEL_28;
    }
    return 5;
  }
  if ( !(unsigned __int8)sub_1800D75C8() )
    return 5;
  if ( qword_18019EBC0 ? qword_18019EBC0(hKey) : 87 )
    return 5;
  RegCloseKey(hKey);
  hKey = 0LL;
  dwDisposition = 0;
LABEL_28:
  result = RegCreateKeyExW(a1, v12, 0, 0LL, 0, samDesired, lpSecurityAttributes, &hKey, &dwDisposition);
  if ( !result )
  {
    if ( dwDisposition != 1 )
    {
      v16 = 5;
      goto LABEL_20;
    }
    if ( v12 != v8 )
    {
      v16 = sub_1800047A4((int)hKey, (int)v8, 0, 0, 0, samDesired, lpSecurityAttributes, (__int64)a8);
LABEL_20:
      RegCloseKey(hKey);
      return v16;
    }
    if ( a8 )
      *a8 = hKey;
    return 0;
  }
  return result;
}
