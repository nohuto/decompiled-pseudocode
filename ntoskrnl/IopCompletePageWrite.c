/*
 * XREFs of IopCompletePageWrite @ 0x1403019B0
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x14030EC00 (IoFreeIrp.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __fastcall IopCompletePageWrite(__int64 a1)
{
  __int64 v1; // rcx
  void (__fastcall *v2)(__int64, __int64, _QWORD); // rsi
  __int64 v3; // rdi
  __int64 v4; // rbx

  v1 = a1 - 120;
  if ( *(_BYTE *)(v1 + 65) || (*(_DWORD *)(v1 + 48) & 0xC0000000) != 0xC0000000 )
  {
    *(_OWORD *)*(_QWORD *)(v1 + 72) = *(_OWORD *)(v1 + 48);
    v2 = *(void (__fastcall **)(__int64, __int64, _QWORD))(v1 + 88);
    v3 = *(_QWORD *)(v1 + 96);
    v4 = *(_QWORD *)(v1 + 72);
    IoFreeIrp((PIRP)v1);
    v2(v3, v4, 0LL);
  }
  else
  {
    IoFreeIrp((PIRP)v1);
  }
}
