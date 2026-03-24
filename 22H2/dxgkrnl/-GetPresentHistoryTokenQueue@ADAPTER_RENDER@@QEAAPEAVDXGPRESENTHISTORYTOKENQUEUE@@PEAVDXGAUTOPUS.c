/*
 * XREFs of ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C0156C64
 * Callers:
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C0156B30 (DxgkGetPresentHistoryReadyEvent.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C023B6F4 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z @ 0x1C001A9DC (--_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ @ 0x1C0156DE8 (-Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ.c)
 *     ??0DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ @ 0x1C0156FD4 (--0DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ.c)
 */

struct DXGPRESENTHISTORYTOKENQUEUE *__fastcall ADAPTER_RENDER::GetPresentHistoryTokenQueue(
        void **this,
        DXGPUSHLOCK **a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // ebp
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v9; // rdi
  struct DXGPRESENTHISTORYTOKENQUEUE *result; // rax
  _QWORD *v11; // rax
  __int64 v12; // rsi
  DXGPRESENTHISTORYTOKENQUEUE *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  DXGPRESENTHISTORYTOKENQUEUE *v16; // rdi
  int v17; // ebp
  SIZE_T v18; // rax
  char *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  char *v22; // rsi
  const void *v23; // rdx
  __int64 v24; // rax

  v4 = a3;
  CurrentProcess = PsGetCurrentProcess(this, a2, a3, a4);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  v9 = ProcessSessionId;
  if ( ProcessSessionId >= *((_DWORD *)this + 218)
    || (result = (struct DXGPRESENTHISTORYTOKENQUEUE *)*((_QWORD *)this[110] + ProcessSessionId)) == 0LL )
  {
    if ( !v4 )
      return 0LL;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)a2);
    DXGPUSHLOCK::AcquireExclusive(a2[1]);
    *((_DWORD *)a2 + 4) = 2;
    if ( (unsigned int)v9 >= *((_DWORD *)this + 218) )
    {
      v17 = v9 + 4;
      v18 = 8LL * (unsigned int)(v9 + 4);
      if ( !is_mul_ok((unsigned int)(v9 + 4), 8uLL) )
        v18 = -1LL;
      v19 = (char *)operator new[](v18, 0x4B677844u, PagedPool);
      v22 = v19;
      if ( !v19 )
      {
        v24 = WdLogNewEntry5_WdError(v21, v20);
        *(_QWORD *)(v24 + 32) = v9;
        goto LABEL_23;
      }
      v23 = this[110];
      if ( v23 )
        memmove(v19, v23, 8LL * *((unsigned int *)this + 218));
      memset(&v22[8 * *((unsigned int *)this + 218)], 0, 8LL * (unsigned int)(v17 - *((_DWORD *)this + 218)));
      operator delete[](this[110]);
      this[110] = v22;
      *((_DWORD *)this + 218) = v17;
    }
    v11 = this[110];
    v12 = v9;
    if ( v11[v9] )
      return (struct DXGPRESENTHISTORYTOKENQUEUE *)v11[v12];
    v13 = (DXGPRESENTHISTORYTOKENQUEUE *)operator new[](0x4850uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v13 )
      v16 = DXGPRESENTHISTORYTOKENQUEUE::DXGPRESENTHISTORYTOKENQUEUE(v13);
    else
      v16 = 0LL;
    if ( v16 )
    {
      if ( (int)DXGPRESENTHISTORYTOKENQUEUE::Initialize(v16) >= 0 )
      {
        *((_QWORD *)this[110] + v12) = v16;
        v11 = this[110];
        return (struct DXGPRESENTHISTORYTOKENQUEUE *)v11[v12];
      }
      DXGPRESENTHISTORYTOKENQUEUE::`scalar deleting destructor'(v16);
      return 0LL;
    }
    v24 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v24 + 32) = v12;
LABEL_23:
    *(_QWORD *)(v24 + 24) = this;
    WdLogEvent5_WdError(v24);
    return 0LL;
  }
  return result;
}
