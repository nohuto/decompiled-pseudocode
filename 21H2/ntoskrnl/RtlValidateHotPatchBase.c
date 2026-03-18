/*
 * XREFs of RtlValidateHotPatchBase @ 0x1409C0794
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140971068 (MiApplyDriverHotPatch.c)
 *     MiCaptureHotPatchInfo @ 0x140972818 (MiCaptureHotPatchInfo.c)
 * Callees:
 *     RtlGetHotPatchSize @ 0x1405EF8CC (RtlGetHotPatchSize.c)
 *     RtlDetermineHotPatchExtent @ 0x1409C03F8 (RtlDetermineHotPatchExtent.c)
 */

char __fastcall RtlValidateHotPatchBase(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int16 a6)
{
  unsigned int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int *v9; // r13
  unsigned int *v10; // rdi
  unsigned int HotPatchSize; // r8d
  unsigned int v12; // r9d
  unsigned int v13; // r10d
  int v14; // esi
  unsigned int v15; // edx
  unsigned int v16; // eax
  int v17; // r15d
  unsigned int v18; // ecx
  int v19; // ebx
  unsigned int v21; // [rsp+30h] [rbp-38h]
  unsigned int v22; // [rsp+34h] [rbp-34h]
  unsigned int v23; // [rsp+38h] [rbp-30h]
  unsigned int v24[11]; // [rsp+3Ch] [rbp-2Ch] BYREF

  a5 = 0;
  if ( a6 == 0x8664 || a6 == 0xAA64 )
  {
    v6 = 8;
  }
  else
  {
    if ( a6 != 332 )
      return 0;
    v6 = 4;
  }
  v7 = *(unsigned int *)(a2 + 24);
  v8 = (unsigned int)a1[1];
  if ( (unsigned int)v7 < (unsigned int)v8 )
  {
    v9 = (_DWORD *)((char *)a1 + v8);
    v10 = (_DWORD *)((char *)a1 + v7);
    HotPatchSize = RtlGetHotPatchSize(a1);
    v23 = HotPatchSize;
    do
    {
LABEL_29:
      v19 = *v10;
      if ( !*v10 )
        return 1;
      if ( v10 >= v9 )
        return 0;
      if ( (v19 & 0x3FF03000) != 0 )
        return 0;
      if ( (v19 & 0x40000000) != 0 )
        return 0;
      v14 = v19 & 0xFC000;
      if ( v19 >= 0 && v14 != 114688 )
        return 0;
      v15 = v13;
      v16 = v12;
      if ( v19 >= 0 )
      {
        v15 = v12;
        v16 = v13;
      }
      ++v10;
      v22 = v15;
      v21 = v16;
      v17 = v19 & 0xFFF;
    }
    while ( (v19 & 0xFFF) == 0 );
    while ( 1 )
    {
      if ( (v19 & 0x4000) != 0 )
      {
        v18 = v6 + v10[1];
        if ( v18 < v6 || v18 > v15 )
          break;
      }
      if ( v14 == 376832 && v19 >= 0 )
        break;
      if ( (v19 & 0x8000) != 0 )
      {
        if ( !RtlDetermineHotPatchExtent((unsigned int)v19, *v10, a6, v24, &a5) || a5 > v21 >> 12 )
          return 0;
        v15 = v22;
        HotPatchSize = v23;
      }
      if ( v14 == 491520 && v10[1] == -1 )
        return 0;
      v10 += HotPatchSize;
      if ( !--v17 )
      {
        v12 = a4;
        v13 = a3;
        goto LABEL_29;
      }
    }
  }
  return 0;
}
