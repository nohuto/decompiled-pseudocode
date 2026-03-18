/*
 * XREFs of NtUserEnumDisplayMonitors @ 0x1C005C570
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x1C004CD30 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     xxxEnumDisplayMonitors @ 0x1C00595A0 (xxxEnumDisplayMonitors.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$03@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C005C878 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     SetLastNtError @ 0x1C00D5700 (SetLastNtError.c)
 */

__int64 __fastcall NtUserEnumDisplayMonitors(
        HDC a1,
        __int64 a2,
        __int64 (__fastcall *a3)(struct tagMONITOR *, HDC, struct tagRECT *, __int64),
        __int64 a4)
{
  __int128 *v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v18; // [rsp+30h] [rbp-68h] BYREF
  BOOL v19; // [rsp+34h] [rbp-64h] BYREF
  __int64 v20; // [rsp+48h] [rbp-50h] BYREF
  __int128 *v21; // [rsp+50h] [rbp-48h]
  __int128 v22; // [rsp+60h] [rbp-38h] BYREF

  v6 = (__int128 *)a2;
  v22 = 0LL;
  v21 = (__int128 *)a2;
  if ( (unsigned int)dword_1C02883D8 > 5 && tlgKeywordOn((__int64)&dword_1C02883D8, 0x400000000000LL) )
  {
    v20 = 1LL;
    v18 = v6 != 0LL;
    v19 = a1 != 0LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (_DWORD)a1,
      (unsigned int)&unk_1C0255E6E,
      (_DWORD)a3,
      (unsigned int)&v19,
      (__int64)&v18,
      (__int64)&v20);
  }
  EnterSharedCrit((__int64)a1, a2, (__int64)a3, a4);
  if ( gbVideoInitialized )
  {
    if ( v6 )
    {
      if ( (unsigned __int64)v6 >= MmUserProbeAddress )
        v6 = (__int128 *)MmUserProbeAddress;
      v22 = *v6;
      v6 = &v22;
      v21 = &v22;
    }
    v12 = (int)xxxEnumDisplayMonitors(a1, (__int64)v6, a3, a4, 0);
    UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
    return v12;
  }
  else
  {
    UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
    return 0LL;
  }
}
