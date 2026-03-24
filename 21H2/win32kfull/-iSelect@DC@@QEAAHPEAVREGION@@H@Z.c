/*
 * XREFs of ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C00B2D00
 * Callers:
 *     NtGdiSelectClipPath @ 0x1C0144B80 (NtGdiSelectClipPath.c)
 *     GreExtSelectClipRgnInternal @ 0x1C016CC48 (GreExtSelectClipRgnInternal.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018C00 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018F2C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00B9858 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0156F1C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C015FD28 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall DC::iSelect(DC *this, struct REGION *a2, int a3)
{
  struct tagSIZE v3; // rsi
  unsigned int v4; // ebx
  LONG cx; // r9d
  LONG left; // edx
  LONG cy; // r10d
  LONG top; // r8d
  const struct _POINTL *v12; // rbx
  DYNAMICMODECHANGESHARELOCK *v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  LONG v16; // r9d
  int v17; // eax
  struct tagSIZE *v18; // rcx
  struct tagSIZE v19; // [rsp+20h] [rbp-50h] BYREF
  struct REGION *v20; // [rsp+28h] [rbp-48h] BYREF
  _DWORD *v21; // [rsp+30h] [rbp-40h] BYREF
  int v22; // [rsp+38h] [rbp-38h]
  _BYTE v23[8]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v24[2]; // [rsp+48h] [rbp-28h] BYREF
  struct _RECTL v25; // [rsp+58h] [rbp-18h] BYREF

  v3 = (struct tagSIZE)*((_QWORD *)this + 20);
  v4 = 0;
  if ( a3 == 5 || a3 == 1 && a2 && !*(_QWORD *)&v3 )
  {
    if ( a2 )
    {
      v20 = a2;
      v19 = v3;
      if ( !*(_QWORD *)&v3 || *(_DWORD *)(*(_QWORD *)&v3 + 32LL) != 1 )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v21, *((_DWORD *)a2 + 20));
        if ( !v21 )
          goto LABEL_19;
        RGNOBJ::vCopy((RGNOBJ *)&v21, (struct RGNOBJ *)&v20);
        ++v21[8];
        if ( v21[21] == 1 )
        {
          v4 = 1;
        }
        else
        {
          LOBYTE(v4) = v21[20] > 0x38u;
          v4 += 2;
        }
        *((_QWORD *)this + 20) = v21;
        DC::vReleaseRao(this);
        if ( !*(_QWORD *)&v3 )
          goto LABEL_19;
        if ( --*(_DWORD *)(*(_QWORD *)&v19 + 32LL) )
          goto LABEL_19;
        v18 = &v19;
        goto LABEL_45;
      }
      if ( !RGNOBJ::bCopy((RGNOBJ *)&v19, (struct RGNOBJ *)&v20) )
        return v4;
      if ( *(_DWORD *)(*(_QWORD *)&v19 + 84LL) == 1 )
      {
        v4 = 1;
      }
      else
      {
        LOBYTE(v4) = *(_DWORD *)(*(_QWORD *)&v19 + 80LL) > 0x38u;
        v4 += 2;
      }
      *((struct tagSIZE *)this + 20) = v19;
    }
    else
    {
      v4 = 2;
      if ( !*(_QWORD *)&v3 )
        return v4;
      v20 = (struct REGION *)*((_QWORD *)this + 20);
      --*(_DWORD *)(*(_QWORD *)&v3 + 32LL);
      if ( !*((_DWORD *)v20 + 8) )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
      *((_QWORD *)this + 20) = 0LL;
    }
    DC::vReleaseRao(this);
    return v4;
  }
  v20 = a2;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v21);
  if ( !v21 )
    goto LABEL_19;
  if ( !*(_QWORD *)&v3 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v24);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v24);
    v19 = 0LL;
    if ( v24[0] )
    {
      DC::vGet_sizlWindow(this, &v19);
      cx = v19.cx;
      left = 0;
      cy = v19.cy;
      top = 0;
      v12 = (const struct _POINTL *)*((_QWORD *)this + 6);
      *(_QWORD *)&v25.left = 0LL;
      *(struct tagSIZE *)&v25.right = v19;
      if ( *((_QWORD *)this + 62) )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v23);
        if ( (v12[5].x & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
          ERECTL::bOffsetAdd((ERECTL *)&v25, v12 + 323, 0);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v13);
        cy = v25.bottom;
        cx = v25.right;
        top = v25.top;
        left = v25.left;
      }
      v14 = *((_DWORD *)this + 10) & 1;
      v15 = *((_DWORD *)this + 2 * v14 + 254);
      v16 = cx - v15;
      v25.left = left - v15;
      v17 = *((_DWORD *)this + 2 * v14 + 255);
      v25.right = v16;
      v25.top = top - v17;
      v25.bottom = cy - v17;
      RGNOBJ::vSet((RGNOBJ *)v24, &v25);
      v4 = RGNOBJ::iCombine((RGNOBJ *)&v21, (struct RGNOBJ *)v24, (struct RGNOBJ *)&v20, a3);
      if ( v4 )
      {
        ++v21[8];
        *((_QWORD *)this + 20) = v21;
        DC::vReleaseRao(this);
      }
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v24);
LABEL_29:
    if ( v4 )
      goto LABEL_19;
    goto LABEL_44;
  }
  v19 = v3;
  v4 = RGNOBJ::iCombine((RGNOBJ *)&v21, (struct RGNOBJ *)&v19, (struct RGNOBJ *)&v20, a3);
  if ( v4 )
  {
    ++v21[8];
    *((_QWORD *)this + 20) = v21;
    DC::vReleaseRao(this);
    if ( !--*(_DWORD *)(*(_QWORD *)&v19 + 32LL) )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
    goto LABEL_29;
  }
LABEL_44:
  v18 = (struct tagSIZE *)&v21;
LABEL_45:
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v18);
LABEL_19:
  if ( v22 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v21);
  return v4;
}
