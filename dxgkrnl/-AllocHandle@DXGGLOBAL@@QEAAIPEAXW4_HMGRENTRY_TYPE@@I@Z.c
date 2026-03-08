/*
 * XREFs of ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C000E0E4
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0196360 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@@Z @ 0x1C01A2F18 (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@@Z.c)
 *     ?Initialize@DXGKEYEDMUTEX@@QEAAJI@Z @ 0x1C034B560 (-Initialize@DXGKEYEDMUTEX@@QEAAJI@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01A3A50 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall DXGGLOBAL::AllocHandle(__int64 a1, __int64 a2, unsigned int a3)
{
  int v7; // edx
  int v8; // ecx
  int v9; // r8d

  if ( *(struct _KTHREAD **)(a1 + 312) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1455LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v8,
          v7,
          v9,
          0,
          2,
          -1,
          (__int64)L"m_ShareMutex.IsOwner()",
          1455LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return HMGRTABLE::AllocHandle(a1 + 336, a2, a3, 2LL, 0);
}
