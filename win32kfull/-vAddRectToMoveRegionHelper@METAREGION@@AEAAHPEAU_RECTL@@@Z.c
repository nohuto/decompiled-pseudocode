__int64 __fastcall METAREGION::vAddRectToMoveRegionHelper(METAREGION *this, struct _RECTL *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v7; // [rsp+40h] [rbp+20h] BYREF
  __int64 v8; // [rsp+50h] [rbp+30h] BYREF
  __int64 v9; // [rsp+58h] [rbp+38h] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 4) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v7);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v7);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v8);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v8);
    v5 = *((_QWORD *)this + 4);
    v9 = v5;
    if ( v7 )
    {
      if ( v8 )
      {
        if ( v5 )
        {
          RGNOBJ::vSet((RGNOBJ *)&v7, a2);
          if ( RGNOBJ::iCombine((RGNOBJ *)&v8, (struct RGNOBJ *)&v7, (struct RGNOBJ *)&v9, 2) )
          {
            RGNOBJ::vSwap((RGNOBJ *)&v9, (struct RGNOBJ *)&v7);
            v2 = 1;
          }
        }
      }
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v8);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v7);
  }
  else
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v7);
    if ( !v7 )
    {
LABEL_11:
      METAREGION::vClearMoveData(this, 1);
      return v2;
    }
    RGNOBJ::vSet((RGNOBJ *)&v7, a2);
    v2 = 1;
    *((_QWORD *)this + 4) = v7;
  }
  if ( v2 != 1 )
    goto LABEL_11;
  return v2;
}
