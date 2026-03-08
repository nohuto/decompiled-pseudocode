/*
 * XREFs of ?ProcessSetIntegerProperty@CResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RESOURCE_SETINTEGERPROPERTY@@@Z @ 0x1801C2BC8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CResource::ProcessSetIntegerProperty(
        CResource *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RESOURCE_SETINTEGERPROPERTY *a3)
{
  return (*(__int64 (__fastcall **)(CResource *, _QWORD, _QWORD))(*(_QWORD *)this + 120LL))(
           this,
           *((unsigned int *)a3 + 2),
           *((_QWORD *)a3 + 2));
}
