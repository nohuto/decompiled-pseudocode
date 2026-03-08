/*
 * XREFs of UsbhGetMsOs20DescriptorSet @ 0x1C0032F04
 * Callers:
 *     UsbhSetupDevice @ 0x1C0039728 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C001A250 (UsbhSyncSendCommandToDevice.c)
 */

__int64 __fastcall UsbhGetMsOs20DescriptorSet(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbx
  __int64 Pool2; // rax
  __int64 result; // rax
  __int64 v9; // rcx
  int v10; // esi
  void *v11; // rcx
  _BYTE v12[2]; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+42h] [rbp-26h]
  __int16 v14; // [rsp+46h] [rbp-22h]
  __int16 v15; // [rsp+80h] [rbp+18h] BYREF

  v6 = PdoExt(a2);
  Pool2 = ExAllocatePool2(64LL, *(unsigned __int16 *)(a3 + 4), 1112885333LL);
  *((_QWORD *)v6 + 355) = Pool2;
  if ( Pool2 )
  {
    v9 = *((_QWORD *)v6 + 148);
    v12[1] = *(_BYTE *)(a3 + 6);
    v14 = *(_WORD *)(a3 + 4);
    v15 = v14;
    v12[0] = -64;
    v13 = 458752;
    v10 = UsbhSyncSendCommandToDevice(v9, a2, v12, Pool2, &v15);
    if ( v10 >= 0 )
    {
      *((_WORD *)v6 + 1414) = v15;
    }
    else
    {
      Log(a1, 4, 1297297969, 0LL, 0LL);
      v11 = (void *)*((_QWORD *)v6 + 355);
      *((_WORD *)v6 + 1414) = 0;
      if ( v11 )
      {
        ExFreePoolWithTag(v11, 0);
        *((_QWORD *)v6 + 355) = 0LL;
      }
    }
    return (unsigned int)v10;
  }
  else
  {
    Log(a1, 4, 1297297968, 0LL, 0LL);
    result = 3221225626LL;
    *((_WORD *)v6 + 1414) = 0;
  }
  return result;
}
