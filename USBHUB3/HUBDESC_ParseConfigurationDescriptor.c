/*
 * XREFs of HUBDESC_ParseConfigurationDescriptor @ 0x1C003599C
 * Callers:
 *     HUBPARENT_SetHubConfiguration @ 0x1C00073A8 (HUBPARENT_SetHubConfiguration.c)
 *     HUBUCX_UpdateHubInformationUsingUCXIoctl @ 0x1C00289B0 (HUBUCX_UpdateHubInformationUsingUCXIoctl.c)
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x1C002B98C (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1C002EBC0 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1C002F848 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 */

unsigned __int8 *__fastcall HUBDESC_ParseConfigurationDescriptor(
        __int64 a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        _BYTE *a8,
        __int64 a9)
{
  unsigned __int8 *v12; // rdi
  unsigned __int8 *v13; // r12
  unsigned int v14; // r15d
  unsigned __int64 v15; // rdx
  unsigned __int8 *v16; // rcx
  unsigned __int8 *v17; // rbx
  __int64 v18; // rax
  unsigned __int16 v19; // r9
  int v21; // [rsp+78h] [rbp+20h]

  v21 = a4;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  if ( a8 )
    *a8 = 0;
  if ( *(_BYTE *)a1 >= 9u && *(_BYTE *)(a1 + 1) == 2 && *(_WORD *)(a1 + 2) >= 9u )
  {
    while ( 1 )
    {
      v15 = a1 + *(unsigned __int16 *)(a1 + 2);
      v16 = a2;
      v17 = 0LL;
      if ( (unsigned __int64)a2 >= v15 )
      {
LABEL_13:
        if ( v17 )
        {
          if ( a1 + *(unsigned __int16 *)(a1 + 2) - (unsigned __int64)v17 >= 9 )
          {
            v12 = v17;
            if ( a3 != -1 )
            {
              if ( v17[2] == a3 )
                ++v14;
              else
                v12 = 0LL;
            }
            if ( a4 != -1 && v17[3] != a4 )
              v12 = 0LL;
            if ( a5 != -1 && v17[5] != a5 )
              v12 = 0LL;
            if ( a6 != -1 && v17[6] != a6 )
              v12 = 0LL;
            if ( a7 != -1 && v17[7] != a7 )
              v12 = 0LL;
            a2 = &v17[*v17];
          }
          else
          {
            v17 = 0LL;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_(a9, 2u, 5u, 0xCu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
          }
        }
      }
      else
      {
        while ( v15 - (unsigned __int64)v16 >= 2 )
        {
          v18 = *v16;
          if ( !(_BYTE)v18 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_22;
            v19 = 11;
            goto LABEL_21;
          }
          if ( v16[1] == 4 )
          {
            v17 = v16;
            goto LABEL_13;
          }
          v16 += v18;
          if ( (unsigned __int64)v16 >= v15 )
            goto LABEL_40;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_22;
        v19 = 10;
LABEL_21:
        WPP_RECORDER_SF_(a9, 2u, 5u, v19, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
LABEL_22:
        v17 = 0LL;
      }
LABEL_40:
      if ( v13 )
        break;
      if ( v12 )
      {
        v13 = v12;
        if ( !a8 )
          return v13;
        if ( v14 > 1 )
          goto LABEL_48;
      }
      if ( !v17 )
        return v13;
      a4 = v21;
    }
    if ( v14 > 1 && a8 )
LABEL_48:
      *a8 = 1;
  }
  return v13;
}
