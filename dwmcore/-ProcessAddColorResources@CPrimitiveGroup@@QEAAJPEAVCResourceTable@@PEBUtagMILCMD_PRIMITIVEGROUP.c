/*
 * XREFs of ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x1802450F0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x180013664 (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180049354 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C3DD8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800E0D3C (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAddColorResources(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES *a3,
        unsigned int *a4)
{
  unsigned int v4; // ebx
  int v5; // ebp
  struct CResource *ResourceWithoutType; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // r8d
  int v16; // edi
  int v17; // eax
  __int64 v18; // rcx
  __int64 v20; // rcx
  struct CResource *v21; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  if ( *((_DWORD *)a3 + 2) )
  {
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
      v21 = ResourceWithoutType;
      v11 = (__int64)ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
              ResourceWithoutType,
              128LL) )
      {
        break;
      }
      v12 = CResource::RegisterNotifier(this, v21);
      v4 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x120u, 0LL);
        goto LABEL_17;
      }
      v14 = *((_DWORD *)this + 56);
      v15 = v14 + 1;
      if ( v14 + 1 < v14 )
      {
        v4 = -2147024362;
        v16 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024362, 0xB5u, 0LL);
        goto LABEL_14;
      }
      v16 = 0;
      if ( v15 > *((_DWORD *)this + 55) )
      {
        v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 200, 8, 1, &v21);
        v16 = v17;
        v4 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xC0u, 0LL);
LABEL_14:
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v16, 0x122u, 0LL);
          CResource::UnRegisterNotifierInternal(this, v21);
          goto LABEL_17;
        }
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 25) + 8LL * v14) = v21;
        *((_DWORD *)this + 56) = v15;
      }
      v4 = v16;
      ++a4;
      if ( (unsigned int)++v5 >= *((_DWORD *)a3 + 2) )
        goto LABEL_10;
    }
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x118u, 0LL);
LABEL_17:
    CPrimitiveGroup::ReleaseColorResources(this);
  }
  else
  {
LABEL_10:
    CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
  }
  return v4;
}
