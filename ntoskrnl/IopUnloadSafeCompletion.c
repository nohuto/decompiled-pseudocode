/*
 * XREFs of IopUnloadSafeCompletion @ 0x1402F4BC0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopUnloadSafeCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  bool v7; // zf
  PVOID v8; // rbx

  v3 = 0;
  if ( *(int *)(a2 + 48) < 0 )
    v7 = *(_BYTE *)(a3 + 24) == 0;
  else
    v7 = *(_BYTE *)(a3 + 25) == 0;
  if ( !v7 || *(_BYTE *)(a2 + 68) && *(_BYTE *)(a3 + 26) )
  {
    v8 = *(PVOID *)a3;
    ObfReferenceObjectWithTag(*(PVOID *)a3, 0x70436F49u);
    v3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a3 + 16))(a1, a2, *(_QWORD *)(a3 + 8));
    ExFreePoolWithTag((PVOID)a3, 0);
    ObfDereferenceObjectWithTag(v8, 0x70436F49u);
  }
  else
  {
    if ( *(_BYTE *)(a2 + 65) )
    {
      v3 = 259;
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    }
    ExFreePoolWithTag((PVOID)a3, 0);
  }
  return v3;
}
