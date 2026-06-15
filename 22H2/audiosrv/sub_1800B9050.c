/*
 * XREFs of sub_1800B9050 @ 0x1800B9050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B9050(__int64 a1, _QWORD *a2)
{
  HRESULT Instance; // edi
  _QWORD *v5; // rbx

  if ( !a2 )
    return 2147500035LL;
  Instance = 0;
  v5 = (_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(a1 + 64)
    || (Instance = CoCreateInstance(&stru_18016D298, 0LL, 1u, &stru_18016D3F0, (LPVOID *)(a1 + 64)), Instance >= 0) )
  {
    *a2 = *v5;
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 8LL))(*v5);
  }
  return (unsigned int)Instance;
}
