/*
 * XREFs of ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C0279220
 * Callers:
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C02797A8 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreDrawEscape @ 0x1C027A3F4 (GreDrawEscape.c)
 *     ?SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x1C027D6A0 (-SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?GreUnTearDownSprites@@YAXPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C027CD50 (-GreUnTearDownSprites@@YAXPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0299814 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 *     ?bBmpUndoMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0299864 (-bBmpUndoMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029C510 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 *     ?bUndoMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029C6CC (-bUndoMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

void __fastcall DEVEXCLUDERECT::~DEVEXCLUDERECT(DEVEXCLUDERECT *this)
{
  DEVEXCLUDERECT *v1; // r8
  __int64 *v2; // rcx
  struct SURFACE *v3; // rdi
  __int64 v4; // rdx
  struct SURFACE *v5; // rbx
  __int64 v6; // rdx

  v1 = this;
  if ( *(_DWORD *)this )
  {
    v2 = (__int64 *)*((_QWORD *)this + 4);
    v3 = 0LL;
    if ( v2 )
    {
      v4 = *v2;
      if ( _bittest((const signed __int32 *)(*v2 + 36), 0xEu) )
      {
        if ( *(void **)(v4 + 48) == gpRedirDev )
          v3 = *(struct SURFACE **)(v4 + 496);
      }
    }
    if ( v3 )
    {
      bUndoMakeOpaque(v3);
      v2 = (__int64 *)*((_QWORD *)v1 + 4);
    }
    v5 = 0LL;
    if ( v2 )
    {
      v6 = *v2;
      if ( _bittest((const signed __int32 *)(*v2 + 36), 0xEu) )
      {
        if ( *(void **)(v6 + 48) == gpBmpDev )
        {
          v5 = *(struct SURFACE **)(v6 + 496);
          if ( v5 )
            bBmpUndoMakeOpaque(*(struct SURFACE **)(v6 + 496));
        }
      }
    }
    GreUnTearDownSprites(*((HDEV *)v1 + 1), (struct _RECTL *)v1 + 1, (int)v1);
    if ( v5 )
      bBmpMakeOpaque(v5);
    if ( v3 )
      bMakeOpaque(v3);
  }
}
