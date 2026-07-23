/*
 * XREFs of RtlValidateHotPatchBase @ 0x14091B344
 * Callers:
 *     MiPerformImageHotPatch @ 0x1408CD024 (MiPerformImageHotPatch.c)
 * Callees:
 *     RtlGetHotPatchSize @ 0x14058FF3C (RtlGetHotPatchSize.c)
 *     RtlDetermineHotPatchExtent @ 0x14091AF4C (RtlDetermineHotPatchExtent.c)
 */

char __fastcall RtlValidateHotPatchBase(_DWORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  int *v7; // r12
  int *v8; // rdi
  unsigned int HotPatchSize; // edx
  unsigned int v10; // r8d
  unsigned int v11; // r15d
  int v12; // esi
  int v13; // ebx
  unsigned int v15; // [rsp+60h] [rbp+8h]

  v5 = *(unsigned int *)(a2 + 24);
  v6 = (unsigned int)a1[1];
  if ( (unsigned int)v5 < (unsigned int)v6 )
  {
    v7 = (_DWORD *)((char *)a1 + v6);
    v8 = (_DWORD *)((char *)a1 + v5);
    HotPatchSize = RtlGetHotPatchSize(a1);
    v15 = HotPatchSize;
    do
    {
LABEL_18:
      v13 = *v8;
      if ( !*v8 )
        return 1;
      if ( v8 >= v7 || (v13 & 0x3FF03000) != 0 || (v13 & 0x40000000) != 0 )
        return 0;
      if ( v13 >= 0 )
      {
        v11 = a4;
        if ( (v13 & 0xFC000) != 0x1C000 )
          return 0;
      }
      else
      {
        v11 = v10;
      }
      ++v8;
      v12 = v13 & 0xFFF;
    }
    while ( (v13 & 0xFFF) == 0 );
    while ( (v13 & 0x4000) == 0 || (unsigned __int64)(unsigned int)v8[1] + 8 <= v11 )
    {
      if ( (v13 & 0x8000) != 0 )
      {
        if ( !RtlDetermineHotPatchExtent((unsigned int)v13) )
          return 0;
        HotPatchSize = v15;
      }
      if ( (v13 & 0xFC000) == 0x78000 )
        break;
      v8 += HotPatchSize;
      if ( !--v12 )
      {
        v10 = a3;
        goto LABEL_18;
      }
    }
  }
  return 0;
}
