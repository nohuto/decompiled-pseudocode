/*
 * XREFs of Pdcv2pActivationClientCallback @ 0x1409C5AA0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1402992F0 (PdcCreateWatchdogAroundClientCall.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PdcResetEvent @ 0x1405B510C (PdcResetEvent.c)
 *     PdcReleaseRwLockExclusive2 @ 0x140857710 (PdcReleaseRwLockExclusive2.c)
 *     PdcAcquireRwLockExclusive2 @ 0x140857778 (PdcAcquireRwLockExclusive2.c)
 *     PdcWaitForEvent @ 0x1409C5C1C (PdcWaitForEvent.c)
 */

__int64 __fastcall Pdcv2pActivationClientCallback(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // rcx
  int v8; // r14d
  __int64 *i; // rsi
  struct _KEVENT *v11; // rcx
  __int64 v12; // rax
  char v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0;
  if ( a1 && *(_DWORD *)a1 == 843138128 )
  {
    if ( *(_DWORD *)(a2 + 40) == 12 )
    {
      v4 = PdcCreateWatchdogAroundClientCall();
      v6 = v5 + 8;
      while ( 1 )
      {
        PdcAcquireRwLockExclusive2(v6, &v13);
        if ( !*(_QWORD *)(a1 + 96) )
          break;
        PdcReleaseRwLockExclusive2(v6, &v13);
        PdcWaitForEvent(*(_QWORD *)(a1 + 104));
      }
      if ( *(_QWORD *)(a1 + 40) )
      {
        v7 = *(_QWORD *)(a2 + 56);
        v8 = *(_DWORD *)(a2 + 64);
        for ( i = *(__int64 **)(a1 + 80); ; i = (__int64 *)*i )
        {
          if ( i == (__int64 *)(a1 + 80) )
          {
            v4 = -1073741431;
            goto LABEL_16;
          }
          if ( i[74] == v7 )
            break;
        }
        if ( v8 >= 101 )
        {
          ++*((_DWORD *)i + 17);
          *((_BYTE *)i + 60) = 1;
        }
        v11 = *(struct _KEVENT **)(a1 + 104);
        *(_QWORD *)(a1 + 96) = KeGetCurrentThread();
        *(_QWORD *)(a1 + 112) = i;
        PdcResetEvent(v11);
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 1760LL) = KeGetCurrentThread();
        PdcReleaseRwLockExclusive2(v6, &v13);
        (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64))(a1 + 56))(
          i,
          (unsigned int)v8,
          *(_QWORD *)(a1 + 64),
          i[4]);
        PdcAcquireRwLockExclusive2(v6, &v13);
        v12 = *(_QWORD *)(a1 + 40);
        if ( v12 )
          *(_QWORD *)(v12 + 1760) = 0LL;
        *(_QWORD *)(a1 + 96) = 0LL;
        *(_QWORD *)(a1 + 112) = 0LL;
        KeSetEvent(*(PRKEVENT *)(a1 + 104), 0, 0);
      }
      else
      {
        v4 = -1073740032;
      }
LABEL_16:
      if ( v13 )
        PdcReleaseRwLockExclusive2(v6, &v13);
    }
    else
    {
      return (unsigned int)-1073740030;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v4;
}
