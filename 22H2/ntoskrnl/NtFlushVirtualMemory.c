/*
 * XREFs of NtFlushVirtualMemory @ 0x1407B4680
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 *     MmFlushVirtualMemory @ 0x1407B4808 (MmFlushVirtualMemory.c)
 */

__int64 __fastcall NtFlushVirtualMemory(ULONG_PTR BugCheckParameter1, unsigned __int64 *a2, __int64 *a3, _OWORD *a4)
{
  char PreviousMode; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 result; // rax
  unsigned int v17; // [rsp+40h] [rbp-38h]
  __int64 v18; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v19; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+58h] [rbp-20h] BYREF
  __int128 v21; // [rsp+60h] [rbp-18h] BYREF

  Object = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v21 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a2;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
      v11 = (__int64)a3;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
      v9 = (__int64)a4;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    v12 = *a2;
    v19 = *a2;
    v13 = *a3;
    v18 = *a3;
  }
  else
  {
    v12 = *a2;
    v19 = v12;
    v13 = *a3;
    v18 = *a3;
  }
  v14 = v13 - 1;
  if ( !v13 )
    v14 = 0LL;
  if ( v12 + v14 < v12 )
    return 3221225485LL;
  v15 = v13 ? v13 - 1 : 0LL;
  if ( v15 + v12 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             8,
             (__int64)PsProcessType,
             PreviousMode,
             0x6C466D4Du,
             &Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v17 = MmFlushVirtualMemory(Object, &v19, &v18, &v21);
    ObfDereferenceObjectWithTag(Object, 0x6C466D4Du);
    *a3 = v18;
    *a2 = v19 & 0xFFFFFFFFFFFFF000uLL;
    *a4 = v21;
    return v17;
  }
  return result;
}
