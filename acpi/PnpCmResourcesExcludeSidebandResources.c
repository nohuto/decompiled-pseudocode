/*
 * XREFs of PnpCmResourcesExcludeSidebandResources @ 0x1C00926CC
 * Callers:
 *     ACPIFilterIrpStartDeviceWorker @ 0x1C00868F0 (ACPIFilterIrpStartDeviceWorker.c)
 * Callees:
 *     PnpiCmResourceRemoveSidebandResources @ 0x1C0092CD4 (PnpiCmResourceRemoveSidebandResources.c)
 */

__int64 __fastcall PnpCmResourcesExcludeSidebandResources(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  int v6; // ebp
  int v7; // r14d
  int v8; // r15d
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  void *Pool2; // rsi
  __int64 v13; // rax
  void *v14; // rdi
  _QWORD *v15; // rax
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF

  v17 = 0;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  if ( !a1 || !a2 || !a3 )
    return (unsigned int)-1073741772;
  v9 = PnpiCmResourceRemoveSidebandResources(a1, a2, a3, 0, 0LL, (__int64)&v17);
  v10 = v9;
  if ( v9 == -1073741789 )
  {
    v11 = v17;
    Pool2 = (void *)ExAllocatePool2(256LL, v17, 1383097153LL);
    v13 = ExAllocatePool2(256LL, v11, 1383097153LL);
    v14 = (void *)v13;
    if ( Pool2 && v13 )
    {
      v10 = PnpiCmResourceRemoveSidebandResources(v8, v7, v6, (_DWORD)Pool2, v13, (__int64)&v17);
      if ( (v10 & 0x80000000) == 0 )
      {
        v15 = a5;
        *a4 = Pool2;
        *v15 = v14;
        return v10;
      }
    }
    else
    {
      v10 = -1073741670;
      if ( !Pool2 )
        goto LABEL_11;
    }
    ExFreePoolWithTag(Pool2, 0);
LABEL_11:
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    return v10;
  }
  if ( v9 >= 0 )
    return (unsigned int)-1073741823;
  return v10;
}
