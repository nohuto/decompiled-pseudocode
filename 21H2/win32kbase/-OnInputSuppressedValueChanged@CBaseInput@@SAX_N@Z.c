/*
 * XREFs of ?OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z @ 0x1C01DC4B4
 * Callers:
 *     UserPowerInfoCallout @ 0x1C007AEB8 (UserPowerInfoCallout.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

void __fastcall CBaseInput::OnInputSuppressedValueChanged(char a1)
{
  struct DEVICEINFO *i; // rbx
  int v3; // r8d
  __int64 v4; // rax
  int v5; // ecx
  int v6; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-9h] BYREF
  _DWORD *v8; // [rsp+60h] [rbp+17h]
  int v9; // [rsp+68h] [rbp+1Fh]
  int v10; // [rsp+6Ch] [rbp+23h]
  __int64 v11; // [rsp+70h] [rbp+27h]
  _DWORD v12[2]; // [rsp+78h] [rbp+2Fh] BYREF
  int *v13; // [rsp+80h] [rbp+37h]
  int v14; // [rsp+88h] [rbp+3Fh]
  int v15; // [rsp+8Ch] [rbp+43h]

  RIMLockExclusive((__int64)&CBaseInput::_sLock);
  for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( a1 )
    {
      *((_DWORD *)i + 576) = 0;
    }
    else if ( *((_DWORD *)i + 576)
           && (unsigned int)dword_1C028D6F0 > 5
           && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL) )
    {
      v15 = 0;
      v10 = 0;
      v13 = &v6;
      v6 = v3;
      v8 = v12;
      v14 = 4;
      v9 = 2;
      v4 = *((_QWORD *)i + 27);
      v5 = *((unsigned __int16 *)i + 104);
      v12[1] = 0;
      v11 = v4;
      v12[0] = v5;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028D6F0,
        (unsigned __int8 *)dword_1C026209D,
        0LL,
        0LL,
        5u,
        &v7);
    }
  }
  qword_1C029A1C8 = 0LL;
  ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
}
