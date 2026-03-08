/*
 * XREFs of ACPIIoctlEvalPostProcessingV1 @ 0x1C002FD84
 * Callers:
 *     ACPIIoctlEvalControlMethod @ 0x1C0004232 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C002F468 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodCompletion @ 0x1C002F6B0 (ACPIIoctlAsyncEvalControlMethodCompletion.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C0030F58 (ACPIIoctlGetDeviceSpecificData.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C002F780 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C002F884 (ACPIIoctlCalculateOutputBufferV1.c)
 */

__int64 __fastcall ACPIIoctlEvalPostProcessingV1(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v3; // rbp
  unsigned int v7; // r11d
  int v8; // eax
  unsigned int v9; // edx
  _DWORD *v10; // rcx
  int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  if ( *(_DWORD *)(a1[23] + 8LL)
    && (v12 = 0, v13 = 0, (int)ACPIIoctlCalculateOutputBufferSizeV1(a2, &v12, &v13, a3, 1) >= 0) )
  {
    v8 = v12 + 12;
    v9 = v12 + 12;
    if ( (unsigned int)(v12 + 12) < 0x14 )
    {
      v8 = 20;
      v9 = 20;
    }
    if ( v7 >= 0x14 )
    {
      v10 = (_DWORD *)a1[3];
      v10[1] = v8;
      v3 = (__int64)(v10 + 3);
      v10[2] = v13;
      *v10 = 1114596673;
    }
    if ( v9 > v7 )
    {
      a1[7] = 20LL;
      return 2147483653LL;
    }
    a1[7] = v9;
    if ( (int)ACPIIoctlCalculateOutputBufferV1(a2, v3, a3) < 0 )
      a1[7] = 0LL;
  }
  else
  {
    a1[7] = 0LL;
  }
  return 0LL;
}
