/*
 * XREFs of AlpcpReleaseMessageAttributesOnCancel @ 0x140717C30
 * Callers:
 *     AlpcpCancelMessage @ 0x1407141F0 (AlpcpCancelMessage.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1407172DC (AlpcpCancelMessagesByRequestor.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     AlpcpDereferenceBlobEx @ 0x14071550C (AlpcpDereferenceBlobEx.c)
 *     AlpcpReleaseViewAttribute @ 0x14078CD78 (AlpcpReleaseViewAttribute.c)
 */

__int64 __fastcall AlpcpReleaseMessageAttributesOnCancel(__int64 a1)
{
  ULONG_PTR v2; // rcx
  ULONG_PTR v3; // rcx
  ULONG_PTR v4; // rcx
  unsigned __int64 v5; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 136);
  if ( v2 )
  {
    result = AlpcpDereferenceBlobEx(v2, 1);
    *(_QWORD *)(a1 + 136) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 144);
  if ( v3 && (*(_DWORD *)(a1 + 40) & 0x4000) == 0 )
  {
    result = AlpcpReleaseViewAttribute(v3);
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 152);
  if ( v4 )
  {
    result = AlpcpDereferenceBlobEx(v4, 1);
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 160);
  if ( (v5 & 1) != 0 )
  {
    if ( v5 >= 4 && (v5 & 2) != 0 )
      result = ObfDereferenceObject((PVOID)(v5 & 0xFFFFFFFFFFFFFFFCuLL));
    *(_QWORD *)(a1 + 160) = 0LL;
  }
  return result;
}
