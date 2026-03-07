NTSTATUS __fastcall EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Cleanup(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rsi
  _DWORD *v4; // rdi
  __int64 v5; // rcx
  NTSTATUS result; // eax
  __int64 v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+28h] [rbp-30h]
  __int64 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]
  __int64 v11; // [rsp+40h] [rbp-18h]
  __int64 v12; // [rsp+48h] [rbp-10h]

  if ( a1 && *(_QWORD *)a1 )
  {
    v3 = &unk_1C006D8D8;
    v4 = (_DWORD *)(a1 + 2676);
    do
    {
      v5 = (unsigned int)*v4;
      if ( (unsigned int)v5 > 1 && (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
      {
        LODWORD(v12) = v5 - 1;
        LOWORD(v11) = *(_WORD *)(a1 + 2000);
        LOWORD(v10) = *(_WORD *)(a1 + 1998);
        LOWORD(v9) = *(_WORD *)(a1 + 1996);
        LODWORD(v8) = v3[1];
        LODWORD(v7) = *v3;
        result = McTemplateK0pqqhhhq_EtwWriteTransfer(
                   v5,
                   a2,
                   (const GUID *)(a1 + 1516),
                   *(_QWORD *)(*(_QWORD *)a1 + 248LL),
                   v7,
                   v8,
                   v9,
                   v10,
                   v11,
                   v12);
      }
      *v4 = 0;
      v3 += 2;
      ++v4;
    }
    while ( (__int64)v3 < (__int64)FwUpdateDeviceDescriptor );
  }
  return result;
}
