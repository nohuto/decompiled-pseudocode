/*
 * XREFs of InitializeGreCSRSS @ 0x1C009F4FC
 * Callers:
 *     Win32kBaseUserInitialize @ 0x1C00C6170 (Win32kBaseUserInitialize.c)
 * Callees:
 *     DrvNotifySessionStateChange @ 0x1C009F810 (DrvNotifySessionStateChange.c)
 *     ?GetLanguageID@@YAGXZ @ 0x1C009F890 (-GetLanguageID@@YAGXZ.c)
 *     ?vCheckIsSetupRunning@@YAXXZ @ 0x1C009FA34 (-vCheckIsSetupRunning@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 InitializeGreCSRSS()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx
  __int64 v2; // rsi
  _DWORD *v3; // r14
  USHORT *v4; // rbp
  USHORT *v5; // rdi
  int v6; // edx
  _DWORD *v7; // rax
  __int64 v8; // rcx
  USHORT v9; // cx
  BOOL v10; // eax

  v0 = 0;
  if ( (int)DrvNotifySessionStateChange(0LL) >= 0 && qword_1C02D72C0 && !(unsigned int)qword_1C02D72C0() )
  {
    v2 = *(_QWORD *)(SGDGetSessionState(v1) + 24);
    *(_WORD *)(v2 + 152) = GetLanguageID();
    v3 = qword_1C02D5AC8 ? (_DWORD *)qword_1C02D5AC8() : 0LL;
    v4 = qword_1C02D5AA8 ? (USHORT *)qword_1C02D5AA8() : 0LL;
    v5 = qword_1C02D5AB8 ? (USHORT *)qword_1C02D5AB8() : 0LL;
    RtlGetDefaultCodePage(v5, v4);
    v6 = *v5;
    v7 = &codepages;
    *(_BYTE *)(v2 + 168) = 0;
    *(_DWORD *)(v2 + 8080) = 1;
    v8 = 0LL;
    while ( *v7 != v6 )
    {
      v8 = (unsigned int)(v8 + 1);
      ++v7;
      if ( (unsigned int)v8 >= 0x11 )
        goto LABEL_13;
    }
    *(_DWORD *)(v2 + 8080) = *((_DWORD *)&fs + v8);
    *(_BYTE *)(v2 + 168) = *((_BYTE *)&charsets + 4 * v8);
LABEL_13:
    if ( *v5 == 936 || (unsigned __int16)(*v5 - 949) <= 1u )
      *v3 = 3;
    v9 = *v5;
    v10 = *v5 == 932 || v9 == 949 || v9 == 950 || v9 == 936;
    *(_DWORD *)(v2 + 156) = v10;
    if ( qword_1C02D5AD0 && (int)qword_1C02D5AD0() >= 0 && qword_1C02D5AD8 )
      qword_1C02D5AD8();
    vCheckIsSetupRunning();
    if ( qword_1C02D5B08 && (int)qword_1C02D5B08() >= 0 && qword_1C02D5B10 )
      qword_1C02D5B10();
    if ( qword_1C02D5BE0
      && (int)qword_1C02D5BE0() >= 0
      && (!qword_1C02D5B18 || (int)qword_1C02D5B18() < 0 || qword_1C02D5B20 && (unsigned int)qword_1C02D5B20())
      && (!qword_1C02D5B28 || (int)qword_1C02D5B28() < 0 || qword_1C02D5B30 && (unsigned int)qword_1C02D5B30()) )
    {
      if ( qword_1C02D5B38 && (int)qword_1C02D5B38() >= 0 && qword_1C02D5B40 )
        qword_1C02D5B40();
      if ( qword_1C02D5B48 && (int)qword_1C02D5B48() >= 0 && qword_1C02D5B50 )
        qword_1C02D5B50();
      if ( qword_1C02D5B58 && (int)qword_1C02D5B58() >= 0 && qword_1C02D5B70 )
        qword_1C02D5B70();
      if ( !qword_1C02D5B60 || (int)qword_1C02D5B60() < 0 )
        return 1LL;
      if ( qword_1C02D5B68 )
      {
        LOBYTE(v0) = (unsigned int)qword_1C02D5B68() != 0;
        return v0;
      }
    }
  }
  return 0LL;
}
