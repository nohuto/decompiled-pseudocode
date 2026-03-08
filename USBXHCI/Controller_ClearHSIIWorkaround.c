/*
 * XREFs of Controller_ClearHSIIWorkaround @ 0x1C001E9C0
 * Callers:
 *     Endpoint_Disable_Internal @ 0x1C000B8A4 (Endpoint_Disable_Internal.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     XilRegister_ReadUlong @ 0x1C00180A0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0018428 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Controller_ClearHSIIWorkaround(__int64 a1)
{
  __int64 v1; // rdi
  int Ulong; // eax

  v1 = *(_QWORD *)(a1 + 88);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 252, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
  Ulong = XilRegister_ReadUlong(v1, (unsigned int *)(*(_QWORD *)(v1 + 24) + 33092LL));
  return XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), (_DWORD *)(*(_QWORD *)(v1 + 24) + 33092LL), Ulong & 0xFFFFFEFF);
}
