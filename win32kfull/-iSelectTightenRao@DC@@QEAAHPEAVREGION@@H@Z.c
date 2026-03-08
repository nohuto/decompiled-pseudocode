/*
 * XREFs of ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C008C7B8
 * Callers:
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C008C550 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00287BC (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A694 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A6E0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C008C950 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0268F1C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0268FB8 (-bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C0305468 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 */

__int64 __fastcall DC::iSelectTightenRao(DC *this, struct REGION *a2, int a3)
{
  __int64 v3; // rdi
  unsigned int v6; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx
  RGNOBJ *v10; // rcx
  const struct _POINTL *v11; // rbx
  bool v12; // zf
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v14[8]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  struct REGION *v16; // [rsp+38h] [rbp-28h] BYREF
  struct tagSIZE v17; // [rsp+40h] [rbp-20h] BYREF
  struct _RECTL v18; // [rsp+48h] [rbp-18h] BYREF

  v3 = *((_QWORD *)this + 20);
  v6 = 0;
  if ( a3 == 5 )
  {
    if ( !a2 )
    {
      v6 = 2;
      if ( v3 )
      {
        v16 = (struct REGION *)*((_QWORD *)this + 20);
        --*(_DWORD *)(v3 + 76);
        if ( !*((_DWORD *)v16 + 19) )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
        *((_QWORD *)this + 20) = 0LL;
      }
      return v6;
    }
  }
  else if ( a3 != 1 || !a2 || v3 )
  {
    v16 = a2;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v15);
    if ( !v15 )
      return v6;
    if ( v3 )
    {
      v13 = v3;
      v6 = RGNOBJ::iCombine((RGNOBJ *)&v15, (struct RGNOBJ *)&v13, (struct RGNOBJ *)&v16, a3);
      if ( v6 )
      {
        ++*(_DWORD *)(v15 + 76);
        *((_QWORD *)this + 20) = v15;
        if ( --*(_DWORD *)(v13 + 76) )
          return v6;
        v10 = (RGNOBJ *)&v13;
LABEL_41:
        RGNOBJ::vDeleteRGNOBJ(v10);
        return v6;
      }
LABEL_40:
      v10 = (RGNOBJ *)&v15;
      goto LABEL_41;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v13);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v13);
    v17 = 0LL;
    if ( v13 )
    {
      DC::vGet_sizlWindow(this, &v17);
      v11 = (const struct _POINTL *)*((_QWORD *)this + 6);
      *(struct tagSIZE *)&v18.right = v17;
      *(_QWORD *)&v18.left = 0LL;
      if ( *((_QWORD *)this + 62) )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v14);
        if ( (v11[5].x & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
          ERECTL::bOffsetAdd((ERECTL *)&v18, v11 + 320, 0);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v14);
      }
      ERECTL::bOffsetSubtract((ERECTL *)&v18, (const struct _POINTL *)this + (*((_DWORD *)this + 10) & 1) + 127, 0);
      RGNOBJ::vSet((RGNOBJ *)&v13, &v18);
      v6 = RGNOBJ::iCombine((RGNOBJ *)&v15, (struct RGNOBJ *)&v13, (struct RGNOBJ *)&v16, a3);
      if ( v6 )
      {
        ++*(_DWORD *)(v15 + 76);
        *((_QWORD *)this + 20) = v15;
      }
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v13);
    v12 = v6 == 0;
LABEL_39:
    if ( !v12 )
      return v6;
    goto LABEL_40;
  }
  v16 = a2;
  v15 = v3;
  if ( v3 && *(_DWORD *)(v3 + 76) == 1 )
  {
    if ( RGNOBJ::bCopy((RGNOBJ *)&v15, (struct RGNOBJ *)&v16) )
    {
      v6 = RGNOBJ::iComplexity((RGNOBJ *)&v15);
      *((_QWORD *)this + 20) = v15;
    }
    return v6;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v13, *((_DWORD *)a2 + 12));
  if ( v13 )
  {
    RGNOBJ::vCopy((RGNOBJ *)&v13, (struct RGNOBJ *)&v16);
    ++*(_DWORD *)(v13 + 76);
    v8 = v13 + 52;
    if ( !v13 )
      v8 = 28LL;
    if ( *(_DWORD *)v8 == 1 )
    {
      v6 = 1;
    }
    else
    {
      v9 = v13 + 48;
      if ( !v13 )
        v9 = 24LL;
      LOBYTE(v6) = *(_DWORD *)v9 > 0x38u;
      v6 += 2;
    }
    *((_QWORD *)this + 20) = v13;
    if ( v3 )
    {
      v12 = --*(_DWORD *)(v15 + 76) == 0;
      goto LABEL_39;
    }
  }
  return v6;
}
