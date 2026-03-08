/*
 * XREFs of NtAlpcImpersonateClientContainerOfPort @ 0x140975AB0
 * Callers:
 *     <none>
 * Callees:
 *     PsImpersonateContainerOfThread @ 0x140225F60 (PsImpersonateContainerOfThread.c)
 *     PoEnergyEstimationEnabled @ 0x1402384C0 (PoEnergyEstimationEnabled.c)
 *     IoThreadToProcess @ 0x140248470 (IoThreadToProcess.c)
 *     ObDereferenceObjectDeferDelete @ 0x1402637F0 (ObDereferenceObjectDeferDelete.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x1402E03D0 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PsGetWorkOnBehalfThread @ 0x14033E134 (PsGetWorkOnBehalfThread.c)
 *     AlpcpCaptureIdMessage @ 0x1406D4EB0 (AlpcpCaptureIdMessage.c)
 *     AlpcpUnlockMessage @ 0x140716BD8 (AlpcpUnlockMessage.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     AlpcpLookupMessage @ 0x1407CA7C0 (AlpcpLookupMessage.c)
 */

__int64 __fastcall NtAlpcImpersonateClientContainerOfPort(HANDLE Handle, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID v5; // r14
  int v6; // edi
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v8; // r9
  struct _KTHREAD *v9; // r15
  struct _KTHREAD *WorkOnBehalfThread; // rax
  struct _KTHREAD *v11; // rsi
  struct _KTHREAD *v12; // r8
  void *Teb; // r8
  __int64 v14; // r8
  int v16; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR v17; // [rsp+38h] [rbp-40h] BYREF
  PVOID Object; // [rsp+40h] [rbp-38h] BYREF
  PVOID v19; // [rsp+48h] [rbp-30h]
  __int64 v20[5]; // [rsp+50h] [rbp-28h] BYREF
  int v21; // [rsp+90h] [rbp+18h] BYREF
  int v22; // [rsp+98h] [rbp+20h] BYREF

  v21 = 0;
  v16 = 0;
  v17 = 0LL;
  v22 = 0;
  v20[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = 0LL;
  v19 = 0LL;
  if ( a3 )
  {
    v6 = -1073741811;
  }
  else
  {
    AlpcpCaptureIdMessage(a2, &v22, &v21);
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(Handle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    v5 = Object;
    v19 = Object;
    if ( v6 >= 0 )
    {
      if ( (*((_BYTE *)Object + 416) & 6) == 6
        && KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)*((_QWORD *)Object + 3) )
      {
        v6 = AlpcpLookupMessage((__int64)Object, v22, v21, v8, &v17);
        v21 = v6;
        if ( v6 >= 0 )
        {
          if ( (*(_DWORD *)(v17 + 40) & 0x80u) == 0 )
          {
            v9 = *(struct _KTHREAD **)(v17 + 32);
            if ( v9 )
            {
              WorkOnBehalfThread = (struct _KTHREAD *)PsGetWorkOnBehalfThread(*(struct _KTHREAD **)(v17 + 32), &v16);
              v11 = WorkOnBehalfThread;
              if ( WorkOnBehalfThread )
              {
                PsImpersonateContainerOfThread((__int64)WorkOnBehalfThread);
                if ( v16 )
                  ObDereferenceObjectDeferDelete(v11);
              }
              else if ( IoThreadToProcess(v9)[2].Affinity.StaticBitmap[18]
                     || (unsigned __int8)PoEnergyEstimationEnabled() )
              {
                v11 = v9;
                PsImpersonateContainerOfThread((__int64)v9);
              }
              else
              {
                v11 = 0LL;
              }
              if ( v11 )
              {
                v12 = KeGetCurrentThread();
                if ( (v12->MiscFlags & 0x400) != 0 || v12->ApcStateIndex == 1 )
                  Teb = 0LL;
                else
                  Teb = v12->Teb;
                if ( Teb )
                {
                  PsEncodeThreadWorkOnBehalfTicket((__int64)v11, v20);
                  *(_QWORD *)(v14 + 696) = v20[0];
                }
              }
            }
            AlpcpUnlockMessage(v17);
          }
          else
          {
            AlpcpUnlockMessage(v17);
            v6 = -1073740029;
          }
        }
      }
      else
      {
        v6 = -1073741790;
      }
    }
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v6;
}
