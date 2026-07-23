/*
 * XREFs of NtInitializeNlsFiles @ 0x140612F00
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ZwQueryDefaultLocale @ 0x1403F9CC0 (ZwQueryDefaultLocale.c)
 *     MmMapViewOfSection @ 0x1406128D0 (MmMapViewOfSection.c)
 *     ExpGetGlobalLocaleSection @ 0x14061303C (ExpGetGlobalLocaleSection.c)
 */

NTSTATUS __cdecl NtInitializeNlsFiles(
        PVOID *BaseAddress,
        PLCID DefaultLocaleId,
        PLARGE_INTEGER DefaultCasingTableSize,
        PULONG CurrentNLSVersion)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  NTSTATUS result; // eax
  NTSTATUS v9; // ebx
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-30h] BYREF
  _DWORD v11[2]; // [rsp+60h] [rbp-28h] BYREF
  void *v12; // [rsp+68h] [rbp-20h] BYREF
  __int64 v13; // [rsp+70h] [rbp-18h] BYREF
  DWORD DefaultLocaleIda; // [rsp+A8h] [rbp+20h] BYREF

  DefaultLocaleIda = 0;
  DmaAdapter = 0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return -1073741637;
  v6 = 0x7FFFFFFF0000LL;
  v7 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)BaseAddress < 0x7FFFFFFF0000LL )
    v7 = (__int64)BaseAddress;
  *(_QWORD *)v7 = *(_QWORD *)v7;
  if ( (unsigned __int64)DefaultLocaleId < 0x7FFFFFFF0000LL )
    v6 = (__int64)DefaultLocaleId;
  *(_DWORD *)v6 = *(_DWORD *)v6;
  result = ZwQueryDefaultLocale(0, &DefaultLocaleIda);
  if ( result >= 0 )
  {
    result = ExpGetGlobalLocaleSection(&DmaAdapter);
    if ( result >= 0 )
    {
      v12 = 0LL;
      v11[0] = 0;
      v11[1] = 0;
      v13 = 0LL;
      v9 = MmMapViewOfSection(
             (int)DmaAdapter,
             (__int64)KeGetCurrentThread()->ApcState.Process,
             &v12,
             0LL,
             0,
             (__int64)v11,
             &v13,
             1,
             0x400000,
             2);
      HalPutDmaAdapter(DmaAdapter);
      if ( v9 >= 0 )
      {
        *BaseAddress = v12;
        *DefaultLocaleId = DefaultLocaleIda;
      }
      return v9;
    }
  }
  return result;
}
