/*
 * XREFs of VslGetSecurePciDeviceBootConfiguration @ 0x140548F70
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x1402D8618 (HvlQueryVsmConnection.c)
 *     RtlCmEncodeMemIoResource @ 0x140370750 (RtlCmEncodeMemIoResource.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

int __fastcall VslGetSecurePciDeviceBootConfiguration(
        int a1,
        char a2,
        char a3,
        char a4,
        unsigned int a5,
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a6)
{
  int result; // eax
  __int64 v11; // rbx
  ULONGLONG v12[14]; // [rsp+20h] [rbp-B8h] BYREF

  memset(v12, 0, 0x68uLL);
  if ( !HvlQueryVsmConnection(0LL) )
    return -1073741637;
  if ( a5 - 1 > 5 || !a6 )
    return -1073741811;
  memset(a6, 0, 20LL * a5);
  v11 = 0LL;
  if ( !a5 )
    return 0;
  while ( 1 )
  {
    LODWORD(v12[1]) = a1;
    BYTE4(v12[1]) = a2;
    BYTE5(v12[1]) = a3;
    BYTE6(v12[1]) = a4;
    LODWORD(v12[2]) = v11;
    result = VslpEnterIumSecureMode(2u, 265, 0, (__int64)v12);
    if ( result < 0 )
      break;
    if ( BYTE4(v12[2]) )
    {
      result = RtlCmEncodeMemIoResource(&a6[v11], 3u, v12[4], v12[3]);
      if ( result < 0 )
        break;
    }
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= a5 )
      return 0;
  }
  return result;
}
