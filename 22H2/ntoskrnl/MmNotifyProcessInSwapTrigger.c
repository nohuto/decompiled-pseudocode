/*
 * XREFs of MmNotifyProcessInSwapTrigger @ 0x1402F2A14
 * Callers:
 *     KiRequestProcessInSwap @ 0x1402F28A0 (KiRequestProcessInSwap.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14025FE1C (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14032C1BC (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgCreate1Sz_char @ 0x14034B7DC (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

char __fastcall MmNotifyProcessInSwapTrigger(__int64 a1)
{
  char result; // al
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r9
  int v5; // ecx
  int v6; // r8d
  int v7; // r10d
  int v8; // [rsp+20h] [rbp-98h]
  int v9; // [rsp+28h] [rbp-90h]
  int v10; // [rsp+40h] [rbp-78h] BYREF
  __int64 v11; // [rsp+48h] [rbp-70h] BYREF
  __int64 v12[4]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v13[16]; // [rsp+70h] [rbp-48h] BYREF
  int *v14; // [rsp+80h] [rbp-38h]
  int v15; // [rsp+88h] [rbp-30h]
  int v16; // [rsp+8Ch] [rbp-2Ch]
  __int64 *v17; // [rsp+90h] [rbp-28h]
  int v18; // [rsp+98h] [rbp-20h]
  int v19; // [rsp+9Ch] [rbp-1Ch]

  result = *(_BYTE *)(a1 + 1851) & 0x60;
  if ( result == 64 && *(_QWORD *)&qword_140C4EEE0 && **(_DWORD **)&qword_140C4EEE0 > 5u )
  {
    result = tlgKeywordOn(*(__int64 *)&qword_140C4EEE0, 0x400000000008LL);
    if ( result )
    {
      tlgCreate1Sz_char(v13, v3 + 1448, v2, v3);
      v5 = *(_DWORD *)(v4 + 1088);
      v16 = 0;
      v19 = 0;
      v14 = &v10;
      v17 = &v11;
      v10 = v5;
      v15 = 4;
      v11 = 0x1000000LL;
      v18 = 8;
      return tlgWriteEx_EtwWriteEx(v7, (int)&byte_140025933, v6, 1, v8, v9, 5u, (__int64)v12);
    }
  }
  return result;
}
