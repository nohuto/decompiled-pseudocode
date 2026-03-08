/*
 * XREFs of ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C01A1740
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C01A0C10 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C030302C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkRender @ 0x1C0348D00 (DxgkRender.c)
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0373960 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00163C0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0024424 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkReferenceAllocationList(
        unsigned int *a1,
        struct _D3DDDI_ALLOCATIONLIST *a2,
        struct DXGALLOCATION **a3,
        struct DXGDEVICE *a4)
{
  struct _D3DDDI_ALLOCATIONLIST *v4; // r14
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v8; // rdi
  unsigned int v9; // esi
  struct DXGPROCESS *v10; // r13
  unsigned int v11; // r15d
  unsigned int i; // ebx
  __int64 hAllocation; // r14
  unsigned int v14; // eax
  __int64 v15; // rdi
  int v16; // edx
  struct _EX_RUNDOWN_REF *v17; // rdi
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  _BYTE v22[88]; // [rsp+60h] [rbp-58h] BYREF
  struct _D3DDDI_ALLOCATIONLIST *v23; // [rsp+C8h] [rbp+10h]

  v23 = a2;
  v4 = a2;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
    goto LABEL_3;
  Current = DXGTHREAD::GetCurrent();
  if ( !Current )
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v10 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( !v10 )
    {
      WdLogSingleEntry1(2LL, 2923LL);
      v9 = 0;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_4;
    }
LABEL_28:
    v9 = 0;
    goto LABEL_5;
  }
  v10 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
  if ( v10 )
    goto LABEL_28;
LABEL_3:
  v9 = 0;
LABEL_4:
  v10 = v8;
LABEL_5:
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v22, v10);
  v11 = *a1;
  for ( i = 0; i < v11; ++i )
  {
    hAllocation = v4->hAllocation;
    if ( !(_DWORD)hAllocation )
      goto LABEL_22;
    v14 = ((unsigned int)hAllocation >> 6) & 0xFFFFFF;
    if ( v14 >= *((_DWORD *)v10 + 74) )
      goto LABEL_16;
    v15 = *((_QWORD *)v10 + 35) + 16LL * v14;
    if ( (((unsigned int)hAllocation >> 25) & 0x60) != (*(_BYTE *)(v15 + 8) & 0x60) )
      goto LABEL_16;
    if ( (*(_DWORD *)(v15 + 8) & 0x2000) != 0 )
      goto LABEL_16;
    v16 = *(_DWORD *)(v15 + 8) & 0x1F;
    if ( !v16 )
      goto LABEL_16;
    if ( v16 != 5 )
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_16:
      v17 = 0LL;
      goto LABEL_17;
    }
    v17 = *(struct _EX_RUNDOWN_REF **)v15;
LABEL_17:
    if ( !v17 )
    {
      WdLogSingleEntry1(3LL, hAllocation);
      v9 = -1071775468;
      break;
    }
    if ( a4 && *(_QWORD *)(*((_QWORD *)a4 + 2) + 16LL) != *(_QWORD *)(*(_QWORD *)(v17[1].Count + 16) + 16LL) )
    {
      WdLogSingleEntry1(3LL, hAllocation);
      v9 = -1071775467;
      break;
    }
    if ( !ExAcquireRundownProtection(v17 + 11) )
      WdLogSingleEntry5(0LL, 275LL, 38LL, v17, 0LL, 0LL);
    a3[i] = (struct DXGALLOCATION *)v17;
LABEL_22:
    v4 = ++v23;
  }
  *a1 = i;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
  return v9;
}
