void *__fastcall EtwpGetSidExtendedHeaderItem(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rbp
  void *v4; // rax
  ULONG_PTR v5; // rbx
  ULONG v6; // edx
  __int64 v7; // rcx
  int v8; // r14d
  struct _KTHREAD *v9; // rax
  unsigned __int8 *v10; // rdx
  unsigned int v11; // ebp
  _KPROCESS *v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  char v16; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v17[3]; // [rsp+41h] [rbp-97h] BYREF
  int v18[3]; // [rsp+44h] [rbp-94h] BYREF
  _BYTE Src[80]; // [rsp+50h] [rbp-88h] BYREF

  v18[0] = 0;
  memset(Src, 0, 0x44uLL);
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v4 = (void *)PsReferenceImpersonationTokenEx(CurrentThread, 0LL, 1953654867LL, v17, &v16, v18, 0LL);
  v5 = (ULONG_PTR)v4;
  if ( !v4 )
  {
    v6 = 1953654867;
    v7 = (__int64)Process;
LABEL_3:
    v5 = PsReferencePrimaryTokenWithTag(v7, v6);
    v8 = 1;
    goto LABEL_4;
  }
  v8 = 2;
  if ( v18[0] < 2 )
  {
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
    v7 = (__int64)CurrentThread->Process;
    v6 = 1953261124;
    goto LABEL_3;
  }
LABEL_4:
  v9 = KeGetCurrentThread();
  --v9->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 48), 1u);
  v10 = **(unsigned __int8 ***)(v5 + 152);
  v11 = 4 * v10[1] + 8;
  if ( v11 <= 0x44 )
    memmove(Src, v10, v11);
  ExReleaseResourceLite(*(PERESOURCE *)(v5 + 48));
  KeLeaveCriticalRegion();
  if ( v8 == 1
    && (v12 = CurrentThread->Process,
        _m_prefetchw(&v12[1].Affinity.StaticBitmap[5]),
        v13 = v12[1].Affinity.StaticBitmap[5],
        (v5 ^ v13) < 0xF) )
  {
    while ( 1 )
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)&v12[1].Affinity.StaticBitmap[5], v13 + 1, v13);
      if ( v14 == v13 )
        break;
      if ( (v5 ^ v13) >= 0xF )
        goto LABEL_16;
    }
    if ( ObpTraceFlags )
      ObpPushStackInfo(v5 - 48, 0, 1u, 0x74726853u);
  }
  else
  {
LABEL_16:
    ObfDereferenceObjectWithTag((PVOID)v5, 0x74726853u);
  }
  *(_DWORD *)(a1 + 2) = 2;
  *(_WORD *)(a1 + 6) = v11;
  *(_WORD *)a1 = (v11 + 15) & 0xFFF8;
  memmove((void *)(a1 + 8), Src, v11);
  return memset((void *)(a1 + v11 + 8), 0, ((v11 + 15) & 0xFFFFFFF8) - (v11 + 8));
}
