char __fastcall MiPrepareToHotPatchImagePatchCallback(_DWORD *a1, int *a2, int a3, unsigned __int8 a4)
{
  int v4; // edx
  __int64 v5; // rbx
  ULONG StartingIndex; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+58h] [rbp+20h] BYREF

  StartingIndex = 0;
  v8 = 0;
  if ( a1[2] == a4 )
  {
    v4 = *a2;
    goto LABEL_5;
  }
  if ( (a3 & 0xFC000) == 0x5C000 )
  {
    v4 = a2[1];
LABEL_5:
    v5 = *(_QWORD *)a1;
    RtlDetermineHotPatchExtent(
      a3,
      v4,
      *(unsigned __int16 *)(*(_QWORD *)a1 + 136LL),
      (unsigned int)&StartingIndex,
      (__int64)&v8);
    RtlClearBits(*(PRTL_BITMAP *)(v5 + 48), StartingIndex, v8 - StartingIndex + 1);
  }
  return 0;
}
