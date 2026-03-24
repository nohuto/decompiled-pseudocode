/*
 * XREFs of ?Insert@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z @ 0x1C00FDF38
 * Callers:
 *     UmfdLoadFontFile @ 0x1C00FD9A0 (UmfdLoadFontFile.c)
 * Callees:
 *     ?LowerBound@?$CSortedVector@_K_K@NSInstrumentation@@QEBA_KAEB_K@Z @ 0x1C00FE058 (-LowerBound@-$CSortedVector@_K_K@NSInstrumentation@@QEBA_KAEB_K@Z.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     ?ReAllocate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z @ 0x1C029E1E8 (-ReAllocate@-$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z.c)
 *     ?Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ @ 0x1C02DCB98 (-Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::Insert(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  volatile signed __int32 *v3; // rbx
  char v6; // si
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rdi
  unsigned __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8

  v3 = (volatile signed __int32 *)UmfdFontFileLookup;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  v6 = 1;
  _InterlockedCompareExchange(v3 + 4, 0, 1);
  _InterlockedAdd(v3 + 7, 1u);
  if ( *((_DWORD *)v3 + 6) )
    NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPlatformSingleWatierSignal *)(v3 + 2));
  v7 = NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::LowerBound(v3, a2);
  v8 = *((_QWORD *)v3 + 5);
  v9 = 16 * v7;
  v10 = v7;
  if ( v7 < v8 && (v11 = *((_QWORD *)v3 + 6), *(_QWORD *)(v11 + 16 * v7) == *a2) )
  {
    *(_QWORD *)(v11 + v9 + 8) = *a3;
  }
  else
  {
    v12 = *((_QWORD *)v3 + 4);
    if ( v8 != v12 || (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::ReAllocate(v3, 2 * v12) )
    {
      memmove(
        (void *)(v9 + *((_QWORD *)v3 + 6) + 16),
        (const void *)(v9 + *((_QWORD *)v3 + 6)),
        16 * (*((_QWORD *)v3 + 5) - v10));
      v13 = *((_QWORD *)v3 + 6);
      *(_QWORD *)(v9 + v13) = *a2;
      *(_QWORD *)(v9 + v13 + 8) = *a3;
      ++*((_QWORD *)v3 + 5);
    }
    else
    {
      v6 = 0;
    }
  }
  _InterlockedDecrement(v3 + 7);
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v6;
}
