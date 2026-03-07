__int64 __fastcall FxCompanionTarget::SendTaskSynchronously(
        FxCompanionTarget *this,
        unsigned __int16 TaskType,
        unsigned int TaskOpCode,
        _WDF_MEMORY_DESCRIPTOR *InputBuffer,
        _WDF_MEMORY_DESCRIPTOR *OutputBuffer,
        __int64 *Timeout,
        unsigned __int64 *BytesReturned)
{
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // r10
  unsigned int Length; // ecx
  void *Buffer; // r8
  int v16; // eax
  unsigned int v17; // ebx
  const void *_a1; // rax
  __int64 v20; // r10

  v12 = 0LL;
  if ( (int)FxCompanionTarget::IncrementPendingTaskCountWithFloor(this) < 0 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(*(FxObject **)(v10 + 152));
    WPP_IFR_SF_q(
      *(_FX_DRIVER_GLOBALS **)(v20 + 16),
      2u,
      0xCu,
      0xBu,
      (const _GUID *)&WPP_FxCompanionTarget_cpp_Traceguids,
      _a1);
    if ( BytesReturned )
      *BytesReturned = 0LL;
    return 3221225860LL;
  }
  else
  {
    v13 = *(_QWORD *)(v10 + 144);
    if ( OutputBuffer )
    {
      Length = OutputBuffer->u.BufferType.Length;
      Buffer = OutputBuffer->u.BufferType.Buffer;
    }
    else
    {
      Length = 0;
      Buffer = 0LL;
    }
    if ( v11 )
    {
      v16 = *(_DWORD *)(v11 + 16);
      v12 = *(_QWORD *)(v11 + 8);
    }
    else
    {
      v16 = 0;
    }
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int, void *, unsigned int, __int64 *, unsigned __int64 *))(*(_QWORD *)v13 + 8LL))(
            v13,
            TaskType,
            TaskOpCode,
            v12,
            v16,
            Buffer,
            Length,
            Timeout,
            BytesReturned);
    FxCompanionTarget::DecrementPendingTaskCount(this);
    return v17;
  }
}
