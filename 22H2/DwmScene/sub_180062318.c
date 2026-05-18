/*
 * XREFs of sub_180062318 @ 0x180062318
 * Callers:
 *     sub_180022184 @ 0x180022184 (sub_180022184.c)
 *     sub_1800386E4 @ 0x1800386E4 (sub_1800386E4.c)
 *     sub_18003D724 @ 0x18003D724 (sub_18003D724.c)
 *     sub_180062460 @ 0x180062460 (sub_180062460.c)
 *     sub_1800624F0 @ 0x1800624F0 (sub_1800624F0.c)
 *     sub_180062D14 @ 0x180062D14 (sub_180062D14.c)
 *     sub_180067E8C @ 0x180067E8C (sub_180067E8C.c)
 *     sub_1800997A4 @ 0x1800997A4 (sub_1800997A4.c)
 *     sub_18009B18C @ 0x18009B18C (sub_18009B18C.c)
 *     sub_1800C6B10 @ 0x1800C6B10 (sub_1800C6B10.c)
 *     sub_1800C8ADC @ 0x1800C8ADC (sub_1800C8ADC.c)
 *     sub_1800C8B20 @ 0x1800C8B20 (sub_1800C8B20.c)
 *     sub_1800C98E0 @ 0x1800C98E0 (sub_1800C98E0.c)
 *     sub_1800CAB4C @ 0x1800CAB4C (sub_1800CAB4C.c)
 *     sub_1800CC478 @ 0x1800CC478 (sub_1800CC478.c)
 *     sub_1800CDD40 @ 0x1800CDD40 (sub_1800CDD40.c)
 *     sub_180124A7A @ 0x180124A7A (sub_180124A7A.c)
 * Callees:
 *     sub_1800CBBE0 @ 0x1800CBBE0 (sub_1800CBBE0.c)
 *     sub_1800CBBF8 @ 0x1800CBBF8 (sub_1800CBBF8.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall sub_180062318(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  void **result; // rax

  *(_QWORD *)a1 = &Spectre::Engine::RendererResource::`vftable';
  v2 = sub_1800CBBF8(a1);
  sub_1800CBBE0(v2, *(unsigned int *)(a1 + 48), 0LL, -1LL);
  _InterlockedExchangeAdd(&dword_180219878[*(int *)(a1 + 44)], 0xFFFFFFFF);
  v3 = -*(_QWORD *)(a1 + 64);
  v4 = sub_1800CBBF8(dword_180219878);
  sub_1800CBBE0(v4, *(unsigned int *)(a1 + 56), 2LL, v3);
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 >= 0x10 )
  {
    v6 = v5 + 1;
    v7 = *(_QWORD *)(a1 + 8);
    if ( v6 >= 0x1000 )
    {
      v8 = v6 + 39;
      v9 = *(_QWORD *)(v7 - 8);
      v10 = v7 - v9;
      if ( (unsigned __int64)(v10 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v10, v8);
        JUMPOUT(0x1800623E2LL);
      }
      v7 = v9;
    }
    j_j__o_free(v7);
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 15LL;
  *(_BYTE *)(a1 + 8) = 0;
  result = &Spectre::Engine::IVisitable::`vftable';
  *(_QWORD *)a1 = &Spectre::Engine::IVisitable::`vftable';
  return result;
}
