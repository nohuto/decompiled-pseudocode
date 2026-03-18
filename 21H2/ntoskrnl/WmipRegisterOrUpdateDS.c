/*
 * XREFs of WmipRegisterOrUpdateDS @ 0x14075EE80
 * Callers:
 *     WmipRegisterDevice @ 0x1406C82F8 (WmipRegisterDevice.c)
 *     WmipRegistrationWorker @ 0x1406DAF30 (WmipRegistrationWorker.c)
 * Callees:
 *     WmipProcessWmiRegInfo @ 0x14075D0B0 (WmipProcessWmiRegInfo.c)
 *     WmipSendWmiIrp @ 0x1407839B4 (WmipSendWmiIrp.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WmipRegisterOrUpdateDS(__int64 a1, char a2)
{
  unsigned int v2; // esi
  unsigned int v5; // ebp
  __int64 v6; // rcx
  unsigned int *PoolWithTag; // rdi
  int v8; // eax
  __int64 v9; // rcx
  int v10; // ebx
  _BYTE v12[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h]

  v2 = 0;
  v13 = 0LL;
  v5 = 0x2000;
  while ( 1 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x44696D57u);
    if ( !PoolWithTag )
      break;
    LOBYTE(v6) = 11;
    v8 = WmipSendWmiIrp(v6, *(unsigned int *)(a1 + 56), a2 != 0, v5, PoolWithTag, v12);
    v10 = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -1073741789 )
        goto LABEL_14;
      LOBYTE(v9) = 8;
      v10 = WmipSendWmiIrp(v9, *(unsigned int *)(a1 + 56), a2 != 0, v5, PoolWithTag, v12);
    }
    if ( v10 == -1073741789 )
    {
LABEL_14:
      v2 = v13;
LABEL_15:
      v5 = *PoolWithTag;
      ExFreePoolWithTag(PoolWithTag, 0);
      v10 = -1073741789;
      goto LABEL_8;
    }
    v2 = v13;
    if ( v13 == 4 )
      goto LABEL_15;
LABEL_8:
    if ( v10 != -1073741789 )
      goto LABEL_9;
  }
  v10 = -1073741670;
LABEL_9:
  if ( v10 >= 0 )
    v10 = WmipProcessWmiRegInfo(a1, PoolWithTag, v2, a2);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v10;
}
