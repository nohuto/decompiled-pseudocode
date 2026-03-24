/*
 * XREFs of MiApplyDynamicRelocations @ 0x140A4F5D8
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x140A4F400 (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140252B30 (RtlImageDirectoryEntryToData.c)
 *     LdrApplyDynamicRelocations @ 0x1403B6488 (LdrApplyDynamicRelocations.c)
 *     MiCaptureDynamicRelocationTableRva @ 0x14066351C (MiCaptureDynamicRelocationTableRva.c)
 *     VslApplyDynamicRelocations @ 0x140A8F3E4 (VslApplyDynamicRelocations.c)
 */

__int64 __fastcall MiApplyDynamicRelocations(unsigned __int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebp
  unsigned int *v8; // rax
  __int64 result; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v14[5]; // [rsp+44h] [rbp-14h] BYREF

  v13 = 0;
  v14[0] = 0;
  v6 = a2;
  if ( (MiFlags & 0x8000) != 0 )
    return VslApplyDynamicRelocations(a1, a3, a4);
  LOBYTE(a2) = 1;
  v8 = (unsigned int *)RtlImageDirectoryEntryToData(a1, a2, 10, (int)&v13);
  if ( !v8 || v13 != *v8 )
    return 0LL;
  result = MiCaptureDynamicRelocationTableRva(a1, v6, 0LL, 523, (__int64)v8, *v8, v14);
  if ( (int)result >= 0 )
    return LdrApplyDynamicRelocations(a1, (_DWORD *)(a1 + v14[0]), v10, v11, v12, a3, a4);
  if ( (_DWORD)result == -1073741637 )
    return 0LL;
  return result;
}
