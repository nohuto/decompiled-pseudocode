/*
 * XREFs of GreDeleteServerMetaFile @ 0x1C02B6DA0
 * Callers:
 *     vCleanupMetaType @ 0x1C0120860 (vCleanupMetaType.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C014AA2C (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     FreeDdeXact @ 0x1C02177D0 (FreeDdeXact.c)
 * Callees:
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C015D3B4 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 *     ??B?$HmgLockResultBase@VMETA@@@@QEBA_NXZ @ 0x1C015F320 (--B-$HmgLockResultBase@VMETA@@@@QEBA_NXZ.c)
 *     ??0?$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C015FA04 (--0-$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VMETA@@@@QEAA@XZ @ 0x1C015FA64 (--1-$HmgLockResult@VMETA@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreDeleteServerMetaFile(__int64 a1)
{
  int IsEnabled; // eax
  __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // eax
  __int64 v7; // rax
  int v8; // ecx
  _QWORD v9[7]; // [rsp+20h] [rbp-38h] BYREF

  IsEnabled = Feature_3101493560__private_IsEnabled();
  LOBYTE(v3) = 21;
  if ( IsEnabled )
  {
    v4 = HmgLock(a1, v3);
    HmgLockResult<META>::HmgLockResult<META>((__int64)v9, v4);
    if ( HmgLockResultBase<META>::operator bool(v9) )
    {
      v5 = *(_DWORD *)(v9[0] + 24LL);
      if ( v5 == 1599096397 || v5 == 1480934989 )
      {
        HmgFree(*(_QWORD *)v9[0]);
        v9[0] = 0LL;
        HmgLockResult<META>::~HmgLockResult<META>((__int64)v9);
        return 1LL;
      }
    }
    HmgLockResult<META>::~HmgLockResult<META>((__int64)v9);
  }
  else
  {
    v7 = HmgLock(a1, v3);
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 24);
      if ( v8 == 1599096397 || v8 == 1480934989 )
      {
        HmgFree(*(_QWORD *)v7);
        return 1LL;
      }
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
    }
  }
  return 0LL;
}
