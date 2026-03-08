/*
 * XREFs of PfpPrefetchSharedConflictNotifyStart @ 0x14067FBA0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreWait @ 0x140241620 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 */

__int64 __fastcall PfpPrefetchSharedConflictNotifyStart(ULONG_PTR *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 *v5; // rdi
  __int64 *v6; // rax

  v3 = 0;
  v5 = 0LL;
  ++dword_140C64D7C;
  if ( a1 )
  {
    *((_DWORD *)a1 + 18) = 1;
    _InterlockedAdd((volatile signed __int32 *)a1 + 28, 1u);
    *((_DWORD *)a1 + 15) = 0;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 15) <= 1 )
      __fastfail(0xEu);
    if ( !a1[16] )
      goto LABEL_8;
  }
  else
  {
    a1 = &PfGlobals;
  }
  v6 = (__int64 *)KeAbPreAcquire((__int64)a1, 0LL);
  v5 = v6;
  if ( !v6 )
  {
LABEL_8:
    v3 = -1073741670;
    goto LABEL_6;
  }
  KeAbPreWait(v6);
LABEL_6:
  a3[1] = v5;
  *a3 = PfpPrefetchSharedConflictNotifyEnd;
  return v3;
}
