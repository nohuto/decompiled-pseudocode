/*
 * XREFs of ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C00F42B0
 * Callers:
 *     DxgkRender @ 0x1C00F3920 (DxgkRender.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C00F4480 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023C830 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025FCF4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkReferenceAllocationList(
        unsigned int *a1,
        struct _D3DDDI_ALLOCATIONLIST *a2,
        struct DXGALLOCATION **a3,
        struct DXGDEVICE *a4)
{
  struct _D3DDDI_ALLOCATIONLIST *v4; // rdi
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rdx
  struct DXGALLOCATION **v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // r14d
  unsigned int v14; // r12d
  unsigned int i; // ebx
  __int64 hAllocation; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v20; // r9
  struct _EX_RUNDOWN_REF *v21; // rsi
  __int64 v22; // rcx
  struct DXGTHREAD *Current; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rax
  _BYTE v28[88]; // [rsp+30h] [rbp-58h] BYREF
  struct _D3DDDI_ALLOCATIONLIST *v29; // [rsp+98h] [rbp+10h]

  v29 = a2;
  v4 = a2;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v9 = *((_QWORD *)Current + 1)) == 0 )
  {
    v9 = v8;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v28, (struct _KTHREAD **)v9);
  v13 = *a1;
  v14 = 0;
  for ( i = 0; i < v13; ++i )
  {
    hAllocation = v4->hAllocation;
    if ( (_DWORD)hAllocation )
    {
      v17 = ((unsigned int)hAllocation >> 6) & 0xFFFFFF;
      if ( (unsigned int)v17 >= *(_DWORD *)(v9 + 256) )
        goto LABEL_8;
      v12 = (unsigned int)v17;
      v20 = *(_QWORD *)(v9 + 240);
      v10 = *(unsigned int *)(v20 + 16 * v17 + 8);
      v11 = (struct DXGALLOCATION **)(((unsigned int)hAllocation >> 25) & 0x60);
      if ( (((unsigned int)hAllocation >> 25) & 0x60) != (*(_BYTE *)(v20 + 16 * v17 + 8) & 0x60)
        || (v10 & 0x2000) != 0
        || (v10 & 0x1F) == 0 )
      {
        goto LABEL_8;
      }
      v12 = 2LL * (unsigned int)v17;
      v10 &= 0x1Fu;
      if ( (_BYTE)v10 != 5 )
      {
        v24 = WdLogNewEntry5_WdError(v11, v10);
        *(_QWORD *)(v24 + 24) = 316LL;
        WdLogEvent5_WdError(v24);
LABEL_8:
        v18 = WdLogNewEntry5_WdWarning(v11, v10, v12);
        *(_QWORD *)(v18 + 24) = hAllocation;
        WdLogEvent5_WdWarning(v18);
        v14 = -1071775468;
        break;
      }
      v21 = *(struct _EX_RUNDOWN_REF **)(v20 + 16LL * (unsigned int)v17);
      if ( !v21 )
        goto LABEL_8;
      if ( a4 )
      {
        v25 = *((_QWORD *)a4 + 2);
        if ( *(_QWORD *)(v25 + 16) != *(_QWORD *)(*(_QWORD *)(v21[1].Count + 16) + 16LL) )
        {
          v26 = WdLogNewEntry5_WdWarning(v25, v10, v12);
          *(_QWORD *)(v26 + 24) = hAllocation;
          WdLogEvent5_WdWarning(v26);
          v14 = -1071775467;
          break;
        }
      }
      if ( !ExAcquireRundownProtection(v21 + 11) )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v10);
        v27[3] = 275LL;
        v27[4] = 38LL;
        v27[5] = v21;
        v27[6] = 0LL;
        v27[7] = 0LL;
        WdLogEvent5_WdCriticalError(v27);
      }
      v11 = a3;
      a3[i] = (struct DXGALLOCATION *)v21;
    }
    v4 = ++v29;
  }
  *a1 = i;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
  return v14;
}
