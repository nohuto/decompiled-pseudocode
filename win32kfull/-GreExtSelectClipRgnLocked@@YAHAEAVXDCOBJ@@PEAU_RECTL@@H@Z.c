/*
 * XREFs of ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C008C550
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0055DA0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C000FFA8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00287BC (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C0059100 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008C1D8 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C008C218 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C008C7B8 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C008C924 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C008C950 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 */

__int64 __fastcall GreExtSelectClipRgnLocked(DC **this, struct _RECTL *a2, int a3)
{
  unsigned int v4; // ebp
  unsigned int v5; // ebx
  DC *v7; // rcx
  DC *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13; // rax
  DC *v14; // r10
  struct REGION *v15; // rax
  struct REGION *v16; // r10
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rax
  ULONG v20; // ecx
  struct REGION *v21; // [rsp+68h] [rbp+20h] BYREF

  v4 = a3 & 0xF7FFFFFF;
  v5 = 0;
  if ( (a3 & 0xF7FFFFFF) - 1 > 4 )
  {
    v20 = 87;
    goto LABEL_51;
  }
  v7 = *this;
  if ( !v7 )
  {
    v20 = 6;
LABEL_51:
    EngSetLastError(v20);
    return v5;
  }
  if ( (a3 & 0x8000000) != 0 )
  {
    if ( v4 == 5 )
    {
      v5 = DC::iSelectTightenRao(v7, 0LL, 5);
      DC::bTightenRao(*this);
      if ( v5 )
      {
        v8 = *this;
        if ( !*((_QWORD *)*this + 145) || (*((_DWORD *)v8 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(*this) )
          v9 = *((_QWORD *)v8 + 143);
        v10 = v9 + 52;
        if ( !v9 )
          v10 = 28LL;
        v5 = 1;
        if ( *(_DWORD *)v10 != 1 )
        {
          v11 = v9 + 48;
          if ( !v9 )
            v11 = 24LL;
          return (unsigned int)(*(_DWORD *)v11 > 0x38u) + 2;
        }
      }
    }
    return v5;
  }
  v13 = *((_QWORD *)v7 + 20);
  if ( v13 && *(_DWORD *)(v13 + 48) == 56 && *(_OWORD *)a2 == *(_OWORD *)(v13 + 56) )
  {
    v21 = XDCOBJ::prgnEffRao(this);
    return (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v21);
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v21);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v21);
  if ( !v21 )
  {
LABEL_32:
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v21);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v21);
    return v5;
  }
  if ( ((a2->left & 0xF8000000) == 0 || (a2->left & 0xF8000000) == 0xF8000000)
    && ((a2->bottom & 0xF8000000) == 0 || (a2->bottom & 0xF8000000) == 0xF8000000)
    && ((a2->right & 0xF8000000) == 0 || (a2->right & 0xF8000000) == 0xF8000000)
    && ((a2->top & 0xF8000000) == 0 || (a2->top & 0xF8000000) == 0xF8000000)
    && a2->left < a2->right
    && a2->top < a2->bottom )
  {
    RGNOBJ::vSet((RGNOBJ *)&v21, a2);
    v5 = DC::iSelectTightenRao(*this, v21, v4);
    DC::bTightenRao(*this);
    if ( v5 )
    {
      if ( DC::prgnRao(*this) )
        v15 = DC::prgnRao(v14);
      else
        v15 = DC::prgnVisSnap(v14);
      v16 = v15;
      v17 = v15 == 0LL;
      v18 = (__int64)v15 + 52;
      if ( v17 )
        v18 = 28LL;
      v5 = 1;
      if ( *(_DWORD *)v18 != 1 )
      {
        v19 = (__int64)v16 + 48;
        if ( !v16 )
          v19 = 24LL;
        v5 = (*(_DWORD *)v19 > 0x38u) + 2;
      }
    }
    goto LABEL_32;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
  return 0LL;
}
