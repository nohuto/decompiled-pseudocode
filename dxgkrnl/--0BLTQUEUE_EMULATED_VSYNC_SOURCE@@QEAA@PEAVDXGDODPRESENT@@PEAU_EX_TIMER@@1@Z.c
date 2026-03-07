BLTQUEUE_EMULATED_VSYNC_SOURCE *__fastcall BLTQUEUE_EMULATED_VSYNC_SOURCE::BLTQUEUE_EMULATED_VSYNC_SOURCE(
        BLTQUEUE_EMULATED_VSYNC_SOURCE *this,
        struct DXGDODPRESENT *a2,
        struct _EX_TIMER *a3,
        struct _EX_TIMER *a4)
{
  BLTQUEUE_EMULATED_VSYNC_SOURCE *result; // rax
  DXGDODPRESENT *v9; // rcx
  DXGADAPTER *Adapter; // rax
  struct _LUID *v11; // rdx
  char v12; // r8

  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &BLTQUEUE_EMULATED_VSYNC_SOURCE::`vftable';
  *((_BYTE *)this + 8) = 0;
  KeInitializeEvent((PRKEVENT)this + 1, SynchronizationEvent, 0);
  *((_BYTE *)this + 8) = 0;
  if ( a2 )
  {
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(a2) + 109) & 0x100) != 0 )
    {
      Adapter = DXGDODPRESENT::GetAdapter(v9);
      if ( !DXGADAPTER::IsAdapterSessionized(Adapter, v11, 0LL, 0LL) || g_bSkuSupportMultipleUsers == v12 )
        *((_BYTE *)this + 8) = 1;
    }
  }
  result = this;
  if ( !*((_BYTE *)this + 8) )
    a3 = a4;
  *((_QWORD *)this + 2) = a3;
  return result;
}
