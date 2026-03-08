/*
 * XREFs of Interrupter_InterruptEnable @ 0x1C0018928
 * Callers:
 *     Interrupter_WdfEvtInterruptEnable @ 0x1C0013980 (Interrupter_WdfEvtInterruptEnable.c)
 *     Interrupter_ControllerResetPostReset @ 0x1C003DC84 (Interrupter_ControllerResetPostReset.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1C00180A0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0018428 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Interrupter_InterruptEnable(__int64 a1)
{
  _DWORD *v2; // rdx
  __int64 v3; // rdi
  unsigned int *v4; // rdx
  unsigned int Ulong; // eax
  _DWORD *v6; // rdx
  __int64 result; // rax
  signed __int32 v8[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4,
      9,
      39,
      (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
      *(_DWORD *)(a1 + 32));
  v2 = (_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 96) & 0xFFFFFFF9 | 4;
  if ( *(_BYTE *)(v3 + 137) )
  {
    *v2 = 200;
    _InterlockedOr(v8, 0);
  }
  else
  {
    XilRegister_WriteUlong(v3, v2, 200);
  }
  v4 = *(unsigned int **)(a1 + 24);
  if ( *(_BYTE *)(v3 + 137) )
    Ulong = *v4;
  else
    Ulong = XilRegister_ReadUlong(v3, v4);
  v6 = *(_DWORD **)(a1 + 24);
  result = Ulong | 2;
  if ( !*(_BYTE *)(v3 + 137) )
    return XilRegister_WriteUlong(v3, v6, result);
  *v6 = result;
  _InterlockedOr(v8, 0);
  return result;
}
