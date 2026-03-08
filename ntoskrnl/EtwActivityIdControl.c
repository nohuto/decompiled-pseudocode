/*
 * XREFs of EtwActivityIdControl @ 0x140244870
 * Callers:
 *     IoReuseIrp @ 0x1402B1EB0 (IoReuseIrp.c)
 *     IoSetActivityIdIrp @ 0x1402B2080 (IoSetActivityIdIrp.c)
 *     IopInitActivityIdIrp @ 0x140553324 (IopInitActivityIdIrp.c)
 *     VrpPostQueryKey @ 0x1406C14A4 (VrpPostQueryKey.c)
 *     VrpPreOpenOrCreate @ 0x1406C1A34 (VrpPreOpenOrCreate.c)
 *     VrpPostOpenOrCreate @ 0x1406C2968 (VrpPostOpenOrCreate.c)
 *     VrpRegistryCallback @ 0x1406C2D60 (VrpRegistryCallback.c)
 *     VrpPreLoadKey @ 0x140735EB4 (VrpPreLoadKey.c)
 *     VrpPostEnumerateKey @ 0x140736428 (VrpPostEnumerateKey.c)
 *     VrpIoctlDeviceDispatch @ 0x140736DF0 (VrpIoctlDeviceDispatch.c)
 *     IoCaptureLiveDump @ 0x140948A78 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140949354 (IoWriteDeferredLiveDumpData.c)
 *     VrpPostUnloadKey @ 0x140A6FF3C (VrpPostUnloadKey.c)
 *     VrpPreFlushKey @ 0x140A6FFDC (VrpPreFlushKey.c)
 *     VrpPreQueryKeyName @ 0x140A700A4 (VrpPreQueryKeyName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall EtwActivityIdControl(ULONG ControlCode, LPGUID ActivityId)
{
  volatile signed __int64 *EtwSupport; // rax
  struct _KTHREAD *CurrentThread; // r8
  GUID *Teb; // r9
  _KPROCESS *Process; // r8
  GUID *v7; // r9
  __int16 v8; // ax
  ULONG v9; // ecx
  ULONG v10; // ecx
  volatile signed __int64 *v11; // rax
  GUID v12; // xmm1
  NTSTATUS v13; // [rsp+0h] [rbp-28h]
  GUID *v14; // [rsp+8h] [rbp-20h]

  v13 = 0;
  if ( ControlCode == 3 )
  {
    EtwSupport = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
    *(_QWORD *)ActivityId->Data4 = _InterlockedIncrement64(EtwSupport + 1);
    *(_QWORD *)&ActivityId->Data1 = *EtwSupport;
    return v13;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) == 0 && CurrentThread->ApcStateIndex != 1 )
  {
    Teb = (GUID *)CurrentThread->Teb;
    if ( Teb )
    {
      v14 = Teb + 369;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[1].Affinity.StaticBitmap[30]
        && ((v8 = WORD2(Process[2].Affinity.StaticBitmap[20]), v8 == 332) || v8 == 452) )
      {
        v7 = Teb + 757;
        v14 = v7;
      }
      else
      {
        v7 = Teb + 369;
      }
      if ( ControlCode == 1 )
      {
        *ActivityId = *v7;
      }
      else
      {
        v9 = ControlCode - 2;
        if ( v9 )
        {
          v10 = v9 - 2;
          if ( v10 )
          {
            if ( v10 == 1 )
            {
              *ActivityId = *v7;
              v11 = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
              *(_QWORD *)v14->Data4 = _InterlockedIncrement64(v11 + 1);
              *(_QWORD *)&v14->Data1 = *v11;
            }
            else
            {
              return -1073741811;
            }
          }
          else
          {
            v12 = *v7;
            *v7 = *ActivityId;
            *ActivityId = v12;
          }
        }
        else
        {
          *v7 = *ActivityId;
        }
      }
      return v13;
    }
  }
  return -1073741637;
}
