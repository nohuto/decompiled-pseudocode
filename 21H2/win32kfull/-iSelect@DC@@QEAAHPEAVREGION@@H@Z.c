/*
 * XREFs of ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C0041E44
 * Callers:
 *     NtGdiExtSelectClipRgn @ 0x1C0041BA0 (NtGdiExtSelectClipRgn.c)
 *     NtGdiSelectClipPath @ 0x1C01376C0 (NtGdiSelectClipPath.c)
 *     GreExtSelectClipRgnInternal @ 0x1C014CBF4 (GreExtSelectClipRgnInternal.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C008E0D4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C0150404 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall DC::iSelect(DC *this, struct REGION *a2, int a3)
{
  struct tagSIZE v3; // rsi
  unsigned int v4; // ebx
  struct tagSIZE *v8; // rcx
  LONG cx; // r9d
  LONG left; // edx
  LONG cy; // r10d
  LONG top; // r8d
  _DWORD *v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  LONG v16; // r9d
  int v17; // eax
  _BYTE v18[8]; // [rsp+20h] [rbp-50h] BYREF
  struct tagSIZE v19; // [rsp+28h] [rbp-48h] BYREF
  struct REGION *v20; // [rsp+30h] [rbp-40h] BYREF
  _DWORD *v21; // [rsp+38h] [rbp-38h] BYREF
  int v22; // [rsp+40h] [rbp-30h]
  _QWORD v23[2]; // [rsp+48h] [rbp-28h] BYREF
  struct _RECTL v24; // [rsp+58h] [rbp-18h] BYREF

  v3 = (struct tagSIZE)*((_QWORD *)this + 20);
  v4 = 0;
  if ( a3 == 5 )
  {
    if ( !a2 )
    {
      v4 = 2;
      if ( !*(_QWORD *)&v3 )
        return v4;
      v20 = (struct REGION *)*((_QWORD *)this + 20);
      --*(_DWORD *)(*(_QWORD *)&v3 + 32LL);
      if ( !*((_DWORD *)v20 + 8) )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
      *((_QWORD *)this + 20) = 0LL;
      goto LABEL_9;
    }
  }
  else if ( a3 != 1 || !a2 || *(_QWORD *)&v3 )
  {
    v20 = a2;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v21);
    if ( !v21 )
      goto LABEL_19;
    if ( v3 )
    {
      v19 = v3;
      v4 = RGNOBJ::iCombine((RGNOBJ *)&v21, (struct RGNOBJ *)&v19, (struct RGNOBJ *)&v20, a3);
      if ( v4 )
      {
        ++v21[8];
        *((_QWORD *)this + 20) = v21;
        DC::vReleaseRao(this);
        --*(_DWORD *)(*(_QWORD *)&v19 + 32LL);
LABEL_28:
        if ( *(_DWORD *)(*(_QWORD *)&v19 + 32LL) )
          goto LABEL_19;
        v8 = &v19;
        goto LABEL_30;
      }
    }
    else
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v23);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v23);
      v19 = 0LL;
      if ( v23[0] )
      {
        DC::vGet_sizlWindow(this, &v19);
        cx = v19.cx;
        left = 0;
        cy = v19.cy;
        top = 0;
        v13 = (_DWORD *)*((_QWORD *)this + 6);
        *(_QWORD *)&v24.left = 0LL;
        *(struct tagSIZE *)&v24.right = v19;
        if ( *((_QWORD *)this + 62) )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v18);
          if ( (v13[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
          {
            v24.left += v13[640];
            v24.right += v13[640];
            v24.top += v13[641];
            v24.bottom += v13[641];
          }
          DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v18);
          cy = v24.bottom;
          cx = v24.right;
          top = v24.top;
          left = v24.left;
        }
        v14 = *((_DWORD *)this + 10) & 1;
        v15 = *((_DWORD *)this + 2 * v14 + 254);
        v16 = cx - v15;
        v24.left = left - v15;
        v17 = *((_DWORD *)this + 2 * v14 + 255);
        v24.right = v16;
        v24.top = top - v17;
        v24.bottom = cy - v17;
        RGNOBJ::vSet((RGNOBJ *)v23, &v24);
        v4 = RGNOBJ::iCombine((RGNOBJ *)&v21, (struct RGNOBJ *)v23, (struct RGNOBJ *)&v20, a3);
        if ( v4 )
        {
          ++v21[8];
          *((_QWORD *)this + 20) = v21;
          DC::vReleaseRao(this);
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v23);
      if ( v4 )
        goto LABEL_19;
    }
    v8 = (struct tagSIZE *)&v21;
LABEL_30:
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v8);
    goto LABEL_19;
  }
  v20 = a2;
  v19 = v3;
  if ( !*(_QWORD *)&v3 || *(_DWORD *)(*(_QWORD *)&v3 + 32LL) != 1 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v21, *((_DWORD *)a2 + 20));
    if ( !v21
      || ((RGNOBJ::vCopy((RGNOBJ *)&v21, (struct RGNOBJ *)&v20), ++v21[8], v21[21] == 1)
        ? (v4 = 1)
        : (LOBYTE(v4) = v21[20] > 0x38u, v4 += 2),
          *((_QWORD *)this + 20) = v21,
          DC::vReleaseRao(this),
          !*(_QWORD *)&v3) )
    {
LABEL_19:
      if ( v22 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v21);
      return v4;
    }
    --*(_DWORD *)(*(_QWORD *)&v19 + 32LL);
    goto LABEL_28;
  }
  if ( RGNOBJ::bCopy((RGNOBJ *)&v19, (struct RGNOBJ *)&v20) )
  {
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
LABEL_9:
    DC::vReleaseRao(this);
  }
  return v4;
}
