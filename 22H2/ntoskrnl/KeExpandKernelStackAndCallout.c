/*
 * XREFs of KeExpandKernelStackAndCallout @ 0x1403D6280
 * Callers:
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140A473DC (MiInitializePartitionSpecialPurposeMemory.c)
 *     IovpLogStackTrace @ 0x140AC2E08 (IovpLogStackTrace.c)
 *     KiVerifyXcpt15 @ 0x140B18320 (KiVerifyXcpt15.c)
 *     KeCheckedKernelInitialize @ 0x140B18B50 (KeCheckedKernelInitialize.c)
 *     KiFilterFiberContext @ 0x140B18C30 (KiFilterFiberContext.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x14022E6F0 (KeExpandKernelStackAndCalloutInternal.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCallout(PEXPAND_STACK_CALLOUT Callout, PVOID Parameter, SIZE_T Size)
{
  return KeExpandKernelStackAndCalloutInternal(
           (void (__fastcall *)(ULONG_PTR))Callout,
           (ULONG_PTR)Parameter,
           Size,
           2,
           0LL);
}
