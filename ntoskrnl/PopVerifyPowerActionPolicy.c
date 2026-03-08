/*
 * XREFs of PopVerifyPowerActionPolicy @ 0x14082A608
 * Callers:
 *     PopVerifySystemPowerPolicy @ 0x14082A334 (PopVerifySystemPowerPolicy.c)
 *     PopExecutePowerAction @ 0x1409867F4 (PopExecutePowerAction.c)
 *     PdcPoVerifyActionPolicy @ 0x140994BD0 (PdcPoVerifyActionPolicy.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopFilterCapabilities @ 0x140760774 (PopFilterCapabilities.c)
 *     PopIsHibernateSupported @ 0x140870C14 (PopIsHibernateSupported.c)
 *     PopIsHiberbootSupported @ 0x14097DB40 (PopIsHiberbootSupported.c)
 */

char __fastcall PopVerifyPowerActionPolicy(int *a1)
{
  char v2; // di
  int v3; // eax
  char IsHiberbootSupported; // al
  int v5; // r9d
  int v6; // r10d
  int v7; // r11d
  int v8; // ecx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  _BYTE v13[80]; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0;
  memset(v13, 0, 0x4CuLL);
  if ( !a1 )
    return 0;
  v3 = a1[1];
  if ( (v3 & 0xCFFFFC0) != 0 )
    return 0;
  if ( v3 < 0 )
    a1[1] = v3 & 0xFFFFFFF8 | 4;
  if ( (int)PopFilterCapabilities(&PopCapabilities, (__int64)v13) >= 0 )
  {
    if ( (a1[1] & 8) != 0 )
      IsHiberbootSupported = PopIsHiberbootSupported(v13);
    else
      IsHiberbootSupported = PopIsHibernateSupported(v13);
    while ( 1 )
    {
      v7 = *a1;
      v8 = *a1;
      if ( *a1 == v5 )
        break;
      v9 = *a1 - v5 - v5;
      if ( !v9 )
        goto LABEL_19;
      v10 = v9 - v5;
      if ( !v10 )
      {
        v8 = 3;
        if ( IsHiberbootSupported )
          goto LABEL_17;
        if ( PopPromoteHibernateToShutdown )
        {
LABEL_22:
          *a1 = 4;
          v8 = 4;
          goto LABEL_17;
        }
        if ( !v6 )
          goto LABEL_33;
        goto LABEL_16;
      }
      v11 = v10 - 3;
      if ( v11 )
      {
        if ( v11 != 2 )
          return v2;
        v8 = 8;
        if ( !v13[20] )
          goto LABEL_17;
LABEL_16:
        *a1 = 2;
        v8 = 2;
        goto LABEL_17;
      }
      v8 = 6;
      if ( !v13[7] )
        goto LABEL_22;
LABEL_17:
      if ( v7 == v8 )
        return v2;
    }
    *a1 = 2;
    v8 = 2;
LABEL_19:
    if ( !v6 )
    {
      if ( !IsHiberbootSupported )
      {
LABEL_33:
        *a1 = 0;
        v2 = v5;
        v8 = 0;
        goto LABEL_17;
      }
      *a1 = 3;
      v8 = 3;
    }
    goto LABEL_17;
  }
  return 1;
}
