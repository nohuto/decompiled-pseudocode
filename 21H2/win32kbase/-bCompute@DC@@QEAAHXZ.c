/*
 * XREFs of ?bCompute@DC@@QEAAHXZ @ 0x1C003AB70
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C003A310 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C0020530 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C00205AC (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C002AC70 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C002B874 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C002B8FC (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C002B920 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C002CBA0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0032A50 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00335A0 (-bContain@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0033940 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C00382D0 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C005CD98 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?vGetSubRect@RGNOBJ@@QEBAXPEAU_RECTL@@@Z @ 0x1C00802C0 (-vGetSubRect@RGNOBJ@@QEBAXPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0096970 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00C9CDC (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 */

__int64 __fastcall DC::bCompute(DC *this)
{
  unsigned int v2; // esi
  REGION *v3; // rbx
  int v4; // r15d
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  int *v8; // rbx
  _BOOL8 v9; // rcx
  _BOOL8 v10; // rax
  int v11; // r15d
  int v12; // eax
  int *v14; // [rsp+20h] [rbp-89h] BYREF
  REGION *v15; // [rsp+28h] [rbp-81h] BYREF
  REGION *v16[2]; // [rsp+30h] [rbp-79h] BYREF
  REGION *v17[2]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v18; // [rsp+50h] [rbp-59h] BYREF
  __int64 v19; // [rsp+58h] [rbp-51h] BYREF
  __int64 v20; // [rsp+60h] [rbp-49h] BYREF
  __int64 v21; // [rsp+68h] [rbp-41h] BYREF
  __int64 v22; // [rsp+70h] [rbp-39h] BYREF
  __int64 v23; // [rsp+78h] [rbp-31h] BYREF
  __int64 v24; // [rsp+80h] [rbp-29h] BYREF
  __int64 v25; // [rsp+88h] [rbp-21h] BYREF
  REGION *v26[2]; // [rsp+90h] [rbp-19h] BYREF
  REGION *v27[3]; // [rsp+A0h] [rbp-9h] BYREF
  char v28; // [rsp+B8h] [rbp+Fh]
  __int64 v29; // [rsp+C0h] [rbp+17h]
  __int128 v30; // [rsp+C8h] [rbp+1Fh]

  DC::AcquireDcVisRgnShared(this);
  *((_DWORD *)this + 250) = 0x7FFFFFFF;
  v2 = 0;
  *((_DWORD *)this + 251) = 0x7FFFFFFF;
  *((_DWORD *)this + 252) = 0x80000000;
  *((_DWORD *)this + 253) = 0x80000000;
  if ( !*((_QWORD *)this + 143) )
    goto LABEL_58;
  v3 = (REGION *)*((_QWORD *)this + 144);
  v4 = 0;
  v18 = *((_QWORD *)this + 143);
  v15 = v3;
  v2 = 1;
  if ( !v3 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v26);
    if ( v26[0] )
    {
      v3 = v26[0];
      v15 = v26[0];
      v4 = 1;
    }
    RGNMEMOBJ::~RGNMEMOBJ(v26);
    if ( !v3 )
      goto LABEL_57;
  }
  if ( !v4 && (*((_DWORD *)this + 9) & 0x10) == 0 )
  {
    if ( (unsigned int)DC::bDpiScaledSurface(this) && !*((_QWORD *)this + 146) )
      *((_DWORD *)this + 130) |= 0x10u;
    goto LABEL_15;
  }
  if ( !(unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v15, (struct RGNOBJ *)&v18) )
  {
LABEL_57:
    v2 = 0;
    goto LABEL_58;
  }
  if ( (unsigned int)DC::bDpiScaledSurface(this) )
    *((_DWORD *)this + 130) |= 0x10u;
  *((_QWORD *)this + 144) = v15;
LABEL_15:
  v5 = *((_QWORD *)this + 20);
  v6 = *((_QWORD *)this + 21);
  v7 = *((_QWORD *)this + 142);
  v8 = (int *)*((_QWORD *)this + 145);
  if ( !(v7 | v6 | v5) )
  {
    if ( v8 )
    {
      v19 = *((_QWORD *)this + 145);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
      *((_QWORD *)this + 145) = 0LL;
    }
    RGNOBJ::vGetSubRect((RGNOBJ *)&v15, (struct _RECTL *)((char *)this + 1000));
    *((_DWORD *)this + 9) &= ~0x10u;
    goto LABEL_54;
  }
  v29 = *((_QWORD *)this + 20);
  v14 = v8;
  v9 = v5 != 0;
  v30 = 0LL;
  v10 = v9 + 1;
  *(&v29 + v9) = v6;
  if ( !v6 )
    v10 = v9;
  v11 = v10 + 1;
  *(&v29 + v10) = v7;
  if ( !v7 )
    v11 = v10;
  if ( !v8 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v27);
    if ( v27[0] )
      v8 = (int *)v27[0];
    v14 = v8;
    RGNMEMOBJ::~RGNMEMOBJ(v27);
  }
  if ( !v14 )
    goto LABEL_28;
  if ( v11 == 1 )
  {
    v20 = v29;
    v12 = RGNOBJ::bCopy((RGNOBJ *)&v14, (struct RGNOBJ *)&v20);
  }
  else
  {
    if ( v11 != 2 )
    {
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v16);
      v24 = v29;
      v25 = *((_QWORD *)&v30 + 1);
      v23 = v30;
      if ( !v16[0]
        || !(unsigned int)RGNOBJ::iCombine((RGNOBJ *)v16, (struct RGNOBJ *)&v24, (struct RGNOBJ *)&v23, 1)
        || !(unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v14, (struct RGNOBJ *)v16, (struct RGNOBJ *)&v25, 1) )
      {
        v2 = 0;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP(v16);
      if ( !v2 )
        goto LABEL_52;
      goto LABEL_40;
    }
    v22 = v29;
    v21 = v30;
    v12 = RGNOBJ::iCombine((RGNOBJ *)&v14, (struct RGNOBJ *)&v22, (struct RGNOBJ *)&v21, 1);
  }
  if ( !v12 )
  {
LABEL_28:
    v2 = 0;
    goto LABEL_52;
  }
LABEL_40:
  v14[7] = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
  if ( (unsigned int)RGNOBJ::bOffset(&v14, (struct _POINTL *)this + 129) )
  {
    if ( *((_DWORD *)v15 + 20) == 56 && RGNOBJ::bContain((RGNOBJ *)&v15, (struct RGNOBJ *)&v14) )
    {
      *((_QWORD *)this + 145) = v14;
      RGNOBJ::vGetSubRect((RGNOBJ *)&v14, (struct _RECTL *)((char *)this + 1000));
      *((_DWORD *)this + 9) &= ~0x10u;
    }
    else
    {
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
      if ( v17[0]
        && (unsigned int)RGNOBJ::iCombine((RGNOBJ *)v17, (struct RGNOBJ *)&v15, (struct RGNOBJ *)&v14, 1)
        && (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v14, (struct RGNOBJ *)v17) )
      {
        *((_QWORD *)this + 145) = v14;
        RGNOBJ::vGetSubRect((RGNOBJ *)&v14, (struct _RECTL *)((char *)this + 1000));
        *((_DWORD *)this + 9) &= ~0x10u;
      }
      else
      {
        v2 = 0;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP(v17);
    }
  }
  else
  {
    v2 = 0;
  }
  if ( !v2 )
  {
LABEL_52:
    *((_QWORD *)this + 145) = 0LL;
    if ( v14 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
  }
LABEL_54:
  if ( (unsigned int)DC::bDpiScaledSurface(this) )
    *((_DWORD *)this + 130) |= 8u;
  DC::vUpdateScaledRegions(this);
  DC::vUpdate_VisRect(this, *((__m128i **)this + 144));
LABEL_58:
  if ( v28 )
    CPushLock::ReleaseLock((REGION *)((char *)v27[2] + 1112));
  return v2;
}
