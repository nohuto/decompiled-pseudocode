/*
 * XREFs of ?SendWnfNotificationToVmProcess@DXGGLOBAL@@SAJPEAVDXGPROCESS@@PEBU_WNF_STATE_NAME@@IPEAX@Z @ 0x1C026BD90
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0005488 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x1C004684C (-QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::SendWnfNotificationToVmProcess(
        unsigned __int64 a1,
        const struct _WNF_STATE_NAME *a2,
        unsigned int a3,
        void *a4)
{
  size_t v4; // rsi
  ULONG v8; // ebp
  struct _WNF_STATE_NAME *v9; // rbx
  char v11; // al
  unsigned __int64 v12; // rax
  struct _WNF_STATE_NAME v13; // rax
  DXG_DEFERRED_WORK_QUEUE *v14; // rcx

  v4 = a3;
  v8 = a3 + 47;
  v9 = (struct _WNF_STATE_NAME *)operator new(a3 + 103, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( !v9 )
    return 3221225495LL;
  v9[2] = (struct _WNF_STATE_NAME)DXGGLOBAL::SendWnfNotificationToVmProcessWorkItem;
  v11 = *(_BYTE *)(a1 + 347);
  if ( (v11 & 0x20) != 0 )
    v12 = *(_QWORD *)(a1 + 496);
  else
    v12 = a1 & -(__int64)((v11 & 0x10) != 0);
  v9[5] = *(struct _WNF_STATE_NAME *)(v12 + 496);
  v9[6].Data[0] = v8;
  v9[3] = (struct _WNF_STATE_NAME)v9;
  v13 = *(struct _WNF_STATE_NAME *)(a1 + 544);
  v9[7] = 0LL;
  v9[8].Data[0] = 0;
  v9[11] = v13;
  v9[8].Data[1] = 2;
  v9[9].Data[0] = 4;
  v9[12].Data[0] = v4;
  memmove((char *)&v9[12] + 4, a4, v4);
  v14 = (DXG_DEFERRED_WORK_QUEUE *)((char *)DXGGLOBAL::m_pGlobal + 2032);
  v9[10] = *a2;
  DXG_DEFERRED_WORK_QUEUE::QueueWorkItem(v14, (struct DXG_DEFERRED_QUEUE_WORK_ITEM *)v9);
  return 0LL;
}
