__int64 __fastcall LdrpResGetResourceDirectory(
        ULONGLONG ullAugend,
        unsigned __int64 a2,
        __int16 a3,
        ULONGLONG *a4,
        __int64 *a5)
{
  ULONGLONG v6; // rdi
  unsigned int v7; // ebx
  char v8; // r14
  bool v9; // si
  int v10; // r15d
  __int64 result; // rax
  __int64 v12; // r9
  __int64 v13; // r13
  __int128 *v14; // rcx
  __int16 v15; // ax
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r14
  ULONGLONG v19; // rdx
  unsigned int *v20; // rax
  unsigned __int64 v21; // r8
  int v22; // eax
  int v23; // ecx
  ULONGLONG pullResult; // [rsp+40h] [rbp-128h] BYREF
  ULONGLONG v25; // [rsp+48h] [rbp-120h]
  __int128 v26; // [rsp+50h] [rbp-118h]
  __int128 v27; // [rsp+60h] [rbp-108h]
  __int128 v28; // [rsp+70h] [rbp-F8h]
  __int128 v29; // [rsp+80h] [rbp-E8h]
  __int128 v30; // [rsp+90h] [rbp-D8h]
  __int128 v31; // [rsp+A0h] [rbp-C8h]
  __int128 v32; // [rsp+B0h] [rbp-B8h]
  __int128 ullAddend; // [rsp+C0h] [rbp-A8h]
  __int128 v34; // [rsp+D0h] [rbp-98h]
  __int128 v35; // [rsp+E0h] [rbp-88h]
  __int128 v36; // [rsp+F0h] [rbp-78h]
  __int128 v37; // [rsp+100h] [rbp-68h]
  __int128 v38; // [rsp+110h] [rbp-58h]
  __int128 v39; // [rsp+120h] [rbp-48h]
  __int128 v40; // [rsp+130h] [rbp-38h]
  __int64 v41; // [rsp+170h] [rbp+8h] BYREF
  ULONGLONG *v42; // [rsp+188h] [rbp+20h]

  v42 = a4;
  v6 = ullAugend;
  v7 = 0;
  v25 = 0LL;
  v41 = 0LL;
  v8 = 1;
  v9 = 1;
  pullResult = 0LL;
  if ( !ullAugend || !a4 || !a5 )
    return 3221225485LL;
  if ( (ullAugend & 3) != 0 )
  {
    v6 = ullAugend & 0xFFFFFFFFFFFFFFFCuLL;
    v9 = !(ullAugend & 1);
  }
  v10 = a3 & 0x1000;
  result = RtlImageNtHeaderEx(v10 == 0, v6, a2, &v41);
  if ( (int)result >= 0 )
  {
    v13 = v41;
    v14 = (__int128 *)(v41 + 24);
    v15 = *(_WORD *)(v41 + 24);
    if ( v15 == 267 )
    {
      v26 = *v14;
      v27 = *(_OWORD *)(v41 + 40);
      v28 = *(_OWORD *)(v41 + 56);
      v29 = *(_OWORD *)(v41 + 72);
      v30 = *(_OWORD *)(v41 + 88);
      v31 = *(_OWORD *)(v41 + 104);
      v32 = *(_OWORD *)(v41 + 120);
      ullAddend = *(_OWORD *)(v41 + 136);
      v34 = *(_OWORD *)(v41 + 152);
      v35 = *(_OWORD *)(v41 + 168);
      v36 = *(_OWORD *)(v41 + 184);
      v37 = *(_OWORD *)(v41 + 200);
      v38 = *(_OWORD *)(v41 + 216);
      v39 = *(_OWORD *)(v41 + 232);
    }
    else
    {
      if ( v15 != 523 )
        return (unsigned int)-1073741701;
      v26 = *v14;
      v27 = *(_OWORD *)(v41 + 40);
      v28 = *(_OWORD *)(v41 + 56);
      v29 = *(_OWORD *)(v41 + 72);
      v30 = *(_OWORD *)(v41 + 88);
      v31 = *(_OWORD *)(v41 + 104);
      v32 = *(_OWORD *)(v41 + 120);
      ullAddend = *(_OWORD *)(v41 + 136);
      v34 = *(_OWORD *)(v41 + 152);
      v35 = *(_OWORD *)(v41 + 168);
      v36 = *(_OWORD *)(v41 + 184);
      v37 = *(_OWORD *)(v41 + 200);
      v38 = *(_OWORD *)(v41 + 216);
      v39 = *(_OWORD *)(v41 + 232);
      v40 = *(_OWORD *)(v41 + 248);
      v8 = 0;
    }
    v16 = HIDWORD(v32);
    if ( v8 )
      v16 = HIDWORD(v31);
    if ( v16 <= 2 )
    {
      return (unsigned int)-1073741687;
    }
    else
    {
      v17 = (unsigned int)v34;
      if ( v8 )
        v17 = (unsigned int)ullAddend;
      if ( (_DWORD)v17 )
      {
        v18 = (unsigned int)v17;
        if ( v6 > 0x7FFFFFFEFFFFLL || v6 + v17 - 1 >= v6 && (unsigned int)v17 + v6 - 1 <= 0x7FFFFFFEFFFFLL )
        {
          if ( v9 || (unsigned int)v17 < HIDWORD(v29) )
          {
            if ( RtlULongLongAdd(v6, (unsigned int)v17, &pullResult) < 0 )
              return (unsigned int)-1073741701;
            v19 = pullResult;
          }
          else
          {
            v20 = (unsigned int *)LdrpSectionTableFromVirtualAddress(v6, a2, v41, v12, v17, v10 != 0);
            if ( !v20 )
              return (unsigned int)-1073741701;
            if ( !v20[4] )
              return (unsigned int)-1073741687;
            v19 = v6 + v18 + v20[5] - (unsigned __int64)v20[3];
          }
          v25 = v19;
          if ( !v19 )
            return (unsigned int)-1073741687;
          if ( v10 )
          {
            if ( v19 <= v6 )
              return (unsigned int)-1073741701;
            v21 = (v6 & 0xFFFFFFFFFFFFFFFCuLL) + a2;
            if ( v19 + 16 > v21 )
              return (unsigned int)-1073741701;
            v22 = *(unsigned __int16 *)(v19 + 12);
            v23 = *(unsigned __int16 *)(v19 + 14);
            if ( !__PAIR32__(v23, v22) )
              return (unsigned int)-1073741686;
            if ( v19 + 8LL * (unsigned int)(v22 + v23) > v21 )
              return (unsigned int)-1073741701;
          }
          *v42 = v19;
          *a5 = v13;
        }
        else
        {
          return (unsigned int)-1073741701;
        }
      }
      else
      {
        return (unsigned int)-1073741687;
      }
    }
    return v7;
  }
  return result;
}
