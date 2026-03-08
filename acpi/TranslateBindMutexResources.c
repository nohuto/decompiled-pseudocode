/*
 * XREFs of TranslateBindMutexResources @ 0x1C001C044
 * Callers:
 *     AcpiHandleDeviceFirmwareLock @ 0x1C001B660 (AcpiHandleDeviceFirmwareLock.c)
 * Callees:
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C00035BC (ACPIInternalGetDeviceFromNSOBJ.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008EFDC (PnpBiosResourcesToNtResources.c)
 */

__int64 __fastcall TranslateBindMutexResources(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  PVOID v6; // rdi
  int v7; // eax
  PVOID v8; // rcx
  signed __int64 v9; // rax
  PVOID Object[2]; // [rsp+30h] [rbp-10h] BYREF
  PVOID P; // [rsp+60h] [rbp+20h] BYREF

  Object[0] = 0LL;
  P = 0LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), 0LL, 0LL) )
    return 0;
  ACPIInternalGetDeviceFromNSOBJ(a2, Object, a3, 0LL);
  v6 = Object[0];
  if ( !Object[0] )
  {
    v8 = P;
    v5 = -1073741661;
LABEL_8:
    v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), (signed __int64)v8, 0LL);
    v8 = P;
    if ( v9 )
    {
      if ( P )
      {
        ExFreePoolWithTag(P, 0);
        v8 = 0LL;
        P = 0LL;
      }
      v5 = 0;
    }
    v6 = Object[0];
    goto LABEL_13;
  }
  v7 = PnpBiosResourcesToNtResources(Object[0], a3, 4LL, &P);
  v8 = P;
  v5 = v7;
  if ( v7 < 0 || *((_DWORD *)P + 9) == 1 )
    goto LABEL_8;
  v5 = -1073741637;
LABEL_13:
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    v8 = P;
  }
  if ( v5 < 0 && v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v5;
}
