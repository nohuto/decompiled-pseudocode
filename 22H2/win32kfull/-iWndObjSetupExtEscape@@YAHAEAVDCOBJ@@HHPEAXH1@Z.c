/*
 * XREFs of ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C02773F8
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1C0275904 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011BFB4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C011C124 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?fBlockExtEscape@@YAHAEAVDCOBJ@@@Z @ 0x1C02769BC (-fBlockExtEscape@@YAHAEAVDCOBJ@@@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C02873C0 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02B2CDC (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C02E11B4 (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 */

__int64 __fastcall iWndObjSetupExtEscape(
        struct DCOBJ *a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        void *a6)
{
  __int64 v11; // r8
  HDEV v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rsi
  HDEV v15; // rcx
  struct _SURFOBJ *v16; // rdx
  HDEV DeviceHdev; // rax
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct _RECTL v24; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v25[32]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v26[2]; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v27[64]; // [rsp+80h] [rbp-19h] BYREF
  HDEV v28; // [rsp+F0h] [rbp+57h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) )
  {
    UserEnterUserCritSec();
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v26);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v25, a1, 0);
    if ( (unsigned int)fBlockExtEscape(a1) )
      goto LABEL_16;
    v11 = *(_QWORD *)a1;
    v12 = *(HDEV *)(*(_QWORD *)a1 + 48LL);
    v13 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
    v28 = v12;
    v14 = (v13 + 24) & -(__int64)(v13 != 0);
    v15 = v12;
    v16 = (struct _SURFOBJ *)v14;
    if ( ((_DWORD)v12[10] & 0x20000) != 0 )
    {
      v24 = *(struct _RECTL *)(v11 + 1032);
      DeviceHdev = hdevFindDeviceHdev(v12, &v24, 0LL);
      v16 = (struct _SURFOBJ *)v14;
      v15 = v12;
      if ( DeviceHdev )
      {
        if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) == *((_QWORD *)v12 + 316) )
          v16 = (struct _SURFOBJ *)((*((_QWORD *)DeviceHdev + 316) + 24LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)DeviceHdev + 316) >> 64));
        else
          v16 = (struct _SURFOBJ *)v14;
        v28 = DeviceHdev;
        v15 = DeviceHdev;
      }
    }
    if ( !*((_QWORD *)v15 + 357) )
    {
LABEL_16:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v25);
      v18 = 0;
    }
    else
    {
      v18 = PDEVOBJ::Escape((PDEVOBJ *)&v28, v16, a2, a3, a4, a5, a6);
      v21 = *(_QWORD *)(SGDGetSessionState(v19) + 32);
      if ( *(_DWORD *)(v21 + 23660) )
      {
        *(_DWORD *)(v21 + 23660) = 0;
        vForceClientRgnUpdate();
      }
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v25, v20, v22, v23);
      if ( v26[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v26);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v27);
    }
    UserLeaveUserCritSec();
    return v18;
  }
  else
  {
    EngSetLastError(6u);
    return 0LL;
  }
}
