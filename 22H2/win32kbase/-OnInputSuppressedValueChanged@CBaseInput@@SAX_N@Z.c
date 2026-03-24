/*
 * XREFs of ?OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z @ 0x1C01A3CF8
 * Callers:
 *     UserPowerInfoCallout @ 0x1C004FC50 (UserPowerInfoCallout.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 */

void __fastcall CBaseInput::OnInputSuppressedValueChanged(char a1)
{
  struct DEVICEINFO *i; // rbx
  int v3; // r8d
  int v4; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-9h] BYREF
  _DWORD *v6; // [rsp+60h] [rbp+17h]
  int v7; // [rsp+68h] [rbp+1Fh]
  int v8; // [rsp+6Ch] [rbp+23h]
  __int64 v9; // [rsp+70h] [rbp+27h]
  _DWORD v10[2]; // [rsp+78h] [rbp+2Fh] BYREF
  int *v11; // [rsp+80h] [rbp+37h]
  int v12; // [rsp+88h] [rbp+3Fh]
  int v13; // [rsp+8Ch] [rbp+43h]

  RIMLockExclusive((__int64)&CBaseInput::_sLock);
  for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( a1 )
    {
      *((_DWORD *)i + 574) = 0;
    }
    else if ( *((_DWORD *)i + 574)
           && (unsigned int)dword_1C0249250 > 5
           && tlgKeywordOn((__int64)&dword_1C0249250, 0x400000000000LL) )
    {
      v13 = 0;
      v8 = 0;
      v10[1] = 0;
      v11 = &v4;
      v4 = v3;
      v6 = v10;
      v9 = *((_QWORD *)i + 27);
      v10[0] = *((unsigned __int16 *)i + 104);
      v12 = 4;
      v7 = 2;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0249250,
        (unsigned __int8 *)dword_1C021E3D2,
        0LL,
        0LL,
        5u,
        &v5);
    }
  }
  qword_1C0254508 = 0LL;
  ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
}
