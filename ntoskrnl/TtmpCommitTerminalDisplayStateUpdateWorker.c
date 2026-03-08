/*
 * XREFs of TtmpCommitTerminalDisplayStateUpdateWorker @ 0x1409A0500
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x14099FD30 (TtmiSessionDeviceListWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     TtmpFindDeviceByDeviceId @ 0x1409A06A4 (TtmpFindDeviceByDeviceId.c)
 *     TtmpPushTerminalDisplayStateOntoDevice @ 0x1409A0A2C (TtmpPushTerminalDisplayStateOntoDevice.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall TtmpCommitTerminalDisplayStateUpdateWorker(__int64 a1, int a2)
{
  __int64 v2; // r12
  void **v4; // r15
  char v5; // r14
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  void **v11; // rbx
  __int64 v12; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v13[78]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = a2;
  memset(v13, 0, 0x268uLL);
  v12 = 0LL;
  v4 = (void **)(a1 + 16 * (v2 + 8));
  LODWORD(v13[4]) = -1;
  v5 = 0;
  v13[3] = 0xFFFFFFFFLL;
  v6 = *v4;
  if ( *v4 != v4 )
  {
    while ( 1 )
    {
      if ( !(unsigned __int8)TtmpFindDeviceByDeviceId(a1, *((unsigned int *)v6 + 8), &v12) )
      {
        TtmiLogError("TtmpCommitTerminalDisplayStateUpdateWorker", 2986LL, 3221226021LL, 0xFFFFFFFFLL);
        goto LABEL_12;
      }
      v7 = v13[7];
      v8 = v12;
      if ( !v13[7] )
      {
        if ( *(_QWORD *)(v12 + 56) )
          break;
      }
      if ( v5 )
        goto LABEL_8;
LABEL_11:
      TtmpPushTerminalDisplayStateOntoDevice(a1, v8, (unsigned int)v2);
LABEL_12:
      v10 = (_QWORD *)*v6;
      v11 = (void **)v6[1];
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || *v11 != v6 )
        __fastfail(3u);
      *v11 = v10;
      v10[1] = v11;
      ExFreePoolWithTag(v6, 0x446D7454u);
      v6 = *v11;
      if ( *v11 == v4 )
      {
        if ( v5 )
          TtmpPushTerminalDisplayStateOntoDevice(a1, v13, (unsigned int)v2);
        return;
      }
    }
    v5 = 1;
    LODWORD(v13[2]) = *(_DWORD *)(v12 + 16);
    LODWORD(v13[9]) = *(_DWORD *)(v12 + 72);
    v7 = *(_QWORD *)(v12 + 56);
    v13[7] = v7;
LABEL_8:
    v9 = *(_QWORD *)(v12 + 56);
    if ( v9 && v9 != v7 )
    {
      TtmpPushTerminalDisplayStateOntoDevice(a1, v13, (unsigned int)v2);
      LODWORD(v13[2]) = *(_DWORD *)(v8 + 16);
      LODWORD(v13[9]) = *(_DWORD *)(v8 + 72);
      v13[7] = *(_QWORD *)(v8 + 56);
    }
    goto LABEL_11;
  }
}
