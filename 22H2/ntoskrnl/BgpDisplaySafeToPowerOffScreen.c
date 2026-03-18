/*
 * XREFs of BgpDisplaySafeToPowerOffScreen @ 0x140672EB4
 * Callers:
 *     BgDisplaySafeToPowerOffScreen @ 0x140671AB0 (BgDisplaySafeToPowerOffScreen.c)
 * Callees:
 *     BgpClearScreen @ 0x140671B60 (BgpClearScreen.c)
 *     BcpDisplayCriticalString @ 0x14067237C (BcpDisplayCriticalString.c)
 *     BcpGetDisplayType @ 0x140672D10 (BcpGetDisplayType.c)
 */

__int64 BgpDisplaySafeToPowerOffScreen()
{
  unsigned int v0; // ebx
  int DisplayType; // esi
  __int64 v2; // r8
  int *v3; // rax
  int v4; // ecx
  _DWORD v6[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( (dword_140C0E4B0 & 2) != 0 )
  {
    v6[0] = DWORD2(BgInternal);
    v6[1] = DWORD1(BgInternal);
    v6[2] = HIDWORD(BgInternal);
    DisplayType = BcpGetDisplayType(v6);
    *(_DWORD *)(*(_QWORD *)(qword_140C70C60 + 24) + 40LL) = -16777216;
    BgpClearScreen(0xFF000000);
    v0 = 0;
    v3 = &dword_140C0B5A0[18 * DisplayType + 5];
    LODWORD(BcpCursor) = dword_140C0B5A0[18 * DisplayType + 4];
    v4 = *v3;
    HIDWORD(BcpCursor) = *v3;
    if ( v3 )
      dword_140C64B30 = v4;
    BcpDisplayCriticalString(&stru_140C70C50.Length, dword_140C0B5A0[18 * DisplayType + 2], v2, DisplayType);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v0;
}
