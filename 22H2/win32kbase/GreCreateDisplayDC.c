/*
 * XREFs of GreCreateDisplayDC @ 0x1C003CAC0
 * Callers:
 *     UserGetDesktopDC @ 0x1C0021AE0 (UserGetDesktopDC.c)
 *     hdcOpenDCW @ 0x1C0022A00 (hdcOpenDCW.c)
 *     GreCreateCompatibleDC @ 0x1C003C7B0 (GreCreateCompatibleDC.c)
 *     InitUserScreen @ 0x1C006B23C (InitUserScreen.c)
 *     CreateCacheDC @ 0x1C006B8B0 (CreateCacheDC.c)
 *     NtGdiCreateMetafileDC @ 0x1C00A4890 (NtGdiCreateMetafileDC.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C011E928 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0012124 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C00123D0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C002193C (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0021968 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     HmgFreeDcAttr @ 0x1C002C8BC (HmgFreeDcAttr.c)
 *     ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C002C988 (-SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     HmgAllocateDcAttr @ 0x1C002C9D8 (HmgAllocateDcAttr.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C002E010 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     GreValidateVisrgn @ 0x1C0038E40 (GreValidateVisrgn.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A014 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A048 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C003C8A0 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C005DD98 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     IsXDCOBJ_vSetDefaultFontSupported @ 0x1C0081400 (IsXDCOBJ_vSetDefaultFontSupported.c)
 *     XDCOBJ_vSetDefaultFontWrap @ 0x1C0081D04 (XDCOBJ_vSetDefaultFontWrap.c)
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x1C00C8314 (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00CA238 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ?IsAllocationBusy@?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@QEAA_NPEAX@Z @ 0x1C00CADD8 (-IsAllocationBusy@-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@QEAA_NPEAX@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C013C750 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 */

HDC __fastcall GreCreateDisplayDC(HDEV a1, unsigned int a2, int a3)
{
  char v3; // r15
  HDC v6; // r14
  unsigned __int8 *v7; // rcx
  bool v8; // al
  int v11; // eax
  __int64 v12; // rdx
  int v13; // r8d
  _QWORD *v14; // rax
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  int v18; // edx
  BOOL v19; // ecx
  unsigned int v20; // eax
  int v21; // edx
  struct _DC_ATTR *DcAttr; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // r8d
  DYNAMICMODECHANGESHARELOCK *v26; // rcx
  int v27; // [rsp+20h] [rbp-A8h]
  _QWORD v28[3]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v29[2]; // [rsp+68h] [rbp-60h] BYREF
  char v30; // [rsp+78h] [rbp-50h]
  DC *v31[2]; // [rsp+80h] [rbp-48h] BYREF
  int v32; // [rsp+90h] [rbp-38h]
  __int64 v33; // [rsp+D0h] [rbp+8h] BYREF
  int v34; // [rsp+E0h] [rbp+18h]
  HDEV v35; // [rsp+E8h] [rbp+20h] BYREF

  v34 = a3;
  v3 = a3;
  v6 = 0LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v33);
  v35 = a1;
  v7 = gpTypeIsolation[6];
  if ( v7 )
    v8 = v7[36] == 0;
  else
    v8 = 0;
  if ( v8 && !(v7 ? NSInstrumentation::CTypeIsolation<917504,3584>::IsAllocationBusy(v7, a1) : 0) )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 46LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
LABEL_10:
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v7);
    return 0LL;
  }
  if ( gbGDIOn )
  {
    v11 = *((_DWORD *)a1 + 10);
    if ( (v11 & 0x400) != 0 && (v11 & 0x20000) != 0 )
      goto LABEL_10;
  }
  DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v31, a1, a2, v3 & 1, v27);
  if ( v31[0] )
  {
    PDEVOBJ::vReferencePdev((PDEVOBJ *)&v35, v12, v13);
    *(_DWORD *)((struct HDEV__ *)v31[0] + 18) = a1[456];
    *(_DWORD *)((struct HDEV__ *)v31[0] + 19) = a1[532];
    *((_QWORD *)v31[0] + 3) = *((_QWORD *)a1 + 225);
    *((_QWORD *)v31[0] + 8) = *((_QWORD *)a1 + 6);
    if ( a2 == 1 )
    {
      v33 = 0x100000001LL;
      *((_QWORD *)v31[0] + 64) = 0x100000001LL;
    }
    else
    {
      v14 = (_QWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v35, v29);
      *((_QWORD *)v31[0] + 64) = *v14;
      if ( a2 )
        goto LABEL_33;
      v15 = *((_DWORD *)v31[0] + 9) | 0x200;
      if ( ((_DWORD)a1[10] & 1) == 0 )
        v15 = *((_DWORD *)v31[0] + 9) & 0xFFFFFDFF;
      *((_DWORD *)v31[0] + 9) = v15;
      v16 = *((_DWORD *)v31[0] + 9) | 1;
      if ( ((_DWORD)a1[10] & 1) == 0 )
        v16 = *((_DWORD *)v31[0] + 9) & 0xFFFFFFFE;
      *((_DWORD *)v31[0] + 9) = v16;
      v17 = *((_DWORD *)v31[0] + 9) | 0x1000;
      if ( ((_DWORD)a1[10] & 0x400) == 0 )
        v17 = *((_DWORD *)v31[0] + 9) & 0xFFFFEFFF;
      *((_DWORD *)v31[0] + 9) = v17;
      if ( (*((_DWORD *)a1 + 10) & 0x80u) != 0 )
        goto LABEL_33;
      DC::pSurface(v31[0], *((struct SURFACE **)a1 + 319));
      v18 = *((_DWORD *)v31[0] + 9);
      v19 = (v18 & 0x200) != 0 && (*(_DWORD *)(*((_QWORD *)a1 + 319) + 112LL) & 0x200) != 0;
      v20 = v18 & 0xFFFF7FFF;
      v21 = v18 | 0x8000;
      if ( !v19 )
        v21 = v20;
      *((_DWORD *)v31[0] + 9) = v21;
    }
    *((_QWORD *)v31[0] + 8) = ghsemGreLock;
LABEL_33:
    if ( (unsigned int)DC::bSetDefaultRegion(v31[0]) )
    {
      if ( (int)IsXDCOBJ_vSetDefaultFontSupported() >= 0 )
        XDCOBJ_vSetDefaultFontWrap(v31, (_DWORD)a1[10] & 1);
      DC::AcquireDcVisRgnShared(v31[0]);
      DC::vUpdate_VisRect(v31[0], *((__m128i **)v31[0] + 143));
      if ( v30 )
        CPushLock::ReleaseLock((CPushLock *)(v29[1] + 1112LL));
      DcAttr = (struct _DC_ATTR *)HmgAllocateDcAttr();
      v28[2] = DcAttr;
      if ( DcAttr )
      {
        if ( a1 == *(HDEV *)(gpDispInfo + 40) )
          **((_DWORD **)v31[0] + 122) |= 2u;
        v32 = 1;
        if ( (v3 & 2) != 0 )
          *((_DWORD *)v31[0] + 9) |= 8u;
        SetupDCAttributes(v31[0], DcAttr);
        v28[0] = *((_QWORD *)a1 + 4);
        v23 = v28[0];
        *((_QWORD *)v31[0] + 7) = 0LL;
        if ( v23
          && ((_DWORD)a1[10] & 0x20000) == 0
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v35)
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)v28) )
        {
          *((_QWORD *)v31[0] + 7) = v24;
          PDEVOBJ::vReferencePdev((PDEVOBJ *)v28, v24, v25);
        }
        v6 = *(HDC *)v31[0];
      }
    }
    if ( v6 )
      GreValidateVisrgn(v6, 1);
  }
  DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v31);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v26);
  return v6;
}
