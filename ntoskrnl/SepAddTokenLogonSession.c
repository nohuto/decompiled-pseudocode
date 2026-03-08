/*
 * XREFs of SepAddTokenLogonSession @ 0x1409CD020
 * Callers:
 *     SepCreateTokenEx @ 0x1402079F0 (SepCreateTokenEx.c)
 *     SepFilterToken @ 0x14073FED0 (SepFilterToken.c)
 *     SepDuplicateToken @ 0x1407BCF00 (SepDuplicateToken.c)
 *     SepSetServerSiloToken @ 0x1409C6A80 (SepSetServerSiloToken.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

void __fastcall SepAddTokenLogonSession(__int64 a1)
{
  unsigned int v1; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rbx
  struct _ERESOURCE *v5; // rsi
  __int64 *v6; // rbx
  __int64 **Pool2; // rax
  __int64 *v8; // rbx
  __int64 **v9; // rdx

  v1 = 1529154084 * *(_DWORD *)(a1 + 24);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 >>= 28;
  v4 = v1;
  v5 = &SepRmDbLock + (v1 & 3);
  ExAcquireResourceExclusiveLite(v5, 1u);
  v6 = *(__int64 **)(SepLogonSessions + 8 * v4);
  if ( v6 )
  {
    while ( *(_DWORD *)(a1 + 24) != *((_DWORD *)v6 + 2)
         || *(_DWORD *)(a1 + 28) != *((_DWORD *)v6 + 3)
         || *(_QWORD *)(*(_QWORD *)(a1 + 216) + 160LL) != v6[20] )
    {
      v6 = (__int64 *)*v6;
      if ( !v6 )
        goto LABEL_11;
    }
    Pool2 = (__int64 **)ExAllocatePool2(256LL, 24LL, 1934386515LL);
    if ( Pool2 )
    {
      *Pool2 = 0LL;
      v8 = v6 + 22;
      Pool2[1] = 0LL;
      Pool2[2] = (__int64 *)a1;
      v9 = (__int64 **)v8[1];
      if ( *v9 != v8 )
        __fastfail(3u);
      *Pool2 = v8;
      Pool2[1] = (__int64 *)v9;
      *v9 = (__int64 *)Pool2;
      v8[1] = (__int64)Pool2;
    }
  }
LABEL_11:
  ExReleaseResourceLite(v5);
  KeLeaveCriticalRegion();
}
