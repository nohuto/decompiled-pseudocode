/*
 * XREFs of PsGetEffectiveContainerId @ 0x140234EC0
 * Callers:
 *     NtQueryInformationThread @ 0x1406EB0A0 (NtQueryInformationThread.c)
 * Callees:
 *     PsGetWorkOnBehalfThread @ 0x1402A9F0C (PsGetWorkOnBehalfThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 */

__int64 __fastcall PsGetEffectiveContainerId(int a1, struct _KTHREAD *a2, __int64 a3)
{
  __int64 WorkOnBehalfThread; // rax
  void *v8; // r8
  unsigned __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // rax
  int v12; // ebx
  __int128 v13; // xmm0
  int v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = 0;
  if ( a1 >= 5 )
    return 3221225711LL;
  if ( a2 )
  {
    *(_OWORD *)a3 = 0LL;
    *(_DWORD *)(a3 + 16) = 0;
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 && a2 == KeGetCurrentThread() )
      return 0LL;
    WorkOnBehalfThread = PsGetWorkOnBehalfThread(a2, &v14);
    v8 = (void *)WorkOnBehalfThread;
    if ( WorkOnBehalfThread )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(WorkOnBehalfThread + 544) + 1296LL);
      *(_DWORD *)(a3 + 16) |= 1u;
    }
    else
    {
      v9 = a2->Process[1].Affinity.Bitmap[16];
    }
    if ( !v9 )
    {
LABEL_13:
      if ( v14 )
        ObfDereferenceObjectWithTag(v8, 0x746C6644u);
      return 0LL;
    }
    if ( a1 )
    {
      v10 = a1 - 2;
      if ( !v10 )
      {
        v11 = *(_QWORD *)(v9 + 832);
LABEL_12:
        if ( !v11 )
          goto LABEL_13;
        v13 = *(_OWORD *)(v11 + 1240);
        goto LABEL_21;
      }
      v12 = v10 - 1;
      if ( !v12 )
      {
        v11 = *(_QWORD *)(v9 + 840);
        goto LABEL_12;
      }
      if ( v12 != 1 )
        goto LABEL_13;
    }
    v13 = *(_OWORD *)(v9 + 1240);
LABEL_21:
    *(_OWORD *)a3 = v13;
    goto LABEL_13;
  }
  return 3221225712LL;
}
