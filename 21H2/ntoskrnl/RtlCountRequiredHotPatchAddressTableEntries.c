/*
 * XREFs of RtlCountRequiredHotPatchAddressTableEntries @ 0x14091AE08
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1408CD798 (MiPrepareToHotPatchImage.c)
 * Callees:
 *     RtlGetHotPatchSize @ 0x14058FF3C (RtlGetHotPatchSize.c)
 *     RtlpCheckFunctionPatchAppliedInOriginalImage @ 0x1409B3A40 (RtlpCheckFunctionPatchAppliedInOriginalImage.c)
 */

__int64 __fastcall RtlCountRequiredHotPatchAddressTableEntries(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _DWORD *a4,
        int *a5,
        char a6,
        __int64 a7,
        __int64 a8,
        _DWORD *a9)
{
  unsigned __int64 v10; // r14
  int v12; // ebx
  unsigned int HotPatchSize; // eax
  int *v14; // r9
  __int64 v15; // rdi
  int v16; // r10d
  bool v17; // dl
  int *v18; // r8
  bool v19; // cl
  __int64 v20; // rcx
  unsigned int *v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // r9
  unsigned __int64 v25; // r10
  int v26; // r11d

  v10 = a3;
  v12 = 0;
  HotPatchSize = RtlGetHotPatchSize(a4);
  v14 = a5;
  v15 = HotPatchSize;
  v16 = *a5;
  if ( !*a5 )
  {
LABEL_23:
    *a9 = v12;
    return 0LL;
  }
  while ( 1 )
  {
    v17 = 0;
    v18 = v14;
    if ( a6 )
    {
      if ( v16 < 0 )
        v17 = 1;
    }
    else
    {
      v17 = v16 >= 0;
    }
    v19 = 0;
    ++v14;
    if ( (v16 & 0xFC000) == 0x1C000 )
      v19 = v17;
    if ( v19 )
      break;
    v14 = &v18[(v16 & 0xFFF) * (unsigned int)v15 + 1];
LABEL_22:
    v16 = *v14;
    if ( !*v14 )
      goto LABEL_23;
  }
  if ( (v16 & 0xFFF) == 0 )
    goto LABEL_22;
  while ( 1 )
  {
    v20 = (unsigned int)*v14;
    if ( (unsigned int)v20 < 0x10 || (int)v20 + 2 > a2 )
      return 3221225595LL;
    v21 = 0LL;
    v22 = a1 + v20;
    if ( (_DWORD)v15 != 2 )
      v21 = (unsigned int *)(v14 + 2);
    v23 = RtlpCheckFunctionPatchAppliedInOriginalImage(v22, v21, v18);
    if ( v23 == -1LL )
      return 3221225595LL;
    if ( v23 )
    {
      if ( v23 < v25 || v23 - v25 >= v10 )
        return 3221225507LL;
    }
    else
    {
      ++v12;
    }
    v14 = (int *)(v24 + 4 * v15);
    if ( v26 == 1 )
      goto LABEL_22;
  }
}
