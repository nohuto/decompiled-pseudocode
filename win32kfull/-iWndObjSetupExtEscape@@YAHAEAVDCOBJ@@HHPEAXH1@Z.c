/*
 * XREFs of ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0279D88
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1C02782F8 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0050D68 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?fBlockExtEscape@@YAHAEAVDCOBJ@@@Z @ 0x1C0279378 (-fBlockExtEscape@@YAHAEAVDCOBJ@@@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0289C70 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02B51BC (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C02E2F44 (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
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
  __int64 v20; // rcx
  struct _RECTL v21; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v22[32]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v23; // [rsp+70h] [rbp-9h] BYREF
  int v24; // [rsp+78h] [rbp-1h]
  int v25; // [rsp+7Ch] [rbp+3h]
  __int16 v26; // [rsp+80h] [rbp+7h]
  HDEV v27; // [rsp+D0h] [rbp+57h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) )
  {
    UserEnterUserCritSec();
    v23 = 0LL;
    v24 = 0;
    v25 = 0;
    v26 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v22, a1, 0);
    if ( (unsigned int)fBlockExtEscape(a1) )
      goto LABEL_15;
    v11 = *(_QWORD *)a1;
    v12 = *(HDEV *)(*(_QWORD *)a1 + 48LL);
    v13 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
    v27 = v12;
    v14 = (v13 + 24) & -(__int64)(v13 != 0);
    v15 = v12;
    v16 = (struct _SURFOBJ *)v14;
    if ( ((_DWORD)v12[10] & 0x20000) != 0 )
    {
      v21 = *(struct _RECTL *)(v11 + 1032);
      DeviceHdev = hdevFindDeviceHdev(v12, &v21, 0LL);
      v16 = (struct _SURFOBJ *)v14;
      v15 = v12;
      if ( DeviceHdev )
      {
        if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) == *((_QWORD *)v12 + 316) )
          v16 = (struct _SURFOBJ *)((*((_QWORD *)DeviceHdev + 316) + 24LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)DeviceHdev + 316) >> 64));
        else
          v16 = (struct _SURFOBJ *)v14;
        v27 = DeviceHdev;
        v15 = DeviceHdev;
      }
    }
    if ( !*((_QWORD *)v15 + 357) )
    {
LABEL_15:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v22);
      v18 = 0;
    }
    else
    {
      v18 = PDEVOBJ::Escape((PDEVOBJ *)&v27, v16, a2, a3, a4, a5, a6);
      v20 = *(_QWORD *)(SGDGetSessionState(v19) + 32);
      if ( *(_DWORD *)(v20 + 23660) )
      {
        *(_DWORD *)(v20 + 23660) = 0;
        vForceClientRgnUpdate();
      }
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v22);
      if ( v23 )
        DLODCOBJ::vUnlock((DLODCOBJ *)&v23);
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
