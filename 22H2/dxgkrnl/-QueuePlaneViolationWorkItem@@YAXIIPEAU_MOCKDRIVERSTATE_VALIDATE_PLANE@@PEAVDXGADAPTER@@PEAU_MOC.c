/*
 * XREFs of ?QueuePlaneViolationWorkItem@@YAXIIPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@PEAVDXGADAPTER@@PEAU_MOCKDRIVERSTATE_PLANE@@@Z @ 0x1C004E470
 * Callers:
 *     ?ValidatePlaneHelper@MOCKDRIVERSTATE@@AEAAXPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@@Z @ 0x1C004E5A8 (-ValidatePlaneHelper@MOCKDRIVERSTATE@@AEAAXPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall QueuePlaneViolationWorkItem(
        __int64 a1,
        __int64 a2,
        struct _MOCKDRIVERSTATE_VALIDATE_PLANE *a3,
        struct DXGADAPTER *a4,
        struct _MOCKDRIVERSTATE_PLANE *a5)
{
  __int64 v6; // rsi
  __int64 v8; // rbx
  __int64 v9; // rax

  v6 = (unsigned int)a2;
  v8 = (unsigned int)a1;
  v9 = WdLogNewEntry5_WdError(a1, a2);
  *(_QWORD *)(v9 + 24) = v8;
  *(_QWORD *)(v9 + 32) = v6;
  WdLogEvent5_WdError(v9);
  *((_DWORD *)a5 + 652) = *((_DWORD *)a3 + 10);
  *((_DWORD *)a5 + 653) = v6;
  *((_BYTE *)a5 + 2568) = 1;
  _InterlockedIncrement64((volatile signed __int64 *)a4 + 3);
  *((_QWORD *)a5 + 327) = -1LL;
  RtlCaptureStackBackTrace(2u, 0xCu, (PVOID *)a5 + 328, 0LL);
  ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)a5 + 2576), DelayedWorkQueue);
}
