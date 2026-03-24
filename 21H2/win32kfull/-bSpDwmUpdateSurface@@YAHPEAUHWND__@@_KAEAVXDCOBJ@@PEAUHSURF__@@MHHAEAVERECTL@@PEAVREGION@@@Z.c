/*
 * XREFs of ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C002DD04
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0087D58 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C0270200 (GreSpDwmSyncCaptureSurfaceBits.c)
 * Callees:
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0016760 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018C00 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018F2C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     DwmSyncCaptureSurfaceBits @ 0x1C002E3C4 (DwmSyncCaptureSurfaceBits.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C008393C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E9B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00ACCE0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B1630 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2C64 (--0DLODCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C0224510 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

_BOOL8 __fastcall bSpDwmUpdateSurface(
        HWND a1,
        __int64 a2,
        struct XDCOBJ *a3,
        HSURF a4,
        float a5,
        int a6,
        int a7,
        struct ERECTL *a8,
        struct REGION *a9)
{
  PVOID v11; // r13
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rcx
  int v14; // r9d
  int v15; // edx
  __int64 CurrentProcessWin32Process; // rax
  int v17; // ecx
  __int64 v18; // rsi
  void *v19; // rbx
  NTSTATUS v20; // edi
  HSURF v21; // rbx
  _BYTE *v22; // rsi
  __int64 CurrentProcess; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // rbx
  BOOL (__stdcall *v28)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v29; // rax
  BOOL v30; // edi
  DYNAMICMODECHANGESHARELOCK *v31; // rcx
  int v33; // [rsp+38h] [rbp-C8h]
  _BYTE v34[8]; // [rsp+60h] [rbp-A0h] BYREF
  void *v35; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  char v37; // [rsp+78h] [rbp-88h]
  int v38; // [rsp+7Ch] [rbp-84h]
  int v39; // [rsp+80h] [rbp-80h] BYREF
  int v40; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v41; // [rsp+88h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  __int64 v43; // [rsp+98h] [rbp-68h] BYREF
  int v44; // [rsp+A0h] [rbp-60h]
  HSURF v45; // [rsp+A8h] [rbp-58h]
  __int64 v46; // [rsp+B0h] [rbp-50h] BYREF
  PVOID Object; // [rsp+B8h] [rbp-48h] BYREF
  int v48; // [rsp+C0h] [rbp-40h] BYREF
  int v49; // [rsp+C4h] [rbp-3Ch]
  int v50; // [rsp+C8h] [rbp-38h]
  int v51; // [rsp+CCh] [rbp-34h]
  __int64 v52; // [rsp+D0h] [rbp-30h]
  int v53; // [rsp+D8h] [rbp-28h]
  int v54; // [rsp+DCh] [rbp-24h]
  __int64 v55; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v56; // [rsp+E8h] [rbp-18h]
  __int64 v57; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v58; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v59; // [rsp+100h] [rbp+0h] BYREF
  __int64 v60; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v61[2]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v62[2]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v63[32]; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int64 v64; // [rsp+150h] [rbp+50h]
  _BYTE v65[32]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v66[2]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v67[64]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v68[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v69[52]; // [rsp+1D4h] [rbp+D4h] BYREF
  __int64 v70; // [rsp+208h] [rbp+108h]
  __int64 v71; // [rsp+220h] [rbp+120h]
  int v72; // [rsp+228h] [rbp+128h]
  int v73; // [rsp+250h] [rbp+150h]
  __int64 v74; // [rsp+260h] [rbp+160h]

  v35 = 0LL;
  v36 = 0LL;
  v11 = 0LL;
  v37 = 0;
  v38 = 0;
  v48 = 0;
  v51 = 0;
  v54 = 0;
  v45 = a4;
  v56 = a2;
  v46 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread && (*(_DWORD *)(ThreadWin32Thread + 328) & 0x10) != 0 )
  {
    v15 = 2;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
    if ( !CurrentProcessWin32Process )
      goto LABEL_12;
    if ( a1 )
      goto LABEL_12;
    v17 = *(_DWORD *)(CurrentProcessWin32Process + 288);
    if ( (v17 & 2) != 0 )
      goto LABEL_12;
    LODWORD(v13) = v17 | 2;
    v15 = 1;
    *(_DWORD *)(CurrentProcessWin32Process + 288) = v13;
  }
  if ( (unsigned int)dword_1C032B3D8 > 5
    && (qword_1C032B3E8 & 0x400000000000LL) != 0
    && (qword_1C032B3F0 & 0x400000000000LL) == qword_1C032B3F0 )
  {
    v39 = v15;
    v40 = 0;
    v55 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v13,
      (unsigned int)&unk_1C02F5042,
      0,
      v14,
      (__int64)&v55,
      (__int64)&v40,
      (__int64)&v39);
  }
LABEL_12:
  v49 = *((_DWORD *)a8 + 2) - *(_DWORD *)a8;
  v50 = *((_DWORD *)a8 + 3) - *((_DWORD *)a8 + 1);
  v52 = 0LL;
  v53 = 1;
  UserEnterUserCritSecShared();
  v18 = UserReferenceDwmProcess();
  v19 = (void *)UserReferenceDwmApiPort();
  UserLeaveUserCritSec();
  LODWORD(v41) = 88;
  if ( v18 && v19 )
  {
    v20 = DwmSyncCaptureSurfaceBits(v19, a7, v49, v50, v56, (__int64)&v41, (__int64)&v46);
  }
  else
  {
    v20 = -1073741823;
    UserDereferenceDwmApiPort(v19);
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v34);
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v66);
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v65, a3, 0);
  v21 = v45;
  if ( (v65[24] & 1) == 0 || **(HSURF **)(*(_QWORD *)a3 + 496LL) != v45 )
    v20 = -1073741823;
  if ( v20 >= 0 )
  {
    Handle = 0LL;
    LOBYTE(v33) = 0;
    v20 = ObDuplicateObject(v18, v46, 0LL, &Handle, 4, 512, 1, v33);
    if ( v20 >= 0 )
    {
      Object = 0LL;
      v20 = ObReferenceObjectByHandle(Handle, 4u, MmSectionObjectType, 0, &Object, 0LL);
      v11 = Object;
      ZwClose(Handle);
    }
  }
  UserDereferenceDwmProcess(v18);
  v22 = 0LL;
  if ( v20 >= 0 )
  {
    v58 = 0LL;
    v57 = 0LL;
    CurrentProcess = PsGetCurrentProcess();
    v20 = MmMapViewOfSection(v11, CurrentProcess, &v35, 0LL, 0LL, &v58, &v57, 2, 0, 2);
    if ( v20 >= 0 )
    {
      v48 = 6;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v36, (struct _DEVBITMAPINFO *)&v48, v35, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        v20 = -1073741823;
      if ( v20 >= 0 )
      {
        v44 = 0;
        v43 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v43, 8u, 0, 0LL, 0, 0, 0, 0x200u, 1) )
        {
          v24 = v36;
          v44 = 1;
          v59 = *(_QWORD *)(v36 + 128);
          if ( v59 )
          {
            XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v59);
            v24 = v36;
          }
          *(_QWORD *)(v24 + 128) = v43;
          if ( v43 )
            INC_SHARE_REF_CNT(v43);
        }
        else
        {
          v20 = -1073741823;
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v43);
        if ( v20 >= 0 )
        {
          SURFREF::SURFREF((SURFREF *)v63, v21);
          v26 = v64;
          if ( v64 )
          {
            if ( *(_DWORD *)(v64 + 96) == 6 )
            {
              v27 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
              v60 = v27;
              v62[0] = 0LL;
              SURFREFVIEW::bMap(
                (SURFREFVIEW *)v62,
                (struct _SURFOBJ *)((v36 + 24) & ((unsigned __int128)-(__int128)v36 >> 64)));
              v61[0] = 0LL;
              SURFREFVIEW::bMap(
                (SURFREFVIEW *)v61,
                (struct _SURFOBJ *)((v64 + 24) & ((unsigned __int128)-(__int128)v64 >> 64)));
              if ( v62[0] && v61[0] )
              {
                v71 = 0LL;
                v72 = 0;
                v73 = 1;
                v74 = 0LL;
                v70 = 0LL;
                if ( a9 )
                {
                  XCLIPOBJ::vSetup((XCLIPOBJ *)v68, a9, a8, 0);
                  v22 = v68;
                }
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v60) )
                {
                  v28 = RedirCopyBits;
                }
                else if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 112LL) & 0x400) != 0 )
                {
                  v28 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v27 + 2840);
                }
                else
                {
                  v28 = EngCopyBits;
                }
                if ( !v22 || !(unsigned int)ERECTL::bEmpty((ERECTL *)v69) )
                  ((void (__fastcall *)(unsigned __int64, unsigned __int64, _BYTE *, _QWORD, struct ERECTL *, POINTL *))v28)(
                    (v64 + 24) & -(__int64)(v64 != 0),
                    (v36 + 24) & -(__int64)(v36 != 0),
                    v22,
                    0LL,
                    a8,
                    &gptlZero);
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v61);
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v62);
              v26 = v64;
            }
            if ( v26 )
              DEC_SHARE_REF_CNT(v26, v25);
          }
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v63);
        }
      }
    }
  }
  if ( a9 )
    REGION::vDeleteREGION(a9);
  if ( v35 )
  {
    v29 = PsGetCurrentProcess();
    MmUnmapViewOfSection(v29, v35);
  }
  if ( v11 )
    ObfDereferenceObject(v11);
  v30 = v20 >= 0;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v65);
  if ( v66[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v66);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v67);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v31);
  SURFMEM::~SURFMEM((SURFMEM *)&v36);
  return v30;
}
