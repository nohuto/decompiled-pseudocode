/*
 * XREFs of KeExpandKernelStackAndCallout @ 0x1403D0D60
 * Callers:
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140A4470C (MiInitializePartitionSpecialPurposeMemory.c)
 *     IovpLogStackTrace @ 0x140ABEE08 (IovpLogStackTrace.c)
 *     KiVerifyXcpt15 @ 0x140B14320 (KiVerifyXcpt15.c)
 *     KeCheckedKernelInitialize @ 0x140B14B50 (KeCheckedKernelInitialize.c)
 *     KiFilterFiberContext @ 0x140B14C30 (KiFilterFiberContext.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140315620 (KeExpandKernelStackAndCalloutInternal.c)
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
