__int64 __fastcall DC::iSelect(DC *this, struct REGION *a2, int a3)
{
  __int64 v3; // rsi
  unsigned int v6; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx
  const struct _POINTL *v10; // rbx
  RGNOBJ *v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v13[8]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  struct REGION *v15; // [rsp+38h] [rbp-28h] BYREF
  struct tagSIZE v16; // [rsp+40h] [rbp-20h] BYREF
  struct _RECTL v17; // [rsp+48h] [rbp-18h] BYREF

  v3 = *((_QWORD *)this + 20);
  v6 = 0;
  if ( a3 == 5 )
  {
    if ( !a2 )
    {
      v6 = 2;
      if ( v3 )
      {
        v15 = (struct REGION *)*((_QWORD *)this + 20);
        --*(_DWORD *)(v3 + 76);
        if ( !*((_DWORD *)v15 + 19) )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v15);
        *((_QWORD *)this + 20) = 0LL;
LABEL_7:
        DC::vReleaseRao(this);
        return v6;
      }
      return v6;
    }
  }
  else if ( a3 != 1 || !a2 || v3 )
  {
    v15 = a2;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v14);
    if ( !v14 )
      return v6;
    if ( v3 )
    {
      v12 = v3;
      v6 = RGNOBJ::iCombine((RGNOBJ *)&v14, (struct RGNOBJ *)&v12, (struct RGNOBJ *)&v15, a3);
      if ( v6 )
      {
        ++*(_DWORD *)(v14 + 76);
        *((_QWORD *)this + 20) = v14;
        DC::vReleaseRao(this);
        --*(_DWORD *)(v12 + 76);
        goto LABEL_40;
      }
    }
    else
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v12);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v12);
      v16 = 0LL;
      if ( v12 )
      {
        DC::vGet_sizlWindow(this, &v16);
        v10 = (const struct _POINTL *)*((_QWORD *)this + 6);
        *(struct tagSIZE *)&v17.right = v16;
        *(_QWORD *)&v17.left = 0LL;
        if ( *((_QWORD *)this + 62) )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v13);
          if ( (v10[5].x & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
            ERECTL::bOffsetAdd((ERECTL *)&v17, v10 + 320, 0);
          DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v13);
        }
        ERECTL::bOffsetSubtract((ERECTL *)&v17, (const struct _POINTL *)this + (*((_DWORD *)this + 10) & 1) + 127, 0);
        RGNOBJ::vSet((RGNOBJ *)&v12, &v17);
        v6 = RGNOBJ::iCombine((RGNOBJ *)&v14, (struct RGNOBJ *)&v12, (struct RGNOBJ *)&v15, a3);
        if ( v6 )
        {
          ++*(_DWORD *)(v14 + 76);
          *((_QWORD *)this + 20) = v14;
          DC::vReleaseRao(this);
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v12);
      if ( v6 )
        return v6;
    }
    v11 = (RGNOBJ *)&v14;
    goto LABEL_42;
  }
  v15 = a2;
  v12 = v3;
  if ( v3 && *(_DWORD *)(v3 + 76) == 1 )
  {
    if ( !RGNOBJ::bCopy((RGNOBJ *)&v12, (struct RGNOBJ *)&v15) )
      return v6;
    v8 = v12 + 52;
    if ( !v12 )
      v8 = 28LL;
    if ( *(_DWORD *)v8 == 1 )
    {
      v6 = 1;
    }
    else
    {
      v9 = v12 + 48;
      if ( !v12 )
        v9 = 24LL;
      LOBYTE(v6) = *(_DWORD *)v9 > 0x38u;
      v6 += 2;
    }
    *((_QWORD *)this + 20) = v12;
    goto LABEL_7;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v14, *((_DWORD *)a2 + 12));
  if ( v14 )
  {
    RGNOBJ::vCopy((RGNOBJ *)&v14, (struct RGNOBJ *)&v15);
    ++*(_DWORD *)(v14 + 76);
    v6 = RGNOBJ::iComplexity((RGNOBJ *)&v14);
    *((_QWORD *)this + 20) = v14;
    DC::vReleaseRao(this);
    if ( v3 )
    {
      --*(_DWORD *)(v12 + 76);
LABEL_40:
      if ( *(_DWORD *)(v12 + 76) )
        return v6;
      v11 = (RGNOBJ *)&v12;
LABEL_42:
      RGNOBJ::vDeleteRGNOBJ(v11);
    }
  }
  return v6;
}
