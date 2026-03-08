/*
 * XREFs of TR_CommonBufferCallback @ 0x1C00412F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_CommonBufferCallback(__int64 a1, int a2, _QWORD **a3)
{
  __int64 v3; // rbx
  __int64 v6; // rcx

  v3 = *(_QWORD *)(a1 + 16);
  if ( a2 >= 0 )
  {
    *(_BYTE *)(v3 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
    v6 = v3 + 208;
    if ( *a3 != a3 )
    {
      *a3[1] = *(_QWORD *)v6;
      *(_QWORD *)(*(_QWORD *)v6 + 8LL) = a3[1];
      *(_QWORD *)v6 = *a3;
      (*a3)[1] = v6;
      a3[1] = a3;
      *a3 = a3;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), *(_BYTE *)(v3 + 104));
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v3 + 32) + 16LL))(v3, (unsigned int)a2);
}
