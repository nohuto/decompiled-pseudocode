/*
 * XREFs of MiMapViewOfSectionCommon @ 0x1407D4E50
 * Callers:
 *     MiMapViewOfSectionExCommon @ 0x140727CDC (MiMapViewOfSectionExCommon.c)
 *     NtMapViewOfSection @ 0x1407D4B90 (NtMapViewOfSection.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     MiMakeProtectionMask @ 0x140320CC0 (MiMakeProtectionMask.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiMapViewOfSectionCommon(
        __int64 a1,
        void *a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7,
        char a8,
        char a9,
        __int64 *a10)
{
  int ProtectionMask; // eax
  int v14; // r8d
  ULONG_PTR v15; // r10
  PVOID *v16; // r15
  __int64 result; // rax
  ACCESS_MASK v18; // edx
  NTSTATUS v19; // r12d
  __int64 v20; // rdx
  __int64 *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  PVOID Object[3]; // [rsp+48h] [rbp-40h] BYREF

  *(_OWORD *)a10 = 0LL;
  *((_OWORD *)a10 + 1) = 0LL;
  *((_OWORD *)a10 + 2) = 0LL;
  ProtectionMask = MiMakeProtectionMask(a7 & 0xBFFFFFFF);
  *((_DWORD *)a10 + 6) = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  *((_DWORD *)a10 + 6) = ProtectionMask & 7;
  v16 = (PVOID *)(a10 + 5);
  Object[2] = a10 + 5;
  if ( v14 )
  {
    *v16 = (PVOID)v15;
    a10[4] = (__int64)a2;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(v15, a3 + 8, (__int64)PsProcessType, a9, 0x77566D4Du, a10 + 5, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    v18 = *((_DWORD *)MmMakeSectionAccess + *((unsigned int *)a10 + 6));
    Object[0] = 0LL;
    v19 = ObReferenceObjectByHandle(a2, v18, MmSectionObjectType, a9, Object, 0LL);
    a10[4] = (__int64)Object[0];
    if ( v19 < 0 )
    {
      ObfDereferenceObjectWithTag(*v16, 0x77566D4Du);
      return (unsigned int)v19;
    }
  }
  if ( a9 )
  {
    v20 = (__int64)a4;
    if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v20 = *(_QWORD *)v20;
    v21 = (__int64 *)a5;
    v22 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v22 = *(_QWORD *)v22;
  }
  else
  {
    v21 = (__int64 *)a5;
  }
  *a10 = *a4;
  a10[1] = *v21;
  if ( a6 )
  {
    if ( a9 )
    {
      v23 = a6;
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a6 >= 0x7FFFFFFF0000LL )
        v23 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v23 = *(_BYTE *)v23;
      *(_BYTE *)(v23 + 7) = *(_BYTE *)(v23 + 7);
    }
    a10[2] = *(_QWORD *)a6;
  }
  else
  {
    a10[2] = 0LL;
  }
  v24 = *a10;
  if ( (unsigned __int64)*a10 <= 0x7FFFFFFEFFFFLL )
  {
    v25 = a10[1];
    if ( v25 <= 0x7FFFFFFF0000LL - v24 && v24 + v25 <= 0xFFFFFFFFFFFFFFFFuLL >> a8 )
      return 0LL;
  }
  if ( !a3 )
  {
    ObfDereferenceObject((PVOID)a10[4]);
    ObfDereferenceObjectWithTag(*v16, 0x77566D4Du);
  }
  return 3221225485LL;
}
