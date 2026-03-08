/*
 * XREFs of NtAlpcCancelMessage @ 0x140793E30
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     AlpcpCancelMessage @ 0x1407141F0 (AlpcpCancelMessage.c)
 *     AlpcpUnlockMessage @ 0x140716BD8 (AlpcpUnlockMessage.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     AlpcpLookupMessage @ 0x1407CA7C0 (AlpcpLookupMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtAlpcCancelMessage(void *a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  int v6; // edi
  int v7; // r15d
  void *v8; // rsi
  int v9; // ebx
  int v10; // r9d
  int v11; // edx
  _DWORD *v12; // rdi
  PVOID Object[6]; // [rsp+38h] [rbp-30h] BYREF
  ULONG_PTR v15; // [rsp+88h] [rbp+20h] BYREF

  v15 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (a2 & 0xFFFFFFF0) != 0 )
  {
    v9 = -1073741811;
    goto LABEL_17;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (a2 & 4) != 0 )
    {
      if ( (a3 & 3) == 0 )
      {
        v6 = *(_DWORD *)(a3 + 12);
        v7 = *(_DWORD *)(a3 + 16);
        v8 = (void *)*(unsigned int *)(a3 + 4);
        goto LABEL_9;
      }
    }
    else if ( (a3 & 3) == 0 )
    {
      v6 = *(_DWORD *)(a3 + 20);
      v7 = *(_DWORD *)(a3 + 24);
      v8 = *(void **)(a3 + 8);
LABEL_9:
      Object[1] = v8;
      goto LABEL_10;
    }
    ExRaiseDatatypeMisalignment();
  }
  v6 = *(_DWORD *)(a3 + 20);
  v7 = *(_DWORD *)(a3 + 24);
  v8 = *(void **)(a3 + 8);
LABEL_10:
  if ( !v6 )
  {
    v9 = -1073741559;
    goto LABEL_17;
  }
  Object[0] = 0LL;
  v9 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, PreviousMode, Object, 0LL);
  if ( v9 >= 0 )
  {
    v11 = v6;
    v12 = Object[0];
    v9 = AlpcpLookupMessage(Object[0], v11, v7, v10, (__int64)&v15);
    if ( v9 >= 0 )
    {
      if ( (a2 & 8) == 0 )
        goto LABEL_14;
      if ( (v12[104] & 6) == 4 )
      {
        if ( v8 == *(void **)(v15 + 104) )
        {
LABEL_14:
          if ( (*(_DWORD *)(v15 + 40) & 0x80u) != 0 )
          {
            AlpcpUnlockMessage(v15);
            v9 = -1073740029;
          }
          else
          {
            v9 = AlpcpCancelMessage((__int64)v12, v15, a2);
          }
          goto LABEL_16;
        }
      }
      else if ( v8 == *(void **)(v15 + 112) )
      {
        goto LABEL_14;
      }
      AlpcpUnlockMessage(v15);
      v9 = -1073740007;
    }
LABEL_16:
    ObfDereferenceObject(v12);
  }
LABEL_17:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v9;
}
