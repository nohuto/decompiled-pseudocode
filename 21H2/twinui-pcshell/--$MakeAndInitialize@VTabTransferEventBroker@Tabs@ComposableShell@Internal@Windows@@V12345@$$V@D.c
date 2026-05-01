/*
 * XREFs of ??$MakeAndInitialize@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802F9218
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@$$V@wil@@YA?AV?$ComPtr@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1802F93B0 (--$MakeAndInitializeOrThrow@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@$$V@w.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801B0790 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??0TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@QEAA@XZ @ 0x1802F964C (--0TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1802F9C68 (-InternalRelease@-$ComPtr@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@WRL@Mi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker,Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker,>(
        __int64 *a1)
{
  unsigned int v2; // ebx
  Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker *v3; // rax
  __int64 v4; // rax
  volatile int *v5; // rdx
  __int64 v6; // r10
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker *v11; // [rsp+38h] [rbp+10h]

  v2 = 0;
  *a1 = 0LL;
  v3 = (Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker *)operator new(
                                                                             0xB0uLL,
                                                                             (const struct std::nothrow_t *)&std::nothrow);
  v11 = v3;
  if ( v3 )
  {
    v4 = Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker::TabTransferEventBroker(v3);
    v10 = v4;
    v6 = v4;
    if ( v4 )
    {
      v7 = *(_QWORD *)(v4 + 24);
      while ( v7 >= 0 )
      {
        if ( (_DWORD)v7 != 0x7FFFFFFF )
        {
          v8 = v7;
          v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 24), v7 + 1, v7);
          if ( v8 != v7 )
            continue;
        }
        goto LABEL_10;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v7 + 16), v5);
    }
LABEL_10:
    *a1 = v6;
    Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker>::InternalRelease(&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
