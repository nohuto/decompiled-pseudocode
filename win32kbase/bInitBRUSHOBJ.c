/*
 * XREFs of bInitBRUSHOBJ @ 0x1C031D4F4
 * Callers:
 *     InitializeGre @ 0x1C031D988 (InitializeGre.c)
 * Callees:
 *     GreCreatePatternBrushInternal @ 0x1C001A060 (GreCreatePatternBrushInternal.c)
 *     GreSetBrushOwner @ 0x1C001BD80 (GreSetBrushOwner.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001C2B0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C001CC00 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C001D0B4 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C001D100 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     HmgModifyHandleType @ 0x1C001D300 (HmgModifyHandleType.c)
 *     HmgMarkUndeletable @ 0x1C003EA00 (HmgMarkUndeletable.c)
 *     GreDeleteObject @ 0x1C0043CD0 (GreDeleteObject.c)
 *     HmgShareLockCheck @ 0x1C0049E60 (HmgShareLockCheck.c)
 *     GreCreateBitmap @ 0x1C005A690 (GreCreateBitmap.c)
 *     bInitBrush @ 0x1C031D430 (bInitBrush.c)
 */

__int64 __fastcall bInitBRUSHOBJ(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  struct HOBJ__ **v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  struct HOBJ__ **v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  struct HOBJ__ **v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  struct HOBJ__ **v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  struct HOBJ__ **v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r8
  struct HOBJ__ **v19; // rdi
  HBITMAP Bitmap; // rax
  struct HOBJ__ *v21; // rdi
  __int64 PatternBrushInternal; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned __int64 *v27; // rdi
  struct HOBJ__ **v29[2]; // [rsp+30h] [rbp-20h] BYREF
  int v30; // [rsp+40h] [rbp-10h]

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( !(unsigned int)bInitBrush(0, 0xFFFFFF, 7u, (struct HOBJ__ ***)(v1 + 808), 0)
    || !(unsigned int)bInitBrush(4, 0, 7u, 0LL, 0)
    || !(unsigned int)bInitBrush(2, 8421504, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(3, 4210752, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(1, 12632256, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(5, 0, 0xCu, (struct HOBJ__ ***)(v1 + 240), 0) )
  {
    return 0LL;
  }
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v29, 0, 0xCu, 1, 0);
  v4 = v29[0];
  if ( v29[0] )
  {
    v30 = 1;
    BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v29, v2, v3);
    *((_DWORD *)v4 + 10) |= 0xC00u;
    *((_DWORD *)v4 + 44) = 5;
    *((_DWORD *)v4 + 42) = 1;
    HmgModifyHandleType((unsigned __int64)*v4 | 0x300000);
    bSetStockObject((unsigned __int64)*v4, 8, 0);
    *(_QWORD *)(v1 + 256) = v4;
    BRUSHMEMOBJ::~BRUSHMEMOBJ(v29);
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v29, 0, 7u, 1, 0);
    v7 = v29[0];
    if ( v29[0] )
    {
      v30 = 1;
      BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v29, v5, v6);
      *((_DWORD *)v7 + 10) |= 0xC00u;
      *(struct HOBJ__ **)((char *)v7 + 172) = 0LL;
      *((_DWORD *)v7 + 42) = 0;
      *((_WORD *)v7 + 92) = 0;
      v7[19] = 0LL;
      HmgModifyHandleType((unsigned __int64)*v7 | 0x300000);
      bSetStockObject((unsigned __int64)*v7, 7, 0);
      *(_QWORD *)(v1 + 480) = *v7;
      *(_QWORD *)(v1 + 816) = v7;
      BRUSHMEMOBJ::~BRUSHMEMOBJ(v29);
      BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v29, 0xFFFFFF, 7u, 1, 0);
      v10 = v29[0];
      if ( v29[0] )
      {
        v30 = 1;
        BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v29, v8, v9);
        *((_DWORD *)v10 + 10) |= 0xC00u;
        *(struct HOBJ__ **)((char *)v10 + 172) = 0LL;
        *((_DWORD *)v10 + 42) = 0;
        *((_WORD *)v10 + 92) = 0;
        v10[19] = 0LL;
        HmgModifyHandleType((unsigned __int64)*v10 | 0x300000);
        bSetStockObject((unsigned __int64)*v10, 6, 0);
        BRUSHMEMOBJ::~BRUSHMEMOBJ(v29);
        BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v29, 0, 7u, 1, 0);
        v13 = v29[0];
        if ( v29[0] )
        {
          v30 = 1;
          BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v29, v11, v12);
          *((_DWORD *)v13 + 10) |= 0xC00u;
          *(struct HOBJ__ **)((char *)v13 + 172) = 0LL;
          *((_DWORD *)v13 + 42) = 0;
          *((_WORD *)v13 + 92) = 0;
          v13[19] = 0LL;
          HmgModifyHandleType((unsigned __int64)*v13 | 0x300000);
          bSetStockObject((unsigned __int64)*v13, 19, 0);
          *(_QWORD *)(v1 + 280) = *v13;
          *(_QWORD *)(v1 + 288) = v13;
          BRUSHMEMOBJ::~BRUSHMEMOBJ(v29);
          BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v29, 0, 9u, 0, 0);
          v16 = v29[0];
          if ( v29[0] )
          {
            v30 = 1;
            BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v29, v14, v15);
            *(_QWORD *)(v1 + 208) = *v16;
            *(_QWORD *)(v1 + 232) = v16;
            BRUSHMEMOBJ::~BRUSHMEMOBJ(v29);
            BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v29, 0xFFFFFF, 0xBu, 0, 0);
            v19 = v29[0];
            if ( v29[0] )
            {
              v30 = 1;
              BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v29, v17, v18);
              *(_QWORD *)(v1 + 216) = *v19;
              *(_QWORD *)(v1 + 248) = v19;
              BRUSHMEMOBJ::~BRUSHMEMOBJ(v29);
              Bitmap = (HBITMAP)GreCreateBitmap(8LL, 8, 1u, 1u, (__int64)"U");
              v21 = (struct HOBJ__ *)Bitmap;
              if ( !Bitmap )
                return 0LL;
              PatternBrushInternal = GreCreatePatternBrushInternal(Bitmap, 0, 0);
              *(_QWORD *)(v1 + 224) = PatternBrushInternal;
              if ( !PatternBrushInternal )
                return 0LL;
              GreDeleteObject(v21, v23);
              GreSetBrushOwner(*(HBRUSH *)(v1 + 224), 0);
              v24 = HmgShareLockCheck(*(_QWORD *)(v1 + 224), 16);
              if ( !v24 )
                return 0LL;
              *(_DWORD *)(v24 + 40) |= 0x200u;
              HmgMarkUndeletable(*(_QWORD *)(v1 + 224), 16);
              BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v29, 0xFFFFFF, 7u, 0, 0);
              v27 = (unsigned __int64 *)v29[0];
              if ( v29[0] )
              {
                v30 = 1;
                BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v29, v25, v26);
                bSetStockObject(*v27, 18, 0);
                *(_QWORD *)(v1 + 264) = *v27;
                *(_QWORD *)(v1 + 272) = v27;
                BRUSHMEMOBJ::~BRUSHMEMOBJ(v29);
                return 1LL;
              }
            }
          }
        }
      }
    }
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ(v29);
  return 0LL;
}
