/*
 * XREFs of VidSchWaitForEvents @ 0x1C0014E64
 * Callers:
 *     VidSchSuspendResumeDevice @ 0x1C0012E60 (VidSchSuspendResumeDevice.c)
 *     VidSchiSwitchNodeFromContext @ 0x1C00AD9A0 (VidSchiSwitchNodeFromContext.c)
 *     VidSchWaitForCompletionEvent @ 0x1C00ADD4C (VidSchWaitForCompletionEvent.c)
 *     VidSchSwitchFromDevice @ 0x1C00ADEF0 (VidSchSwitchFromDevice.c)
 *     VidSchSuspendAdapter @ 0x1C00AE170 (VidSchSuspendAdapter.c)
 *     VidSchSwitchFromContext @ 0x1C00AE3A0 (VidSchSwitchFromContext.c)
 *     VidSchiSuspendFlipQueues @ 0x1C00B4208 (VidSchiSuspendFlipQueues.c)
 * Callees:
 *     VidSchiIsMmIoFlipPending @ 0x1C0017B4C (VidSchiIsMmIoFlipPending.c)
 *     VidSchiCheckHwProgress @ 0x1C00A5940 (VidSchiCheckHwProgress.c)
 */

__int64 __fastcall VidSchWaitForEvents(__int64 a1, ULONG a2, PVOID *a3, union _LARGE_INTEGER *a4, BOOLEAN a5)
{
  union _LARGE_INTEGER *Timeout; // r15
  bool v9; // si
  char IsMmIoFlipPending; // al
  BOOLEAN Alertable; // si
  unsigned int v12; // edi
  char v14; // r12
  NTSTATUS v15; // eax
  unsigned int v16; // esi
  __int64 v17; // [rsp+40h] [rbp-28h] BYREF
  char v18; // [rsp+70h] [rbp+8h] BYREF

  Timeout = a4;
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 168) )
  {
    v17 = 0LL;
    v14 = 0;
    if ( !a4 )
    {
      Timeout = (union _LARGE_INTEGER *)&v17;
      v14 = 1;
      v17 = -(__int64)((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1);
    }
    v18 = 0;
    do
    {
      v15 = KeWaitForMultipleObjects(a2, a3, WaitAny, Executive, 0, 0, Timeout, 0LL);
      v16 = v15;
      if ( !v14 || v15 != 258 )
        return v16;
    }
    while ( (unsigned int)VidSchiCheckHwProgress(a1, &v18) );
    if ( v16 != 258 )
      return v16;
    if ( !*(_DWORD *)(a1 + 3012) )
      return v16;
    v12 = 0;
    if ( !a2 )
      return v16;
    while ( !KeReadStateEvent((PRKEVENT)*a3) )
    {
      ++v12;
      ++a3;
      if ( v12 >= a2 )
        return v16;
    }
    return v12;
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 728) || *(_DWORD *)(a1 + 68) || *(_DWORD *)(a1 + 72);
    IsMmIoFlipPending = VidSchiIsMmIoFlipPending(a1, 0LL);
    if ( v9 || IsMmIoFlipPending )
    {
      if ( *(_BYTE *)(a1 + 716) )
      {
        *(_QWORD *)(a1 + 1392) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(a1 + 1360), 0, 1u);
      }
    }
    Alertable = a5;
    while ( 1 )
    {
      v12 = KeWaitForMultipleObjects(a2, a3, WaitAny, Executive, 0, Alertable, Timeout, 0LL);
      if ( Alertable )
      {
        if ( PsIsThreadTerminating(KeGetCurrentThread()) )
          break;
      }
      if ( v12 != 257 )
        return v12;
    }
    WdLogSingleEntry0(3LL);
    return 3221226166LL;
  }
}
