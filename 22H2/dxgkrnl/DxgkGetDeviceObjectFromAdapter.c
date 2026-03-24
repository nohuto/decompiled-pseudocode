/*
 * XREFs of DxgkGetDeviceObjectFromAdapter @ 0x1C0217E50
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x1C02D5F90 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019574 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C020C004 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 */

__int64 __fastcall DxgkGetDeviceObjectFromAdapter(unsigned int a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  struct DXGADAPTER *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  void *v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rax
  struct DXGADAPTER *v12[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v13[8]; // [rsp+30h] [rbp-28h] BYREF
  struct DXGADAPTER *v14; // [rsp+38h] [rbp-20h]
  char v15; // [rsp+40h] [rbp-18h]

  v12[0] = 0LL;
  if ( a1 && (DXGADAPTER_REFERENCE::AssignByHandle(v12, a1, (__int64)a3, a4), (v5 = v12[0]) != 0LL) )
  {
    v14 = v12[0];
    v15 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
    v8 = (void *)*((_QWORD *)v5 + 27);
    *a3 = v8;
    if ( v8 )
    {
      ObfReferenceObject(v8);
      v9 = 0;
    }
    else
    {
      v10 = WdLogNewEntry5_WdWarning(0LL, v6, v7);
      *(_QWORD *)(v10 + 24) = v5;
      v9 = -1073741130;
      *(_QWORD *)(v10 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v10);
    }
    if ( v15 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  }
  else
  {
    v9 = -1073741275;
  }
  DXGADAPTER_REFERENCE::Assign(v12, 0LL);
  return v9;
}
