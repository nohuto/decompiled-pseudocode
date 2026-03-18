/*
 * XREFs of bInitBRUSHOBJ @ 0x1C02E523C
 * Callers:
 *     InitializeGre @ 0x1C02E38D0 (InitializeGre.c)
 * Callees:
 *     GreCreateBitmap @ 0x1C001A360 (GreCreateBitmap.c)
 *     HmgShareLockCheck @ 0x1C0020DC0 (HmgShareLockCheck.c)
 *     GreDeleteObject @ 0x1C0023690 (GreDeleteObject.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C00628A0 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     GreSetBrushOwner @ 0x1C00630E0 (GreSetBrushOwner.c)
 *     GreCreatePatternBrushInternal @ 0x1C00634C0 (GreCreatePatternBrushInternal.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0063670 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00636C0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     HmgMarkUndeletable @ 0x1C0063C80 (HmgMarkUndeletable.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C00643E0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     HmgModifyHandleType @ 0x1C0064660 (HmgModifyHandleType.c)
 *     bInitBrush @ 0x1C02E518C (bInitBrush.c)
 */

__int64 bInitBRUSHOBJ()
{
  struct _DEVOBJ_EXTENSION *v0; // rax
  HBITMAP Bitmap; // rax
  HRGN v2; // rbx
  __int64 v3; // rax
  ULONG NumberOfMapRegisters; // ecx
  __int64 *v6[6]; // [rsp+30h] [rbp-40h] BYREF
  int v7; // [rsp+60h] [rbp-10h]

  if ( !(unsigned int)bInitBrush(0, 0xFFFFFF, 7u, &qword_1C028F308, 0)
    || !(unsigned int)bInitBrush(4, 0, 7u, 0LL, 0)
    || !(unsigned int)bInitBrush(2, 8421504, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(3, 4210752, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(1, 12632256, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(5, 0, 0xCu, &gpbrNull, 0) )
  {
    return 0LL;
  }
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v6, 0, 0xCu, 1, 0);
  if ( v6[0] )
  {
    v7 = 1;
    BRUSHMEMOBJ::vGlobal(v6);
    *((_DWORD *)v6[0] + 10) |= 0xC00u;
    *((_DWORD *)v6[0] + 44) = 5;
    *((_DWORD *)v6[0] + 42) = 1;
    HmgModifyHandleType(*v6[0] | 0x300000);
    bSetStockObject(*v6[0], 8, 0);
    WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)v6[0];
    BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v6);
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v6, 0, 7u, 1, 0);
    if ( v6[0] )
    {
      v7 = 1;
      BRUSHMEMOBJ::vGlobal(v6);
      *((_DWORD *)v6[0] + 10) |= 0xC00u;
      *((_DWORD *)v6[0] + 44) = 0;
      *((_DWORD *)v6[0] + 42) = 0;
      *((_DWORD *)v6[0] + 43) = 0;
      *((_BYTE *)v6[0] + 184) = 0;
      *((_BYTE *)v6[0] + 185) = 0;
      v6[0][19] = 0LL;
      HmgModifyHandleType(*v6[0] | 0x300000);
      bSetStockObject(*v6[0], 7, 0);
      v0 = (struct _DEVOBJ_EXTENSION *)*v6[0];
      qword_1C028F310 = (__int64)v6[0];
      WPP_MAIN_CB.DeviceObjectExtension = v0;
      BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v6);
      BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v6, 0xFFFFFF, 7u, 1, 0);
      if ( v6[0] )
      {
        v7 = 1;
        BRUSHMEMOBJ::vGlobal(v6);
        *((_DWORD *)v6[0] + 10) |= 0xC00u;
        *((_DWORD *)v6[0] + 44) = 0;
        *((_DWORD *)v6[0] + 42) = 0;
        *((_DWORD *)v6[0] + 43) = 0;
        *((_BYTE *)v6[0] + 184) = 0;
        *((_BYTE *)v6[0] + 185) = 0;
        v6[0][19] = 0LL;
        HmgModifyHandleType(*v6[0] | 0x300000);
        bSetStockObject(*v6[0], 6, 0);
        BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v6);
        BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v6, 0, 7u, 1, 0);
        if ( v6[0] )
        {
          v7 = 1;
          BRUSHMEMOBJ::vGlobal(v6);
          *((_DWORD *)v6[0] + 10) |= 0xC00u;
          *((_DWORD *)v6[0] + 44) = 0;
          *((_DWORD *)v6[0] + 42) = 0;
          *((_DWORD *)v6[0] + 43) = 0;
          *((_BYTE *)v6[0] + 184) = 0;
          *((_BYTE *)v6[0] + 185) = 0;
          v6[0][19] = 0LL;
          HmgModifyHandleType(*v6[0] | 0x300000);
          bSetStockObject(*v6[0], 19, 0);
          WPP_MAIN_CB.Queue.ListEntry.Blink = (struct _LIST_ENTRY *)v6[0];
          BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v6);
          BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v6, 0, 9u, 0, 0);
          if ( v6[0] )
          {
            v7 = 1;
            BRUSHMEMOBJ::vGlobal(v6);
            WPP_MAIN_CB.Queue.Wcb.DeviceObject = v6[0];
            BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v6);
            BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v6, 0xFFFFFF, 0xBu, 0, 0);
            if ( v6[0] )
            {
              v7 = 1;
              BRUSHMEMOBJ::vGlobal(v6);
              WPP_MAIN_CB.Queue.Wcb.DeviceContext = v6[0];
              BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v6);
              Bitmap = (HBITMAP)GreCreateBitmap(8, 8, 1u, 1u, (__int64)&unk_1C028F928);
              v2 = (HRGN)Bitmap;
              if ( !Bitmap )
                return 0LL;
              *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = GreCreatePatternBrushInternal(Bitmap, 0, 0);
              if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
                return 0LL;
              GreDeleteObject(v2);
              GreSetBrushOwner(*(HBRUSH *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 0);
              v3 = HmgShareLockCheck(WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 16);
              if ( !v3 )
                return 0LL;
              NumberOfMapRegisters = WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
              *(_DWORD *)(v3 + 40) |= 0x200u;
              HmgMarkUndeletable(NumberOfMapRegisters, 16);
              BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v6, 0xFFFFFF, 7u, 0, 0);
              if ( v6[0] )
              {
                v7 = 1;
                BRUSHMEMOBJ::vGlobal(v6);
                bSetStockObject(*v6[0], 18, 0);
                *(__int64 **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = v6[0];
                BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v6);
                return 1LL;
              }
            }
          }
        }
      }
    }
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v6);
  return 0LL;
}
