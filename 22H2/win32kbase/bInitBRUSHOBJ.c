/*
 * XREFs of bInitBRUSHOBJ @ 0x1C02DB1F8
 * Callers:
 *     InitializeGre @ 0x1C02DB800 (InitializeGre.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0042BA0 (HmgShareLockCheck.c)
 *     GreDeleteObject @ 0x1C00472A0 (GreDeleteObject.c)
 *     GreCreatePatternBrushInternal @ 0x1C005E410 (GreCreatePatternBrushInternal.c)
 *     GreCreateBitmap @ 0x1C005EAE0 (GreCreateBitmap.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C005F74C (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     GreSetBrushOwner @ 0x1C00601D0 (GreSetBrushOwner.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00605C0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0060894 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     HmgMarkUndeletable @ 0x1C0060900 (HmgMarkUndeletable.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C00609A0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     HmgModifyHandleType @ 0x1C0060BA0 (HmgModifyHandleType.c)
 *     bInitBrush @ 0x1C02DB738 (bInitBrush.c)
 */

__int64 __fastcall bInitBRUSHOBJ(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  HBRUSH *v5; // rdx
  HBITMAP Bitmap; // rax
  HPALETTE v7; // rdi
  __int64 PatternBrushInternal; // rax
  __int64 v9; // rax
  HBRUSH *v10; // rdx
  HBRUSH *v12[6]; // [rsp+30h] [rbp-40h] BYREF
  int v13; // [rsp+60h] [rbp-10h]

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( !(unsigned int)bInitBrush(0, 0)
    || !(unsigned int)bInitBrush(4, 0)
    || !(unsigned int)bInitBrush(2, 1)
    || !(unsigned int)bInitBrush(3, 1)
    || !(unsigned int)bInitBrush(1, 1)
    || !(unsigned int)bInitBrush(5, 0) )
  {
    return 0LL;
  }
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0, 0xCu, 1, 0);
  if ( v12[0] )
  {
    v13 = 1;
    BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v12);
    *((_DWORD *)v12[0] + 10) |= 0xC00u;
    *((_DWORD *)v12[0] + 44) = 5;
    *((_DWORD *)v12[0] + 42) = 1;
    HmgModifyHandleType((unsigned __int64)*v12[0] | 0x300000);
    bSetStockObject((unsigned __int64)*v12[0], 8, 0);
    *(HBRUSH **)(v1 + 256) = v12[0];
    BRUSHMEMOBJ::~BRUSHMEMOBJ(v12);
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0, 7u, 1, 0);
    if ( v12[0] )
    {
      v13 = 1;
      BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v12);
      *((_DWORD *)v12[0] + 10) |= 0xC00u;
      *((_DWORD *)v12[0] + 44) = 0;
      *((_DWORD *)v12[0] + 42) = 0;
      *((_DWORD *)v12[0] + 43) = 0;
      *((_BYTE *)v12[0] + 184) = 0;
      *((_BYTE *)v12[0] + 185) = 0;
      v12[0][19] = 0LL;
      HmgModifyHandleType((unsigned __int64)*v12[0] | 0x300000);
      bSetStockObject((unsigned __int64)*v12[0], 7, 0);
      v2 = (__int64)*v12[0];
      *(HBRUSH **)(v1 + 816) = v12[0];
      *(_QWORD *)(v1 + 480) = v2;
      BRUSHMEMOBJ::~BRUSHMEMOBJ(v12);
      BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0xFFFFFF, 7u, 1, 0);
      if ( v12[0] )
      {
        v13 = 1;
        BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v12);
        *((_DWORD *)v12[0] + 10) |= 0xC00u;
        *((_DWORD *)v12[0] + 44) = 0;
        *((_DWORD *)v12[0] + 42) = 0;
        *((_DWORD *)v12[0] + 43) = 0;
        *((_BYTE *)v12[0] + 184) = 0;
        *((_BYTE *)v12[0] + 185) = 0;
        v12[0][19] = 0LL;
        HmgModifyHandleType((unsigned __int64)*v12[0] | 0x300000);
        bSetStockObject((unsigned __int64)*v12[0], 6, 0);
        BRUSHMEMOBJ::~BRUSHMEMOBJ(v12);
        BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0, 7u, 1, 0);
        if ( v12[0] )
        {
          v13 = 1;
          BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v12);
          *((_DWORD *)v12[0] + 10) |= 0xC00u;
          *((_DWORD *)v12[0] + 44) = 0;
          *((_DWORD *)v12[0] + 42) = 0;
          *((_DWORD *)v12[0] + 43) = 0;
          *((_BYTE *)v12[0] + 184) = 0;
          *((_BYTE *)v12[0] + 185) = 0;
          v12[0][19] = 0LL;
          HmgModifyHandleType((unsigned __int64)*v12[0] | 0x300000);
          bSetStockObject((unsigned __int64)*v12[0], 19, 0);
          v3 = (__int64)*v12[0];
          *(HBRUSH **)(v1 + 288) = v12[0];
          *(_QWORD *)(v1 + 280) = v3;
          BRUSHMEMOBJ::~BRUSHMEMOBJ(v12);
          BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0, 9u, 0, 0);
          if ( v12[0] )
          {
            v13 = 1;
            BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v12);
            v4 = (__int64)*v12[0];
            *(HBRUSH **)(v1 + 232) = v12[0];
            *(_QWORD *)(v1 + 208) = v4;
            BRUSHMEMOBJ::~BRUSHMEMOBJ(v12);
            BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0xFFFFFF, 0xBu, 0, 0);
            if ( v12[0] )
            {
              v13 = 1;
              BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v12);
              v5 = v12[0];
              *(_QWORD *)(v1 + 216) = *v12[0];
              *(_QWORD *)(v1 + 248) = v5;
              BRUSHMEMOBJ::~BRUSHMEMOBJ(v12);
              Bitmap = (HBITMAP)GreCreateBitmap(8, 8, 1, 1, (__int64)&unk_1C0248900);
              v7 = (HPALETTE)Bitmap;
              if ( !Bitmap )
                return 0LL;
              PatternBrushInternal = GreCreatePatternBrushInternal(Bitmap, 0, 0);
              *(_QWORD *)(v1 + 224) = PatternBrushInternal;
              if ( !PatternBrushInternal )
                return 0LL;
              GreDeleteObject(v7);
              GreSetBrushOwner(*(HBRUSH *)(v1 + 224), 0);
              v9 = HmgShareLockCheck(*(_QWORD *)(v1 + 224), 16);
              if ( !v9 )
                return 0LL;
              *(_DWORD *)(v9 + 40) |= 0x200u;
              HmgMarkUndeletable(*(_QWORD *)(v1 + 224), 16);
              BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0xFFFFFF, 7u, 0, 0);
              if ( v12[0] )
              {
                v13 = 1;
                BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v12);
                bSetStockObject((unsigned __int64)*v12[0], 18, 0);
                v10 = v12[0];
                *(_QWORD *)(v1 + 264) = *v12[0];
                *(_QWORD *)(v1 + 272) = v10;
                BRUSHMEMOBJ::~BRUSHMEMOBJ(v12);
                return 1LL;
              }
            }
          }
        }
      }
    }
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ(v12);
  return 0LL;
}
