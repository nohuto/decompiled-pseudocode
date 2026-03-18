/*
 * XREFs of TtmiGetTerminalById @ 0x1409A3220
 * Callers:
 *     TtmNotifyDeviceInput @ 0x1409A1A20 (TtmNotifyDeviceInput.c)
 *     TtmpPushTerminalState @ 0x1409A2BAC (TtmpPushTerminalState.c)
 *     TtmiSetDisplayPowerRequest @ 0x1409A4E68 (TtmiSetDisplayPowerRequest.c)
 *     TtmpSetDisplayRequestEnded @ 0x1409A5E3C (TtmpSetDisplayRequestEnded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TtmiGetTerminalById(_QWORD *a1, __int64 a2, int a3)
{
  __int64 *v3; // r9
  __int64 **v4; // rdx
  __int64 *v5; // rax

  v3 = 0LL;
  v4 = (__int64 **)(a2 + 40);
  v5 = *v4;
  while ( v5 != (__int64 *)v4 )
  {
    v3 = v5;
    if ( *((_DWORD *)v5 + 7) == a3 )
      break;
    v5 = (__int64 *)*v5;
    v3 = 0LL;
  }
  *a1 = v3;
  return v3 == 0LL ? 0xC0000225 : 0;
}
