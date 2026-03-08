/*
 * XREFs of MiSnapThunk @ 0x1407ECC30
 * Callers:
 *     MiResolveImageReferences @ 0x1407EC794 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1407ECC30 (MiSnapThunk.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     RtlImageDirectoryEntryToData @ 0x14035E710 (RtlImageDirectoryEntryToData.c)
 *     strchr @ 0x1403D5520 (strchr.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlPrefixString @ 0x14075DBF0 (RtlPrefixString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
 *     MiSnapThunk @ 0x1407ECC30 (MiSnapThunk.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSnapThunk(__int64 a1, __int64 a2, __int64 *a3, char **a4, unsigned __int16 *a5)
{
  __int64 v7; // r12
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int16 *v11; // rcx
  unsigned __int16 *v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rbx
  unsigned int v16; // r10d
  __int64 v17; // r11
  unsigned __int8 *v18; // rax
  __int64 v19; // rcx
  int v20; // r9d
  int v21; // edx
  unsigned __int16 v22; // dx
  char *v23; // rbx
  int v25; // r9d
  int v26; // eax
  unsigned __int16 *v27; // rcx
  int v28; // edx
  __int64 v29; // r11
  char v30; // r10
  int v31; // ecx
  unsigned __int16 v32; // r14
  PVOID *v33; // rdi
  unsigned int v34; // esi
  char *v35; // r15
  __int64 v36; // rbx
  _WORD *Pool; // rax
  _WORD *v38; // r14
  PVOID v39; // rcx
  char *v40; // [rsp+30h] [rbp-30h] BYREF
  STRING SourceString; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF

  v7 = a2;
  LOBYTE(a2) = 1;
  LODWORD(v40) = 0;
  DestinationString = 0LL;
  SourceString = 0LL;
  v9 = RtlImageDirectoryEntryToData(a1, a2, 0, (int)&v40);
  if ( !v9 )
    return 3221226083LL;
  v10 = *a3;
  v11 = a5;
  if ( *a3 < 0 )
  {
    if ( !a5 )
    {
      v22 = v10 - *(_WORD *)(v9 + 16);
LABEL_11:
      if ( (unsigned int)v22 >= *(_DWORD *)(v9 + 20) )
        return 3221226082LL;
      v23 = (char *)(a1 + *(unsigned int *)(a1 + *(unsigned int *)(v9 + 28) + 4LL * v22));
      *a4 = v23;
      if ( (unsigned __int64)v23 <= v9 || (unsigned __int64)v23 >= v9 + (unsigned int)v40 )
        return 0LL;
      SourceString.Buffer = v23;
      v32 = 1 - (_WORD)v23 + (unsigned __int16)strchr(v23, 46);
      SourceString.Length = v32;
      SourceString.MaximumLength = v32;
      if ( RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u) < 0 )
        return 3221226083LL;
      v33 = (PVOID *)PsLoadedModuleList;
      v34 = -1073741213;
      while ( v33 != &PsLoadedModuleList )
      {
        if ( RtlPrefixString((const STRING *)&DestinationString, (const STRING *)(v33 + 11), 1u) )
        {
          v35 = &v23[v32];
          v36 = -1LL;
          do
            ++v36;
          while ( v35[v36] );
          Pool = MiAllocatePool(256, v36 + 5, 0x20206D4Du);
          v38 = Pool;
          if ( Pool )
          {
            memmove(Pool + 1, v35, v36 + 1);
            *v38 = 0;
            v39 = v33[6];
            v40 = 0LL;
            v34 = MiSnapThunk((_DWORD)v39, v7, (unsigned int)&v40, (unsigned int)&v40, (__int64)v38);
            ExFreePoolWithTag(v38, 0);
            *a4 = v40;
          }
          break;
        }
        v33 = (PVOID *)*v33;
      }
      RtlFreeUnicodeString(&DestinationString);
      return v34;
    }
  }
  else if ( !a5 )
  {
    v11 = (unsigned __int16 *)(v10 + v7);
  }
  v12 = v11 + 1;
  v13 = a1 + *(unsigned int *)(v9 + 32);
  v14 = *v11;
  v15 = a1 + *(unsigned int *)(v9 + 36);
  v16 = *(_DWORD *)(v9 + 24);
  if ( (unsigned int)v14 < v16 )
  {
    v17 = *v11;
    v18 = (unsigned __int8 *)(v11 + 1);
    v19 = a1 + *(unsigned int *)(v13 + 4 * v14) - (_QWORD)v12;
    do
    {
      v20 = v18[v19];
      v21 = *v18 - v20;
      if ( v21 )
        break;
      ++v18;
    }
    while ( v20 );
    if ( !v21 )
    {
      v22 = *(_WORD *)(v15 + 2 * v17);
      goto LABEL_11;
    }
  }
  v25 = 0;
  if ( !v16 )
    return 3221226083LL;
  v26 = v16 - 1;
  if ( (int)(v16 - 1) < 0 )
    return 3221226083LL;
  while ( 1 )
  {
    v27 = v12;
    v28 = (v25 + v26) >> 1;
    v29 = a1 + *(unsigned int *)(v13 + 4LL * v28) - (_QWORD)v12;
    while ( 1 )
    {
      v30 = *(_BYTE *)v27;
      if ( *(_BYTE *)v27 != *((_BYTE *)v27 + v29) )
        break;
      v27 = (unsigned __int16 *)((char *)v27 + 1);
      if ( !v30 )
      {
        v31 = 0;
        goto LABEL_21;
      }
    }
    v31 = *(_BYTE *)v27 < *((_BYTE *)v27 + v29) ? -1 : 1;
LABEL_21:
    if ( v31 >= 0 )
      break;
    if ( !v28 )
      return 3221226083LL;
    v26 = v28 - 1;
LABEL_24:
    if ( v26 < v25 )
      return 3221226083LL;
  }
  if ( v31 > 0 )
  {
    v25 = v28 + 1;
    goto LABEL_24;
  }
  if ( v26 >= v25 )
  {
    v22 = *(_WORD *)(v15 + 2LL * v28);
    goto LABEL_11;
  }
  return 3221226083LL;
}
