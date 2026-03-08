/*
 * XREFs of ?GetIntegratedDisplayLinkInfo@KernelDriver@@UEBAJAEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1C021A6D0
 * Callers:
 *     <none>
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1C0015614 (DpiFdoGetChildDescriptor.c)
 */

__int64 __fastcall KernelDriver::GetIntegratedDisplayLinkInfo(KernelDriver *this, struct _DXGK_MONITORLINKINFO *a2)
{
  _QWORD *ChildDescriptor; // rax
  __int64 v3; // r10
  int v4; // r8d
  __int64 v5; // rcx
  unsigned int v6; // ecx

  ChildDescriptor = DpiFdoGetChildDescriptor(
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 216LL) + 64LL),
                      *((_DWORD *)this + 8));
  v4 = 0;
  if ( ChildDescriptor && (v5 = ChildDescriptor[13]) != 0 )
  {
    *(_DWORD *)(v3 + 4) = *(_DWORD *)(v5 + 64);
    v6 = 0;
    v4 = *(_DWORD *)(ChildDescriptor[13] + 124LL);
  }
  else
  {
    *(_DWORD *)(v3 + 4) = 0;
    v6 = ChildDescriptor != 0LL ? -1071841279 : -1073741811;
  }
  *(_DWORD *)(v3 + 8) = v4;
  return v6;
}
