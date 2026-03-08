/*
 * XREFs of HalpHvStartProcessor @ 0x140518EF8
 * Callers:
 *     HalpInterruptStartProcessor @ 0x140A86180 (HalpInterruptStartProcessor.c)
 * Callees:
 *     HalpIsXboxNanovisorPresent @ 0x140373A1C (HalpIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpHvStartVirtualProcessor @ 0x140509CD0 (HalpHvStartVirtualProcessor.c)
 *     HalpHvInitSegRegister @ 0x140518E28 (HalpHvInitSegRegister.c)
 */

__int64 __fastcall HalpHvStartProcessor(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r10d
  unsigned int v5; // r11d
  unsigned __int16 v6; // dx
  __int64 v7; // r11
  __int64 v8; // r11
  __int64 v9; // r11
  __int64 v10; // r11
  __int64 v11; // r11
  __int64 v12; // r11
  unsigned __int16 v13; // dx
  __int64 v14; // r11
  __int64 v15; // r8
  __int64 v16; // r11
  unsigned int v18[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 (*v19)(); // [rsp+30h] [rbp-D0h]
  __int64 v20; // [rsp+38h] [rbp-C8h]
  __int64 v21; // [rsp+40h] [rbp-C0h]
  _QWORD v22[25]; // [rsp+48h] [rbp-B8h] BYREF

  v18[0] = 0;
  if ( qword_140C621E0 )
  {
    v4 = qword_140C621E0(a1, v18);
  }
  else if ( HalpIsXboxNanovisorPresent() )
  {
    v18[0] = v5;
    v4 = 0;
  }
  if ( v4 >= 0 )
  {
    memset(v22, 0, sizeof(v22));
    v6 = *(_WORD *)(a3 + 440);
    v19 = HalpLMStubForVM;
    v20 = *(_QWORD *)(a3 + 120);
    v21 = 2LL;
    HalpHvInitSegRegister(a3 + 224, v6, (__int64)v22);
    HalpHvInitSegRegister(v7, *(_WORD *)(a3 + 442), (__int64)&v22[2]);
    HalpHvInitSegRegister(v8, *(_WORD *)(a3 + 444), (__int64)&v22[4]);
    HalpHvInitSegRegister(v9, *(_WORD *)(a3 + 446), (__int64)&v22[6]);
    HalpHvInitSegRegister(v10, *(_WORD *)(a3 + 448), (__int64)&v22[8]);
    HalpHvInitSegRegister(v11, *(_WORD *)(a3 + 450), (__int64)&v22[10]);
    HalpHvInitSegRegister(v12, *(_WORD *)(a3 + 256), (__int64)&v22[12]);
    v13 = *(_WORD *)(a3 + 258);
    HIWORD(v22[13]) |= 2u;
    HalpHvInitSegRegister(v14, v13, (__int64)&v22[14]);
    v15 = *(_QWORD *)(a3 + 248);
    HIWORD(v22[16]) = *(_WORD *)(a3 + 246);
    v22[19] = *(_QWORD *)(v16 + 8);
    HIWORD(v22[18]) = *(_WORD *)(v16 + 6);
    v22[21] = *(_QWORD *)(a3 + 144);
    v22[22] = *(_QWORD *)(a3 + 160);
    v22[23] = *(_QWORD *)(a3 + 168);
    v22[20] = *(_QWORD *)(a3 + 136);
    v22[24] = *(_QWORD *)(a3 + 128);
    v22[17] = v15;
    return (unsigned int)HalpHvStartVirtualProcessor(v18[0]);
  }
  return (unsigned int)v4;
}
