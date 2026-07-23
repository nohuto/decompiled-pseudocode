/*
 * XREFs of NtCreateMutant @ 0x1407114E0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeMutantEx @ 0x14035FC00 (KeInitializeMutantEx.c)
 *     ObCreateObjectEx @ 0x140651EA0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1406520B0 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreateMutant(
        PHANDLE MutantHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN InitialOwner)
{
  char PreviousMode; // di
  __int64 v7; // rcx
  NTSTATUS inserted; // ecx
  char *v10; // [rsp+20h] [rbp-48h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-18h] BYREF
  __int64 v12; // [rsp+58h] [rbp-10h] BYREF

  v12 = 0LL;
  DmaAdapter = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)MutantHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)MutantHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  inserted = ObCreateObjectEx(
               PreviousMode,
               ExMutantObjectType,
               (int)ObjectAttributes,
               PreviousMode,
               v10,
               56,
               0,
               0,
               &DmaAdapter,
               0LL);
  if ( inserted >= 0 )
  {
    KeInitializeMutantEx((ULONG_PTR)DmaAdapter);
    inserted = ObInsertObjectEx(DmaAdapter, 0LL, DesiredAccess, 0, 0, 0LL, (unsigned __int64 *)&v12);
    LODWORD(DmaAdapter) = inserted;
    if ( inserted >= 0 )
      *MutantHandle = (HANDLE)v12;
  }
  return inserted;
}
