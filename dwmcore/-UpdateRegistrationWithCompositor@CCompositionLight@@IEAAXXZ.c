/*
 * XREFs of ?UpdateRegistrationWithCompositor@CCompositionLight@@IEAAXXZ @ 0x1800C718C
 * Callers:
 *     ?ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE@@@Z @ 0x1800C6F1C (-ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMP.c)
 *     ?ProcessSetCoordinateSpace@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE@@@Z @ 0x1800C6F88 (-ProcessSetCoordinateSpace@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSI.c)
 *     ?ProcessSetEnabled@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_SETENABLED@@@Z @ 0x18021626C (-ProcessSetEnabled@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_SE.c)
 *     ?ProcessSetCoordinateSpace@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETCOORDINATESPACE@@@Z @ 0x1802219EC (-ProcessSetCoordinateSpace@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C3DD8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCompositionLight::UpdateRegistrationWithCompositor(CCompositionLight *this)
{
  unsigned int v1; // ebx
  bool v3; // zf
  char v4; // al
  __int64 v5; // r10
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // rcx
  CCompositionLight *v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( !*((_BYTE *)this + 169) )
  {
    if ( !*((_BYTE *)this + 170)
      || (v3 = (*(__int64 (__fastcall **)(CCompositionLight *))(*(_QWORD *)this + 200LL))(this) == 0, v4 = 1, v3) )
    {
      v4 = 0;
    }
    if ( *((_BYTE *)this + 171) != v4 )
    {
      v5 = *((_QWORD *)this + 2) + 1048LL;
      *((_BYTE *)this + 171) = v4;
      if ( v4 )
      {
        v6 = *(_DWORD *)(v5 + 24);
        v13 = this;
        v7 = v6 + 1;
        if ( v6 + 1 < v6 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024362, 0xB5u, 0LL);
        }
        else if ( v7 > *(_DWORD *)(v5 + 20) )
        {
          v8 = DynArrayImpl<0>::AddMultipleAndSet(v5, 8, 1, &v13);
          if ( v8 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xC0u, 0LL);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)v5 + 8LL * v6) = this;
          *(_DWORD *)(v5 + 24) = v7;
        }
      }
      else
      {
        v10 = *(_DWORD *)(v5 + 24);
        v11 = *(_QWORD *)v5;
        if ( v10 )
        {
          do
          {
            if ( this == *(CCompositionLight **)(v11 + 8LL * v1) )
              break;
            ++v1;
          }
          while ( v1 < v10 );
        }
        if ( v1 < v10 )
        {
          for ( ; v1 < v10 - 1; v10 = *(_DWORD *)(v5 + 24) )
          {
            v12 = v1++;
            *(_QWORD *)(v11 + 8 * v12) = *(_QWORD *)(v11 + 8LL * v1);
          }
          *(_DWORD *)(v5 + 24) = v10 - 1;
        }
      }
    }
  }
}
