/*
 * XREFs of VslGetEtwDebugId @ 0x1404FC4DC
 * Callers:
 *     EtwpLocateDbgIdForRegEntry @ 0x140609898 (EtwpLocateDbgIdForRegEntry.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     VslpUnlockPagesForTransfer @ 0x1403941C4 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x140394218 (VslpLockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VslGetEtwDebugId(__int64 a1, __int64 a2, struct _MDL **a3, ULONG *a4)
{
  struct _MDL *v8; // rbx
  int v9; // edi
  struct _MDL *PoolWithTag; // rax
  __int64 *v12[10]; // [rsp+30h] [rbp-99h] BYREF
  _QWORD v13[14]; // [rsp+80h] [rbp-49h] BYREF

  memset(v13, 0, 0x68uLL);
  memset(v12, 0, 0x48uLL);
  v8 = *a3;
  v9 = VslpLockPagesForTransfer((__int64)v12, *a3, *a4, 2, 0);
  if ( v9 < 0 )
  {
LABEL_12:
    if ( v8 != *a3 && v8 )
      ExFreePoolWithTag(v8, 0);
  }
  else
  {
    while ( 1 )
    {
      v13[1] = *(_QWORD *)(a1 + 992);
      v13[4] = v12[7];
      v13[3] = v12[0];
      v13[2] = a2;
      v9 = VslpEnterIumSecureMode(2u, 17, 0, (__int64)v13);
      VslpUnlockPagesForTransfer(v12);
      *a4 = v13[5];
      if ( v9 >= 0 )
        break;
      if ( v9 != -1073741789 )
        goto LABEL_10;
      if ( v8 != *a3 )
        ExFreePoolWithTag(v8, 0);
      PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(PagedPool, *a4, 0x54736D56u);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v9 = -1073741670;
LABEL_10:
        if ( v9 < 0 )
          goto LABEL_12;
        break;
      }
      v9 = VslpLockPagesForTransfer((__int64)v12, PoolWithTag, *a4, 2, 0);
      if ( v9 < 0 )
        goto LABEL_10;
    }
    *a3 = v8;
  }
  return (unsigned int)v9;
}
