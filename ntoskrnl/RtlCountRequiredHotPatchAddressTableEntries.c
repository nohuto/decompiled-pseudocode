__int64 __fastcall RtlCountRequiredHotPatchAddressTableEntries(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        _DWORD *a6,
        unsigned int *a7,
        char a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        _DWORD *a13)
{
  int v14; // ebx
  unsigned int HotPatchSize; // eax
  __int64 v18; // r9
  unsigned int *v19; // r10
  __int64 v20; // rdi
  __int64 v21; // r8
  int v22; // edx
  bool v23; // al
  bool v24; // cl
  __int64 v25; // rcx
  char *v26; // rcx
  _BYTE *v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // r10
  int v30; // r11d

  v14 = 0;
  HotPatchSize = RtlGetHotPatchSize(a6);
  v19 = a7;
  v20 = HotPatchSize;
  if ( !*a7 )
  {
LABEL_20:
    *a13 = v14;
    return 0LL;
  }
  while ( 1 )
  {
    v21 = (__int64)v19;
    v22 = *v19;
    if ( a8 )
      v23 = v22 < 0;
    else
      v23 = v22 >= 0;
    ++v19;
    v24 = 0;
    if ( (v22 & 0xFC000) == 0x1C000 )
      v24 = v23;
    if ( v24 )
      break;
    v19 = (unsigned int *)(v21 + 4 * ((v22 & 0xFFF) * (unsigned int)v20 + 1LL));
LABEL_19:
    if ( !*v19 )
      goto LABEL_20;
  }
  if ( (v22 & 0xFFF) == 0 )
    goto LABEL_19;
  while ( 1 )
  {
    v25 = *v19;
    if ( (unsigned int)v25 < 0x10 || (int)v25 + 2 > a2 )
      return 3221225595LL;
    v26 = (char *)(a1 + v25);
    v27 = 0LL;
    if ( (_DWORD)v20 != 2 )
      v27 = v19 + 2;
    v28 = RtlpCheckFunctionPatchAppliedInOriginalImage(v26, v27, v21, v18, a4);
    if ( v28 == -1 )
      return 3221225595LL;
    if ( v28 == -2 )
    {
      ++v14;
    }
    else if ( v28 >= a5 )
    {
      return 3221225507LL;
    }
    v19 = (unsigned int *)(v29 + 4 * v20);
    if ( v30 == 1 )
      goto LABEL_19;
  }
}
