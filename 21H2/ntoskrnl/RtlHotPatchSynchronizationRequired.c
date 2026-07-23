/*
 * XREFs of RtlHotPatchSynchronizationRequired @ 0x14091B1E4
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1408CD798 (MiPrepareToHotPatchImage.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402F5970 (RtlFindClearBitsAndSet.c)
 *     RtlGetHotPatchSize @ 0x14058FF3C (RtlGetHotPatchSize.c)
 *     RtlpCheckFunctionPatchAppliedInOriginalImage @ 0x1409B3A40 (RtlpCheckFunctionPatchAppliedInOriginalImage.c)
 */

__int64 __fastcall RtlHotPatchSynchronizationRequired(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        PRTL_BITMAP BitMapHeader,
        int a8,
        int a9,
        _BYTE *a10)
{
  __int64 HotPatchSize; // rdi
  _DWORD *v12; // r9
  _DWORD *v13; // r11
  int v14; // edx
  char v15; // cl
  __int64 v16; // r8
  int v17; // r10d
  _DWORD *v18; // rdx
  __int64 v19; // rax
  char v20; // cl
  __int64 v21; // r9
  int v22; // r10d
  ULONG i; // r8d
  int v25; // ecx
  ULONG ClearBitsAndSet; // eax

  *a10 = 0;
  if ( a3 )
  {
    HotPatchSize = (unsigned int)RtlGetHotPatchSize(a2);
    do
    {
      v13 = v12;
      if ( !*v12 )
        break;
      v14 = *v12;
      v16 = *v12 >> 31;
      v15 = 0;
      LOBYTE(v16) = *v12 >= 0;
      v17 = *v12++ & 0xFFF;
      if ( (v14 & 0xFC000) == 0x1C000 )
        v15 = v16;
      if ( v15 )
      {
        if ( v17 )
        {
          do
          {
            v18 = 0LL;
            if ( (_DWORD)HotPatchSize != 2 )
              v18 = v12 + 2;
            v19 = RtlpCheckFunctionPatchAppliedInOriginalImage(a1 + (unsigned int)*v12, v18, v16);
            if ( v19 == -1 )
              return 3221225595LL;
            if ( v19 )
            {
              if ( a6 )
                _bittestandset((signed __int32 *)BitMapHeader->Buffer, (v19 - a5) >> 3);
            }
            else if ( (v20 & 7) == 7 )
            {
LABEL_14:
              *a10 = 1;
              return 0LL;
            }
            v12 = (_DWORD *)(v21 + 4 * HotPatchSize);
          }
          while ( v22 != 1 );
        }
      }
      else
      {
        v12 = &v13[(unsigned int)(v17 * HotPatchSize) + 1];
      }
    }
    while ( v12 );
  }
  if ( a6 )
  {
    for ( i = 0; ; i = ClearBitsAndSet )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(BitMapHeader, 1u, i);
      if ( ClearBitsAndSet == -1 )
        break;
      v25 = *(_DWORD *)(a6 + 6LL * ClearBitsAndSet);
      if ( v25 && (((_BYTE)a1 + (_BYTE)v25) & 7) == 7 )
        goto LABEL_14;
    }
  }
  return 0LL;
}
