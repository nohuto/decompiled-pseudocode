/*
 * XREFs of ?InitLayoutOperation@TabletModePositioner@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180468190
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1804681E4 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 */

__int64 __fastcall TabletModePositioner::InitLayoutOperation(
        TabletModePositioner *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  int inited; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 36) != 1 )
    return 2147947423LL;
  inited = TabletModePositioner::InitLayoutOperationHelper((IUnknown *)this - 11, a2, a3, a4);
  v6 = inited;
  if ( inited >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x293,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)inited);
  return v6;
}
