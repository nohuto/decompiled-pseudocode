/*
 * XREFs of VidSchWaitForEvents @ 0x1C0011994
 * Callers:
 *     VidSchSuspendResumeDevice @ 0x1C0012470 (VidSchSuspendResumeDevice.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0080A40 (VidSchWaitForCompletionEvent.c)
 *     VidSchSuspendAdapter @ 0x1C0088B30 (VidSchSuspendAdapter.c)
 *     VidSchiSwitchNodeFromContext @ 0x1C008B130 (VidSchiSwitchNodeFromContext.c)
 *     VidSchSwitchFromContext @ 0x1C008B4A0 (VidSchSwitchFromContext.c)
 *     VidSchSwitchFromDevice @ 0x1C00D1550 (VidSchSwitchFromDevice.c)
 * Callees:
 *     VidSchiIsMmIoFlipPending @ 0x1C0015044 (VidSchiIsMmIoFlipPending.c)
 *     VidSchiCheckHwProgress @ 0x1C007EFE0 (VidSchiCheckHwProgress.c)
 */

__int64 __fastcall VidSchWaitForEvents(__int64 a1, ULONG a2, PVOID *a3, union _LARGE_INTEGER *a4, BOOLEAN a5)
{
  union _LARGE_INTEGER *Timeout; // r12
  bool v9; // si
  char IsMmIoFlipPending; // al
  BOOLEAN Alertable; // si
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v16; // r15
  NTSTATUS v17; // eax
  unsigned int v18; // esi
  __int64 v19; // rax
  __int64 v20; // [rsp+40h] [rbp-28h] BYREF
  char v21; // [rsp+70h] [rbp+8h] BYREF

  Timeout = a4;
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 160) )
  {
    v20 = 0LL;
    v16 = 0;
    if ( !a4 )
    {
      Timeout = (union _LARGE_INTEGER *)&v20;
      v16 = 1;
      v20 = -(__int64)((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1);
    }
    v21 = 0;
    do
    {
      v17 = KeWaitForMultipleObjects(a2, a3, WaitAny, Executive, 0, 0, Timeout, 0LL);
      v18 = v17;
      if ( !v16 || v17 != 258 )
        return v18;
    }
    while ( (unsigned int)VidSchiCheckHwProgress(a1, &v21) );
    if ( !*(_DWORD *)(a1 + 2916) )
      return v18;
    v12 = 0;
    if ( !a2 )
      return v18;
    while ( !KeReadStateEvent((PRKEVENT)*a3) )
    {
      ++v12;
      ++a3;
      if ( v12 >= a2 )
        return v18;
    }
    return v12;
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 720) || *(_DWORD *)(a1 + 60) || *(_DWORD *)(a1 + 64);
    IsMmIoFlipPending = VidSchiIsMmIoFlipPending();
    if ( v9 || IsMmIoFlipPending )
    {
      if ( *(_BYTE *)(a1 + 708) )
      {
        *(_QWORD *)(a1 + 1376) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(a1 + 1344), 0, 1u);
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
    v19 = WdLogNewEntry5_WdWarning(v14, v13);
    WdLogEvent5_WdWarning(v19);
    return 3221226166LL;
  }
}
