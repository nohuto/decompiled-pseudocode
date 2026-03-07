__int64 __fastcall CComputeScribbleScheduler::Schedule(
        RTL_SRWLOCK *this,
        const struct CComputeScribbleScheduler::ScribbleFrame *a2,
        unsigned int a3,
        unsigned int a4)
{
  RTL_SRWLOCK *v4; // rdi
  __int64 v5; // r15
  __int64 v7; // rbp
  char *i; // rcx
  __int64 v10; // rcx
  int ready; // esi
  __int64 v12; // rdx
  char *Ptr; // rax
  __int64 v15; // rcx
  __int128 v16; // xmm1
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = this + 11;
  v5 = a4;
  v7 = a3;
  AcquireSRWLockExclusive(this + 11);
  for ( i = (char *)this[14].Ptr; i != this[15].Ptr; i += 8 )
  {
    if ( !*(_BYTE *)(*(_QWORD *)i + 240LL) )
      goto LABEL_8;
  }
  if ( (int)v7 - LODWORD(this[20].Ptr) > 5 )
  {
    CComputeScribbleScheduler::StopInternal((CComputeScribbleScheduler *)this);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0xqq_EventWriteTransfer(
        v10,
        (__int64)&EVTDESC_COMPUTESCRIBBLE_WORKERHANG,
        *(_QWORD *)a2,
        v7,
        (char)this[20].Ptr);
  }
LABEL_8:
  if ( !this[12].Ptr )
  {
    ready = CComputeScribbleScheduler::SetupWakeupFence((CComputeScribbleScheduler *)this, a2);
    if ( ready < 0 )
    {
      v12 = 343LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
        (const char *)(unsigned int)ready);
      if ( v4 )
        ReleaseSRWLockExclusive(v4);
      return (unsigned int)ready;
    }
    ready = CComputeScribbleScheduler::ReadyWakeupFence((CComputeScribbleScheduler *)this, v7);
    if ( ready < 0 )
    {
      v12 = 344LL;
      goto LABEL_11;
    }
  }
  Ptr = (char *)this[17].Ptr;
  v15 = 32 * v5;
  v16 = *((_OWORD *)a2 + 1);
  *(_OWORD *)&Ptr[v15] = *(_OWORD *)a2;
  *(_OWORD *)&Ptr[v15 + 16] = v16;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
