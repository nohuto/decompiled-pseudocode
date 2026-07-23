/*
 * XREFs of RtlEnumerateHotPatchPatches @ 0x14091AFF8
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1408CD798 (MiPrepareToHotPatchImage.c)
 * Callees:
 *     RtlGetHotPatchSize @ 0x14058FF3C (RtlGetHotPatchSize.c)
 *     MiPrepareToHotPatchImagePatchCallback @ 0x1408CDC60 (MiPrepareToHotPatchImagePatchCallback.c)
 */

char __fastcall RtlEnumerateHotPatchPatches(_DWORD *a1, unsigned int *a2, __int64 a3, _DWORD *a4)
{
  unsigned int HotPatchSize; // eax
  unsigned int *v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // r14
  unsigned int v10; // esi
  unsigned int v11; // ebp
  int i; // ebx

  HotPatchSize = RtlGetHotPatchSize(a1);
  v8 = *v7;
  v9 = HotPatchSize;
  while ( v8 )
  {
    v10 = v8 >> 31;
    v11 = v8 & 0xFC000;
    ++a2;
    for ( i = v8 & 0xFFF; i; --i )
    {
      LOBYTE(HotPatchSize) = MiPrepareToHotPatchImagePatchCallback(a4, a2, v11, v10);
      if ( (_BYTE)HotPatchSize )
        break;
      a2 += v9;
    }
    v8 = *a2;
  }
  return HotPatchSize;
}
