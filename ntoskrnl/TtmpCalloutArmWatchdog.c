/*
 * XREFs of TtmpCalloutArmWatchdog @ 0x1409A0268
 * Callers:
 *     TtmpStartCallout @ 0x1409A0CA0 (TtmpStartCallout.c)
 * Callees:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 */

int __fastcall TtmpCalloutArmWatchdog(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD InputBuffer[2]; // [rsp+30h] [rbp-9h] BYREF
  int v7; // [rsp+40h] [rbp+7h]
  int v8; // [rsp+44h] [rbp+Bh]
  __int64 v9; // [rsp+48h] [rbp+Fh]
  __int64 v10; // [rsp+50h] [rbp+17h]
  __int64 v11; // [rsp+58h] [rbp+1Fh]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp+27h]
  __int64 v13; // [rsp+68h] [rbp+2Fh]
  __int64 v14; // [rsp+70h] [rbp+37h]
  void *v15; // [rsp+78h] [rbp+3Fh]
  _QWORD *v16; // [rsp+80h] [rbp+47h]
  __int64 v17; // [rsp+88h] [rbp+4Fh]

  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( v4 )
    {
      InputBuffer[1] = *(_QWORD *)(a1 + 24);
      v10 = *(int *)(a1 + 16);
      v11 = *(_QWORD *)(a1 + 8);
      v7 = a3;
      v8 = a2;
      InputBuffer[0] = 21LL;
      v9 = 416LL;
      v14 = 0LL;
      v17 = 0LL;
      CurrentThread = KeGetCurrentThread();
      v16 = InputBuffer;
      v13 = a4;
      v15 = &TtmpCalloutWatchdogCallback;
      LODWORD(v4) = NtPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
    }
  }
  return v4;
}
