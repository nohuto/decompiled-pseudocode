/*
 * XREFs of UsbhGetPortStatus @ 0x1C002D5B4
 * Callers:
 *     UsbhSuspendPort @ 0x1C00138BC (UsbhSuspendPort.c)
 * Callees:
 *     UsbhSyncSendCommand @ 0x1C000A740 (UsbhSyncSendCommand.c)
 */

__int64 __fastcall UsbhGetPortStatus(__int64 a1, __int16 a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *PoolWithTag; // rax
  void *v9; // rbx
  unsigned int v10; // edi
  int v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v14[2]; // [rsp+38h] [rbp-20h] BYREF
  __int16 v15; // [rsp+3Ah] [rbp-1Eh]
  __int16 v16; // [rsp+3Ch] [rbp-1Ch]
  __int16 v17; // [rsp+3Eh] [rbp-1Ah]

  v13 = 0;
  PoolWithTag = ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), 0xAuLL, 0x42554855u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_BYTE *)PoolWithTag + 9) = 0;
    *((_WORD *)PoolWithTag + 3) = a2;
    *((_WORD *)PoolWithTag + 2) = 4;
    *PoolWithTag = 0;
    v14[0] = -93;
    *((_BYTE *)PoolWithTag + 8) = 0;
    v14[1] = 0;
    v15 = 0;
    v16 = a2;
    v17 = *((_WORD *)PoolWithTag + 2);
    *a3 = 0;
    v10 = UsbhSyncSendCommand(a1, (__int64)v14, (__int64)PoolWithTag, (_WORD *)PoolWithTag + 2, v12, &v13);
    if ( a4 )
      *a4 = v13;
    ExFreePoolWithTag(v9, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v10;
}
