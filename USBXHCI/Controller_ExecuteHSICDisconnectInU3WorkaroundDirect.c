/*
 * XREFs of Controller_ExecuteHSICDisconnectInU3WorkaroundDirect @ 0x1C0078104
 * Callers:
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C006E400 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1C00180A0 (XilRegister_ReadUlong.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0037218 (WPP_RECORDER_SF_LL.c)
 *     XilRegister_ReadUshort @ 0x1C003F39C (XilRegister_ReadUshort.c)
 */

__int64 __fastcall Controller_ExecuteHSICDisconnectInU3WorkaroundDirect(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  unsigned int Ulong; // eax
  unsigned int v6; // ecx
  char v7; // bl
  int v8; // edx
  int v9; // r9d
  __int64 v10; // rcx
  char v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  v2 = *(_QWORD *)(a1 + 88);
  v11 = 0;
  result = XilRegister_ReadUshort(v2, (unsigned __int16 *)(*(_QWORD *)(v2 + 24) + 33824LL));
  if ( (result & 3) != 0 )
  {
    Ulong = XilRegister_ReadUlong(v2, (unsigned int *)(*(_QWORD *)(v2 + 24) + 1360LL));
    v6 = (Ulong >> 5) & 0xF;
    if ( (Ulong & 0x201) == 0x201 && v6 < 4 )
      v7 = 4;
    else
      v7 = v6 != 8 ? 0 : 4;
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, __int64, int))(a1 + 296))(
               *(_QWORD *)(a1 + 280),
               0LL,
               &v11,
               162LL,
               1);
    if ( (_DWORD)result != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return result;
      v9 = 253;
      goto LABEL_12;
    }
    v10 = *(_QWORD *)(a1 + 280);
    v11 = v7 | v11 & 0xFB;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, __int64, int))(a1 + 288))(v10, 0LL, &v11, 162LL, 1);
    if ( (_DWORD)result != 1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 254;
LABEL_12:
      LOBYTE(v8) = 2;
      return WPP_RECORDER_SF_LL(
               *(_QWORD *)(a1 + 72),
               v8,
               4,
               v9,
               (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
               1,
               result);
    }
  }
  return result;
}
