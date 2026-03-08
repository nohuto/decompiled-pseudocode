/*
 * XREFs of ExpAtsConfigureSecureDevice @ 0x14040D320
 * Callers:
 *     ExAtsSvmSecureDevicePowerCallback @ 0x14040D420 (ExAtsSvmSecureDevicePowerCallback.c)
 *     ExpAtsDereferenceDevice @ 0x14060A2C0 (ExpAtsDereferenceDevice.c)
 *     ExpPrepareNewAtsDevice @ 0x14060A384 (ExpPrepareNewAtsDevice.c)
 * Callees:
 *     VslConfigureSecureAtsDevice @ 0x14040A03C (VslConfigureSecureAtsDevice.c)
 */

__int64 __fastcall ExpAtsConfigureSecureDevice(__int64 a1, char a2)
{
  __int64 v2; // r8
  __int16 v5; // cx
  char v6; // al
  __int64 result; // rax
  __int64 v8; // [rsp+20h] [rbp-10h] BYREF
  char v9; // [rsp+28h] [rbp-8h]
  char v10; // [rsp+29h] [rbp-7h]
  char v11; // [rsp+2Ah] [rbp-6h]
  char v12; // [rsp+2Bh] [rbp-5h]
  __int64 v13; // [rsp+40h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 168);
  *(_DWORD *)((char *)&v13 + 1) = 0;
  v5 = *(_WORD *)(v2 + 12);
  HIDWORD(v8) = *(unsigned __int16 *)(v2 + 8);
  v9 = HIBYTE(v5);
  v6 = *(_BYTE *)(v2 + 12) & 7;
  v12 = 0;
  LOBYTE(v13) = a2;
  LODWORD(v8) = 2;
  v10 = (unsigned __int8)v5 >> 3;
  v11 = v6;
  if ( a2 )
    HIDWORD(v13) = *(_DWORD *)(a1 + 184);
  result = VslConfigureSecureAtsDevice(&v8, &v13);
  if ( (int)result >= 0 )
    *(_BYTE *)(a1 + 188) = a2;
  return result;
}
