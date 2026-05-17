/*
 * XREFs of LdrQueryModuleServiceTags @ 0x1800CE060
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180010500 (LdrpFindLoadedDllByHandle.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 */

__int64 __fastcall LdrQueryModuleServiceTags(unsigned __int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 result; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rbx
  unsigned int v11; // edi
  __int64 *v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  __int64 v16[5]; // [rsp+20h] [rbp-28h] BYREF
  int v17; // [rsp+68h] [rbp+20h] BYREF

  result = LdrpFindLoadedDllByHandle(a1, v16, &v17);
  if ( (int)result >= 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, v6, v7, v8);
    v9 = v16[0];
    v10 = 0LL;
    v11 = *a3;
    v12 = *(__int64 **)(*(_QWORD *)(v16[0] + 152) + 16LL);
    while ( v12 )
    {
      if ( (unsigned int)v10 < v11 )
        *(_DWORD *)(a2 + 4 * v10) = *((_DWORD *)v12 + 2);
      v12 = (__int64 *)*v12;
      v10 = (unsigned int)(v10 + 1);
    }
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    *a3 = v10;
    LdrpDereferenceModule(v9, v13, v14, v15);
    return v11 < (unsigned int)v10 ? 0xC0000023 : 0;
  }
  return result;
}
