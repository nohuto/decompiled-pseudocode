/*
 * XREFs of LdrpResGetResourceDirectory @ 0x140671EB4
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x140300848 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlULongLongAdd @ 0x14024CF90 (RtlULongLongAdd.c)
 *     RtlImageNtHeaderEx @ 0x14029D010 (RtlImageNtHeaderEx.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x14067240C (LdrpSectionTableFromVirtualAddress.c)
 */

__int64 __fastcall LdrpResGetResourceDirectory(
        ULONGLONG ullAugend,
        unsigned __int64 a2,
        __int16 a3,
        ULONGLONG *a4,
        _QWORD *a5)
{
  ULONGLONG v5; // rdi
  unsigned int v6; // ebx
  char v7; // r15
  bool v8; // r14
  int v9; // r12d
  __int64 result; // rax
  int v11; // r9d
  __int64 v12; // r13
  __int128 *v13; // rcx
  __int16 v14; // ax
  unsigned int v15; // eax
  unsigned int v16; // esi
  ULONGLONG v17; // rdx
  unsigned __int64 v18; // r14
  unsigned int *v19; // rax
  unsigned __int64 v20; // r8
  int v21; // eax
  int v22; // ecx
  ULONGLONG pullResult; // [rsp+40h] [rbp-138h] BYREF
  ULONGLONG v24; // [rsp+48h] [rbp-130h]
  __int128 v25; // [rsp+50h] [rbp-128h]
  __int128 v26; // [rsp+60h] [rbp-118h]
  __int128 v27; // [rsp+70h] [rbp-108h]
  __int128 v28; // [rsp+80h] [rbp-F8h]
  __int128 v29; // [rsp+90h] [rbp-E8h]
  __int128 v30; // [rsp+A0h] [rbp-D8h]
  __int128 v31; // [rsp+B0h] [rbp-C8h]
  __int128 ullAddend; // [rsp+C0h] [rbp-B8h]
  __int128 v33; // [rsp+D0h] [rbp-A8h]
  __int128 v34; // [rsp+E0h] [rbp-98h]
  __int128 v35; // [rsp+F0h] [rbp-88h]
  __int128 v36; // [rsp+100h] [rbp-78h]
  __int128 v37; // [rsp+110h] [rbp-68h]
  __int128 v38; // [rsp+120h] [rbp-58h]
  __int128 v39; // [rsp+130h] [rbp-48h]
  __int64 v40; // [rsp+180h] [rbp+8h] BYREF
  unsigned __int64 v41; // [rsp+188h] [rbp+10h]
  ULONGLONG *v42; // [rsp+198h] [rbp+20h]

  v42 = a4;
  v41 = a2;
  v5 = ullAugend;
  v6 = 0;
  v24 = 0LL;
  v40 = 0LL;
  v7 = 1;
  v8 = 1;
  pullResult = 0LL;
  if ( !ullAugend || !a4 || !a5 )
    return 3221225485LL;
  if ( (ullAugend & 3) != 0 )
  {
    v5 = ullAugend & 0xFFFFFFFFFFFFFFFCuLL;
    v8 = !(ullAugend & 1);
  }
  v9 = a3 & 0x1000;
  result = RtlImageNtHeaderEx(v9 == 0, v5, a2, &v40);
  if ( (int)result >= 0 )
  {
    v12 = v40;
    v13 = (__int128 *)(v40 + 24);
    v14 = *(_WORD *)(v40 + 24);
    if ( v14 == 267 )
    {
      v25 = *v13;
      v26 = *(_OWORD *)(v40 + 40);
      v27 = *(_OWORD *)(v40 + 56);
      v28 = *(_OWORD *)(v40 + 72);
      v29 = *(_OWORD *)(v40 + 88);
      v30 = *(_OWORD *)(v40 + 104);
      v31 = *(_OWORD *)(v40 + 120);
      ullAddend = *(_OWORD *)(v40 + 136);
      v33 = *(_OWORD *)(v40 + 152);
      v34 = *(_OWORD *)(v40 + 168);
      v35 = *(_OWORD *)(v40 + 184);
      v36 = *(_OWORD *)(v40 + 200);
      v37 = *(_OWORD *)(v40 + 216);
      v38 = *(_OWORD *)(v40 + 232);
    }
    else
    {
      if ( v14 != 523 )
        return (unsigned int)-1073741701;
      v25 = *v13;
      v26 = *(_OWORD *)(v40 + 40);
      v27 = *(_OWORD *)(v40 + 56);
      v28 = *(_OWORD *)(v40 + 72);
      v29 = *(_OWORD *)(v40 + 88);
      v30 = *(_OWORD *)(v40 + 104);
      v31 = *(_OWORD *)(v40 + 120);
      ullAddend = *(_OWORD *)(v40 + 136);
      v33 = *(_OWORD *)(v40 + 152);
      v34 = *(_OWORD *)(v40 + 168);
      v35 = *(_OWORD *)(v40 + 184);
      v36 = *(_OWORD *)(v40 + 200);
      v37 = *(_OWORD *)(v40 + 216);
      v38 = *(_OWORD *)(v40 + 232);
      v39 = *(_OWORD *)(v40 + 248);
      v7 = 0;
    }
    v15 = HIDWORD(v31);
    if ( v7 )
      v15 = HIDWORD(v30);
    if ( v15 <= 2 )
    {
      return (unsigned int)-1073741687;
    }
    else
    {
      v16 = v33;
      if ( v7 )
        v16 = ullAddend;
      if ( v16 )
      {
        if ( v5 < 0x7FFFFFFEFFFFLL && v5 + v16 >= 0x7FFFFFFEFFFFLL )
        {
          return (unsigned int)-1073741701;
        }
        else
        {
          if ( v8 || v16 < HIDWORD(v28) )
          {
            if ( RtlULongLongAdd(v5, v16, &pullResult) < 0 )
              return (unsigned int)-1073741701;
            v17 = pullResult;
            v24 = pullResult;
            v18 = v41;
          }
          else
          {
            v18 = v41;
            v19 = (unsigned int *)LdrpSectionTableFromVirtualAddress(v5, v41, v40, v11, v16, v9 != 0);
            if ( !v19 )
              return (unsigned int)-1073741701;
            if ( !v19[4] )
              return (unsigned int)-1073741687;
            v17 = v5 + v19[5] - (unsigned __int64)v19[3] + v16;
            v24 = v17;
          }
          if ( !v17 )
            return (unsigned int)-1073741687;
          if ( v9 )
          {
            if ( v17 <= v5 )
              return (unsigned int)-1073741701;
            v20 = (v5 & 0xFFFFFFFFFFFFFFFCuLL) + v18;
            if ( v17 + 16 > v20 )
              return (unsigned int)-1073741701;
            v21 = *(unsigned __int16 *)(v17 + 12);
            v22 = *(unsigned __int16 *)(v17 + 14);
            if ( !__PAIR32__(v22, v21) )
              return (unsigned int)-1073741686;
            if ( v17 + 8LL * (unsigned int)(v21 + v22) > v20 )
              return (unsigned int)-1073741701;
          }
          *v42 = v17;
          *a5 = v12;
        }
      }
      else
      {
        return (unsigned int)-1073741687;
      }
    }
    return v6;
  }
  return result;
}
