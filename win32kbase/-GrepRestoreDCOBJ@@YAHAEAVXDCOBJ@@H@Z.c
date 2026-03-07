__int64 __fastcall GrepRestoreDCOBJ(struct XDCOBJ *a1, int a2)
{
  unsigned int v4; // r15d
  _QWORD *v5; // r13
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // rbx
  int v9; // r14d
  __int64 v10; // rcx
  int v11; // r12d
  __int64 v12; // rcx
  int v13; // eax
  DC *v14; // rcx
  HPALETTE v15; // rdx
  __int64 v16; // rax
  DC *v17; // rcx
  __int64 v18; // rdx
  int v19; // ecx
  __int64 v20; // r8
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // ecx
  DC *v25; // [rsp+30h] [rbp-20h] BYREF
  int v26; // [rsp+38h] [rbp-18h]
  int v27; // [rsp+3Ch] [rbp-14h]
  __int64 v28; // [rsp+40h] [rbp-10h]
  char v29; // [rsp+48h] [rbp-8h]
  __int64 v30; // [rsp+90h] [rbp+40h] BYREF
  HSEMAPHORE v31; // [rsp+A0h] [rbp+50h] BYREF

  v4 = 1;
  v5 = *(_QWORD **)(SGDGetSessionState(a1) + 24);
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  v7 = *(_DWORD *)(v6 + 152);
  if ( (v7 & 0x1000) != 0 )
    GreDCSelectBrush(*(_QWORD *)a1, *(_QWORD *)(v6 + 160));
  if ( (v7 & 0x2000) != 0 )
    GreDCSelectPen(*(DC **)a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 168LL));
  if ( a2 < 0 )
    a2 += *(_DWORD *)(*(_QWORD *)a1 + 104LL);
  if ( a2 < 1 || a2 >= *(_DWORD *)(*(_QWORD *)a1 + 104LL) )
  {
    EngSetLastError(0x57u);
    return 0;
  }
  else
  {
    v8 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
    if ( (*(_DWORD *)(v8 + 40) & 1) != 0 )
      GreLockVisRgn(v8);
    v9 = *(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x800;
    if ( v9 )
      DC::bMakeInfoDC(*(DC **)a1, 0);
    v10 = *(_QWORD *)a1;
    v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 104LL);
    while ( 1 )
    {
      v26 = 0;
      LOBYTE(v6) = 1;
      v27 = 0;
      v25 = 0LL;
      v25 = (DC *)HmgLockIgnoreOwner(*(_QWORD *)(v10 + 112), v6);
      if ( !v25 )
        break;
      DEC_SHARE_REF_CNT_LAZY0(*(struct HOBJ__ ***)(*(_QWORD *)a1 + 136LL));
      DEC_SHARE_REF_CNT_LAZY0(*(struct HOBJ__ ***)(*(_QWORD *)a1 + 144LL));
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct HOBJ__ ***)(*(_QWORD *)a1 + 152LL));
      DEC_SHARE_REF_CNT(*(struct OBJECT **)(*(_QWORD *)a1 + 96LL));
      vRestoreRegion(a1, (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 104LL) - 1));
      if ( qword_1C02D58C0 && (int)qword_1C02D58C0() >= 0 && qword_1C02D58C8 )
        qword_1C02D58C8(a1, (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 104LL) - 1));
      v12 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
      if ( v12 )
      {
        if ( *(_DWORD *)(*(_QWORD *)a1 + 32LL) == 1 )
        {
          hbmSelectBitmapInternal((DC **)a1, *(HBITMAP *)(v5[396] + 168LL), 1, 0, 1);
        }
        else
        {
          v13 = *(_DWORD *)(v12 + 112);
          if ( (v13 & 0x800) != 0 )
          {
            DEC_SHARE_REF_CNT((struct OBJECT *)v12);
          }
          else if ( v13 >= 0 )
          {
            SURFACE::vDec_cRef((SURFACE *)v12);
          }
        }
      }
      v31 = (HSEMAPHORE)v5[5];
      EngAcquireSemaphore(v31);
      v14 = v25;
      v15 = (HPALETTE)*((_QWORD *)v25 + 10);
      if ( *(HPALETTE *)(*(_QWORD *)a1 + 80LL) != v15 )
      {
        SelectPaletteWorker(a1, v15, 1);
        v14 = v25;
      }
      if ( *(_QWORD *)(*(_QWORD *)a1 + 88LL) != *((_QWORD *)v14 + 11) )
      {
        EPALOBJ::EPALOBJ((EPALOBJ *)&v30, *(HPALETTE *)(*(_QWORD *)a1 + 80LL));
        *((_QWORD *)v25 + 11) = v30;
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v30);
        v14 = v25;
      }
      v16 = *((_QWORD *)v14 + 11);
      if ( v16 != v5[750] )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v16 + 56));
        v14 = v25;
      }
      DC::vCopyTo(v14, (DC **)a1);
      XDCOBJ::vDeleteCore((__int64 **)&v25);
      SEMOBJ::vUnlock((PERESOURCE *)&v31);
      if ( v25 )
        XDCOBJ::vUnlockFast((XDCOBJ *)&v25);
      v10 = *(_QWORD *)a1;
      if ( a2 >= *(_DWORD *)(*(_QWORD *)a1 + 104LL) )
        goto LABEL_38;
    }
    EngSetLastError(6u);
    v4 = 0;
    if ( v25 )
      XDCOBJ::vUnlockFast((XDCOBJ *)&v25);
LABEL_38:
    v17 = *(DC **)a1;
    if ( v11 != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 104LL) )
    {
      *((_DWORD *)v17 + 63) |= 1u;
      v17 = *(DC **)a1;
    }
    if ( v9 )
      DC::bMakeInfoDC(v17, 1);
    DC::vReleaseRao(*(DC **)a1);
    DC::AcquireDcVisRgnShared(*(DC **)a1);
    DC::vUpdate_VisRect(*(DC **)a1, *(struct REGION **)(*(_QWORD *)a1 + 1136LL));
    if ( v29 )
      GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(v28 + 1112));
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0x12001Fu;
    if ( *(_DWORD *)(*(_QWORD *)a1 + 32LL) == 1 )
      DC::bSetDefaultRegion(*(DC **)a1);
    v18 = *(_QWORD *)a1;
    v19 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    v20 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
    if ( (v19 & 1) != 0
      || *(_DWORD *)(v18 + 32) == 1
      && v20
      && ((v21 = *(_DWORD *)(v20 + 112), (v21 & 0x4000) != 0) || (v21 & 0x800000) != 0
                                                              && (*(_DWORD *)(v8 + 40) & 1) != 0) )
    {
      *(_DWORD *)(v18 + 36) = v19 | 0x200;
      v18 = *(_QWORD *)a1;
      v23 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
      if ( (*(_DWORD *)(v20 + 112) & 0x200) != 0 )
        v22 = v23 | 0x8000;
      else
        v22 = v23 & 0xFFFF7FFF;
    }
    else
    {
      v22 = v19 & 0xFFFFFDFF;
    }
    *(_DWORD *)(v18 + 36) = v22;
    DC::vCalcFillOrigin(*(DC **)a1);
    if ( (*(_DWORD *)(v8 + 40) & 1) != 0 )
      GreUnlockVisRgn(v8);
  }
  return v4;
}
