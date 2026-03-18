/*
 * XREFs of GreCreateDisplayDC @ 0x1C002F6A0
 * Callers:
 *     GreCreateCompatibleDC @ 0x1C002E050 (GreCreateCompatibleDC.c)
 *     CreateCacheDC @ 0x1C006AA00 (CreateCacheDC.c)
 *     InitUserScreen @ 0x1C006C88C (InitUserScreen.c)
 *     hdcOpenDCW @ 0x1C0071480 (hdcOpenDCW.c)
 *     UserGetDesktopDC @ 0x1C0071BC0 (UserGetDesktopDC.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00C7F94 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     NtGdiCreateMetafileDC @ 0x1C00CDAB0 (NtGdiCreateMetafileDC.c)
 * Callees:
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00201E0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     HmgAllocateDcAttr @ 0x1C002631C (HmgAllocateDcAttr.c)
 *     ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C0026498 (-SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     HmgFreeDcAttr @ 0x1C002655C (HmgFreeDcAttr.c)
 *     GreValidateVisrgn @ 0x1C002BFA8 (GreValidateVisrgn.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C002E1F0 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E884 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E8B8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0071D24 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0072044 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C008DCA0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     IsXDCOBJ_vSetDefaultFontSupported @ 0x1C008F168 (IsXDCOBJ_vSetDefaultFontSupported.c)
 *     XDCOBJ_vSetDefaultFontWrap @ 0x1C008F2E0 (XDCOBJ_vSetDefaultFontWrap.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00CBE2C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x1C00D9094 (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
 *     ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C00D961C (-ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00DA978 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ?IsAllocationBusy@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@QEAA_NPEAX@Z @ 0x1C00DAFCC (-IsAllocationBusy@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@QEAA_NPEAX@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00E5D70 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 */

HDC __fastcall GreCreateDisplayDC(HDEV a1, unsigned int a2, int a3)
{
  char v3; // r15
  HDC v6; // r14
  __int64 v7; // rcx
  bool v8; // al
  int v11; // eax
  _QWORD *v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  int v16; // edx
  BOOL v17; // ecx
  unsigned int v18; // eax
  int v19; // edx
  struct _DC_ATTR *DcAttr; // rdx
  struct _DC_ATTR *v21; // rdx
  __int64 v22; // rdx
  int v23; // [rsp+20h] [rbp-98h]
  __int64 v24; // [rsp+60h] [rbp-58h]
  char v25; // [rsp+68h] [rbp-50h]
  struct DC *v26[2]; // [rsp+70h] [rbp-48h] BYREF
  int v27; // [rsp+80h] [rbp-38h]
  HDEV v28; // [rsp+C0h] [rbp+8h] BYREF
  int v29; // [rsp+D0h] [rbp+18h]
  struct _DC_ATTR *v30; // [rsp+D8h] [rbp+20h] BYREF

  v29 = a3;
  v3 = a3;
  v6 = 0LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v28);
  v28 = a1;
  v7 = *((_QWORD *)gpTypeIsolation + 6);
  if ( v7 )
    v8 = *(_BYTE *)(v7 + 36) == 0;
  else
    v8 = 0;
  if ( v8 && !(v7 ? NSInstrumentation::CTypeIsolation<909312,3552>::IsAllocationBusy(v7, a1) : 0) )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 46LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
LABEL_10:
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v28);
    return 0LL;
  }
  if ( gbGDIOn )
  {
    v11 = *((_DWORD *)a1 + 10);
    if ( (v11 & 0x400) != 0 && (v11 & 0x20000) != 0 )
      goto LABEL_10;
  }
  DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v26, a1, a2, v3 & 1, v23);
  if ( v26[0] )
  {
    PDEVOBJ::vReferencePdev((PDEVOBJ *)&v28);
    *(_DWORD *)((struct HDEV__ *)v26[0] + 18) = a1[448];
    *(_DWORD *)((struct HDEV__ *)v26[0] + 19) = a1[524];
    *((_QWORD *)v26[0] + 3) = *((_QWORD *)a1 + 221);
    *((_QWORD *)v26[0] + 8) = *((_QWORD *)a1 + 6);
    if ( a2 == 1 )
    {
      v30 = (struct _DC_ATTR *)0x100000001LL;
      *((_QWORD *)v26[0] + 64) = 0x100000001LL;
    }
    else
    {
      v12 = (_QWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v28);
      *((_QWORD *)v26[0] + 64) = *v12;
      if ( a2 )
        goto LABEL_33;
      v13 = *((_DWORD *)v26[0] + 9) | 0x200;
      if ( ((_DWORD)a1[10] & 1) == 0 )
        v13 = *((_DWORD *)v26[0] + 9) & 0xFFFFFDFF;
      *((_DWORD *)v26[0] + 9) = v13;
      v14 = *((_DWORD *)v26[0] + 9) | 1;
      if ( ((_DWORD)a1[10] & 1) == 0 )
        v14 = *((_DWORD *)v26[0] + 9) & 0xFFFFFFFE;
      *((_DWORD *)v26[0] + 9) = v14;
      v15 = *((_DWORD *)v26[0] + 9) | 0x1000;
      if ( ((_DWORD)a1[10] & 0x400) == 0 )
        v15 = *((_DWORD *)v26[0] + 9) & 0xFFFFEFFF;
      *((_DWORD *)v26[0] + 9) = v15;
      if ( (*((_DWORD *)a1 + 10) & 0x80u) != 0 )
        goto LABEL_33;
      DC::pSurface(v26[0], *((struct SURFACE **)a1 + 316));
      v16 = *((_DWORD *)v26[0] + 9);
      v17 = (v16 & 0x200) != 0 && (*(_DWORD *)(*((_QWORD *)a1 + 316) + 112LL) & 0x200) != 0;
      v18 = v16 & 0xFFFF7FFF;
      v19 = v16 | 0x8000;
      if ( !v17 )
        v19 = v18;
      *((_DWORD *)v26[0] + 9) = v19;
    }
    *((_QWORD *)v26[0] + 8) = ghsemGreLock;
LABEL_33:
    if ( (unsigned int)DC::bSetDefaultRegion(v26[0]) )
    {
      if ( (int)IsXDCOBJ_vSetDefaultFontSupported() >= 0 )
        XDCOBJ_vSetDefaultFontWrap(v26, (_DWORD)a1[10] & 1);
      DC::AcquireDcVisRgnShared(v26[0]);
      DC::vUpdate_VisRect(v26[0], *((__m128i **)v26[0] + 142));
      if ( v25 )
        GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(v24 + 1112));
      DcAttr = (struct _DC_ATTR *)HmgAllocateDcAttr();
      v30 = DcAttr;
      if ( DcAttr )
      {
        if ( a1 == *((HDEV *)gpDispInfo + 5) )
          **((_DWORD **)v26[0] + 122) |= 2u;
        v27 = 1;
        if ( (v3 & 2) != 0 )
          *((_DWORD *)v26[0] + 9) |= 8u;
        SetupDCAttributes(v26[0], DcAttr);
        v30 = (struct _DC_ATTR *)*((_QWORD *)a1 + 4);
        v21 = v30;
        *((_QWORD *)v26[0] + 7) = 0LL;
        if ( v21
          && ((_DWORD)a1[10] & 0x20000) == 0
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v28)
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v30) )
        {
          *((_QWORD *)v26[0] + 7) = v22;
          PDEVOBJ::vReferencePdev((PDEVOBJ *)&v30);
        }
        v6 = *(HDC *)v26[0];
      }
    }
    if ( v6 )
      GreValidateVisrgn(v6, 1);
  }
  DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v26);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v28);
  return v6;
}
