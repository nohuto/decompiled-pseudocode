/*
 * XREFs of ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00845C0
 * Callers:
 *     ?SetReferenceProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0009490 (-SetReferenceProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetReferenceProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00098F0 (-SetReferenceProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPE.c)
 *     ?SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00149A0 (-SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 *     ?SetReferenceProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C021C5E0 (-SetReferenceProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetReferenceProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0227440 (-SetReferenceProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationCh.c)
 *     ?SetReferenceProperty@CSceneVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0227DE0 (-SetReferenceProperty@CSceneVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetReferenceProperty@CSuperWetInkVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0227EA0 (-SetReferenceProperty@CSuperWetInkVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChanne.c)
 *     ?SetReferenceProperty@CRedirectVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0233B40 (-SetReferenceProperty@CRedirectVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCResourceMarshaler@2@_NPEA_N@Z @ 0x1C00848A8 (-SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCReso.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqqxx_EtwWriteTransfer @ 0x1C021BD30 (McTemplateK0qqqxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetReferenceProperty(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v9; // edi
  struct DirectComposition::CResourceMarshaler **v10; // rsi
  unsigned int v11; // r14d
  int v12; // r13d
  struct DirectComposition::CResourceMarshaler *v13; // rdx
  char v15; // al
  int v16; // ecx
  char v17; // al
  int v18; // ecx
  char v19; // al
  int v20; // ecx
  char v21; // al
  int v22; // ecx
  char v23; // al
  int v24; // ecx
  int v25; // r10d
  char v26; // al
  int v27; // ecx

  v9 = 0;
  v10 = 0LL;
  *a5 = 0;
  v11 = 0;
  v12 = 0;
  switch ( a3 )
  {
    case 3:
      if ( a4 )
      {
        v15 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                a4,
                186LL);
        v16 = 0;
        if ( !v15 )
          v16 = -1073741811;
        v9 = v16;
      }
      v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 144);
      v11 = 256;
      break;
    case 4:
      goto LABEL_3;
    case 5:
      if ( a4 )
      {
        v23 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                a4,
                54LL);
        v24 = 0;
        if ( !v23 )
          v24 = -1073741811;
        v9 = v24;
      }
      v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 160);
      v11 = 1024;
      break;
    case 6:
      if ( a4 )
      {
        v21 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                a4,
                65LL);
        v22 = 0;
        if ( !v21 )
          v22 = -1073741811;
        v9 = v22;
      }
      v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 168);
      v11 = 4096;
      break;
    case 10:
      if ( a4 )
      {
        v19 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                a4,
                45LL);
        v20 = 0;
        if ( !v19 )
          v20 = -1073741811;
        v9 = v20;
      }
      v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 176);
      if ( v9 < 0 )
        v10 = 0LL;
      v11 = ((v9 >> 31) & 0xFFFFF800) + 2048;
      break;
    case 23:
      if ( a4 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                a4,
                87LL) )
        {
          v9 = -1073741811;
LABEL_55:
          v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 224);
          v11 = 0x100000;
          break;
        }
        v25 = *((_DWORD *)a4 + 8);
      }
      else
      {
        v25 = 0;
      }
      if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000000LL) != 0 )
        McTemplateK0qqqxx_EtwWriteTransfer(
          v25,
          0,
          *((_DWORD *)this + 8),
          *((_DWORD *)a2 + 7),
          *((_DWORD *)this + 8),
          v25,
          *((_DWORD *)this + 8),
          v25);
      goto LABEL_55;
    case 39:
LABEL_3:
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
              a4,
              195LL)
        && (a3 == 4
         || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
               a4,
               199LL)) )
      {
        return (unsigned int)-1073741811;
      }
      v9 = DirectComposition::CVisualMarshaler::SetTransformParent(this, a2, a4, a3 == 39, a5);
      break;
    case 40:
      if ( a4 )
      {
        v17 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                a4,
                15LL);
        v18 = 0;
        if ( !v17 )
          v18 = -1073741811;
        v9 = v18;
      }
      v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 232);
      v11 = 0x4000000;
      break;
    case 50:
      if ( a4 )
      {
        v26 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                a4,
                201LL);
        v27 = 0;
        if ( !v26 )
          v27 = -1073741811;
        v9 = v27;
      }
      v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 240);
      v12 = 4;
      break;
    default:
      return (unsigned int)-1073741811;
  }
  if ( v9 >= 0 && a3 != 4 && a3 != 39 )
  {
    v13 = *v10;
    if ( *v10 != a4 )
    {
      if ( v13 )
      {
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v13);
        *v10 = 0LL;
      }
      if ( a4 )
      {
        *v10 = a4;
        DirectComposition::CResourceMarshaler::AddRef(a4);
      }
      *((_DWORD *)this + 4) |= v11;
      *((_DWORD *)this + 94) |= v12;
      *a5 = 1;
    }
  }
  return (unsigned int)v9;
}
