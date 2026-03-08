/*
 * XREFs of ?RfxVgpuResetCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C004CC90
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     DpiIsRfxVgpuDevice @ 0x1C0394B40 (DpiIsRfxVgpuDevice.c)
 */

__int64 __fastcall RfxVgpuResetCallback(struct DXGADAPTER *a1, _DWORD *a2)
{
  __int64 v3; // rbx
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  _BYTE v10[8]; // [rsp+20h] [rbp-E0h] BYREF
  struct DXGADAPTER *v11; // [rsp+28h] [rbp-D8h]
  char v12; // [rsp+30h] [rbp-D0h]
  _OWORD v13[3]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v14[144]; // [rsp+70h] [rbp-90h] BYREF

  v11 = a1;
  LODWORD(v3) = 0;
  v12 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
  if ( *((_DWORD *)a1 + 50) == 1 && (unsigned __int8)DpiIsRfxVgpuDevice(*((_QWORD *)a1 + 27)) )
  {
    if ( v12 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v14, a1, 0LL);
    v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v14, 0LL);
    v3 = v5;
    if ( v5 < 0
      || (v6 = *((_QWORD *)a1 + 366),
          v7 = *(_QWORD *)(v6 + 744),
          memset(v13, 0, sizeof(v13)),
          LODWORD(v13[0]) = 6,
          v8 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)(*(_QWORD *)(v6 + 736) + 8LL) + 64LL))(v7, v13),
          v3 = v8,
          v8 < 0) )
    {
      WdLogSingleEntry2(3LL, a1, v3);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v14);
    if ( a2 )
      *a2 = v3;
  }
  else if ( v12 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
  }
  return (unsigned int)v3;
}
