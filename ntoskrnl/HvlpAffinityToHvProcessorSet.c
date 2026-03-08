/*
 * XREFs of HvlpAffinityToHvProcessorSet @ 0x1405472B0
 * Callers:
 *     HvlMapDeviceInterrupt @ 0x1405427C0 (HvlMapDeviceInterrupt.c)
 *     HvlRetargetDeviceInterrupt @ 0x1405431C0 (HvlRetargetDeviceInterrupt.c)
 *     HvlpFastSendSyntheticClusterIpiEx @ 0x140543E08 (HvlpFastSendSyntheticClusterIpiEx.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1405440CC (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlParkedVirtualProcessors @ 0x1405445A8 (HvlParkedVirtualProcessors.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1405474C4 (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpFastFlushListTbEx @ 0x140547580 (HvlpFastFlushListTbEx.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x14054785C (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushListTbEx @ 0x140547AF8 (HvlpSlowFlushListTbEx.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall HvlpAffinityToHvProcessorSet(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v3; // r15
  unsigned int v6; // ebx
  __int64 v7; // rbp
  unsigned __int8 v8; // r12
  __int64 v9; // rax
  unsigned __int16 *v10[2]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v11; // [rsp+30h] [rbp-38h]
  int v12; // [rsp+32h] [rbp-36h]
  __int16 v13; // [rsp+36h] [rbp-32h]
  int v14; // [rsp+70h] [rbp+8h] BYREF

  v3 = a3;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  a2[1] = 0LL;
  if ( !a1 )
  {
    *a2 = 1LL;
    return 0LL;
  }
  *a2 = 0LL;
  v6 = 0;
  v10[1] = *(unsigned __int16 **)(a1 + 8);
  v11 = 0;
  v10[0] = (unsigned __int16 *)a1;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v14, v10) )
  {
    v7 = HvlpVirtualProcessorMapping[2 * v14];
    v8 = HvlpVirtualProcessorMapping[2 * v14 + 1];
    if ( (unsigned int)v7 >= v6 )
    {
      if ( 8 * (unsigned __int64)(unsigned int)(v7 + 1) > v3 )
        return 0xFFFFFFFFLL;
      memset(&a2[v6 + 2], 0, 8LL * ((unsigned int)v7 - v6 + 1));
      v6 = v7 + 1;
    }
    a2[v7 + 2] |= 1LL << v8;
  }
  if ( v6 )
  {
    if ( v6 == 64 )
    {
      v9 = -1LL;
      goto LABEL_15;
    }
  }
  else
  {
    a2[2] = 0LL;
    v6 = 1;
  }
  v9 = (1LL << v6) - 1;
LABEL_15:
  a2[1] = v9;
  return 8 * v6;
}
