/*
 * XREFs of ?ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETTEMPLATE@@@Z @ 0x18003E4B0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x18003F4C4 (-TryCreateEffectInstance@CEffectBrush@@AEAAJXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x1800B5D70 (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C3DD8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetTemplate(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EFFECTBRUSH_SETTEMPLATE *a3)
{
  struct CResource *Resource; // rax
  unsigned int v6; // ecx
  struct CResource *v7; // rsi
  int EffectInstance; // eax
  unsigned int v9; // ebx
  unsigned int v10; // r15d
  int v11; // ebp
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v15; // r9d
  int v16; // eax
  int v17; // esi
  unsigned int v18; // ecx
  unsigned int v19; // [rsp+20h] [rbp-28h]
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  Resource = (struct CResource *)CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 28LL);
  v7 = Resource;
  if ( !Resource )
  {
    CEffectBrush::ReleaseResources(this);
    goto LABEL_10;
  }
  if ( *((_QWORD *)this + 12) )
  {
    v9 = -2003303422;
    v15 = -2003303422;
    v19 = 189;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v15, v19, 0LL);
    return v9;
  }
  EffectInstance = CResource::RegisterNotifier(this, Resource);
  v9 = EffectInstance;
  if ( EffectInstance < 0 )
  {
    v19 = 194;
LABEL_22:
    v15 = EffectInstance;
    goto LABEL_13;
  }
  *((_QWORD *)this + 12) = v7;
  v10 = *((_DWORD *)a3 + 3);
  v11 = 0;
  if ( !v10 )
  {
LABEL_9:
    EffectInstance = CEffectBrush::TryCreateEffectInstance(this);
    v9 = EffectInstance;
    if ( EffectInstance >= 0 )
    {
LABEL_10:
      v9 = 0;
      (*(void (__fastcall **)(CEffectBrush *, _QWORD, CEffectBrush *))(*(_QWORD *)this + 72LL))(this, 0LL, this);
      return v9;
    }
    v19 = 204;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v12 = *((_DWORD *)this + 36);
    v20 = 0LL;
    v13 = v12 + 1;
    if ( v12 + 1 < v12 )
      break;
    if ( v13 > *((_DWORD *)this + 35) )
    {
      v16 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 120, 8LL, 1LL, &v20);
      v17 = v16;
      v9 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v16, 0xC0u, 0LL);
        goto LABEL_19;
      }
    }
    else
    {
      v6 = v12;
      *(_QWORD *)(*((_QWORD *)this + 15) + 8LL * v12) = 0LL;
      *((_DWORD *)this + 36) = v13;
    }
    if ( ++v11 >= v10 )
      goto LABEL_9;
  }
  v9 = -2147024362;
  v17 = -2147024362;
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_19:
  MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xC9u, 0LL);
  return v9;
}
