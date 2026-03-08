/*
 * XREFs of ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C00284DC
 * Callers:
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C002A9BC (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C007DD9C (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C002822C (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C00286CC (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C002968C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C0029D88 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C002A404 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C002D794 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00D790C (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C00DDA98 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 */

__int64 __fastcall hspCreateDwmSpriteObj(Gre::Base *a1, __int64 a2, HDEV a3, int a4)
{
  __int64 v7; // rbx
  struct Gre::Base::SESSION_GLOBALS *v8; // r15
  __int64 Object; // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  HSPRITE v16; // rcx
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  struct _RTL_GENERIC_TABLE *v20; // rcx
  HLSURF LogicalSurfaceObject; // rax
  HDEV v22; // rdx
  HSPRITE NeighborSprite; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int8 NewElement[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v31; // [rsp+28h] [rbp-48h] BYREF
  __int64 v32; // [rsp+30h] [rbp-40h] BYREF
  struct SFMLOGICALSURFACE *v33; // [rsp+38h] [rbp-38h] BYREF
  int v34; // [rsp+40h] [rbp-30h]
  _QWORD Buffer[2]; // [rsp+48h] [rbp-28h] BYREF
  Gre::Base *v36; // [rsp+58h] [rbp-18h] BYREF
  __int128 v37; // [rsp+60h] [rbp-10h]

  v37 = 0LL;
  v7 = 0LL;
  v8 = Gre::Base::Globals(a1);
  Object = AllocateObject(152LL, 15LL);
  v10 = (_QWORD *)Object;
  if ( !Object )
    return v7;
  v11 = (_QWORD *)(Object + 24);
  NewElement[0] = 0;
  *(_QWORD *)(Object + 32) = Object + 24;
  *(_QWORD *)(Object + 24) = Object + 24;
  v12 = *((_QWORD *)v8 + 38);
  v32 = 0LL;
  ++*(_DWORD *)(v12 + 96);
  if ( !HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v32, (struct OBJECT *)v10, 0xFu, 8u) )
    goto LABEL_11;
  v14 = *v10;
  LOBYTE(v13) = 15;
  NewElement[0] = 1;
  HmgMarkUndeletable(v14, v13);
  v15 = *((_QWORD *)v8 + 38);
  v16 = *(HSPRITE *)(v15 + 144);
  if ( v16 )
  {
    NeighborSprite = hspGetNeighborSprite(v16, 0, 0);
    if ( NeighborSprite )
    {
      v31 = 0LL;
      DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v31, NeighborSprite);
      v25 = v31;
      v26 = (v31 + 24) & -(__int64)(v31 != 0);
      v27 = *(_QWORD *)v26;
      if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) == v26 )
      {
        *v11 = v27;
        v11[1] = v26;
        *(_QWORD *)(v27 + 8) = v11;
        *(_QWORD *)v26 = v11;
        if ( v25 )
          _InterlockedDecrement((volatile signed __int32 *)(v25 + 12));
        goto LABEL_6;
      }
    }
    else
    {
      v28 = *((_QWORD *)v8 + 38) + 80LL;
      v29 = *(_QWORD *)v28;
      if ( *(_QWORD *)(*(_QWORD *)v28 + 8LL) == v28 )
      {
        *v11 = v29;
        v11[1] = v28;
        *(_QWORD *)(v29 + 8) = v11;
        *(_QWORD *)v28 = v11;
        goto LABEL_6;
      }
    }
LABEL_25:
    __fastfail(3u);
  }
  v17 = *(_QWORD **)(v15 + 88);
  v18 = v15 + 80;
  if ( *v17 != v18 )
    goto LABEL_25;
  *v11 = v18;
  v11[1] = v17;
  *v17 = v11;
  *(_QWORD *)(v18 + 8) = v11;
LABEL_6:
  if ( a1 )
  {
    v19 = *v10;
    v10[5] = a1;
    v20 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)v8 + 38);
    Buffer[1] = v19;
    Buffer[0] = a1;
    RtlInsertElementGenericTable(v20, Buffer, 0x10u, NewElement);
  }
  if ( !NewElement[0] )
    goto LABEL_18;
  EtwDwmSpriteCreateEvent(a1, *v10);
  v36 = a1;
  LogicalSurfaceObject = hlsurfCreateLogicalSurfaceObject(
                           a3,
                           (unsigned int)(a4 != 0) + 4,
                           (struct _CD_HLSURF_CREATIONCONTEXT *)&v36);
  if ( LogicalSurfaceObject )
  {
    v33 = 0LL;
    v34 = 0;
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v33, LogicalSurfaceObject);
    DWMSPRITE::SetLogicalSurface((DWMSPRITE *)v10, v22, v33);
    SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)&v33);
  }
  else
  {
    NewElement[0] = 0;
  }
LABEL_11:
  if ( !NewElement[0] )
LABEL_18:
    _InterlockedIncrement((volatile signed __int32 *)v10 + 3);
  if ( v32 )
    _InterlockedDecrement((volatile signed __int32 *)(v32 + 12));
  if ( NewElement[0] )
  {
    GreInitializePushLock(v10 + 11);
    v7 = *v10;
    v10[6] = a2;
  }
  else
  {
    vspDestroyDwmSpriteObjInternal(a3, 1, (struct DWMSPRITE *)v10);
  }
  return v7;
}
