/*
 * XREFs of ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C0015E5C
 * Callers:
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C00BFE7C (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00EA5BC (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C0015944 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0016104 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C00161E4 (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C00BCF78 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00BE198 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00BE3CC (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C00BEDD4 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C0115BB0 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C016A6E4 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C026D3F8 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

__int64 __fastcall hspCreateDwmSpriteObj(HWND a1, __int64 a2, HDEV a3, int a4)
{
  __int64 v4; // rbx
  __int64 v6; // r15
  __int64 Object; // rax
  _QWORD *v10; // rdi
  struct DwmState *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  HSPRITE v14; // rcx
  HSPRITE NeighborSprite; // r15
  __int64 *v16; // rdx
  __int64 v17; // rax
  struct DwmState **v18; // rcx
  __int64 v19; // rax
  struct DwmState **v20; // rcx
  __int64 v21; // rax
  HLSURF LogicalSurfaceObject; // rsi
  HDEV v23; // rdx
  HDEV v24; // rdx
  unsigned __int8 NewElement[8]; // [rsp+28h] [rbp-79h] BYREF
  _QWORD Buffer[2]; // [rsp+30h] [rbp-71h] BYREF
  _BYTE v28[32]; // [rsp+40h] [rbp-61h] BYREF
  unsigned __int64 v29; // [rsp+60h] [rbp-41h]
  HWND v30; // [rsp+68h] [rbp-39h] BYREF
  __int128 v31; // [rsp+70h] [rbp-31h]
  _BYTE v32[32]; // [rsp+80h] [rbp-21h] BYREF
  struct SFMLOGICALSURFACE *v33; // [rsp+A0h] [rbp-1h]
  int v34; // [rsp+A8h] [rbp+7h]
  _BYTE v35[32]; // [rsp+B0h] [rbp+Fh] BYREF
  __int64 v36; // [rsp+D0h] [rbp+2Fh]

  v4 = 0LL;
  v6 = a2;
  v31 = 0LL;
  Object = AllocateObject(176LL, 15LL, 1LL);
  v10 = (_QWORD *)Object;
  if ( !Object )
    return v4;
  v11 = (struct DwmState *)(Object + 24);
  NewElement[0] = 0;
  *(_QWORD *)(Object + 32) = Object + 24;
  *(_QWORD *)(Object + 24) = Object + 24;
  ++*((_DWORD *)g_pDwmState + 24);
  HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v35);
  if ( !HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v35, (struct OBJECT *)v10, 0xFu, 8u) )
    goto LABEL_21;
  v13 = *v10;
  LOBYTE(v12) = 15;
  NewElement[0] = 1;
  HmgMarkUndeletable(v13, v12);
  v14 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
  if ( !v14 )
  {
    v20 = (struct DwmState **)*((_QWORD *)g_pDwmState + 11);
    if ( *v20 == (struct DwmState *)((char *)g_pDwmState + 80) )
    {
      *(_QWORD *)v11 = (char *)g_pDwmState + 80;
      *((_QWORD *)v11 + 1) = v20;
      *v20 = v11;
      *((_QWORD *)g_pDwmState + 11) = v11;
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  NeighborSprite = hspGetNeighborSprite(v14, 0, 0);
  if ( NeighborSprite )
  {
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v28);
    v29 = 0LL;
    DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v28, NeighborSprite);
    v16 = (__int64 *)((v29 + 24) & ((unsigned __int128)-(__int128)v29 >> 64));
    v17 = *v16;
    if ( *(__int64 **)(*v16 + 8) == v16 )
    {
      *(_QWORD *)v11 = v17;
      *((_QWORD *)v11 + 1) = v16;
      *(_QWORD *)(v17 + 8) = v11;
      *v16 = (__int64)v11;
      if ( v29 )
        _InterlockedDecrement((volatile signed __int32 *)(v29 + 12));
      v29 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v28);
      goto LABEL_11;
    }
LABEL_13:
    __fastfail(3u);
  }
  v18 = (struct DwmState **)((char *)g_pDwmState + 80);
  v19 = *((_QWORD *)g_pDwmState + 10);
  if ( *(struct DwmState **)(v19 + 8) != (struct DwmState *)((char *)g_pDwmState + 80) )
    goto LABEL_13;
  *(_QWORD *)v11 = v19;
  *((_QWORD *)v11 + 1) = v18;
  *(_QWORD *)(v19 + 8) = v11;
  *v18 = v11;
LABEL_11:
  v6 = a2;
LABEL_15:
  if ( a1 )
  {
    v21 = *v10;
    v10[5] = a1;
    Buffer[0] = a1;
    Buffer[1] = v21;
    RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)g_pDwmState, Buffer, 0x10u, NewElement);
  }
  if ( !NewElement[0] )
    goto LABEL_22;
  EtwDwmSpriteCreateEvent(a1, *v10);
  v30 = a1;
  LogicalSurfaceObject = hlsurfCreateLogicalSurfaceObject(
                           a3,
                           (unsigned int)(a4 != 0) + 4,
                           (struct _CD_HLSURF_CREATIONCONTEXT *)&v30);
  if ( LogicalSurfaceObject )
  {
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v32);
    v33 = 0LL;
    v34 = 0;
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v32, LogicalSurfaceObject);
    DWMSPRITE::SetLogicalSurface((DWMSPRITE *)v10, v23, v33);
    SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v32);
  }
  else
  {
    NewElement[0] = 0;
  }
LABEL_21:
  if ( !NewElement[0] )
LABEL_22:
    _InterlockedIncrement((volatile signed __int32 *)v10 + 3);
  if ( v36 )
    _InterlockedDecrement((volatile signed __int32 *)(v36 + 12));
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v35);
  if ( NewElement[0] )
  {
    GreInitializePushLock(v10 + 11);
    v4 = *v10;
    v10[6] = v6;
  }
  else
  {
    LOBYTE(v24) = 1;
    vspDestroyDwmSpriteObjInternal(a3, v24, (struct DWMSPRITE *)v10);
  }
  return v4;
}
