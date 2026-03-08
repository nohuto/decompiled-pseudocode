/*
 * XREFs of ?ProcessSetSurfaces@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMIPMAPSURFACE_SETSURFACES@@PEBXI@Z @ 0x180220EBC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180049354 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18012B8B0 (-IsEquivalentTo@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CCompositionMipmapSurface::ProcessSetSurfaces(
        CCompositionMipmapSurface *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONMIPMAPSURFACE_SETSURFACES *a3,
        _DWORD *a4)
{
  CResourceTable *v7; // r8
  __int64 v8; // rax
  unsigned __int64 ResourceWithoutType; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rbp
  int v12; // eax
  __int64 v13; // rbp
  struct CResource *v14; // r12
  struct CResource *v15; // rax
  __int64 v16; // r9
  __int64 v17; // r13
  struct CResource *v18; // r10
  __int64 v19; // r11
  __int64 v20; // r14
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rbx
  struct CResource *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v28; // [rsp+20h] [rbp-68h]
  int v29; // [rsp+30h] [rbp-58h]
  _DWORD v30[20]; // [rsp+38h] [rbp-50h] BYREF
  int v31; // [rsp+90h] [rbp+8h]
  int v33; // [rsp+A0h] [rbp+18h]
  unsigned int v35; // [rsp+B0h] [rbp+28h]

  v7 = a2;
  v8 = *((_QWORD *)this + 13) - *((_QWORD *)this + 12);
  ResourceWithoutType = *((unsigned int *)a3 + 2);
  if ( ResourceWithoutType > v8 >> 5 )
  {
    v28 = 230;
    goto LABEL_3;
  }
  v11 = 0LL;
  if ( (_DWORD)ResourceWithoutType )
  {
    while ( 1 )
    {
      ResourceWithoutType = (unsigned __int64)CResourceTable::GetResourceWithoutType(v7, a4[6 * v11 + 1]);
      if ( a4[6 * v11] >= *((_DWORD *)this + 34)
        || ResourceWithoutType
        && !(*(unsigned __int8 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
              ResourceWithoutType,
              42LL) )
      {
        break;
      }
      v12 = a4[6 * v11 + 2];
      if ( v12 < 0 )
        break;
      ResourceWithoutType = (unsigned int)a4[6 * v11 + 3];
      if ( (ResourceWithoutType & 0x80000000) != 0LL
        || a4[6 * v11 + 4] < v12
        || a4[6 * v11 + 5] < (int)ResourceWithoutType )
      {
        break;
      }
      LODWORD(ResourceWithoutType) = *((_DWORD *)a3 + 2);
      v11 = (unsigned int)(v11 + 1);
      v7 = a2;
      if ( (unsigned int)v11 >= (unsigned int)ResourceWithoutType )
        goto LABEL_14;
    }
    v28 = 258;
LABEL_3:
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(ResourceWithoutType, 0LL, 0, -2003303421, v28, 0LL);
    return v10;
  }
LABEL_14:
  v13 = 0LL;
  if ( !(_DWORD)ResourceWithoutType )
    return 0;
  while ( 1 )
  {
    v14 = 0LL;
    v15 = CResourceTable::GetResourceWithoutType(v7, a4[6 * v13 + 1]);
    v17 = (unsigned int)a4[2 * v16];
    v18 = v15;
    v35 = a4[2 * v16 + 2];
    v30[0] = v35;
    v31 = a4[2 * v16 + 3];
    v30[1] = v31;
    v33 = a4[2 * v16 + 4];
    v30[2] = v33;
    v29 = a4[2 * v16 + 5];
    v30[3] = v29;
    if ( v15 )
    {
      v19 = *((_QWORD *)this + 12);
      v20 = 32LL * (unsigned int)v17;
      v14 = v15;
      if ( *(struct CResource **)(v20 + v19) != v15
        || !TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEquivalentTo(
              (_DWORD *)(v20 + v19 + 8),
              v30) )
      {
        *(_BYTE *)(v20 + v19 + 24) = 1;
        *((_BYTE *)this + 160) = 1;
        if ( *(struct CResource **)(v20 + *((_QWORD *)this + 12)) != v18 )
          break;
      }
    }
LABEL_22:
    v13 = (unsigned int)(v13 + 1);
    v25 = 32 * v17;
    *(_QWORD *)(v25 + *((_QWORD *)this + 12)) = v14;
    v26 = *((_QWORD *)this + 12);
    *(_DWORD *)(v25 + v26 + 8) = v35;
    *(_DWORD *)(v25 + v26 + 12) = v31;
    *(_DWORD *)(v25 + v26 + 16) = v33;
    *(_DWORD *)(v25 + v26 + 20) = v29;
    if ( (unsigned int)v13 >= *((_DWORD *)a3 + 2) )
      return 0;
    v7 = a2;
  }
  v21 = CResource::RegisterNotifier(this, v18);
  v10 = v21;
  if ( v21 >= 0 )
  {
    v23 = *((_QWORD *)this + 12);
    v24 = *(struct CResource **)(v20 + v23);
    if ( v24 )
    {
      CResource::UnRegisterNotifierInternal(this, v24);
      *(_QWORD *)(v20 + v23) = 0LL;
    }
    goto LABEL_22;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x11Du, 0LL);
  return v10;
}
