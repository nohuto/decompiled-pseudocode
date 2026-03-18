/*
 * XREFs of ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C008DF8C
 * Callers:
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C008DA1C (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0041E20 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C008E0D4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C0150404 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall DC::iSelectTightenRao(DC *this, struct REGION *a2, int a3)
{
  struct tagSIZE v3; // rbx
  unsigned int v4; // edi
  bool v8; // zf
  LONG cx; // r9d
  LONG left; // edx
  LONG cy; // r10d
  LONG top; // r8d
  _DWORD *v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  LONG v16; // r9d
  int v17; // eax
  struct tagSIZE *v18; // rcx
  _BYTE v19[8]; // [rsp+20h] [rbp-50h] BYREF
  struct tagSIZE v20; // [rsp+28h] [rbp-48h] BYREF
  __int64 v21; // [rsp+30h] [rbp-40h] BYREF
  int v22; // [rsp+38h] [rbp-38h]
  struct REGION *v23; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v24[2]; // [rsp+48h] [rbp-28h] BYREF
  struct _RECTL v25; // [rsp+58h] [rbp-18h] BYREF

  v3 = (struct tagSIZE)*((_QWORD *)this + 20);
  v4 = 0;
  if ( a3 == 5 )
  {
    if ( !a2 )
    {
      v4 = 2;
      if ( v3 )
      {
        v23 = (struct REGION *)*((_QWORD *)this + 20);
        --*(_DWORD *)(*(_QWORD *)&v3 + 32LL);
        if ( !*((_DWORD *)v23 + 8) )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
        *((_QWORD *)this + 20) = 0LL;
      }
      return v4;
    }
  }
  else if ( a3 != 1 || !a2 || *(_QWORD *)&v3 )
  {
    v23 = a2;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v21);
    if ( !v21 )
      goto LABEL_11;
    if ( v3 )
    {
      v20 = v3;
      v4 = RGNOBJ::iCombine((RGNOBJ *)&v21, (struct RGNOBJ *)&v20, (struct RGNOBJ *)&v23, a3);
      if ( v4 )
      {
        ++*(_DWORD *)(v21 + 32);
        *((_QWORD *)this + 20) = v21;
        v8 = --*(_DWORD *)(*(_QWORD *)&v20 + 32LL) == 0;
LABEL_34:
        if ( !v8 )
          goto LABEL_11;
        v18 = &v20;
        goto LABEL_36;
      }
    }
    else
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v24);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v24);
      v20 = 0LL;
      if ( v24[0] )
      {
        DC::vGet_sizlWindow(this, &v20);
        cx = v20.cx;
        left = 0;
        cy = v20.cy;
        top = 0;
        v13 = (_DWORD *)*((_QWORD *)this + 6);
        *(_QWORD *)&v25.left = 0LL;
        *(struct tagSIZE *)&v25.right = v20;
        if ( *((_QWORD *)this + 62) )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v19);
          if ( (v13[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
          {
            v25.left += v13[640];
            v25.right += v13[640];
            v25.top += v13[641];
            v25.bottom += v13[641];
          }
          DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v19);
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
        v4 = RGNOBJ::iCombine((RGNOBJ *)&v21, (struct RGNOBJ *)v24, (struct RGNOBJ *)&v23, a3);
        if ( v4 )
        {
          ++*(_DWORD *)(v21 + 32);
          *((_QWORD *)this + 20) = v21;
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v24);
      if ( v4 )
        goto LABEL_11;
    }
    v18 = (struct tagSIZE *)&v21;
LABEL_36:
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v18);
    goto LABEL_11;
  }
  v23 = a2;
  v20 = v3;
  if ( *(_QWORD *)&v3 && *(_DWORD *)(*(_QWORD *)&v3 + 32LL) == 1 )
  {
    if ( RGNOBJ::bCopy((RGNOBJ *)&v20, (struct RGNOBJ *)&v23) )
    {
      v4 = RGNOBJ::iComplexity((RGNOBJ *)&v20);
      *((struct tagSIZE *)this + 20) = v20;
    }
    return v4;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v21, *((_DWORD *)a2 + 20));
  if ( v21 )
  {
    RGNOBJ::vCopy((RGNOBJ *)&v21, (struct RGNOBJ *)&v23);
    ++*(_DWORD *)(v21 + 32);
    v4 = RGNOBJ::iComplexity((RGNOBJ *)&v21);
    *((_QWORD *)this + 20) = v21;
    if ( v3 )
    {
      v8 = --*(_DWORD *)(*(_QWORD *)&v20 + 32LL) == 0;
      goto LABEL_34;
    }
  }
LABEL_11:
  if ( v22 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v21);
  return v4;
}
