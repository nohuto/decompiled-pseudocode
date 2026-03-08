/*
 * XREFs of SeComputeQuotaInformationSize @ 0x1406968A0
 * Callers:
 *     ObpChargeQuotaForObject @ 0x140696054 (ObpChargeQuotaForObject.c)
 *     SeDefaultObjectMethod @ 0x1406961E0 (SeDefaultObjectMethod.c)
 *     ObpCaptureObjectCreateInformation @ 0x1406E9E60 (ObpCaptureObjectCreateInformation.c)
 *     ObSetSecurityDescriptorInfo @ 0x140751100 (ObSetSecurityDescriptorInfo.c)
 *     ObpIncrementHandleCountEx @ 0x1407C1090 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeComputeQuotaInformationSize(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int16 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r9

  v2 = 0LL;
  *a2 = 0;
  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  v3 = *(_WORD *)(a1 + 2);
  if ( v3 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 16);
  }
  else
  {
    v4 = *(unsigned int *)(a1 + 8);
    if ( (_DWORD)v4 )
      v5 = a1 + v4;
    else
      v5 = 0LL;
  }
  if ( (v3 & 4) != 0 )
  {
    if ( v3 >= 0 )
    {
      v2 = *(_QWORD *)(a1 + 32);
    }
    else
    {
      v6 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v6 )
        v2 = a1 + v6;
    }
  }
  if ( v5 )
    *a2 = (4 * *(unsigned __int8 *)(v5 + 1) + 11) & 0xFFFFFFFC;
  if ( v2 )
    *a2 += (*(unsigned __int16 *)(v2 + 2) + 3) & 0xFFFFFFFC;
  return 0LL;
}
