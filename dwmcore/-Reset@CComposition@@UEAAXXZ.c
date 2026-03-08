/*
 * XREFs of ?Reset@CComposition@@UEAAXXZ @ 0x1800EB320
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x1801B0AEC (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800EB548 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x1801B229C (McTemplateU0qqx_EventWriteTransfer.c)
 */

void __fastcall CComposition::Reset(CComposition *this, int a2)
{
  unsigned int v2; // ebp
  char *i; // rbx
  __int64 v5; // rdi
  int v6; // eax
  int v7; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+34h] [rbp-24h]
  __int64 v9; // [rsp+44h] [rbp-14h]

  v2 = 0;
  for ( i = (char *)this + 576; v2 < *((_DWORD *)this + 150); *(_QWORD *)(v5 + 8) = 0LL )
  {
    v5 = *(_QWORD *)i + 16LL * v2;
    if ( (unsigned int)(*(_DWORD *)(v5 + 4) - 1) <= 1 )
    {
      v7 = 8;
      v9 = 0LL;
      v6 = *(_DWORD *)v5;
      v8 = 0LL;
      DWORD1(v8) = v6;
      CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)&v7);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0qqx_EventWriteTransfer((_DWORD)this, a2, *(_DWORD *)(v5 + 4), *(_DWORD *)v5, *(_QWORD *)(v5 + 8));
    *(_DWORD *)(v5 + 4) = 0;
    ++v2;
  }
  *((_DWORD *)i + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)i, 0x10u);
}
