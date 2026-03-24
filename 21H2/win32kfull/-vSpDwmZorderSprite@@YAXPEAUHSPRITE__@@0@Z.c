/*
 * XREFs of ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1C00BE768
 * Callers:
 *     GreZorderSprite @ 0x1C00BE214 (GreZorderSprite.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C00EBDC4 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00BE3CC (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     DwmAsyncZorderSprite @ 0x1C00BE8C0 (DwmAsyncZorderSprite.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C016A6E4 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall vSpDwmZorderSprite(HSPRITE a1, HSPRITE a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // rax
  void *v13; // rax
  _BYTE v14[32]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+40h] [rbp-30h]
  _BYTE v16[32]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v17; // [rsp+68h] [rbp-8h]

  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v14);
  v15 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v14, a1);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v16);
  v17 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v16, a2);
  if ( v15 )
  {
    v4 = v15 + 24;
    v5 = *(_QWORD *)(v15 + 24);
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) == v4 )
    {
      v6 = *(_QWORD **)(v15 + 32);
      if ( *v6 == v4 )
      {
        *v6 = v5;
        *(_QWORD *)(v5 + 8) = v6;
        v7 = v15 + 24;
        if ( v17 )
        {
          v8 = (_QWORD *)(v17 + 24);
          v9 = (_QWORD *)(v7 & -(__int64)(v15 != 0));
          v10 = *(_QWORD **)(v17 + 24);
          if ( v10[1] == v17 + 24 )
          {
            *v9 = v10;
            v9[1] = v8;
            v10[1] = v9;
            *v8 = v9;
LABEL_9:
            v13 = (void *)UserReferenceDwmApiPort(v10);
            DwmAsyncZorderSprite(v13);
            goto LABEL_10;
          }
        }
        else
        {
          v11 = (_QWORD *)(v7 & -(__int64)(v15 != 0));
          v10 = (_QWORD *)((char *)g_pDwmState + 80);
          v12 = *((_QWORD *)g_pDwmState + 10);
          if ( *(struct DwmState **)(v12 + 8) == (struct DwmState *)((char *)g_pDwmState + 80) )
          {
            *v11 = v12;
            v11[1] = v10;
            *(_QWORD *)(v12 + 8) = v11;
            *v10 = v11;
            goto LABEL_9;
          }
        }
      }
    }
    __fastfail(3u);
  }
LABEL_10:
  if ( v17 )
    _InterlockedDecrement((volatile signed __int32 *)(v17 + 12));
  v17 = 0LL;
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v16);
  if ( v15 )
    _InterlockedDecrement((volatile signed __int32 *)(v15 + 12));
  v15 = 0LL;
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v14);
}
