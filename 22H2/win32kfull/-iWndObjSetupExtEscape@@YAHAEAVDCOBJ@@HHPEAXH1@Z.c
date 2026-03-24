/*
 * XREFs of ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C027BC88
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C00A8EAC (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E920 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C00A7278 (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?fBlockExtEscape@@YAHAEAVDCOBJ@@@Z @ 0x1C00A94A0 (-fBlockExtEscape@@YAHAEAVDCOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00AC9D8 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2904 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0286604 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02A67B0 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall iWndObjSetupExtEscape(struct DCOBJ *a1, __int64 a2, __int64 a3, void *a4, unsigned int a5, void *a6)
{
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  __int64 v11; // r8
  __int64 v12; // rax
  HDEV v13; // rbx
  __int64 v14; // rsi
  struct _SURFOBJ *v15; // rdx
  HDEV DeviceHdev; // rax
  unsigned int v17; // ebx
  struct _RECTL v18; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v19[32]; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v20[2]; // [rsp+70h] [rbp-68h] BYREF
  _BYTE v21[64]; // [rsp+80h] [rbp-58h] BYREF
  HDEV v22; // [rsp+E0h] [rbp+8h] BYREF

  v7 = a3;
  v8 = a2;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) )
  {
    UserEnterUserCritSec(a1, a2, a3);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v20);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v19, a1, 0);
    if ( (unsigned int)fBlockExtEscape(a1) )
      goto LABEL_11;
    v11 = *(_QWORD *)a1;
    v12 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
    v13 = *(HDEV *)(*(_QWORD *)a1 + 48LL);
    v22 = v13;
    v14 = (v12 + 24) & -(__int64)(v12 != 0);
    v15 = (struct _SURFOBJ *)v14;
    if ( ((_DWORD)v13[10] & 0x20000) != 0 )
    {
      v18 = *(struct _RECTL *)(v11 + 1032);
      DeviceHdev = hdevFindDeviceHdev(v13, &v18, 0LL);
      v15 = (struct _SURFOBJ *)v14;
      if ( DeviceHdev )
      {
        if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) == *((_QWORD *)v13 + 319) )
          v15 = (struct _SURFOBJ *)((*((_QWORD *)DeviceHdev + 319) + 24LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)DeviceHdev + 319) >> 64));
        else
          v15 = (struct _SURFOBJ *)v14;
        v13 = DeviceHdev;
        v22 = DeviceHdev;
      }
    }
    if ( *((_QWORD *)v13 + 360) )
    {
      v17 = PDEVOBJ::Escape((PDEVOBJ *)&v22, v15, v8, v7, a4, a5, a6);
      if ( gbWndobjUpdate )
      {
        gbWndobjUpdate = 0;
        vForceClientRgnUpdate();
      }
    }
    else
    {
LABEL_11:
      v17 = 0;
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19);
    if ( v20[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v20);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v21);
    UserLeaveUserCritSec();
    return v17;
  }
  else
  {
    EngSetLastError(6u);
    return 0LL;
  }
}
