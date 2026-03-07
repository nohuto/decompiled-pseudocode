__int64 __fastcall METAREGION::bTrimMoveWithRegion(METAREGION *this, struct REGION *a2, int a3)
{
  unsigned int v5; // ebx
  int v7; // ecx
  _DWORD *v8; // rax
  __int64 v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+28h] [rbp-48h] BYREF
  __int64 v12; // [rsp+30h] [rbp-40h] BYREF
  _DWORD *v13; // [rsp+38h] [rbp-38h] BYREF
  struct _POINTL v14; // [rsp+40h] [rbp-30h] BYREF
  struct REGION *v15; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v16[4]; // [rsp+50h] [rbp-20h] BYREF

  v13 = (_DWORD *)*((_QWORD *)this + 4);
  v15 = a2;
  v5 = 1;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v12);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v12);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v11);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v11);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v10);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v10);
  v14 = 0LL;
  if ( !v12
    || !v11
    || !v10
    || !RGNOBJ::bCopy((RGNOBJ *)&v10, (struct RGNOBJ *)&v13)
    || !RGNOBJ::bOffset((RGNOBJ *)&v10, (struct _POINTL *)this + 3) )
  {
    goto LABEL_14;
  }
  if ( !(a3
       ? RGNOBJ::bCopy((RGNOBJ *)&v12, (struct RGNOBJ *)&v13)
       : RGNOBJ::iCombine((RGNOBJ *)&v12, (struct RGNOBJ *)&v13, (struct RGNOBJ *)&v15, 4)) )
    goto LABEL_14;
  if ( !RGNOBJ::iCombine((RGNOBJ *)&v11, (struct RGNOBJ *)&v10, (struct RGNOBJ *)&v15, 4) )
    goto LABEL_14;
  v14.x = -*((_DWORD *)this + 6);
  v14.y = -*((_DWORD *)this + 7);
  if ( !RGNOBJ::bOffset((RGNOBJ *)&v11, &v14)
    || (v7 = RGNOBJ::iCombine((RGNOBJ *)&v13, (struct RGNOBJ *)&v12, (struct RGNOBJ *)&v11, 1)) == 0
    || (v8 = v13, *((_QWORD *)this + 4) = v13, v7 == 1)
    || (v16[0] = v8[14], v16[1] = v8[15], v16[2] = v8[16], v16[3] = v8[17], ERECTL::bEmpty((ERECTL *)v16)) )
  {
LABEL_14:
    METAREGION::vClearMoveData(this, 1);
    v5 = 0;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v11);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v12);
  return v5;
}
