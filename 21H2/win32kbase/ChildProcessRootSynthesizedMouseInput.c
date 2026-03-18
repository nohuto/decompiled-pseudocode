/*
 * XREFs of ChildProcessRootSynthesizedMouseInput @ 0x1C01E7880
 * Callers:
 *     _lambda_8c448fb33d037e95b4f6f526a46cb96d_::_lambda_invoker_cdecl_ @ 0x1C01EBEC0 (_lambda_8c448fb33d037e95b4f6f526a46cb96d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0096098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0096160 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     SynthesizePTPMouseInput @ 0x1C00E8FA4 (SynthesizePTPMouseInput.c)
 *     ?GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ @ 0x1C01E76C0 (-GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ.c)
 */

void ChildProcessRootSynthesizedMouseInput()
{
  char **Instance; // rsi
  char *v1; // rdi
  __int64 v2; // rax
  unsigned int v3; // r14d
  __int64 v4; // r15
  unsigned __int64 i; // rbp
  __int64 v6; // rcx
  struct tagPOINT v7; // [rsp+30h] [rbp-48h] BYREF
  __int128 v8; // [rsp+38h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-30h]
  __int64 v10; // [rsp+50h] [rbp-28h]

  Instance = (char **)InputVirtualization::RootSynthesizedMouseList::GetInstance();
  CPushLock::AcquireLockExclusive((CPushLock *)(Instance + 2));
  while ( 1 )
  {
    v1 = *Instance;
    if ( *Instance == (char *)Instance )
      break;
    if ( *((char ***)v1 + 1) != Instance || (v2 = *(_QWORD *)v1, *(char **)(*(_QWORD *)v1 + 8LL) != v1) )
      __fastfail(3u);
    *Instance = (char *)v2;
    v3 = 0;
    *(_QWORD *)(v2 + 8) = Instance;
    v4 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    for ( i = v4 * gliQpcFreq.QuadPart / 0x3E8uLL; v3 < *((_DWORD *)v1 + 8); ++v3 )
    {
      v10 = 0LL;
      v8 = 0LL;
      v9 = *((_QWORD *)v1 + 3);
      v6 = *((_QWORD *)v1 + 2);
      v7 = gptCursorAsync;
      SynthesizePTPMouseInput(
        v6,
        (__int64)&v1[28 * v3 + 36],
        v4,
        i,
        *(_DWORD *)&v1[28 * v3 + 60],
        (struct PTPMouseInputData *)&v7);
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v1);
  }
  CPushLock::ReleaseLock((CPushLock *)(Instance + 2));
}
