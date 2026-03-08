/*
 * XREFs of ?OpenExternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C00A13E8
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0066180 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?RegisterExternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IIW4RegistrationReason@12@@Z @ 0x1C00A1690 (-RegisterExternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@I.c)
 *     ?OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject@2@PEAPEAVCResourceMarshaler@2@@Z @ 0x1C00A1820 (-OpenInternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIPEAUResourceObject.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C00A7DB4 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::OpenExternalSharedWriteResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        unsigned int a3,
        void *a4)
{
  __int64 result; // rax
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  struct DirectComposition::CResourceMarshaler *v9; // [rsp+38h] [rbp-10h] BYREF

  v9 = 0LL;
  Object = 0LL;
  result = DirectComposition::ResourceObject::ResolveHandle(
             a4,
             2u,
             1,
             (struct DirectComposition::ResourceObject **)&Object);
  if ( (int)result >= 0 )
  {
    if ( *((_DWORD *)Object + 9) == a3 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)Object + 15, 1, 0) )
      {
        ObfDereferenceObject(Object);
        return 3221225506LL;
      }
      else
      {
        result = DirectComposition::CApplicationChannel::OpenInternalSharedWriteResource(
                   this,
                   (DirectComposition *)a3,
                   Object,
                   &v9);
        if ( (int)result >= 0 )
          return DirectComposition::CApplicationChannel::RegisterExternalResource(this, v9, a2, a3, 2);
      }
    }
    else
    {
      ObfDereferenceObject(Object);
      return 3221225485LL;
    }
  }
  return result;
}
