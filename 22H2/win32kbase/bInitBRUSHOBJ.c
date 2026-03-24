/*
 * XREFs of bInitBRUSHOBJ @ 0x1C02972A0
 * Callers:
 *     InitializeGre @ 0x1C02990FC (InitializeGre.c)
 * Callees:
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C0017240 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     HmgModifyHandleType @ 0x1C00174D0 (HmgModifyHandleType.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C001BC8C (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     HmgMarkUndeletable @ 0x1C001CDB0 (HmgMarkUndeletable.c)
 *     GreCreatePatternBrushInternal @ 0x1C001CEC0 (GreCreatePatternBrushInternal.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C001D070 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001D0C0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     GreSetBrushOwner @ 0x1C001DDE0 (GreSetBrushOwner.c)
 *     GreCreateBitmap @ 0x1C0028610 (GreCreateBitmap.c)
 *     HmgShareLockCheck @ 0x1C002F050 (HmgShareLockCheck.c)
 *     GreDeleteObject @ 0x1C0039970 (GreDeleteObject.c)
 *     bInitBrush @ 0x1C02971F0 (bInitBrush.c)
 */

__int64 bInitBRUSHOBJ()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // r8
  struct _DEVOBJ_EXTENSION *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  HBITMAP Bitmap; // rax
  struct HOBJ__ *v14; // rbx
  __int64 v15; // rax
  unsigned int DeviceObject; // ecx
  __int64 v17; // rdx
  __int64 v18; // r8
  HBRUSH *v20[6]; // [rsp+30h] [rbp-40h] BYREF
  int v21; // [rsp+60h] [rbp-10h]

  if ( !(unsigned int)bInitBrush(0, 0xFFFFFF, 7u, &qword_1C024AD78, 0)
    || !(unsigned int)bInitBrush(4, 0, 7u, 0LL, 0)
    || !(unsigned int)bInitBrush(2, 8421504, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(3, 4210752, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(1, 12632256, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(5, 0, 0xCu, &gpbrNull, 0) )
  {
    return 0LL;
  }
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v20, 0, 0xCu, 1, 0);
  if ( v20[0] )
  {
    v21 = 1;
    BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v20, v0, v1);
    *((_DWORD *)v20[0] + 10) |= 0xC00u;
    *((_DWORD *)v20[0] + 44) = 5;
    *((_DWORD *)v20[0] + 42) = 1;
    HmgModifyHandleType((unsigned __int64)*v20[0] | 0x300000);
    bSetStockObject((unsigned __int64)*v20[0], 8, 0);
    WPP_MAIN_CB.Queue.Wcb.DeviceContext = v20[0];
    BRUSHMEMOBJ::~BRUSHMEMOBJ(v20);
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v20, 0, 7u, 1, 0);
    if ( v20[0] )
    {
      v21 = 1;
      BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v20, v2, v3);
      *((_DWORD *)v20[0] + 10) |= 0xC00u;
      *((_DWORD *)v20[0] + 44) = 0;
      *((_DWORD *)v20[0] + 42) = 0;
      *((_DWORD *)v20[0] + 43) = 0;
      *((_BYTE *)v20[0] + 184) = 0;
      *((_BYTE *)v20[0] + 185) = 0;
      v20[0][19] = 0LL;
      HmgModifyHandleType((unsigned __int64)*v20[0] | 0x300000);
      bSetStockObject((unsigned __int64)*v20[0], 7, 0);
      v4 = (struct _DEVOBJ_EXTENSION *)*v20[0];
      qword_1C024AD80 = (__int64)v20[0];
      WPP_MAIN_CB.DeviceObjectExtension = v4;
      BRUSHMEMOBJ::~BRUSHMEMOBJ(v20);
      BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v20, 0xFFFFFF, 7u, 1, 0);
      if ( v20[0] )
      {
        v21 = 1;
        BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v20, v5, v6);
        *((_DWORD *)v20[0] + 10) |= 0xC00u;
        *((_DWORD *)v20[0] + 44) = 0;
        *((_DWORD *)v20[0] + 42) = 0;
        *((_DWORD *)v20[0] + 43) = 0;
        *((_BYTE *)v20[0] + 184) = 0;
        *((_BYTE *)v20[0] + 185) = 0;
        v20[0][19] = 0LL;
        HmgModifyHandleType((unsigned __int64)*v20[0] | 0x300000);
        bSetStockObject((unsigned __int64)*v20[0], 6, 0);
        BRUSHMEMOBJ::~BRUSHMEMOBJ(v20);
        BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v20, 0, 7u, 1, 0);
        if ( v20[0] )
        {
          v21 = 1;
          BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v20, v7, v8);
          *((_DWORD *)v20[0] + 10) |= 0xC00u;
          *((_DWORD *)v20[0] + 44) = 0;
          *((_DWORD *)v20[0] + 42) = 0;
          *((_DWORD *)v20[0] + 43) = 0;
          *((_BYTE *)v20[0] + 184) = 0;
          *((_BYTE *)v20[0] + 185) = 0;
          v20[0][19] = 0LL;
          HmgModifyHandleType((unsigned __int64)*v20[0] | 0x300000);
          bSetStockObject((unsigned __int64)*v20[0], 19, 0);
          *(HBRUSH **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = v20[0];
          BRUSHMEMOBJ::~BRUSHMEMOBJ(v20);
          BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v20, 0, 9u, 0, 0);
          if ( v20[0] )
          {
            v21 = 1;
            BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v20, v9, v10);
            WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)v20[0];
            BRUSHMEMOBJ::~BRUSHMEMOBJ(v20);
            BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v20, 0xFFFFFF, 0xBu, 0, 0);
            if ( v20[0] )
            {
              v21 = 1;
              BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v20, v11, v12);
              *(HBRUSH **)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = v20[0];
              BRUSHMEMOBJ::~BRUSHMEMOBJ(v20);
              Bitmap = (HBITMAP)GreCreateBitmap(8, 8, 1u, 1u, (__int64)&unk_1C024B368);
              v14 = (struct HOBJ__ *)Bitmap;
              if ( !Bitmap )
                return 0LL;
              WPP_MAIN_CB.Queue.Wcb.DeviceObject = (PVOID)GreCreatePatternBrushInternal(Bitmap, 0, 0);
              if ( !WPP_MAIN_CB.Queue.Wcb.DeviceObject )
                return 0LL;
              GreDeleteObject(v14);
              GreSetBrushOwner((HBRUSH)WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
              v15 = HmgShareLockCheck((unsigned int)WPP_MAIN_CB.Queue.Wcb.DeviceObject, 16);
              if ( !v15 )
                return 0LL;
              DeviceObject = (unsigned int)WPP_MAIN_CB.Queue.Wcb.DeviceObject;
              *(_DWORD *)(v15 + 40) |= 0x200u;
              HmgMarkUndeletable(DeviceObject, 16);
              BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v20, 0xFFFFFF, 7u, 0, 0);
              if ( v20[0] )
              {
                v21 = 1;
                BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v20, v17, v18);
                bSetStockObject((unsigned __int64)*v20[0], 18, 0);
                WPP_MAIN_CB.Queue.ListEntry.Blink = (struct _LIST_ENTRY *)v20[0];
                BRUSHMEMOBJ::~BRUSHMEMOBJ(v20);
                return 1LL;
              }
            }
          }
        }
      }
    }
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ(v20);
  return 0LL;
}
