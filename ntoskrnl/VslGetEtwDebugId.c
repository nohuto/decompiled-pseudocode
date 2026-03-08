/*
 * XREFs of VslGetEtwDebugId @ 0x140548CD0
 * Callers:
 *     EtwpLocateDbgIdForRegEntry @ 0x140775328 (EtwpLocateDbgIdForRegEntry.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x1403C8E74 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1403C90EC (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslGetEtwDebugId(__int64 a1, __int64 a2, void **a3, unsigned int *a4)
{
  void *v8; // rbx
  struct _MDL *i; // rdx
  int v10; // edi
  __int64 Pool2; // rax
  __int64 *v13[10]; // [rsp+30h] [rbp-99h] BYREF
  _QWORD v14[14]; // [rsp+80h] [rbp-49h] BYREF

  memset(v14, 0, 0x68uLL);
  memset(v13, 0, 0x48uLL);
  v8 = *a3;
  for ( i = (struct _MDL *)*a3; ; i = (struct _MDL *)Pool2 )
  {
    v10 = VslpLockPagesForTransfer((__int64)v13, i, *a4, 2, 0);
    if ( v10 < 0 )
      break;
    v14[1] = *(_QWORD *)(a1 + 992);
    v14[4] = v13[7];
    v14[3] = v13[0];
    v14[2] = a2;
    v10 = VslpEnterIumSecureMode(2u, 17, 0, (__int64)v14);
    VslpUnlockPagesForTransfer(v13);
    *a4 = v14[5];
    if ( v10 >= 0 )
    {
      *a3 = v8;
      return (unsigned int)v10;
    }
    if ( v10 != -1073741789 )
      break;
    if ( v8 != *a3 )
      ExFreePoolWithTag(v8, 0);
    Pool2 = ExAllocatePool2(256LL, *a4, 1416850774LL);
    v8 = (void *)Pool2;
    if ( !Pool2 )
    {
      v10 = -1073741670;
      break;
    }
  }
  if ( v8 != *a3 && v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v10;
}
