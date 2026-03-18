/*
 * XREFs of ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x1C00C1AF0
 * Callers:
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@Z$1?OPMFreeMemory@OPM@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C00CED9C (--1-$unique_storage@U-$resource_policy@PEAX$$A6AXPEAX@Z$1-OPMFreeMemory@OPM@@YAX0@ZU-$integral_c.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01481B0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall OPM::OPMFreeMemory(OPM *this, void *a2)
{
  if ( this )
    ExFreePoolWithTag(this, 0x4D504F47u);
}
