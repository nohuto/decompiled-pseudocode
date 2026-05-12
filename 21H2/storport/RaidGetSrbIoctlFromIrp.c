/*
 * XREFs of RaidGetSrbIoctlFromIrp @ 0x1C0006448
 * Callers:
 *     RaUnitScsiMiniportIoctl @ 0x1C0005C08 (RaUnitScsiMiniportIoctl.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C00067E8 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 * Callees:
 *     Feature_547412282__private_IsEnabledDeviceUsage @ 0x1C001D6DC (Feature_547412282__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall RaidGetSrbIoctlFromIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rbx
  unsigned int v8; // r10d
  unsigned __int64 v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  int IsEnabledDeviceUsage; // eax
  unsigned int v15; // edx

  v5 = *(_QWORD *)(a1 + 184);
  v6 = a1;
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_DWORD *)(v5 + 16);
  if ( v8 >= 0x1C )
  {
    if ( *(_DWORD *)v7 != 28 )
      return 3221225561LL;
    v10 = *(unsigned int *)(v7 + 24) + 28LL;
    if ( v10 <= 0xFFFFFFFF )
    {
      v11 = *(_DWORD *)(v5 + 8);
      if ( v11 < (unsigned int)v10 && v8 < (unsigned int)v10 )
        return 3221225507LL;
      if ( a2 )
        *(_QWORD *)a2 = v7;
      if ( a3 )
        *(_DWORD *)a3 = v10;
      if ( a4 )
        *(_DWORD *)a4 = v11;
      if ( a5 == 1 )
      {
        v12 = *(_QWORD *)(v7 + 4);
        a3 = 0x4B53494452425948LL;
        a2 = 0x455241574D524946LL;
        a4 = 0x464E494555455551LL;
        if ( v12 != 0x4B53494452425948LL )
        {
          a1 = 0x4B53494449534353LL;
          if ( v12 != 0x4B53494449534353LL
            && v12 != 0x455241574D524946LL
            && v12 != 0x464E494555455551LL
            && v12 != 0x5551455441455243LL
            && v12 != 0x55514554454C4544LL
            && v12 != 0x464E495255444E45LL )
          {
            a1 = 0x524F545350534155LL;
            if ( v12 != 0x524F545350534155LL )
              return 3221225488LL;
          }
          if ( v12 != 0x455241574D524946LL
            && v12 != 0x464E494555455551LL
            && v12 != 0x5551455441455243LL
            && v12 != 0x55514554454C4544LL
            && v12 != 0x464E495255444E45LL
            && *(_BYTE *)(v6 + 64) )
          {
            return 3221225506LL;
          }
        }
      }
      v13 = *(_DWORD *)(v7 + 16);
      if ( v13 == 1771008 )
      {
        if ( v8 >= 0x22 )
        {
          if ( *(_WORD *)(v7 + 32) == 224 && *(_BYTE *)(v6 + 64) )
            return 3221225506LL;
          return 0LL;
        }
      }
      else
      {
        if ( v13 != 1771040 )
          return 0LL;
        IsEnabledDeviceUsage = Feature_547412282__private_IsEnabledDeviceUsage(a1, a2, a3, a4);
        v15 = *(_DWORD *)(v5 + 16);
        if ( !(IsEnabledDeviceUsage ? v15 < 0x34 : v15 < 0x28) )
        {
          if ( *(_DWORD *)(v7 + 36) != 1 && *(_BYTE *)(v6 + 64) )
            return 3221225506LL;
          if ( v15 >= (unsigned int)v10
            && *(unsigned int *)(v7 + 44) + (unsigned __int64)*(unsigned int *)(v7 + 48) <= v15 )
          {
            return 0LL;
          }
        }
      }
    }
  }
  return 3221225485LL;
}
