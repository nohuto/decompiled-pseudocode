/*
 * XREFs of MiInsertHotPatchRecord @ 0x140A34E80
 * Callers:
 *     MiLoadHotPatch @ 0x140A352A0 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x140A35638 (MiLoadHotPatchForUserSid.c)
 *     MmRegisterHotPatches @ 0x140B7092C (MmRegisterHotPatches.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     RtlAvlInsertNodeEx @ 0x140331710 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x140333B40 (RtlAvlRemoveNode.c)
 *     MiCompareHotPatchNodes @ 0x140A33944 (MiCompareHotPatchNodes.c)
 *     MiInsertPreviouslyRegisteredHotPatchRecord @ 0x140A35010 (MiInsertPreviouslyRegisteredHotPatchRecord.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiInsertHotPatchRecord(unsigned __int64 *a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 *v6; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int64 *v10; // rdi
  int v11; // eax
  _QWORD *v12; // rdi
  bool v13; // r8
  _QWORD *v14; // rax
  bool v15; // zf

  v6 = 0LL;
  if ( a3 )
  {
    CurrentThread = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v8 = KeAbPreAcquire((__int64)&xmmword_140C694C8, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&xmmword_140C694C8, 0LL) )
      ExfAcquirePushLockExclusiveEx(&xmmword_140C694C8, v8, (__int64)&xmmword_140C694C8);
    if ( v9 )
      *(_BYTE *)(v9 + 18) = 1;
  }
  v10 = (unsigned __int64 *)*a1;
  while ( v10 )
  {
    v11 = MiCompareHotPatchNodes(a2, (__int64)v10);
    if ( v11 >= 0 )
    {
      if ( v11 <= 0 )
        break;
      v10 = (unsigned __int64 *)v10[1];
    }
    else
    {
      v10 = (unsigned __int64 *)*v10;
    }
  }
  if ( v10 )
  {
    v6 = v10;
    RtlAvlRemoveNode(a1, v10);
    if ( (unsigned int)MiInsertPreviouslyRegisteredHotPatchRecord(v10) )
      v6 = 0LL;
  }
  v12 = (_QWORD *)*a1;
  v13 = 0;
  if ( *a1 )
  {
    while ( 1 )
    {
      if ( (int)MiCompareHotPatchNodes(a2, (__int64)v12) < 0 )
      {
        v14 = (_QWORD *)*v12;
        if ( !*v12 )
        {
          v13 = 0;
          break;
        }
      }
      else
      {
        v14 = (_QWORD *)v12[1];
        if ( !v14 )
        {
          v13 = 1;
          break;
        }
      }
      v12 = v14;
    }
  }
  RtlAvlInsertNodeEx(a1, (unsigned __int64)v12, v13, a2);
  if ( !a3 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&xmmword_140C694C8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&xmmword_140C694C8);
    KeAbPostRelease((ULONG_PTR)&xmmword_140C694C8);
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
}
