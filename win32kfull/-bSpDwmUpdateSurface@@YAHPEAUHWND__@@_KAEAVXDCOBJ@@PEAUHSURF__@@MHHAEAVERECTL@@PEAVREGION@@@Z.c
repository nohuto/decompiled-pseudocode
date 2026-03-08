/*
 * XREFs of ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C0008058
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C005C120 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C026AB80 (GreSpDwmSyncCaptureSurfaceBits.c)
 * Callees:
 *     DwmSyncCaptureSurfaceBits @ 0x1C00086A0 (DwmSyncCaptureSurfaceBits.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00284A4 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A694 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A6E0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C00F8ED0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
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
  __int64 ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  int v15; // ecx
  __int64 v16; // rdi
  void *v17; // rbx
  int v18; // esi
  NTSTATUS v19; // eax
  PVOID v20; // r14
  __int64 CurrentProcess; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rdi
  _BYTE *v27; // r14
  BOOL (__stdcall *v28)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  void *v29; // rbx
  __int64 v30; // rax
  BOOL v31; // esi
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  int v36; // [rsp+38h] [rbp-C8h]
  _BYTE v37[4]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v38[3]; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v39; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v41; // [rsp+80h] [rbp-80h] BYREF
  char v42; // [rsp+88h] [rbp-78h]
  int v43; // [rsp+8Ch] [rbp-74h]
  int v44; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  void *v46; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v48; // [rsp+B0h] [rbp-50h] BYREF
  int v49; // [rsp+B8h] [rbp-48h]
  PVOID Object; // [rsp+C0h] [rbp-40h] BYREF
  struct ERECTL *v51; // [rsp+C8h] [rbp-38h]
  int v52; // [rsp+D0h] [rbp-30h] BYREF
  int v53; // [rsp+D4h] [rbp-2Ch]
  int v54; // [rsp+D8h] [rbp-28h]
  int v55; // [rsp+DCh] [rbp-24h]
  __int64 v56; // [rsp+E0h] [rbp-20h]
  int v57; // [rsp+E8h] [rbp-18h]
  int v58; // [rsp+ECh] [rbp-14h]
  _QWORD v59[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v60[2]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v61[32]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v62[2]; // [rsp+130h] [rbp+30h] BYREF
  __int16 v63; // [rsp+140h] [rbp+40h]
  _BYTE v64[4]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v65[52]; // [rsp+164h] [rbp+64h] BYREF
  __int64 v66; // [rsp+198h] [rbp+98h]
  __int64 v67; // [rsp+1B0h] [rbp+B0h]
  int v68; // [rsp+1B8h] [rbp+B8h]
  int v69; // [rsp+1E0h] [rbp+E0h]
  __int64 v70; // [rsp+1F0h] [rbp+F0h]

  v46 = 0LL;
  v41 = 0LL;
  v42 = 0;
  v43 = 0;
  v52 = 0;
  v55 = 0;
  v58 = 0;
  v51 = a8;
  v40 = 0LL;
  *(_QWORD *)&v38[1] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread || (*(_DWORD *)(ThreadWin32Thread + 328) & 8) == 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( !CurrentProcessWin32Process )
      goto LABEL_7;
    if ( !*(_QWORD *)CurrentProcessWin32Process )
      goto LABEL_7;
    if ( a1 )
      goto LABEL_7;
    v15 = *(_DWORD *)(CurrentProcessWin32Process + 288);
    if ( (v15 & 2) != 0 )
      goto LABEL_7;
    *(_DWORD *)(CurrentProcessWin32Process + 288) = v15 | 2;
  }
  if ( (unsigned int)dword_1C0357098 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0357098, 0x400000000000LL) )
  {
    v44 = v35;
    v38[0] = 0;
    v47 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v33,
      (unsigned int)&unk_1C0320041,
      v34,
      v35,
      (__int64)&v47,
      (__int64)v38,
      (__int64)&v44);
  }
LABEL_7:
  v53 = *((_DWORD *)a8 + 2) - *(_DWORD *)a8;
  v54 = *((_DWORD *)a8 + 3) - *((_DWORD *)a8 + 1);
  v56 = 0LL;
  v57 = 1;
  UserEnterUserCritSecShared();
  v16 = UserReferenceDwmProcess();
  v17 = (void *)UserReferenceDwmApiPort();
  UserLeaveUserCritSec();
  v38[0] = 88;
  if ( v16 && v17 )
  {
    v18 = DwmSyncCaptureSurfaceBits(v17, a7, v53, v54, a2, (__int64)v38, (__int64)&v40);
  }
  else
  {
    v18 = -1073741823;
    UserDereferenceDwmApiPort(v17);
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v37);
  v63 = 256;
  v62[0] = 0LL;
  v62[1] = 0LL;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v61, a3, 0);
  if ( (v61[24] & 1) != 0 && **(HSURF **)(*(_QWORD *)a3 + 496LL) == a4 )
  {
    if ( v18 >= 0 )
    {
      LOBYTE(v36) = 0;
      Handle = 0LL;
      v18 = ObDuplicateObject(v16, v40, 0LL, &Handle, 4, 512, 1, v36);
      if ( v18 >= 0 )
      {
        Object = 0LL;
        v19 = ObReferenceObjectByHandle(Handle, 4u, MmSectionObjectType, 0, &Object, 0LL);
        v20 = Object;
        v18 = v19;
        *(_QWORD *)&v38[1] = Object;
        ZwClose(Handle);
        goto LABEL_15;
      }
    }
  }
  else
  {
    v18 = -1073741823;
  }
  v20 = 0LL;
LABEL_15:
  UserDereferenceDwmProcess(v16);
  if ( v18 < 0 )
  {
LABEL_38:
    v20 = *(PVOID *)&v38[1];
    goto LABEL_39;
  }
  v40 = 0LL;
  v47 = 0LL;
  CurrentProcess = PsGetCurrentProcess();
  v18 = MmMapViewOfSection(v20, CurrentProcess, &v46, 0LL, 0LL, &v40, &v47, 2, 0, 2);
  if ( v18 < 0 )
  {
LABEL_24:
    if ( v18 >= 0 )
    {
      LOBYTE(v22) = 5;
      v24 = HmgShareLockCheck(a4, v22);
      v25 = v24;
      if ( v24 )
      {
        if ( *(_DWORD *)(v24 + 96) == 6 )
        {
          v26 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
          v60[0] = 0LL;
          v39 = v26;
          SURFREFVIEW::bMap(
            (SURFREFVIEW *)v60,
            (struct _SURFOBJ *)((v41 + 24) & ((unsigned __int128)-(__int128)v41 >> 64)));
          v59[0] = 0LL;
          SURFREFVIEW::bMap((SURFREFVIEW *)v59, (struct _SURFOBJ *)(v25 + 24));
          if ( v60[0] && v59[0] )
          {
            v67 = 0LL;
            v27 = 0LL;
            v68 = 0;
            v69 = 1;
            v70 = 0LL;
            v66 = 0LL;
            if ( a9 )
            {
              XCLIPOBJ::vSetup((XCLIPOBJ *)v64, a9, v51, 0);
              v27 = v64;
            }
            if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v39) )
            {
              v28 = RedirCopyBits;
            }
            else if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 112LL) & 0x400) != 0 )
            {
              v28 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v26 + 2816);
            }
            else
            {
              v28 = EngCopyBits;
            }
            if ( !v27 || !(unsigned int)ERECTL::bEmpty((ERECTL *)v65) )
            {
              v39 = 0LL;
              ((void (__fastcall *)(__int64, unsigned __int64, _BYTE *, _QWORD, struct ERECTL *, __int64 *))v28)(
                v25 + 24,
                (v41 + 24) & -(__int64)(v41 != 0),
                v27,
                0LL,
                v51,
                &v39);
            }
          }
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v59);
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v60);
        }
        DEC_SHARE_REF_CNT(v25);
      }
    }
    goto LABEL_38;
  }
  v52 = 6;
  if ( SURFMEM::bCreateDIB((SURFMEM *)&v41, (struct _DEVBITMAPINFO *)&v52, v46, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
  {
    v49 = 0;
    v48 = 0LL;
    if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v48, 8u, 0, 0LL, 0, 0, 0, 0x200u, 1) )
    {
      v23 = v41;
      v49 = 1;
      v39 = *(_QWORD *)(v41 + 128);
      if ( v39 )
      {
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v39);
        v23 = v41;
      }
      *(_QWORD *)(v23 + 128) = v48;
      if ( v48 )
        INC_SHARE_REF_CNT(v48);
    }
    else
    {
      v18 = -1073741823;
    }
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v48);
    goto LABEL_24;
  }
  v18 = -1073741823;
LABEL_39:
  if ( a9 )
    REGION::vDeleteREGION(a9);
  v29 = v46;
  if ( v46 )
  {
    v30 = PsGetCurrentProcess();
    MmUnmapViewOfSection(v30, v29);
  }
  if ( v20 )
    ObfDereferenceObject(v20);
  v31 = v18 >= 0;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v61);
  if ( v62[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v62);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v37);
  SURFMEM::~SURFMEM((SURFMEM *)&v41);
  return v31;
}
