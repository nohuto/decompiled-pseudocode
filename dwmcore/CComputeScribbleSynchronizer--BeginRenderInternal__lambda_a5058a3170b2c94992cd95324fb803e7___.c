char *__fastcall CComputeScribbleSynchronizer::BeginRenderInternal__lambda_a5058a3170b2c94992cd95324fb803e7___(
        PSRWLOCK SRWLock,
        __int64 a2)
{
  __int64 v4; // rcx
  PVOID Ptr; // r8
  _QWORD *v6; // rdx
  int v7; // eax
  char *v8; // rbx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  AcquireSRWLockExclusive(SRWLock);
  Ptr = SRWLock[3].Ptr;
  if ( Ptr )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    {
      McTemplateU0qx_EventWriteTransfer(v4, &EVTDESC_COMPUTESCRIBBLE_FENCEWAIT, LODWORD(SRWLock[6].Ptr), SRWLock[3].Ptr);
      Ptr = SRWLock[3].Ptr;
    }
    if ( LOBYTE(SRWLock[4].Ptr) )
      v6 = SRWLock[1].Ptr;
    else
      v6 = SRWLock[2].Ptr;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, PVOID))(**(_QWORD **)(*(_QWORD *)a2 + 560LL) + 1184LL))(
           *(_QWORD *)(*(_QWORD *)a2 + 560LL),
           v6[2],
           Ptr);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        43LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblesynchronizer.cpp",
        (const char *)(unsigned int)v7,
        v10);
  }
  v8 = (char *)SRWLock[3].Ptr + 1;
  LOBYTE(SRWLock[4].Ptr) = 1;
  SRWLock[3].Ptr = v8;
  ReleaseSRWLockExclusive(SRWLock);
  return v8;
}
