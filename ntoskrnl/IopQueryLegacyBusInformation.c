/*
 * XREFs of IopQueryLegacyBusInformation @ 0x14079344C
 * Callers:
 *     PipCallDriverAddDevice @ 0x1406C644C (PipCallDriverAddDevice.c)
 * Callees:
 *     DbgPrint @ 0x1402BDD20 (DbgPrint.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IopSynchronousCall @ 0x14069DD78 (IopSynchronousCall.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopQueryLegacyBusInformation(_QWORD *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  int v7; // ebp
  _DWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  _WORD v12[40]; // [rsp+30h] [rbp-58h] BYREF
  PVOID P; // [rsp+98h] [rbp+10h] BYREF

  P = 0LL;
  memset(v12, 0, 0x48uLL);
  v12[0] = 6171;
  v7 = IopSynchronousCall(a1, (__int64)v12, -1073741637, 0LL, &P);
  if ( v7 >= 0 )
  {
    v9 = P;
    if ( P )
    {
      if ( a3 )
        *a3 = *((_DWORD *)P + 4);
      if ( a4 )
        *a4 = v9[5];
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
      v10 = *(_QWORD *)(a1[39] + 40LL);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 16);
        if ( v11 )
        {
          if ( *(_QWORD *)(v11 + 64) )
          {
            DbgPrint("*** IopQueryLegacyBusInformation - Driver %wZ returned STATUS_SUCCESS\n", v11 + 56);
            DbgPrint("    for IRP_MN_QUERY_LEGACY_BUS_INFORMATION, and a NULL POINTER.\n");
          }
        }
      }
    }
  }
  return (unsigned int)v7;
}
