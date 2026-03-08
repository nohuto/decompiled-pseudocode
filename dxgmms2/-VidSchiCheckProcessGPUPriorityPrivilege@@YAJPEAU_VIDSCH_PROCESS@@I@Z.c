/*
 * XREFs of ?VidSchiCheckProcessGPUPriorityPrivilege@@YAJPEAU_VIDSCH_PROCESS@@I@Z @ 0x1C0035678
 * Callers:
 *     VidSchSetAbsolutePriorityContext @ 0x1C0108830 (VidSchSetAbsolutePriorityContext.c)
 *     VidSchSetAbsolutePriorityHwContext @ 0x1C0109390 (VidSchSetAbsolutePriorityHwContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiCheckProcessGPUPriorityPrivilege(struct _VIDSCH_PROCESS *a1)
{
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 1) + 424LL) & 2) != 0 || *((_BYTE *)a1 + 2633) )
    return 0LL;
  else
    return SeSinglePrivilegeCheck((LUID)14LL, 1) == 0 ? 0xC0000022 : 0;
}
