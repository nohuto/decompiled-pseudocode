/*
 * XREFs of IopLiveDumpTraceHvlPrepareLivedumpDescriptorFailure @ 0x14055882C
 * Callers:
 *     IopLiveDumpAllocateExtraBuffers @ 0x14094A230 (IopLiveDumpAllocateExtraBuffers.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140557990 (IopLiveDumpIsTracingEnabled.c)
 */

char __fastcall IopLiveDumpTraceHvlPrepareLivedumpDescriptorFailure(int a1)
{
  char result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v3; // [rsp+70h] [rbp+8h] BYREF

  v3 = a1;
  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v3;
    return EtwWriteEx(
             IopLiveDumpEtwRegHandle,
             &LIVEDUMP_EVENT_SIZING_WORKFLOW_HVL_PREPARE_LIVEDUMP_DESCRIPTOR_FAILURE,
             0LL,
             0,
             0LL,
             0LL,
             1u,
             &UserData);
  }
  return result;
}
