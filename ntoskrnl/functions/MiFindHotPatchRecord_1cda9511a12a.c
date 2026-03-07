__int64 __fastcall MiFindHotPatchRecord(__int64 *a1, int a2, int a3, int a4, PUNICODE_STRING StringOut)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v8; // rbx
  __int64 v9; // rbx
  int v10; // eax
  NTSTATUS v11; // ebx
  bool v12; // zf
  __int128 v14; // [rsp+28h] [rbp-50h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h]
  int v16; // [rsp+40h] [rbp-38h]
  int v17; // [rsp+44h] [rbp-34h]
  __int128 v18; // [rsp+48h] [rbp-30h]

  v15 = 0LL;
  v14 = 0LL;
  v18 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v16 = a3;
  v17 = a4;
  if ( !a2 )
  {
    --CurrentThread->SpecialApcDisable;
    v8 = KeAbPreAcquire((__int64)&xmmword_140C694C8, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&xmmword_140C694C8, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&xmmword_140C694C8, 0, v8, (__int64)&xmmword_140C694C8);
    if ( v8 )
      *(_BYTE *)(v8 + 18) = 1;
  }
  v9 = *a1;
  while ( v9 )
  {
    v10 = MiCompareHotPatchNodes((__int64)&v14, v9);
    if ( v10 >= 0 )
    {
      if ( v10 <= 0 )
        break;
      v9 = *(_QWORD *)(v9 + 8);
    }
    else
    {
      v9 = *(_QWORD *)v9;
    }
  }
  if ( v9 )
  {
    if ( !StringOut || (v11 = RtlDuplicateUnicodeString(0, (PCUNICODE_STRING)(v9 + 32), StringOut), v11 >= 0) )
      v11 = 0;
  }
  else
  {
    v11 = -1073741275;
  }
  if ( !a2 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&xmmword_140C694C8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&xmmword_140C694C8);
    KeAbPostRelease((ULONG_PTR)&xmmword_140C694C8);
    v12 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v11;
}
