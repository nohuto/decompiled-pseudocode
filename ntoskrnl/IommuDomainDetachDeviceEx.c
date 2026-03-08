/*
 * XREFs of IommuDomainDetachDeviceEx @ 0x1405238E0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage @ 0x140409C64 (Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage.c)
 *     IommupDeviceGetPasidDevice @ 0x14050BC5C (IommupDeviceGetPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x14050C048 (IommupDomainDetachPasidDevice.c)
 *     HalpIommuLeaveDmaDomain @ 0x140516044 (HalpIommuLeaveDmaDomain.c)
 *     IommupFindAndPopCachedDevice @ 0x140524604 (IommupFindAndPopCachedDevice.c)
 */

__int64 __fastcall IommuDomainDetachDeviceEx(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  if ( *(_QWORD *)(a1 + 24) && (v7 = 0LL, (unsigned __int8)IommupFindAndPopCachedDevice(a1, &v7)) )
  {
    if ( *(_BYTE *)(a1 + 266) )
    {
      if ( (unsigned int)Feature_Servicing_IommuApiPasid__private_IsEnabledDeviceUsage() )
      {
        if ( IommupDeviceGetPasidDevice(a1, v4, 0, &v6) )
        {
          v2 = IommupDomainDetachPasidDevice(v6);
          if ( v2 >= 0 )
          {
            *(_QWORD *)(a1 + 24) = 0LL;
LABEL_13:
            HalpMmAllocCtxFree(v3, v7);
          }
        }
        else
        {
          return (unsigned int)-1073741823;
        }
      }
      else
      {
        return (unsigned int)-1073741637;
      }
    }
    else
    {
      v2 = HalpIommuLeaveDmaDomain(a1, *(_QWORD *)(a1 + 24));
      if ( v2 >= 0 )
        goto LABEL_13;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)v2;
}
