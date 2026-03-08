/*
 * XREFs of DxgkEnableUnorderedWaitsForDevice @ 0x1C0165D90
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003634 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkEnableUnorderedWaitsForDevice(unsigned int a1, char a2)
{
  __int64 v3; // rsi
  struct _KTHREAD **Current; // rax
  struct DXGDEVICE *v5; // rbx
  __int64 v6; // rax
  struct DXGDEVICE *v7; // rax
  unsigned int v8; // edi
  _QWORD v10[2]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v11[8]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v12; // [rsp+68h] [rbp-18h]
  char v13; // [rsp+70h] [rbp-10h]
  struct DXGDEVICE *v14; // [rsp+B0h] [rbp+30h] BYREF
  struct DXGDEVICE *v15; // [rsp+B8h] [rbp+38h] BYREF

  v3 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v14 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v15, v3, Current, &v14);
    v5 = v14;
    if ( v14 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v10, v14);
      v6 = *((_QWORD *)v5 + 2);
      v13 = 0;
      v12 = *(_QWORD *)(v6 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
      if ( *((_DWORD *)v5 + 152) == 1 )
      {
        v7 = v14;
        *((_BYTE *)v14 + 1899) = a2;
        if ( !a2 && *((_QWORD *)v7 + 100) )
          (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 736LL) + 8LL) + 856LL))();
        v8 = 0;
      }
      else
      {
        v8 = -1073741130;
        WdLogSingleEntry2(3LL, v3, -1073741130LL);
      }
      if ( v13 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
      if ( v10[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v10);
    }
    else
    {
      v8 = -1073741811;
      WdLogSingleEntry2(2LL, v3, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
        v3,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v15 && _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v15 + 2), v15);
  }
  else
  {
    v8 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return v8;
}
