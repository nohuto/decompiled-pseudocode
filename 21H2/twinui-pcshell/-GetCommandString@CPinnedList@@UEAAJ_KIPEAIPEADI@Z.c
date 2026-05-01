/*
 * XREFs of ?GetCommandString@CPinnedList@@UEAAJ_KIPEAIPEADI@Z @ 0x180155D00
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180039910 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPinnedList::GetCommandString(
        CPinnedList *this,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int *a4,
        PSTR pszDst,
        unsigned int cchBuf)
{
  char *v6; // rbx
  char v7; // si
  __int64 result; // rax
  _BYTE v9[528]; // [rsp+30h] [rbp-228h] BYREF

  v6 = 0LL;
  v7 = a3;
  if ( (a3 & 0xFFFFFFFB) != 0 )
  {
    if ( (a3 & 0xFFFFFFFB) == 1
      && a2 < 2
      && (*(int (__fastcall **)(char *, unsigned __int64, _BYTE *, __int64))(*((_QWORD *)this - 1) + 144LL))(
           (char *)this - 8,
           a2,
           v9,
           260LL) >= 0 )
    {
      v6 = v9;
    }
  }
  else if ( a2 < 2 )
  {
    v6 = (char *)(*(__int64 (__fastcall **)(char *, unsigned __int64, __int64, unsigned int *))(*((_QWORD *)this - 1)
                                                                                              + 160LL))(
                   (char *)this - 8,
                   a2,
                   a3,
                   a4);
  }
  result = 2147500033LL;
  if ( v6 )
  {
    if ( (v7 & 4) != 0 )
      return StringCchCopyW(pszDst, cchBuf, v6);
    else
      return SHUnicodeToAnsi((PCWSTR)v6, pszDst, cchBuf) == 0 ? 0x80004005 : 0;
  }
  return result;
}
