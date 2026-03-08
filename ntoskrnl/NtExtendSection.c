/*
 * XREFs of NtExtendSection @ 0x1407265B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     MmExtendSection @ 0x1407267DC (MmExtendSection.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall NtExtendSection(HANDLE Handle, unsigned __int64 a2)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  __int64 v6; // rcx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+60h] [rbp+18h]
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v6 = a2;
    *(_BYTE *)v6 = *(_BYTE *)v6;
    *(_BYTE *)(v6 + 7) = *(_BYTE *)(v6 + 7);
    v9 = *(_QWORD *)a2;
  }
  else
  {
    v9 = *(_QWORD *)a2;
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 0x10u, MmSectionObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v8 = MmExtendSection(Object, &v9, 0LL);
    ObfDereferenceObject(Object);
    *(_QWORD *)a2 = v9;
    return v8;
  }
  return result;
}
