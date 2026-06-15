/*
 * XREFs of sub_180121E18 @ 0x180121E18
 * Callers:
 *     sub_18005AA7C @ 0x18005AA7C (sub_18005AA7C.c)
 * Callees:
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_180121F94 @ 0x180121F94 (sub_180121F94.c)
 */

void __fastcall sub_180121E18(__int64 a1, __int64 a2)
{
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  int *v6; // r10
  __int64 v7; // r11
  int v8; // [rsp+B0h] [rbp+7h] BYREF
  int v9; // [rsp+B4h] [rbp+Bh] BYREF
  int v10; // [rsp+B8h] [rbp+Fh] BYREF
  int v11; // [rsp+BCh] [rbp+13h] BYREF
  int v12; // [rsp+C0h] [rbp+17h] BYREF
  int v13; // [rsp+C4h] [rbp+1Bh] BYREF
  int v14; // [rsp+C8h] [rbp+1Fh] BYREF
  int v15; // [rsp+CCh] [rbp+23h] BYREF
  int v16; // [rsp+D0h] [rbp+27h] BYREF
  int v17; // [rsp+D4h] [rbp+2Bh] BYREF
  int v18; // [rsp+D8h] [rbp+2Fh] BYREF
  int v19; // [rsp+DCh] [rbp+33h] BYREF
  int v20; // [rsp+E0h] [rbp+37h] BYREF
  int v21; // [rsp+E4h] [rbp+3Bh] BYREF
  _DWORD *v22; // [rsp+E8h] [rbp+3Fh] BYREF
  __int64 v23; // [rsp+F0h] [rbp+47h] BYREF
  __int64 v24; // [rsp+F8h] [rbp+4Fh] BYREF

  if ( (unsigned int)dword_18019C448 > 4 )
  {
    if ( __vcrt_trace_logging_provider::_TlgKeywordOn((__vcrt_trace_logging_provider *)&dword_18019C448, 8uLL) )
    {
      v8 = v6[16];
      v9 = v6[15];
      v22 = v6 + 11;
      v10 = v6[10];
      v11 = v6[9];
      v12 = v6[6];
      v13 = v6[7];
      v14 = v6[8];
      v15 = v6[5];
      v16 = v6[4];
      v17 = v6[3];
      v18 = v6[2];
      v19 = v6[1];
      v20 = *v6;
      v21 = v5;
      v23 = a2;
      v24 = v7;
      sub_180121F94(
        v3,
        (unsigned int)&unk_18016A111,
        v4,
        v5,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v22,
        (__int64)&v9,
        (__int64)&v8);
    }
  }
}
