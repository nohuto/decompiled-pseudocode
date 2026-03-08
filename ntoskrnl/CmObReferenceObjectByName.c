/*
 * XREFs of CmObReferenceObjectByName @ 0x140AF2458
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1406B40B0 (NtNotifyChangeMultipleKeys.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407B8FB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A152D4 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A15598 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByNameEx @ 0x140710ADC (ObReferenceObjectByNameEx.c)
 */

__int64 __fastcall CmObReferenceObjectByName(
        __int64 a1,
        struct _SECURITY_SUBJECT_CONTEXT *a2,
        int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _QWORD *a7)
{
  int v7; // eax
  void *v8; // rcx
  unsigned int v9; // ebx
  _DWORD *v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v7 = ObReferenceObjectByNameEx(a1, a2, a3, (__int64)CmKeyObjectType, a5, a6, (__int64 *)&v11);
  v8 = v11;
  v9 = v7;
  if ( v7 >= 0 )
  {
    if ( *v11 == 1803104306 )
    {
      *a7 = v11;
      v8 = 0LL;
      v9 = 0;
    }
    else
    {
      v9 = -1073741816;
    }
  }
  if ( v8 )
    ObfDereferenceObject(v8);
  return v9;
}
