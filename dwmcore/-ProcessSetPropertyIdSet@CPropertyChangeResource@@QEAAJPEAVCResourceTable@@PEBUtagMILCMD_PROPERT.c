/*
 * XREFs of ?ProcessSetPropertyIdSet@CPropertyChangeResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYCHANGERESOURCE_SETPROPERTYIDSET@@@Z @ 0x1800F9188
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPropertyChangeResource::ProcessSetPropertyIdSet(
        CPropertyChangeResource *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROPERTYCHANGERESOURCE_SETPROPERTYIDSET *a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)this;
  *((_DWORD *)this + 18) = *((_DWORD *)a3 + 2);
  return (*(__int64 (**)(void))(v3 + 192))();
}
