/*
 * XREFs of CcPinMappedData @ 0x1406A7750
 * Callers:
 *     <none>
 * Callees:
 *     CcFreeVirtualAddress @ 0x14021E5D0 (CcFreeVirtualAddress.c)
 *     CcPinFileData @ 0x14021E620 (CcPinFileData.c)
 *     ExAcquireSharedStarveExclusive @ 0x1402DE340 (ExAcquireSharedStarveExclusive.c)
 *     CcUnpinData @ 0x1407C89D0 (CcUnpinData.c)
 *     CcAllocateObcb @ 0x140881170 (CcAllocateObcb.c)
 */

BOOLEAN __stdcall CcPinMappedData(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags,
        PVOID *Bcb)
{
  __int64 *v8; // rbx
  _DWORD *SharedCacheMap; // r14
  unsigned int v10; // edi
  __int64 v11; // rax
  PVOID *v12; // r15
  BOOLEAN v13; // di
  PVOID Obcb; // [rsp+58h] [rbp-50h] BYREF
  LONGLONG QuadPart; // [rsp+60h] [rbp-48h] BYREF
  PVOID *v17; // [rsp+68h] [rbp-40h]
  __int64 v18; // [rsp+70h] [rbp-38h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+10h] BYREF
  ULONG v20; // [rsp+C0h] [rbp+18h]

  v20 = Length;
  v18 = 0LL;
  v19 = 0LL;
  QuadPart = FileOffset->QuadPart;
  Obcb = 0LL;
  v17 = &Obcb;
  v8 = (__int64 *)Bcb;
  if ( ((unsigned __int8)*Bcb & 1) == 0 )
    return 1;
  *Bcb = (char *)*Bcb - 1;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  __incgsdword(0x8454u);
  if ( *(_WORD *)*v8 != 765 )
  {
    v10 = v20;
    v11 = v19;
    v12 = v17;
    while ( 1 )
    {
      if ( Obcb )
      {
        if ( v12 == &Obcb )
        {
          Obcb = (PVOID)CcAllocateObcb(FileOffset, v10);
          v12 = (PVOID *)((char *)Obcb + 16);
          v17 = (PVOID *)((char *)Obcb + 16);
          v11 = v19;
        }
        v10 += QuadPart - v11;
        v20 = v10;
        QuadPart = v11;
        v17 = ++v12;
      }
      if ( !(unsigned __int8)CcPinFileData(
                               (__int64)FileObject,
                               &QuadPart,
                               v10,
                               (SharedCacheMap[38] & 0x200) == 0,
                               0,
                               Flags,
                               (ULONG_PTR *)v12,
                               &v18,
                               &v19) )
        goto LABEL_13;
      v11 = v19;
      if ( v19 - QuadPart >= v10 )
      {
        CcFreeVirtualAddress(*v8);
        *v8 = (__int64)Obcb;
        goto LABEL_8;
      }
    }
  }
  if ( !ExAcquireSharedStarveExclusive((PERESOURCE)(*v8 + 72), Flags & 1) )
  {
LABEL_13:
    v13 = 0;
    goto LABEL_14;
  }
LABEL_8:
  v13 = 1;
LABEL_14:
  if ( !v13 )
  {
    ++*v8;
    if ( Obcb )
      CcUnpinData(Obcb);
  }
  return v13;
}
