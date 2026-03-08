/*
 * XREFs of ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x1C0044204
 * Callers:
 *     ?Update@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C004411C (-Update@CVisRgnTrackerProp@@QEAAXXZ.c)
 * Callees:
 *     DwmAsyncUpdateVisRgn @ 0x1C0021F40 (DwmAsyncUpdateVisRgn.c)
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1C0025360 (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     ?GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z @ 0x1C0044458 (-GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     DwmAsyncUpdateLargeVisRgn @ 0x1C027084C (DwmAsyncUpdateLargeVisRgn.c)
 */

void __fastcall CVisRgnTrackerProp::UpdateTrackerRegion(CVisRgnTrackerProp *this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r14d
  __int64 v4; // rdi
  __int64 v7; // r12
  HRGN v8; // rbp
  HRGN v9; // r13
  HRGN EmptyRgn; // rax
  HRGN v11; // rsi
  struct tagWND *v12; // rcx
  char VisRgn; // al
  _QWORD *v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rcx
  unsigned int RegionData; // eax
  __int64 v18; // rbx
  void *v19; // rax
  __int64 v20; // r14
  __int64 v21; // r12
  __int64 ProcessWin32Process; // rax
  __int64 v23; // rcx
  void *v24; // rax
  bool v25; // [rsp+30h] [rbp-278h] BYREF
  unsigned int v26; // [rsp+34h] [rbp-274h]
  char v27[8]; // [rsp+40h] [rbp-268h] BYREF
  int v28; // [rsp+48h] [rbp-260h]
  __int128 v29[32]; // [rsp+60h] [rbp-248h] BYREF

  v3 = a3;
  v4 = 0LL;
  v26 = a3;
  v7 = a3;
  v8 = 0LL;
  v9 = (HRGN)*((_QWORD *)this + a3 + 6);
  EmptyRgn = (HRGN)CreateEmptyRgn();
  v11 = EmptyRgn;
  if ( !EmptyRgn )
    goto LABEL_15;
  v12 = (struct tagWND *)*((_QWORD *)this + 2);
  v25 = 0;
  if ( v3 == 2 )
  {
    if ( !GetLayeredRegion(v12, EmptyRgn, &v25) )
    {
      GreDeleteObject(v11);
      v11 = 0LL;
    }
    VisRgn = v25;
  }
  else
  {
    VisRgn = GetVisRgn(v12, a2, EmptyRgn);
  }
  if ( !VisRgn )
  {
    if ( v9 )
    {
      v8 = v9;
      GreSetRegionOwner(v9, 2147483650LL);
    }
    if ( v11 )
    {
      if ( v8 && (unsigned int)GreEqualRgn(v11, v8) )
        goto LABEL_12;
    }
    else if ( !v8 )
    {
      goto LABEL_15;
    }
    memset_0(v27, 0, 0x220uLL);
    if ( !v11 )
      goto LABEL_25;
    RegionData = GreGetRegionData(v11, 0LL, 0LL);
    if ( RegionData > 0x220 )
    {
      v20 = CreateEmptyRgn();
      if ( (unsigned int)GreCombineRgn(v20, v11, 0LL, 5LL) )
      {
        v21 = ReferenceDwmProcess();
        ProcessWin32Process = PsGetProcessWin32Process(v21);
        if ( ProcessWin32Process )
          ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
        if ( (unsigned int)GreSetRegionOwner(v20, *(unsigned int *)(ProcessWin32Process + 56)) )
        {
          v24 = (void *)ReferenceDwmApiPort(v23);
          v3 = v26;
          DwmAsyncUpdateLargeVisRgn(v24);
        }
        else
        {
          GreDeleteObject(v20);
          v3 = v26;
        }
        DereferenceDwmProcess(v21);
        v7 = v3;
        goto LABEL_26;
      }
      v3 = v26;
    }
    else
    {
      if ( !RegionData )
      {
LABEL_25:
        v18 = **((_QWORD **)this + 2);
        v19 = (void *)ReferenceDwmApiPort(v16);
        DwmAsyncUpdateVisRgn(v19, v18, v3, (__int64)v29, v28);
LABEL_26:
        if ( v8 )
          GreDeleteObject(v8);
        *((_QWORD *)this + v7 + 6) = v11;
        v8 = v11;
        goto LABEL_13;
      }
      if ( (unsigned int)GreGetRegionData(v11, RegionData, v27) )
      {
        if ( !v28 )
        {
          v28 = 1;
          v29[0] = 0LL;
        }
        goto LABEL_25;
      }
    }
LABEL_12:
    GreDeleteObject(v11);
    goto LABEL_13;
  }
  if ( v11 )
    goto LABEL_12;
LABEL_13:
  if ( v8 )
    GreSetRegionOwner(v8, 2147483666LL);
LABEL_15:
  v14 = (_QWORD *)*((_QWORD *)this + 2);
  v15 = (__int64 *)v14[13];
  if ( v15 )
    v4 = *v15;
  EtwTraceDwmVisRgnUpdate(*v14, v4, v3, v9 != *((HRGN *)this + v7 + 6));
}
