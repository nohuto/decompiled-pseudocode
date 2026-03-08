/*
 * XREFs of RtlpHpMetadataHeapCreate @ 0x140374B90
 * Callers:
 *     RtlHpHeapManagerStart @ 0x1403762C8 (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlpHpHeapCreate @ 0x140375288 (RtlpHpHeapCreate.c)
 */

__int64 __fastcall RtlpHpMetadataHeapCreate(PRTL_RUN_ONCE RunOnce, __int128 *Parameter, PVOID *Context)
{
  union _RTL_RUN_ONCE v4; // rdx
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = *Parameter;
  v4.Value = ((__int64 (__fastcall *)(_QWORD, __int128 *, PVOID *, __int128 *))RtlpHpHeapCreate)(
               0LL,
               Parameter,
               Context,
               &v6);
  result = 0LL;
  if ( v4.Value )
  {
    RunOnce[-1].Ptr = v4.Ptr;
    return 1LL;
  }
  return result;
}
