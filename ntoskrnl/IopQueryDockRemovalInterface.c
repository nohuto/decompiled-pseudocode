/*
 * XREFs of IopQueryDockRemovalInterface @ 0x140969FF4
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1408625F0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IopSynchronousCall @ 0x14069DD78 (IopSynchronousCall.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopQueryDockRemovalInterface(_QWORD *a1, _QWORD *a2)
{
  _WORD *Pool2; // rax
  _WORD *v5; // rbx
  int v7; // edi
  _QWORD v8[9]; // [rsp+30h] [rbp-78h] BYREF
  GUID v9; // [rsp+78h] [rbp-30h] BYREF

  v9 = GUID_DOCK_INTERFACE;
  Pool2 = (_WORD *)ExAllocatePool2(256LL, 48LL, 538996816LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *Pool2 = 48;
  memset(v8, 0, sizeof(v8));
  LOWORD(v8[0]) = 2075;
  v8[1] = &v9;
  LODWORD(v8[2]) = 48;
  v5[1] = 0;
  v8[3] = v5;
  v8[4] = 0LL;
  v7 = IopSynchronousCall(a1, (__int64)v8, -1073741637, 0LL, 0LL);
  if ( v7 < 0 )
    ExFreePoolWithTag(v5, 0);
  else
    *a2 = v5;
  return (unsigned int)v7;
}
