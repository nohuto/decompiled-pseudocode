/*
 * XREFs of PopNotifySessionDisplayRequired @ 0x140773510
 * Callers:
 *     <none>
 * Callees:
 *     PopInvokeWin32Callout @ 0x14066EF08 (PopInvokeWin32Callout.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1408FEBE8 (TtmNotifySessionDisplayRequiredChange.c)
 */

__int64 __fastcall PopNotifySessionDisplayRequired(__int64 a1, __int64 a2, char a3)
{
  int v4; // [rsp+20h] [rbp-30h] BYREF
  int v5; // [rsp+24h] [rbp-2Ch] BYREF
  int v6; // [rsp+28h] [rbp-28h] BYREF
  char v7; // [rsp+2Ch] [rbp-24h]
  __int16 v8; // [rsp+2Dh] [rbp-23h]
  char v9; // [rsp+2Fh] [rbp-21h]
  __int64 v10; // [rsp+30h] [rbp-20h]
  int *v11; // [rsp+38h] [rbp-18h]
  __int64 v12; // [rsp+40h] [rbp-10h]
  int *v13; // [rsp+48h] [rbp-8h]
  int v14; // [rsp+78h] [rbp+28h] BYREF

  v8 = 0;
  v9 = 0;
  HIDWORD(v10) = 0;
  HIDWORD(v12) = 0;
  v4 = 0;
  if ( PsWin32CalloutsEstablished )
  {
    v5 = a1;
    if ( TtmpEnabled == 1 )
    {
      TtmNotifySessionDisplayRequiredChange(a1);
    }
    else
    {
      v8 = 0;
      v9 = 0;
      v7 = 0;
      v10 = 4LL;
      v12 = 4LL;
      v14 = a3 != 0 ? 1 : -1;
      v6 = 2;
      v11 = &v14;
      v13 = &v4;
      PopInvokeWin32Callout(5u, (__int64)&v6, 1u, &v5);
    }
  }
  return 0LL;
}
