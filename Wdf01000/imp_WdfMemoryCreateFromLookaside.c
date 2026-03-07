__int64 __fastcall imp_WdfMemoryCreateFromLookaside(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFLOOKASIDE__ *Lookaside,
        WDFMEMORY__ **Memory)
{
  FxLookasideList *v4; // rcx
  __int64 result; // rax
  int v6; // ebx
  __int64 v7; // rcx
  void *retaddr; // [rsp+48h] [rbp+18h]
  FxLookasideList *pLookaside; // [rsp+50h] [rbp+20h] BYREF
  FxMemoryObject *pMemory; // [rsp+60h] [rbp+30h] BYREF
  WDFMEMORY__ *hMemory; // [rsp+68h] [rbp+38h] BYREF

  hMemory = 0LL;
  pLookaside = 0LL;
  pMemory = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Lookaside,
    0x1009u,
    (void **)&pLookaside);
  v4 = pLookaside;
  if ( !Memory )
    FxVerifierNullBugCheck(pLookaside->m_Globals, retaddr);
  *Memory = 0LL;
  result = ((__int64 (__fastcall *)(FxLookasideList *, FxMemoryObject **))v4->Allocate)(v4, &pMemory);
  if ( (int)result >= 0 )
  {
    v6 = FxObject::Commit(pMemory, &pLookaside->m_MemoryAttributes, (void **)&hMemory, 0LL, 1u);
    if ( v6 < 0 )
    {
      FxObject::ClearEvtCallbacks(pMemory);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
    }
    else
    {
      *Memory = hMemory;
    }
    return (unsigned int)v6;
  }
  return result;
}
