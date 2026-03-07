__int64 __fastcall GrepSfmGetDirtyRgn(
        struct _POINTL *a1,
        __int64 a2,
        HRGN *a3,
        HRGN *a4,
        HRGN *a5,
        HRGN *a6,
        struct _POINTL *a7,
        int *a8,
        int *a9)
{
  unsigned int v13; // edi
  int *v14; // rcx
  struct _POINTL v15; // rax
  struct _POINTL v16; // r8
  struct _POINTL v17; // rdx
  HRGN v18; // rax
  bool v20; // zf
  struct RGNOBJ *v21; // rdx
  HRGN v22; // rax
  struct _POINTL v23; // rax
  __int64 v24; // rcx
  HRGN *v25; // r14
  HRGN *v26; // rdi
  HRGN v27; // rax
  struct _POINTL *v28; // rcx
  struct _POINTL v29; // [rsp+20h] [rbp-20h] BYREF
  struct _POINTL v30; // [rsp+28h] [rbp-18h] BYREF
  _BYTE v31[16]; // [rsp+30h] [rbp-10h] BYREF
  struct _POINTL v32; // [rsp+70h] [rbp+30h] BYREF

  v13 = -1073741811;
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v31, (struct _EX_PUSH_LOCK *)&a1[32]);
  v14 = a9;
  *a9 = 0;
  if ( a1[23] )
  {
    *v14 = a1[21].x;
    if ( a1[21].x == 1 && ((v23 = a1[23]) == 0LL ? (v24 = 0LL) : (v24 = *(_QWORD *)(*(_QWORD *)&v23 + 8LL)), v24 == a2) )
    {
      v25 = a6;
      if ( a6 )
      {
        v26 = a5;
        v32 = a1[20];
        if ( a5 && *(_QWORD *)&a1[18] )
        {
          a9 = (int *)a1[18];
          *v26 = RGNOBJ::hrgnAssociate((RGNOBJ *)&a9);
        }
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))EtwTranslationUpdateOffsetDWM)(
          *a1,
          (unsigned int)a1[19].x,
          HIDWORD(*(_QWORD *)&a1[19]));
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))EtwTraceMoveRegion)(*a1, 0LL, 6LL, *(_QWORD *)&a1[20]);
        v27 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v32);
        v28 = a7;
        *v25 = v27;
        if ( v28 )
          *v28 = a1[19];
        METAREGION::vClearMoveData((METAREGION *)&a1[16], 0);
      }
    }
    else if ( a6 )
    {
      *a6 = 0LL;
    }
    if ( a8 )
      *a8 = ((unsigned int)a1[31].y >> 4) & 1;
    if ( a3 )
    {
      v15 = a1[23];
      if ( v15 )
        v15 = *(struct _POINTL *)(*(_QWORD *)&v15 + 8LL);
      if ( v15 == a2 )
      {
        a9 = (int *)a1[16];
        if ( a9 )
        {
          ((void (__fastcall *)(_QWORD, _QWORD))EtwTraceDWMGetDirtyRegion)(*a1, 0LL);
          v22 = RGNOBJ::hrgnAssociate((RGNOBJ *)&a9);
          *a3 = v22;
          if ( v22 )
          {
            a1[16] = 0LL;
            a1[31].y &= ~2u;
          }
        }
      }
    }
    if ( !a4 || (a1[31].y & 4) == 0 && a2 )
      goto LABEL_28;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&a9);
    v16 = a1[11];
    v17 = a1[10];
    v30 = v16;
    v29 = v17;
    if ( !a9 )
      goto LABEL_28;
    if ( (v16 != 0LL) == (v17 != 0LL) )
    {
      if ( v16 )
      {
        if ( !*(_QWORD *)&v17 )
        {
LABEL_25:
          if ( a9 )
          {
            v18 = RGNOBJ::hrgnAssociate((RGNOBJ *)&a9);
            *a4 = v18;
            if ( !v18 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&a9);
          }
LABEL_28:
          v13 = 0;
          goto LABEL_29;
        }
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v32);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v32);
        if ( (a1[31].y & 4) != 0 )
        {
          if ( *(_QWORD *)&v32 && RGNOBJ::bMerge((RGNOBJ *)&v32, (struct RGNOBJ *)&v30, (struct RGNOBJ *)&v29, 8u) )
            RGNOBJ::vSwap((RGNOBJ *)&v32, (struct RGNOBJ *)&a9);
        }
        else
        {
          RGNOBJ::bCopy((RGNOBJ *)&a9, (struct RGNOBJ *)&v30);
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v32);
      }
    }
    else
    {
      v20 = v17 == 0LL;
      v21 = (struct RGNOBJ *)&v29;
      if ( v20 )
        v21 = (struct RGNOBJ *)&v30;
      RGNOBJ::bCopy((RGNOBJ *)&a9, v21);
    }
    if ( *(_QWORD *)&v29 && (a1[31].y & 0x10) != 0 )
      RGNOBJ::vSet((RGNOBJ *)&v29);
    goto LABEL_25;
  }
LABEL_29:
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v31);
  return v13;
}
