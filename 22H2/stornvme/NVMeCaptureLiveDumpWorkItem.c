/*
 * XREFs of NVMeCaptureLiveDumpWorkItem @ 0x1C000C3F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0003750 (__security_check_cookie.c)
 *     memset @ 0x1C0004B80 (memset.c)
 */

__int64 __fastcall NVMeCaptureLiveDumpWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  int v6; // edx
  __int64 v7; // r8
  __int64 result; // rax
  _QWORD v9[19]; // [rsp+50h] [rbp-59h] BYREF

  memset(v9, 0, sizeof(v9));
  v5 = *(_QWORD *)(a1 + 4248);
  if ( v5 )
  {
    v6 = *(_DWORD *)(a1 + 4256);
    if ( v6 )
    {
      v9[0] = 0x9800000098LL;
      *(_OWORD *)&v9[1] = *(_OWORD *)(v5 + 384);
      *(_OWORD *)&v9[3] = *(_OWORD *)(v5 + 400);
      *(_OWORD *)&v9[5] = *(_OWORD *)(v5 + 416);
      *(_OWORD *)&v9[7] = *(_OWORD *)(v5 + 432);
      *(_OWORD *)&v9[9] = *(_OWORD *)(v5 + 448);
      *(_OWORD *)&v9[11] = *(_OWORD *)(v5 + 464);
      *(_OWORD *)&v9[13] = *(_OWORD *)(v5 + 480);
      *(_OWORD *)&v9[15] = *(_OWORD *)(v5 + 496);
      LOWORD(v9[17]) = *(_WORD *)(v5 + 5);
      BYTE2(v9[17]) = *(_BYTE *)(v5 + 7);
      HIDWORD(v9[17]) = v6;
      v9[18] = v5;
      StorPortExtendedFunction(104LL, a1, 0LL);
    }
  }
  v7 = *(_QWORD *)(a1 + 4248);
  if ( v7 )
    StorPortExtendedFunction(1LL, a1, v7);
  *(_OWORD *)(a1 + 4248) = 0LL;
  result = StorPortExtendedFunction(31LL, a1, a3);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 32), 0xCu);
  return result;
}
