/*
 * XREFs of NtGdiResetDC @ 0x1C02C6F40
 * Callers:
 *     <none>
 * Callees:
 *     GreResetDCInternal @ 0x1C02B0050 (GreResetDCInternal.c)
 */

__int64 __fastcall NtGdiResetDC(HDC a1, struct _devicemodeW *a2, _DWORD *a3, struct _DRIVER_INFO_2W *a4, __int64 a5)
{
  __int64 v8; // rdi
  struct _DRIVER_INFO_2W *v9; // rsi
  struct _devicemodeW *v10; // rax
  unsigned int v11; // ebx
  int v13; // [rsp+34h] [rbp-44h] BYREF
  struct _devicemodeW *v14; // [rsp+38h] [rbp-40h]
  struct _DRIVER_INFO_2W *v15; // [rsp+40h] [rbp-38h]

  v8 = 0LL;
  v14 = 0LL;
  v13 = 0;
  v9 = 0LL;
  v15 = 0LL;
  if ( !a2 || (v10 = CaptureDEVMODEW(a2), v8 = (__int64)v10, (v14 = v10) != 0LL) )
  {
    v11 = 1;
    LODWORD(v10) = 1;
  }
  else
  {
    v11 = 1;
  }
  if ( !(_DWORD)v10 || a4 && (v9 = CaptureDriverInfo2W(a4), (v15 = v9) == 0LL) )
    v11 = 0;
  if ( v11 )
  {
    v11 = GreResetDCInternal(a1, v8, &v13, (__int64)v9, a5);
    if ( v11 )
    {
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_DWORD *)MmUserProbeAddress;
      *a3 = v13;
    }
  }
  if ( v8 )
    FreeThreadBufferWithTag(v8);
  vFreeDriverInfo2(v9);
  return v11;
}
