/*
 * XREFs of ?bCompute@DC@@QEAAHXZ @ 0x1C001C600
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C001BE60 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C001DE00 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00201E0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0023C00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C0023D3C (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0023D60 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0024B20 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C0025E10 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0026634 (-bContain@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00266E0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C0062E20 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0062EA8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?vGetSubRect@RGNOBJ@@QEBAXPEAU_RECTL@@@Z @ 0x1C008F030 (-vGetSubRect@RGNOBJ@@QEBAXPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00AB334 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C00D961C (-ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00DA978 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 */

__int64 __fastcall DC::bCompute(DC *this)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  int v4; // r15d
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rbx
  _BOOL8 v9; // rcx
  _BOOL8 v10; // rax
  int v11; // r15d
  int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-59h] BYREF
  __int64 v15; // [rsp+28h] [rbp-51h] BYREF
  __int64 v16; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-41h] BYREF
  __int64 v18; // [rsp+48h] [rbp-31h] BYREF
  __int128 v19; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v20[2]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v21[3]; // [rsp+70h] [rbp-9h] BYREF
  char v22; // [rsp+88h] [rbp+Fh]
  __int64 v23; // [rsp+90h] [rbp+17h]
  __int128 v24; // [rsp+98h] [rbp+1Fh]

  DC::AcquireDcVisRgnShared(this);
  *((_DWORD *)this + 250) = 0x7FFFFFFF;
  v2 = 0;
  *((_DWORD *)this + 251) = 0x7FFFFFFF;
  *((_DWORD *)this + 252) = 0x80000000;
  *((_DWORD *)this + 253) = 0x80000000;
  if ( !*((_QWORD *)this + 142) )
    goto LABEL_57;
  v3 = *((_QWORD *)this + 143);
  v4 = 0;
  v18 = *((_QWORD *)this + 142);
  v15 = v3;
  v2 = 1;
  if ( !v3 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v20);
    if ( v20[0] )
    {
      v3 = v20[0];
      v15 = v20[0];
      v4 = 1;
    }
    RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)v20);
    if ( !v3 )
      goto LABEL_56;
  }
  if ( !v4 && (*((_DWORD *)this + 9) & 0x10) == 0 )
  {
    if ( (unsigned int)DC::bDpiScaledSurface(this) && !*((_QWORD *)this + 145) )
      *((_DWORD *)this + 130) |= 0x10u;
    goto LABEL_15;
  }
  if ( !(unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v15, (struct RGNOBJ *)&v18) )
  {
LABEL_56:
    v2 = 0;
    goto LABEL_57;
  }
  if ( (unsigned int)DC::bDpiScaledSurface(this) )
    *((_DWORD *)this + 130) |= 0x10u;
  *((_QWORD *)this + 143) = v15;
LABEL_15:
  v5 = *((_QWORD *)this + 20);
  v6 = *((_QWORD *)this + 21);
  v7 = *((_QWORD *)this + 141);
  if ( !(v7 | v6 | v5) )
  {
    if ( *((_QWORD *)this + 144) )
    {
      v18 = *((_QWORD *)this + 144);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
      *((_QWORD *)this + 144) = 0LL;
    }
    RGNOBJ::vGetSubRect((RGNOBJ *)&v15, (struct _RECTL *)((char *)this + 1000));
    *((_DWORD *)this + 9) &= ~0x10u;
    goto LABEL_34;
  }
  v8 = *((_QWORD *)this + 144);
  v23 = *((_QWORD *)this + 20);
  v14 = v8;
  v9 = v5 != 0;
  v24 = 0LL;
  v10 = v9 + 1;
  *(&v23 + v9) = v6;
  if ( !v6 )
    v10 = v9;
  v11 = v10 + 1;
  *(&v23 + v10) = v7;
  if ( !v7 )
    v11 = v10;
  if ( !v8 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v21);
    if ( v21[0] )
      v8 = v21[0];
    v14 = v8;
    RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)v21);
  }
  if ( !v14 )
    goto LABEL_31;
  if ( v11 == 1 )
  {
    v16 = v23;
    v12 = RGNOBJ::bCopy((RGNOBJ *)&v14, (struct RGNOBJ *)&v16);
  }
  else
  {
    if ( v11 != 2 )
    {
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
      v16 = v23;
      v19 = v24;
      if ( !v17[0]
        || !(unsigned int)RGNOBJ::iCombine((RGNOBJ *)v17, (struct RGNOBJ *)&v16, (struct RGNOBJ *)&v19, 1)
        || !(unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v14, (struct RGNOBJ *)v17, (struct RGNOBJ *)((char *)&v19 + 8), 1) )
      {
        v2 = 0;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
      if ( !v2 )
        goto LABEL_32;
      goto LABEL_44;
    }
    *(_QWORD *)&v19 = v23;
    v16 = v24;
    v12 = RGNOBJ::iCombine((RGNOBJ *)&v14, (struct RGNOBJ *)&v19, (struct RGNOBJ *)&v16, 1);
  }
  if ( !v12 )
  {
LABEL_31:
    v2 = 0;
    goto LABEL_32;
  }
LABEL_44:
  *(_DWORD *)(v14 + 28) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
  if ( !(unsigned int)RGNOBJ::bOffset((RGNOBJ *)&v14, (struct _POINTL *)this + 129) )
    goto LABEL_31;
  if ( *(_DWORD *)(v15 + 80) == 56 && (unsigned int)RGNOBJ::bContain((RGNOBJ *)&v15, (struct RGNOBJ *)&v14) )
  {
    *((_QWORD *)this + 144) = v14;
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
      *((_QWORD *)this + 144) = v14;
      RGNOBJ::vGetSubRect((RGNOBJ *)&v14, (struct _RECTL *)((char *)this + 1000));
      *((_DWORD *)this + 9) &= ~0x10u;
    }
    else
    {
      v2 = 0;
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
  }
  if ( !v2 )
  {
LABEL_32:
    *((_QWORD *)this + 144) = 0LL;
    if ( v14 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
  }
LABEL_34:
  if ( (unsigned int)DC::bDpiScaledSurface(this) )
    *((_DWORD *)this + 130) |= 8u;
  DC::vUpdateScaledRegions(this);
  DC::vUpdate_VisRect(this, *((struct REGION **)this + 143));
LABEL_57:
  if ( v22 )
    GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(v21[2] + 1112LL));
  return v2;
}
