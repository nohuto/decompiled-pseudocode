/*
 * XREFs of MiCallCreateSectionFilters @ 0x1407D16B0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1407D12B0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     FsRtlAcquireToCreateMappedSection @ 0x1407D17DC (FsRtlAcquireToCreateMappedSection.c)
 *     FsRtlReleaseFile @ 0x1407D18E0 (FsRtlReleaseFile.c)
 */

__int64 __fastcall MiCallCreateSectionFilters(int *a1)
{
  struct _FILE_OBJECT *v2; // rdi
  __int64 result; // rax
  unsigned int v4; // r8d
  char v5; // r9
  int v6; // r10d
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // eax
  int v10; // edx
  int v11; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0;
  v12 = 0;
  if ( (*a1 & 1) != 0 )
    return 0LL;
  v2 = (struct _FILE_OBJECT *)*((_QWORD *)a1 + 7);
  result = FsRtlAcquireToCreateMappedSection(v2, (unsigned int)a1[7], 0LL, (unsigned int)a1[4], &v11, &v12);
  v4 = result;
  if ( (int)result >= 0 )
  {
    v5 = v11;
    v6 = v11 & 6;
    if ( (v11 & 6) == 0 )
    {
LABEL_4:
      v7 = v12;
      if ( v12 )
      {
        if ( ((v12 - 1) & v12) == 0 )
        {
          *a1 |= 0x2000u;
          if ( v7 < dword_140C69360 )
            dword_140C69360 = v7;
        }
      }
      v8 = *a1;
      if ( v4 == 299 )
        v9 = v8 | 0x80;
      else
        v9 = v8 & 0xFFFFFF7F;
      *a1 = v9;
      return v4;
    }
    v10 = *a1;
    if ( (*a1 & 0x8000000) != 0 )
    {
      FsRtlReleaseFile(v2);
      return 3221227793LL;
    }
    if ( (a1[4] & 0x1000000) != 0 )
    {
      v10 |= 0x10000u;
      *a1 = v10;
      if ( (v5 & 4) == 0 )
      {
        v10 |= 0x40000u;
        *a1 = v10;
      }
      if ( (v5 & 8) != 0 )
        goto LABEL_24;
      v10 |= 0x80000u;
    }
    else
    {
      if ( (v11 & 2) == 0 )
        goto LABEL_24;
      v10 |= 0x10000u;
    }
    *a1 = v10;
LABEL_24:
    if ( v6 == 6 )
      *a1 = v10 | 0x20000;
    goto LABEL_4;
  }
  return result;
}
