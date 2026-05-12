/*
 * XREFs of PortPassThroughValidate @ 0x1C007E2C8
 * Callers:
 *     PortPassThroughSendAsync @ 0x1C007DF08 (PortPassThroughSendAsync.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 *     PortPassThroughNormalize @ 0x1C005A444 (PortPassThroughNormalize.c)
 *     PortpPassThroughZeroUnusedBuffers @ 0x1C005A76C (PortpPassThroughZeroUnusedBuffers.c)
 *     PortPassThroughGetDataBuffer @ 0x1C007DEE4 (PortPassThroughGetDataBuffer.c)
 *     PortPassThroughValidateNormalizedRequest @ 0x1C007E3CC (PortPassThroughValidateNormalizedRequest.c)
 */

__int64 __fastcall PortPassThroughValidate(__int64 a1, IRP *a2, char a3, unsigned int a4, unsigned int a5, _OWORD *a6)
{
  _OWORD *v6; // rdi
  int v11; // ebx
  __int64 v12; // r8
  int DataBuffer; // eax
  __int64 v14; // rdx
  _OWORD v16[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+50h] [rbp-28h]

  v6 = v16;
  v16[0] = 0LL;
  if ( a6 )
    v6 = a6;
  memset(&v16[1], 0, 32);
  v17 = 0LL;
  v11 = PortPassThroughNormalize((__int64)v6, a2);
  if ( v11 >= 0 )
  {
    LOBYTE(v12) = a3;
    v11 = PortPassThroughValidateNormalizedRequest(v6, a2, v12);
    if ( v11 >= 0 )
    {
      PortpPassThroughZeroUnusedBuffers((__int64)a2);
      DataBuffer = PortPassThroughGetDataBuffer((__int64)v6, (__int64)a2, a3);
      if ( (*(_DWORD *)(a1 + 152) & DataBuffer) != 0 )
        return (unsigned int)-1073741811;
      v14 = *((unsigned int *)v6 + 3);
      if ( (_DWORD)v14 )
      {
        if ( (unsigned int)(((unsigned __int64)(DataBuffer & 0xFFF) + v14 + 4095) >> 12) > a4 || (unsigned int)v14 > a5 )
          return (unsigned int)-1073741811;
      }
    }
  }
  return (unsigned int)v11;
}
