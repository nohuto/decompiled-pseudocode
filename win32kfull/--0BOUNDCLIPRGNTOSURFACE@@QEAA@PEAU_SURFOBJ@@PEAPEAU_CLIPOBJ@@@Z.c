/*
 * XREFs of ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C000C840
 * Callers:
 *     EngStrokePath @ 0x1C000C6E0 (EngStrokePath.c)
 *     EngStrokeAndFillPath @ 0x1C028BFF0 (EngStrokeAndFillPath.c)
 * Callees:
 *     ?bContain@ERECTL@@QEBAHAEBU_RECTL@@@Z @ 0x1C000C908 (-bContain@ERECTL@@QEBAHAEBU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00287BC (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C008C950 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

BOUNDCLIPRGNTOSURFACE *__fastcall BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE(
        BOUNDCLIPRGNTOSURFACE *this,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ **a3)
{
  struct RGNOBJ *p_top; // rsi
  __int64 v7; // rax
  struct REGION *v8; // rdx
  __int64 v9; // [rsp+20h] [rbp-40h] BYREF
  __int64 v10; // [rsp+28h] [rbp-38h] BYREF
  struct _RECTL v11; // [rsp+30h] [rbp-30h] BYREF
  struct _RECTL v12; // [rsp+40h] [rbp-20h] BYREF

  *((_DWORD *)this + 32) = 1;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 1;
  if ( a3 )
  {
    if ( *a3 )
    {
      p_top = (struct RGNOBJ *)&(*a3)[2].rclBounds.top;
      *(SIZEL *)&v12.right = a2->sizlBitmap;
      *(_QWORD *)&v12.left = 0LL;
      v11 = *(struct _RECTL *)(*(_QWORD *)p_top + 56LL);
      if ( !(unsigned int)ERECTL::bContain((ERECTL *)&v12, &v11) )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v11);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v9);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v9);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v10);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v10);
        v7 = *(_QWORD *)&v11.left;
        *((_QWORD *)this + 19) = *(_QWORD *)&v11.left;
        if ( v7
          && v9
          && v10
          && (RGNOBJ::vSet((RGNOBJ *)&v10, &v12), RGNOBJ::bMerge((RGNOBJ *)&v9, p_top, (struct RGNOBJ *)&v10, 8u))
          && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v9) != 1 )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v11, (struct RGNOBJ *)&v9);
          v8 = *(struct REGION **)&v11.left;
          *((_QWORD *)this + 19) = *(_QWORD *)&v11.left;
          XCLIPOBJ::vSetup(this, v8, (struct ERECTL *)&v12, 1);
          *a3 = (struct _CLIPOBJ *)this;
        }
        else
        {
          *((_DWORD *)this + 40) = 0;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v9);
      }
    }
  }
  return this;
}
