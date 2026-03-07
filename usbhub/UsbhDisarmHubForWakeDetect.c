void __fastcall UsbhDisarmHubForWakeDetect(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx

  if ( (UsbhLogMask & 0x10) == 0 )
  {
    if ( a1 )
      goto LABEL_5;
LABEL_13:
    UsbhTrapFatal_Dbg(a1, a1);
  }
  if ( !a1 )
    goto LABEL_13;
  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v2 + 880)) & *(_DWORD *)(v2 + 884));
    *(_DWORD *)v3 = 760698728;
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_QWORD *)(v3 + 16) = 0LL;
    *(_QWORD *)(v3 + 24) = 0LL;
  }
LABEL_5:
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v4 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( *(_DWORD *)(v4 + 4884) )
  {
    _m_prefetchw((const void *)(v4 + 4884));
    if ( _InterlockedOr((volatile signed __int32 *)(v4 + 4884), 1u) == 4 )
    {
      IoCancelIrp(*(PIRP *)(v4 + 4888));
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 4884), 4, 5) == 7 )
        IofCompleteRequest(*(PIRP *)(v4 + 4888), 0);
    }
  }
}
