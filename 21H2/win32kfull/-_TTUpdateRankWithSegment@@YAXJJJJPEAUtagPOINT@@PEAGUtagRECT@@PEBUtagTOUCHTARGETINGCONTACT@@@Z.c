/*
 * XREFs of ?_TTUpdateRankWithSegment@@YAXJJJJPEAUtagPOINT@@PEAGUtagRECT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C025F470
 * Callers:
 *     TouchTargetingRankForRect @ 0x1C025FD60 (TouchTargetingRankForRect.c)
 * Callees:
 *     TouchTargetingIntersectSegment @ 0x1C025FB40 (TouchTargetingIntersectSegment.c)
 *     TouchTargetingRank @ 0x1C025FCE8 (TouchTargetingRank.c)
 *     TouchTargetingSnapToSegment @ 0x1C026053C (TouchTargetingSnapToSegment.c)
 */

void __fastcall _TTUpdateRankWithSegment(
        signed int a1,
        signed int a2,
        int a3,
        int a4,
        struct tagPOINT *a5,
        unsigned __int16 *a6,
        struct tagRECT *a7,
        const struct tagTOUCHTARGETINGCONTACT *a8)
{
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // r8d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // r8d
  int v22; // edx
  int v23; // edx
  int v24; // r8d
  LONG v25; // ebx
  LONG v26; // r15d
  unsigned __int16 v27; // r14
  int v28; // eax
  unsigned __int16 v29; // ax
  unsigned __int64 v30; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-28h] BYREF
  __int64 v32; // [rsp+40h] [rbp-20h] BYREF
  __int128 v33; // [rsp+50h] [rbp-10h] BYREF
  const struct tagTOUCHTARGETINGCONTACT *v34; // [rsp+C8h] [rbp+68h]

  v31 = 0LL;
  v9 = a1;
  v30 = 0LL;
  if ( a1 <= a3 )
    v9 = a3;
  v32 = 0LL;
  if ( v9 >= *(_DWORD *)a8 )
  {
    v10 = a1;
    if ( a1 >= a3 )
      v10 = a3;
    if ( v10 < *((_DWORD *)a8 + 2) )
    {
      v11 = a2;
      if ( a2 <= a4 )
        v11 = a4;
      if ( v11 >= *((_DWORD *)a8 + 1) )
      {
        v12 = a2;
        if ( a2 >= a4 )
          v12 = a4;
        if ( v12 < *((_DWORD *)a8 + 3) )
        {
          *(_QWORD *)&v33 = __PAIR64__(a2, a1);
          if ( (unsigned int)TouchTargetingIntersectSegment(a1, a3, (_DWORD)a8, (unsigned int)&v31, (__int64)&v30) )
          {
            v13 = v30;
            v14 = v31;
            if ( (_DWORD)v31 == (_DWORD)v30 )
            {
              v15 = *((_DWORD *)a8 + 1);
              v16 = HIDWORD(v30);
              v17 = HIDWORD(v31);
              LODWORD(v30) = v31;
              v18 = HIDWORD(v31);
              if ( SHIDWORD(v31) >= (int)v16 )
                v18 = v16;
              if ( v18 <= v15 )
              {
                HIDWORD(v31) = v15;
              }
              else
              {
                v19 = v16;
                if ( SHIDWORD(v31) < (int)v16 )
                  v19 = HIDWORD(v31);
                HIDWORD(v31) = v19;
              }
              v20 = v17;
              if ( (int)v17 <= (int)v16 )
                v20 = v16;
              if ( v20 >= *((_DWORD *)a8 + 3) - 1 )
              {
                HIDWORD(v30) = *((_DWORD *)a8 + 3) - 1;
              }
              else
              {
                if ( (int)v17 > (int)v16 )
                  LODWORD(v16) = v17;
                HIDWORD(v30) = v16;
              }
            }
            else
            {
              v21 = *(_DWORD *)a8;
              HIDWORD(v30) = HIDWORD(v31);
              v22 = v30;
              if ( (int)v31 < (int)v30 )
                v22 = v31;
              if ( v22 <= v21 )
              {
                LODWORD(v31) = v21;
              }
              else
              {
                v23 = v30;
                if ( (int)v31 < (int)v30 )
                  v23 = v31;
                LODWORD(v31) = v23;
              }
              v24 = v30;
              if ( v14 > (int)v30 )
                v24 = v14;
              if ( v24 >= *((_DWORD *)a8 + 2) - 1 )
              {
                LODWORD(v30) = *((_DWORD *)a8 + 2) - 1;
              }
              else
              {
                if ( v14 > (int)v30 )
                  v13 = v14;
                LODWORD(v30) = v13;
              }
            }
            TouchTargetingSnapToSegment(v31, v30, *((_QWORD *)a8 + 4), &v32);
            v25 = v32;
            v26 = HIDWORD(v32);
            v27 = *a6;
            if ( *a6 == 4094 || v32 != *a5 )
            {
              v28 = (a7->left + a7->right) / 2;
              v33 = (__int128)*a7;
              LODWORD(v34) = v28;
              HIDWORD(v34) = (a7->top + a7->bottom) / 2;
              v29 = TouchTargetingRank(*((_QWORD *)a8 + 4), v32, &v33, v34);
              if ( v27 == 4094 || v29 < v27 )
              {
                *a6 = v29;
                a5->x = v25;
                a5->y = v26;
              }
            }
          }
        }
      }
    }
  }
}
