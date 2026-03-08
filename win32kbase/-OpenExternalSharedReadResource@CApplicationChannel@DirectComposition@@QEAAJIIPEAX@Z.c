/*
 * XREFs of ?OpenExternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C00A1588
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0066180 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?RegisterExternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IIW4RegistrationReason@12@@Z @ 0x1C00A1690 (-RegisterExternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@I.c)
 *     ?OpenInternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIPEBUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1C00A1700 (-OpenInternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIPEBUResourceObject@.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C00A17F4 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C00A7DB4 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::OpenExternalSharedReadResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        unsigned int a3,
        void *a4)
{
  int v7; // r9d
  volatile signed __int32 *v8; // r10
  signed __int32 v9; // eax
  const struct DirectComposition::ResourceObject *v10; // rdi
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  struct DirectComposition::CResourceMarshaler *v13; // [rsp+38h] [rbp-10h] BYREF

  v13 = 0LL;
  Object = 0LL;
  v7 = DirectComposition::ResourceObject::ResolveHandle(a4, 1u, 1, (struct DirectComposition::ResourceObject **)&Object);
  if ( v7 < 0 )
    return (unsigned int)v7;
  if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((unsigned int *)Object + 9), a3) )
  {
    ObfDereferenceObject((PVOID)v8);
    return (unsigned int)-1073741811;
  }
  if ( a3 != 196 )
  {
    _InterlockedCompareExchange(v8 + 14, 1, 0);
    if ( *((_DWORD *)v8 + 14) != 1 )
    {
      ObfDereferenceObject(Object);
      return (unsigned int)-1073741790;
    }
    v10 = (const struct DirectComposition::ResourceObject *)Object;
    goto LABEL_7;
  }
  _InterlockedCompareExchange(v8 + 14, 2, 0);
  v9 = _InterlockedCompareExchange(v8 + 14, 3, 2);
  v10 = (const struct DirectComposition::ResourceObject *)Object;
  if ( v9 != 2 )
  {
    ObfDereferenceObject(Object);
    v7 = -1073741790;
  }
  if ( v7 >= 0 )
  {
LABEL_7:
    v7 = DirectComposition::CApplicationChannel::OpenInternalSharedReadResource(this, a3, v10, &v13);
    if ( v7 >= 0 )
      return (unsigned int)DirectComposition::CApplicationChannel::RegisterExternalResource(this, v13, a2, a3, 2);
  }
  return (unsigned int)v7;
}
