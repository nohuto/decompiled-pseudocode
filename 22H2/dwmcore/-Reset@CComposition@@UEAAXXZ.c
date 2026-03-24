/*
 * XREFs of ?Reset@CComposition@@UEAAXXZ @ 0x1800DEE50
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x180154BF0 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800CF4A0 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x180155F3C (McTemplateU0qqx_EventWriteTransfer.c)
 */

void __fastcall CComposition::Reset(CComposition *this, int a2)
{
  unsigned int i; // esi
  __int64 v4; // rbx
  int v5; // eax
  int v6; // [rsp+30h] [rbp-28h] BYREF
  __int128 v7; // [rsp+34h] [rbp-24h]
  __int64 v8; // [rsp+44h] [rbp-14h]

  for ( i = 0; i < *((_DWORD *)this + 112); *(_QWORD *)(v4 + 8) = 0LL )
  {
    v4 = *((_QWORD *)this + 53) + 16LL * i;
    if ( (unsigned int)(*(_DWORD *)(v4 + 4) - 1) <= 1 )
    {
      v6 = 8;
      v8 = 0LL;
      v5 = *(_DWORD *)v4;
      v7 = 0LL;
      DWORD1(v7) = v5;
      CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)&v6);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0qqx_EventWriteTransfer((_DWORD)this, a2, *(_DWORD *)(v4 + 4), *(_DWORD *)v4, *(_QWORD *)(v4 + 8));
    *(_DWORD *)(v4 + 4) = 0;
    ++i;
  }
  *((_DWORD *)this + 112) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 424, 0x10u);
}
