/*
 * XREFs of GreCreateDisplayDC @ 0x1C003BFE0
 * Callers:
 *     GreCreateCompatibleDC @ 0x1C003BC40 (GreCreateCompatibleDC.c)
 *     UserGetDesktopDC @ 0x1C005A7D0 (UserGetDesktopDC.c)
 *     hdcOpenDCW @ 0x1C005ADC0 (hdcOpenDCW.c)
 *     CreateCacheDC @ 0x1C005BC20 (CreateCacheDC.c)
 *     InitUserScreen @ 0x1C005CD6C (InitUserScreen.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00624B4 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     NtGdiCreateMetafileDC @ 0x1C016C5C0 (NtGdiCreateMetafileDC.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C001CAB4 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C003BBC0 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C003E79C (-SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0040814 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004086C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C0041FC0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     GreValidateVisrgn @ 0x1C004B7A8 (GreValidateVisrgn.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C005FD78 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     HmgFreeDcAttr @ 0x1C008AE88 (HmgFreeDcAttr.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0097060 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     IsXDCOBJ_vSetDefaultFontSupported @ 0x1C009D8D8 (IsXDCOBJ_vSetDefaultFontSupported.c)
 *     XDCOBJ_vSetDefaultFontWrap @ 0x1C009E0C0 (XDCOBJ_vSetDefaultFontWrap.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C00AAD9C (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00D28F8 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ?IsAllocationBusy@?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@QEAA_NPEAX@Z @ 0x1C00D3344 (-IsAllocationBusy@-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@QEAA_NPEAX@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00E0090 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     HmgAllocateDcAttr @ 0x1C00E02F0 (HmgAllocateDcAttr.c)
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x1C01518D8 (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
 */

HDC __fastcall GreCreateDisplayDC(HDEV a1, unsigned int a2, int a3)
{
  char v3; // r12
  HDC v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rcx
  bool v9; // al
  __int64 v10; // rcx
  __int64 v13; // rcx
  __int64 v14; // r13
  _QWORD *v15; // rax
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // edx
  int v19; // edx
  BOOL v20; // ecx
  unsigned int v21; // eax
  int v22; // edx
  struct _DC_ATTR *DcAttr; // rdx
  HDEV v24; // rdx
  __int64 v25; // rdx
  int v26; // [rsp+20h] [rbp-98h]
  __int64 v27; // [rsp+68h] [rbp-50h]
  char v28; // [rsp+70h] [rbp-48h]
  DC *v29[2]; // [rsp+78h] [rbp-40h] BYREF
  int v30; // [rsp+88h] [rbp-30h]
  HDEV v31; // [rsp+C0h] [rbp+8h] BYREF
  int v32; // [rsp+D0h] [rbp+18h]
  HDEV v33; // [rsp+D8h] [rbp+20h] BYREF

  v32 = a3;
  v31 = a1;
  v3 = a3;
  v6 = 0LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v33);
  v33 = a1;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v7) + 24) + 6504LL) + 48LL);
  if ( v8 )
    v9 = *(_BYTE *)(v8 + 36) == 0;
  else
    v9 = 0;
  if ( v9 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v8) + 24) + 6504LL) + 48LL);
    if ( !(v10 ? NSInstrumentation::CTypeIsolation<917504,3584>::IsAllocationBusy(v10, a1) : 0) )
    {
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 46LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
LABEL_10:
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v33);
      return 0LL;
    }
  }
  if ( gbGDIOn && ((_DWORD)a1[10] & 0x20400) == 0x20400 )
    goto LABEL_10;
  DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v29, a1, a2, v3 & 1, v26);
  if ( v29[0] )
  {
    PDEVOBJ::vReferencePdev((PDEVOBJ *)&v33);
    *(_DWORD *)((struct HDEV__ *)v29[0] + 18) = a1[448];
    *(_DWORD *)((struct HDEV__ *)v29[0] + 19) = a1[524];
    *((_QWORD *)v29[0] + 3) = *((_QWORD *)a1 + 221);
    v13 = *((_QWORD *)a1 + 6);
    *((_QWORD *)v29[0] + 8) = v13;
    v14 = *(_QWORD *)(SGDGetSessionState(v13) + 24);
    if ( a2 == 1 )
    {
      *((_QWORD *)v29[0] + 64) = 0x100000001LL;
    }
    else
    {
      v15 = (_QWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v33);
      *((_QWORD *)v29[0] + 64) = *v15;
      if ( a2 )
        goto LABEL_32;
      v16 = *((_DWORD *)v29[0] + 9) | 0x200;
      if ( ((_DWORD)a1[10] & 1) == 0 )
        v16 = *((_DWORD *)v29[0] + 9) & 0xFFFFFDFF;
      *((_DWORD *)v29[0] + 9) = v16;
      v17 = *((_DWORD *)v29[0] + 9) | 1;
      if ( ((_DWORD)a1[10] & 1) == 0 )
        v17 = *((_DWORD *)v29[0] + 9) & 0xFFFFFFFE;
      *((_DWORD *)v29[0] + 9) = v17;
      v18 = *((_DWORD *)v29[0] + 9) | 0x1000;
      if ( ((_DWORD)a1[10] & 0x400) == 0 )
        v18 = *((_DWORD *)v29[0] + 9) & 0xFFFFEFFF;
      *((_DWORD *)v29[0] + 9) = v18;
      if ( (*((_DWORD *)a1 + 10) & 0x80u) != 0 )
        goto LABEL_32;
      DC::pSurface(v29[0], *((struct SURFACE **)a1 + 316));
      v19 = *((_DWORD *)v29[0] + 9);
      v20 = (v19 & 0x200) != 0 && (*(_DWORD *)(*((_QWORD *)a1 + 316) + 112LL) & 0x200) != 0;
      v21 = v19 & 0xFFFF7FFF;
      v22 = v19 | 0x8000;
      if ( !v20 )
        v22 = v21;
      *((_DWORD *)v29[0] + 9) = v22;
    }
    *((_QWORD *)v29[0] + 8) = *(_QWORD *)(v14 + 120);
LABEL_32:
    if ( (unsigned int)DC::bSetDefaultRegion(v29[0]) )
    {
      if ( (int)IsXDCOBJ_vSetDefaultFontSupported() >= 0 )
        XDCOBJ_vSetDefaultFontWrap(v29, (_DWORD)a1[10] & 1);
      DC::AcquireDcVisRgnShared(v29[0]);
      DC::vUpdate_VisRect(v29[0], *((struct REGION **)v29[0] + 142));
      if ( v28 )
        CPushLock::ReleaseLock((CPushLock *)(v27 + 1112));
      DcAttr = (struct _DC_ATTR *)HmgAllocateDcAttr();
      if ( DcAttr )
      {
        if ( a1 == *((HDEV *)gpDispInfo + 5) )
          **((_DWORD **)v29[0] + 122) |= 2u;
        v30 = 1;
        if ( (v3 & 2) != 0 )
          *((_DWORD *)v29[0] + 9) |= 8u;
        SetupDCAttributes(v29[0], DcAttr);
        v31 = (HDEV)*((_QWORD *)a1 + 4);
        v24 = v31;
        *((_QWORD *)v29[0] + 7) = 0LL;
        if ( v24
          && ((_DWORD)a1[10] & 0x20000) == 0
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v33)
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v31) )
        {
          *((_QWORD *)v29[0] + 7) = v25;
          PDEVOBJ::vReferencePdev((PDEVOBJ *)&v31);
        }
        v6 = *(HDC *)v29[0];
      }
    }
    if ( v6 )
      GreValidateVisrgn(v6);
  }
  DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v29);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v33);
  return v6;
}
