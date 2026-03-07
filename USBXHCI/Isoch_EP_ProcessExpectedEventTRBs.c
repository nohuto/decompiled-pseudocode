void __fastcall Isoch_EP_ProcessExpectedEventTRBs(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  if ( !*(_BYTE *)(v1 + 37)
    || (v2 = *(_QWORD *)(v1 + 136), _InterlockedIncrement((volatile signed __int32 *)(v2 + 20)) == *(_DWORD *)(v2 + 8)) )
  {
    ESM_AddEvent((KSPIN_LOCK *)(v1 + 296), 150);
  }
}
