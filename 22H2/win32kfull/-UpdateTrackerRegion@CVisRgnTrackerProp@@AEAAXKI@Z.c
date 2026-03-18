/*
 * XREFs of ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x1C00EC974
 * Callers:
 *     ?Update@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C00EC88C (-Update@CVisRgnTrackerProp@@QEAAXXZ.c)
 * Callees:
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1C005EDC4 (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     DwmAsyncUpdateVisRgn @ 0x1C00C8480 (DwmAsyncUpdateVisRgn.c)
 *     ?GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z @ 0x1C00ECBC8 (-GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     DwmAsyncUpdateLargeVisRgn @ 0x1C026DD9C (DwmAsyncUpdateLargeVisRgn.c)
 */

void __fastcall CVisRgnTrackerProp::UpdateTrackerRegion(CVisRgnTrackerProp *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 v8; // r12
  HRGN v9; // rbp
  HRGN v10; // r13
  HRGN EmptyRgn; // rax
  HRGN v12; // rsi
  struct tagWND *v13; // rcx
  char VisRgn; // al
  _QWORD *v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // rcx
  unsigned int RegionData; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  void *v23; // rax
  __int64 v24; // r14
  __int64 v25; // r12
  __int64 ProcessWin32Process; // rax
  __int64 v27; // rcx
  void *v28; // rax
  bool v29; // [rsp+30h] [rbp-278h] BYREF
  unsigned int v30; // [rsp+34h] [rbp-274h]
  char v31[8]; // [rsp+40h] [rbp-268h] BYREF
  int v32; // [rsp+48h] [rbp-260h]
  __int128 v33[32]; // [rsp+60h] [rbp-248h] BYREF

  v4 = a3;
  v5 = 0LL;
  v30 = a3;
  v6 = a2;
  v8 = (unsigned int)a3;
  v9 = 0LL;
  v10 = (HRGN)*((_QWORD *)this + (unsigned int)a3 + 6);
  EmptyRgn = (HRGN)CreateEmptyRgn(this, a2, a3, a4);
  v12 = EmptyRgn;
  if ( !EmptyRgn )
    goto LABEL_15;
  v13 = (struct tagWND *)*((_QWORD *)this + 2);
  v29 = 0;
  if ( v4 == 2 )
  {
    if ( !GetLayeredRegion(v13, EmptyRgn, &v29) )
    {
      GreDeleteObject(v12);
      v12 = 0LL;
    }
    VisRgn = v29;
  }
  else
  {
    VisRgn = GetVisRgn(v13, v6, EmptyRgn);
  }
  if ( !VisRgn )
  {
    if ( v10 )
    {
      v9 = v10;
      GreSetRegionOwner(v10, 2147483650LL);
    }
    if ( v12 )
    {
      if ( v9 && (unsigned int)GreEqualRgn(v12, v9) )
        goto LABEL_12;
    }
    else if ( !v9 )
    {
      goto LABEL_15;
    }
    memset_0(v31, 0, 0x220uLL);
    if ( !v12 )
      goto LABEL_25;
    RegionData = GreGetRegionData(v12, 0LL, 0LL);
    if ( RegionData > 0x220 )
    {
      v24 = CreateEmptyRgn(v17, v19, v20, v21);
      if ( (unsigned int)GreCombineRgn(v24, v12, 0LL, 5LL) )
      {
        v25 = ReferenceDwmProcess();
        ProcessWin32Process = PsGetProcessWin32Process(v25);
        if ( ProcessWin32Process )
          ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
        if ( (unsigned int)GreSetRegionOwner(v24, *(unsigned int *)(ProcessWin32Process + 56)) )
        {
          v28 = (void *)ReferenceDwmApiPort(v27);
          v4 = v30;
          DwmAsyncUpdateLargeVisRgn(v28);
        }
        else
        {
          GreDeleteObject(v24);
          v4 = v30;
        }
        DereferenceDwmProcess(v25);
        v8 = v4;
        goto LABEL_26;
      }
      v4 = v30;
    }
    else
    {
      if ( !RegionData )
      {
LABEL_25:
        v22 = **((_QWORD **)this + 2);
        v23 = (void *)ReferenceDwmApiPort(v17);
        DwmAsyncUpdateVisRgn(v23, v22, v4, (__int64)v33, v32);
LABEL_26:
        if ( v9 )
          GreDeleteObject(v9);
        *((_QWORD *)this + v8 + 6) = v12;
        v9 = v12;
        goto LABEL_13;
      }
      if ( (unsigned int)GreGetRegionData(v12, RegionData, v31) )
      {
        if ( !v32 )
        {
          v32 = 1;
          v33[0] = 0LL;
        }
        goto LABEL_25;
      }
    }
LABEL_12:
    GreDeleteObject(v12);
    goto LABEL_13;
  }
  if ( v12 )
    goto LABEL_12;
LABEL_13:
  if ( v9 )
    GreSetRegionOwner(v9, 2147483666LL);
LABEL_15:
  v15 = (_QWORD *)*((_QWORD *)this + 2);
  v16 = (__int64 *)v15[13];
  if ( v16 )
    v5 = *v16;
  EtwTraceDwmVisRgnUpdate(*v15, v5, v4, v10 != *((HRGN *)this + v8 + 6));
}
