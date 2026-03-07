__int64 __fastcall MiDeleteHotPatchRecord(unsigned __int64 *a1, int a2, int a3, int a4)
{
  unsigned __int64 *v6; // rbp
  unsigned int v7; // r15d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 *v11; // rdi
  int v12; // eax
  bool v13; // zf
  __int128 v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h]
  int v17; // [rsp+38h] [rbp-40h]
  int v18; // [rsp+3Ch] [rbp-3Ch]
  __int128 v19; // [rsp+40h] [rbp-38h]

  v16 = 0LL;
  v17 = a3;
  v18 = a4;
  v6 = 0LL;
  v7 = 0;
  v15 = 0LL;
  v19 = 0LL;
  if ( a2 )
  {
    CurrentThread = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v9 = KeAbPreAcquire((__int64)&xmmword_140C694C8, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&xmmword_140C694C8, 0LL) )
      ExfAcquirePushLockExclusiveEx(&xmmword_140C694C8, v9, (__int64)&xmmword_140C694C8);
    if ( v10 )
      *(_BYTE *)(v10 + 18) = 1;
  }
  v11 = (unsigned __int64 *)*a1;
  while ( v11 )
  {
    v12 = MiCompareHotPatchNodes((__int64)&v15, (__int64)v11);
    if ( v12 >= 0 )
    {
      if ( v12 <= 0 )
        break;
      v11 = (unsigned __int64 *)v11[1];
    }
    else
    {
      v11 = (unsigned __int64 *)*v11;
    }
  }
  if ( v11 )
  {
    v7 = 1;
    v6 = v11;
    RtlAvlRemoveNode(a1, v11);
    if ( (unsigned int)MiInsertPreviouslyRegisteredHotPatchRecord(v11) )
      v6 = 0LL;
  }
  if ( !a2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&xmmword_140C694C8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&xmmword_140C694C8);
    KeAbPostRelease((ULONG_PTR)&xmmword_140C694C8);
    v13 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v13 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v7;
}
