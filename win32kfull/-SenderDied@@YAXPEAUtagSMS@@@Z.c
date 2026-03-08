/*
 * XREFs of ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x1C0095A8C
 * Callers:
 *     SendMsgCleanup @ 0x1C0094980 (SendMsgCleanup.c)
 * Callees:
 *     SetWakeBit @ 0x1C0038B60 (SetWakeBit.c)
 *     UnlinkSendListSms @ 0x1C0094A8C (UnlinkSendListSms.c)
 */

void __fastcall SenderDied(struct tagSMS *a1)
{
  __int64 v1; // r8
  int v2; // r9d
  int v4; // eax
  int v5; // ecx

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  if ( !v1 )
    v1 = *((_QWORD *)a1 + 8);
  v4 = *((_DWORD *)a1 + 21);
  *((_QWORD *)a1 + 4) = 0LL;
  v5 = v4 | 4;
  *((_DWORD *)a1 + 21) = v4 | 4;
  if ( (v4 & 0x4000) != 0 )
  {
    v2 = 1;
    v5 = v4 | 0xC;
    *((_DWORD *)a1 + 21) = v4 | 0xC;
  }
  if ( *(struct tagSMS **)(v1 + 504) == a1 )
    v2 = 1;
  if ( (*(_DWORD *)(v1 + 488) & 1) != 0 || !v2 )
  {
    if ( (v5 & 2) != 0 || (v5 & 9) == 1 )
      UnlinkSendListSms((__int64 *)a1);
    else
      *((_DWORD *)a1 + 21) = v5 | 8;
  }
  else
  {
    *((_QWORD *)a1 + 9) = 0LL;
    *((_DWORD *)a1 + 21) = v5 | 1;
    SetWakeBit(v1, 0x200u);
  }
}
