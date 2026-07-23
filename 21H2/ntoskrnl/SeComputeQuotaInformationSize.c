/*
 * XREFs of SeComputeQuotaInformationSize @ 0x1406549F0
 * Callers:
 *     ObpCaptureObjectCreateInformation @ 0x14064B260 (ObpCaptureObjectCreateInformation.c)
 *     ObSetSecurityDescriptorInfo @ 0x1406540D0 (ObSetSecurityDescriptorInfo.c)
 *     ObpChargeQuotaForObject @ 0x140655058 (ObpChargeQuotaForObject.c)
 *     ObpIncrementHandleCountEx @ 0x14070D340 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeComputeQuotaInformationSize(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int16 v4; // dx
  __int64 v5; // r9
  __int64 v6; // r9
  __int64 v7; // rdx

  v2 = 0LL;
  *a2 = 0;
  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  v4 = *(_WORD *)(a1 + 2);
  if ( v4 >= 0 )
  {
    v6 = *(_QWORD *)(a1 + 16);
  }
  else
  {
    v5 = *(unsigned int *)(a1 + 8);
    if ( (_DWORD)v5 )
      v6 = a1 + v5;
    else
      v6 = 0LL;
  }
  if ( (v4 & 4) != 0 )
  {
    if ( v4 >= 0 )
    {
      v2 = *(_QWORD *)(a1 + 32);
    }
    else
    {
      v7 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v7 )
        v2 = a1 + v7;
    }
  }
  if ( v6 )
    *a2 = (4 * *(unsigned __int8 *)(v6 + 1) + 11) & 0xFFFFFFFC;
  if ( v2 )
    *a2 += (*(unsigned __int16 *)(v2 + 2) + 3) & 0xFFFFFFFC;
  return 0LL;
}
