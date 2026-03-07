__int64 __fastcall Controller_QuerySupportedDSMs(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+28h] [rbp-10h]

  if ( (Controller_ExecuteDSM(a1, &GUID_DSM_ENABLE_KBL_WORKAROUNDS, 1LL, 0LL, 0LL, 0) & 7) == 7 )
    *(_BYTE *)(a1 + 633) = 1;
  LOWORD(v3) = 0;
  result = Controller_ExecuteDSM(a1, &GUID_DSM_SEND_PORTSC_VALUES, 1LL, 0LL, 0LL, v3) & 3;
  if ( (_BYTE)result == 3 )
    *(_BYTE *)(a1 + 632) = 1;
  return result;
}
