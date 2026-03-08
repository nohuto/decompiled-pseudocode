/*
 * XREFs of ?InternalQueryInterface@CMILCOMBaseWeakRef@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180102AAC
 * Callers:
 *     ?QueryInterface@CLegacySwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180102AA0 (-QueryInterface@CLegacySwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@VIUnknownWeakRefSource@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180102AEC (-InternalQueryInterface@-$CMILCOMBaseT@VIUnknownWeakRefSource@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CMILCOMBaseWeakRef::InternalQueryInterface(
        CMILCOMBaseWeakRef *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_73f2a332_aba0_4b29_88bc_6ee79b3941bc.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_73f2a332_aba0_4b29_88bc_6ee79b3941bc.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_73f2a332_aba0_4b29_88bc_6ee79b3941bc.Data4;
    if ( v4 )
    {
      return CMILCOMBaseT<IUnknownWeakRefSource>::InternalQueryInterface(this);
    }
    else
    {
      *a3 = this;
      CMILRefCountImpl::AddReference((CMILCOMBaseWeakRef *)((char *)this + 8));
      return 0LL;
    }
  }
  return result;
}
