/*
 * XREFs of PnpQueryDeviceText @ 0x1406850F0
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     IopSynchronousCall @ 0x14069DD78 (IopSynchronousCall.c)
 *     PiNormalizeDeviceText @ 0x14086EE68 (PiNormalizeDeviceText.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpQueryDeviceText(int a1, int a2, __int64 a3, PVOID *a4)
{
  unsigned int v7; // ebx
  int v8; // eax
  PVOID v9; // rsi
  _DWORD v11[18]; // [rsp+38h] [rbp-48h] BYREF
  PVOID P; // [rsp+B8h] [rbp+38h] BYREF

  P = 0LL;
  *a4 = 0LL;
  memset(v11, 0, sizeof(v11));
  v11[2] = a2;
  v11[4] = PsDefaultSystemLocaleId;
  v7 = -1073741637;
  LOWORD(v11[0]) = 3099;
  v8 = IopSynchronousCall(a1, (unsigned int)v11, -1073741637, 0, (__int64)&P);
  v9 = P;
  if ( P )
  {
    v7 = v8;
    if ( v8 >= 0 )
    {
      *a4 = P;
      PiNormalizeDeviceText(v9);
    }
  }
  return v7;
}
