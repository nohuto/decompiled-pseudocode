/*
 * XREFs of NtFlushVirtualMemory @ 0x14075EBB0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     MmFlushVirtualMemory @ 0x14075ED38 (MmFlushVirtualMemory.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtFlushVirtualMemory(ULONG_PTR BugCheckParameter1, unsigned __int64 *a2, __int64 *a3, _OWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 result; // rax
  unsigned int v16; // [rsp+40h] [rbp-38h]
  __int64 v17; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+58h] [rbp-20h] BYREF
  __int128 v20; // [rsp+60h] [rbp-18h] BYREF

  Object = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v20 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v9 = (__int64)a2;
    *(_QWORD *)v9 = *(_QWORD *)v9;
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a3;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
      v8 = (__int64)a4;
    *(_DWORD *)v8 = *(_DWORD *)v8;
    v11 = *a2;
    v18 = *a2;
    v12 = *a3;
    v17 = *a3;
  }
  else
  {
    v11 = *a2;
    v18 = v11;
    v12 = *a3;
    v17 = *a3;
  }
  v13 = v12 - 1;
  if ( !v12 )
    v13 = 0LL;
  if ( v11 + v13 < v11 )
    return 3221225485LL;
  v14 = v12 ? v12 - 1 : 0LL;
  if ( v14 + v11 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x6C466D4Du, (__int64)&Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v16 = MmFlushVirtualMemory(Object, &v18, &v17, &v20);
    ObfDereferenceObjectWithTag(Object, 0x6C466D4Du);
    *a3 = v17;
    *a2 = v18 & 0xFFFFFFFFFFFFF000uLL;
    *a4 = v20;
    return v16;
  }
  return result;
}
