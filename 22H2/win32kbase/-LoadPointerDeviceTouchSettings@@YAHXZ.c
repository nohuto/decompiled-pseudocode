/*
 * XREFs of ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C0095C9C
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C0095570 (ReadPointerDeviceSettings.c)
 *     GetTouchTimeFromCPLValue @ 0x1C013F090 (GetTouchTimeFromCPLValue.c)
 * Callees:
 *     GetDWORDSettingValues @ 0x1C0095EC0 (GetDWORDSettingValues.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 LoadPointerDeviceTouchSettings(void)
{
  struct tagDEVICECONFIG_SETTING near **v0; // rbx
  __int64 result; // rax

  if ( !gTouchMonitor )
  {
    v0 = off_1C0283038;
    if ( qword_1C0296DD8 && (int)qword_1C0296DD8() >= 0 && qword_1C0296DE0 )
      qword_1C0296DE0(v0);
    if ( !(unsigned int)GetDWORDSettingValues(2LL, off_1C0283038) )
      return 0LL;
  }
  if ( !gMultiTouchMonitor && !(unsigned int)GetDWORDSettingValues(3LL, off_1C0283028) )
    return 0LL;
  gTouchMonitor = 1;
  result = 1LL;
  gMultiTouchMonitor = 1;
  return result;
}
