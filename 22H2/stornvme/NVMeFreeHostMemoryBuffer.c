/*
 * XREFs of NVMeFreeHostMemoryBuffer @ 0x1C000EF00
 * Callers:
 *     NVMeControllerRemove @ 0x1C000E23C (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000EC50 (NVMeControllerStop.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003750 (__security_check_cookie.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C0023850 (NVMeSetHostMemoryBuffer.c)
 */

__int64 __fastcall NVMeFreeHostMemoryBuffer(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rcx
  unsigned int v4; // r9d
  unsigned int v5; // eax
  __int64 v6; // r11
  _DWORD *v7; // rdx
  __int64 result; // rax
  size_t Size; // [rsp+28h] [rbp-B0h]
  _BYTE v10[8]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v11[120]; // [rsp+48h] [rbp-90h] BYREF

  v1 = *(_QWORD *)(a1 + 4000);
  LODWORD(Size) = *(_DWORD *)(v1 + 4);
  NVMeSetHostMemoryBuffer(a1, (void *)(v1 + 8), Size);
  v3 = *(_QWORD *)(a1 + 4000);
  v4 = 8;
  v5 = *(_DWORD *)(v3 + 4) >> 4;
  if ( v5 > 8 || (v4 = *(_DWORD *)(v3 + 4) >> 4, v5) )
  {
    v6 = v4;
    v7 = (_DWORD *)(v3 + 16);
    do
    {
      *(_QWORD *)&v10[(_QWORD)v7 - v3 - 16] = *((_QWORD *)v7 - 1);
      *(_DWORD *)&v11[(_QWORD)v7 - v3 - 16] = *v7;
      v7 += 4;
      --v6;
    }
    while ( v6 );
  }
  StorPortExtendedFunction(70LL, a1, v10);
  result = StorPortExtendedFunction(1LL, a1, *(_QWORD *)(a1 + 4000));
  *(_QWORD *)(a1 + 4000) = 0LL;
  return result;
}
