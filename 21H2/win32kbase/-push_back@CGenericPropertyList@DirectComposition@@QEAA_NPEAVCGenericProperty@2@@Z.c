/*
 * XREFs of ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x1C01D573C
 * Callers:
 *     ??$SetSimpleProperty@VCCallbackIdProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIIPEA_N@Z @ 0x1C01D3AA8 (--$SetSimpleProperty@VCCallbackIdProperty@DirectComposition@@@CGenericMarshaler@DirectCompositio.c)
 *     ??$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIMPEA_N@Z @ 0x1C01D3B74 (--$SetSimpleProperty@VCFloatProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IE.c)
 *     ??$SetSimpleProperty@VCHandleProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJIPEAXPEA_N@Z @ 0x1C01D3C4C (--$SetSimpleProperty@VCHandleProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@I.c)
 *     ??$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@IEAAJI_JPEA_N@Z @ 0x1C01D3D24 (--$SetSimpleProperty@VCIntegerProperty@DirectComposition@@@CGenericMarshaler@DirectComposition@@.c)
 *     ?SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01F6C30 (-SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPE.c)
 *     ?SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01F6D60 (-SetReferenceProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVC.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00295D0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 */

bool __fastcall DirectComposition::CGenericPropertyList::push_back(
        DirectComposition::CGenericPropertyList *this,
        struct DirectComposition::CGenericProperty *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdi
  void *v7; // rax
  void *v8; // rsi

  v4 = *((_QWORD *)this + 1);
  v5 = *((_QWORD *)this + 2);
  if ( v4 != v5 )
  {
LABEL_8:
    *(_QWORD *)(*(_QWORD *)this + 8 * v4) = a2;
    LOBYTE(v7) = 1;
    ++*((_QWORD *)this + 1);
    return (char)v7;
  }
  v6 = 4LL;
  if ( v5 )
    v6 = 2 * v5;
  v7 = (void *)Win32AllocPoolWithQuota(8 * v6, 0x70674344u);
  v8 = v7;
  if ( v7 )
  {
    if ( *(_QWORD *)this )
    {
      memmove(v7, *(const void **)this, 8LL * *((_QWORD *)this + 1));
      Win32FreePool(*(_QWORD *)this);
    }
    v4 = *((_QWORD *)this + 1);
    *(_QWORD *)this = v8;
    *((_QWORD *)this + 2) = v6;
    goto LABEL_8;
  }
  return (char)v7;
}
