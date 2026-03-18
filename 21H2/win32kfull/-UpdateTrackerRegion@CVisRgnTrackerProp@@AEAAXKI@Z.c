/*
 * XREFs of ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x1C00B4534
 * Callers:
 *     ?Update@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C00B444C (-Update@CVisRgnTrackerProp@@QEAAXXZ.c)
 * Callees:
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1C00B4348 (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     ?GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z @ 0x1C00B478C (-GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z.c)
 *     DwmAsyncUpdateVisRgn @ 0x1C00B4974 (DwmAsyncUpdateVisRgn.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     DwmAsyncUpdateLargeVisRgn @ 0x1C0273180 (DwmAsyncUpdateLargeVisRgn.c)
 */

void __fastcall CVisRgnTrackerProp::UpdateTrackerRegion(CVisRgnTrackerProp *this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r15d
  __int64 v4; // rdi
  __int64 v7; // r13
  HRGN v8; // rbp
  HRGN v9; // r12
  HRGN EmptyRgn; // rax
  HRGN v11; // rsi
  struct tagWND *v12; // rcx
  char VisRgn; // al
  _QWORD *v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rcx
  unsigned int RegionData; // eax
  void *v18; // rax
  __int64 v19; // r15
  __int64 v20; // r13
  __int64 ProcessWin32Process; // rax
  void *v22; // rax
  bool v23; // [rsp+30h] [rbp-278h] BYREF
  unsigned int v24; // [rsp+34h] [rbp-274h]
  int v25[136]; // [rsp+40h] [rbp-268h] BYREF

  v3 = a3;
  v4 = 0LL;
  v24 = a3;
  v7 = a3;
  v8 = 0LL;
  v9 = (HRGN)*((_QWORD *)this + a3 + 6);
  EmptyRgn = (HRGN)CreateEmptyRgn(this);
  v11 = EmptyRgn;
  if ( !EmptyRgn )
    goto LABEL_11;
  v12 = (struct tagWND *)*((_QWORD *)this + 2);
  v23 = 0;
  if ( v3 == 2 )
  {
    if ( !GetLayeredRegion(v12, EmptyRgn, &v23) )
    {
      GreDeleteObject(v11);
      v11 = 0LL;
    }
    VisRgn = v23;
  }
  else
  {
    VisRgn = GetVisRgn(v12, a2, EmptyRgn);
  }
  if ( VisRgn )
  {
    if ( !v11 )
      goto LABEL_11;
    goto LABEL_27;
  }
  if ( v9 )
  {
    v8 = v9;
    GreSetRegionOwner(v9, 2147483650LL);
  }
  if ( v11 )
  {
    if ( v8 && (unsigned int)GreEqualRgn(v11, v8) )
      goto LABEL_27;
  }
  else if ( !v8 )
  {
    goto LABEL_11;
  }
  memset(v25, 0, sizeof(v25));
  if ( !v11 )
    goto LABEL_22;
  RegionData = GreGetRegionData(v11, 0LL, 0LL);
  if ( RegionData > 0x220 )
  {
    v19 = CreateEmptyRgn(v16);
    if ( (unsigned int)GreCombineRgn(v19, v11, 0LL, 5LL) )
    {
      v20 = ReferenceDwmProcess();
      ProcessWin32Process = PsGetProcessWin32Process(v20);
      if ( (unsigned int)GreSetRegionOwner(v19, *(unsigned int *)(ProcessWin32Process + 56)) )
      {
        v22 = (void *)ReferenceDwmApiPort(*((_QWORD *)this + 2));
        v3 = v24;
        DwmAsyncUpdateLargeVisRgn(v22);
      }
      else
      {
        GreDeleteObject(v19);
        v3 = v24;
      }
      DereferenceDwmProcess(v20);
      v7 = v3;
      goto LABEL_23;
    }
    v3 = v24;
    goto LABEL_27;
  }
  if ( !RegionData )
  {
LABEL_22:
    v18 = (void *)ReferenceDwmApiPort(v16);
    DwmAsyncUpdateVisRgn(v18, v25[2]);
LABEL_23:
    if ( v8 )
      GreDeleteObject(v8);
    *((_QWORD *)this + v7 + 6) = v11;
    v8 = v11;
    goto LABEL_28;
  }
  if ( (unsigned int)GreGetRegionData(v11, RegionData, v25) )
  {
    if ( !v25[2] )
    {
      v25[2] = 1;
      *(_OWORD *)&v25[8] = 0LL;
    }
    goto LABEL_22;
  }
LABEL_27:
  GreDeleteObject(v11);
LABEL_28:
  if ( v8 )
    GreSetRegionOwner(v8, 2147483666LL);
LABEL_11:
  v14 = (_QWORD *)*((_QWORD *)this + 2);
  v15 = (__int64 *)v14[13];
  if ( v15 )
    v4 = *v15;
  EtwTraceDwmVisRgnUpdate(*v14, v4, v3, v9 != *((HRGN *)this + v7 + 6));
}
