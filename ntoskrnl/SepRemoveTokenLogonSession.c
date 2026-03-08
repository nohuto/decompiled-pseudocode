/*
 * XREFs of SepRemoveTokenLogonSession @ 0x1409CD544
 * Callers:
 *     SepLinkLogonSessions @ 0x1402E832C (SepLinkLogonSessions.c)
 *     NtSetInformationToken @ 0x140741E70 (NtSetInformationToken.c)
 *     SepTokenDeleteMethod @ 0x1407C3CB0 (SepTokenDeleteMethod.c)
 *     SepSetServerSiloToken @ 0x1409C6A80 (SepSetServerSiloToken.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SepRemoveTokenLogonSession(__int64 a1)
{
  unsigned int v2; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rbx
  struct _ERESOURCE *v5; // rsi
  __int64 *v6; // rdx
  __int64 *v7; // rbx
  __int64 *v8; // rax
  __int64 **v9; // rdx

  if ( (*(_DWORD *)(a1 + 200) & 0x20) == 0 )
  {
    v2 = 1529154084 * *(_DWORD *)(a1 + 24);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v2 >>= 28;
    v4 = v2;
    v5 = &SepRmDbLock + (v2 & 3);
    ExAcquireResourceExclusiveLite(v5, 1u);
    v6 = *(__int64 **)(SepLogonSessions + 8 * v4);
    if ( v6 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(a1 + 24) == *((_DWORD *)v6 + 2)
          && *(_DWORD *)(a1 + 28) == *((_DWORD *)v6 + 3)
          && *(_QWORD *)(*(_QWORD *)(a1 + 216) + 160LL) == v6[20] )
        {
          v7 = (__int64 *)v6[22];
          if ( v7 != v6 + 22 )
            break;
        }
LABEL_9:
        v6 = (__int64 *)*v6;
        if ( !v6 )
          goto LABEL_10;
      }
      while ( 1 )
      {
        v8 = (__int64 *)*v7;
        if ( v7[2] == a1 )
          break;
        v7 = (__int64 *)*v7;
        if ( v8 == v6 + 22 )
          goto LABEL_9;
      }
      if ( (__int64 *)v8[1] != v7 || (v9 = (__int64 **)v7[1], *v9 != v7) )
        __fastfail(3u);
      *v9 = v8;
      v8[1] = (__int64)v9;
      ExReleaseResourceLite(v5);
      KeLeaveCriticalRegion();
      ExFreePoolWithTag(v7, 0);
    }
    else
    {
LABEL_10:
      ExReleaseResourceLite(v5);
      KeLeaveCriticalRegion();
    }
  }
}
