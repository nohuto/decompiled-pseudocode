__int64 __fastcall DXGGLOBAL::SendWnfNotificationToVmProcess(
        unsigned __int64 a1,
        const struct _WNF_STATE_NAME *a2,
        unsigned int a3,
        void *a4)
{
  size_t v4; // rsi
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rbx
  int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // rcx

  v4 = a3;
  v8 = a3 + 47;
  v9 = operator new[](a3 + 103, 0x4B677844u, 64LL);
  v10 = v9;
  if ( !v9 )
    return 3221225495LL;
  *(_QWORD *)(v9 + 16) = DXGGLOBAL::SendWnfNotificationToVmProcessWorkItem;
  v12 = *(_DWORD *)(a1 + 424);
  if ( (v12 & 0x100) != 0 )
    v13 = *(_QWORD *)(a1 + 608);
  else
    v13 = a1 & -(__int64)((v12 & 0x80u) != 0);
  *(_QWORD *)(v10 + 40) = *(_QWORD *)(v13 + 608);
  *(_DWORD *)(v10 + 48) = v8;
  *(_QWORD *)(v10 + 24) = v10;
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 88LL);
  *(_QWORD *)(v10 + 56) = 0LL;
  *(_DWORD *)(v10 + 64) = 0;
  *(_QWORD *)(v10 + 88) = v14;
  *(_BYTE *)(v10 + 68) = 2;
  *(_DWORD *)(v10 + 68) &= 0x1FFu;
  *(_DWORD *)(v10 + 72) = 4;
  *(_DWORD *)(v10 + 96) = v4;
  memmove((void *)(v10 + 100), a4, v4);
  *(struct _WNF_STATE_NAME *)(v10 + 80) = *a2;
  DXG_DEFERRED_WORK_QUEUE::QueueWorkItem(
    (DXG_DEFERRED_WORK_QUEUE *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 2184LL),
    (struct DXG_DEFERRED_QUEUE_WORK_ITEM *)v10);
  return 0LL;
}
