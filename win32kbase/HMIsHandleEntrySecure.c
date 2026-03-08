/*
 * XREFs of HMIsHandleEntrySecure @ 0x1C00ED28E
 * Callers:
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C008F460 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 * Callees:
 *     ?IsHandleEntrySecureWorker@@YAHPEAXPEAU_HANDLEENTRY@@@Z @ 0x1C0153678 (-IsHandleEntrySecureWorker@@YAHPEAXPEAU_HANDLEENTRY@@@Z.c)
 */

__int64 __fastcall HMIsHandleEntrySecure(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // r8
  __int16 v7; // ax
  struct _HANDLEENTRY *v8; // rsi

  v4 = 0;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v6 = dword_1C02D0E10 * (unsigned int)(unsigned __int16)a1;
    v7 = WORD1(a1) & 0x7FFF;
    v8 = (struct _HANDLEENTRY *)((char *)qword_1C02D0E08 + (unsigned int)v6);
    if ( (WORD1(a1) & 0x7FFF) == *((_WORD *)v8 + 13)
      || v7 == 0x7FFF
      || !v7 && PsGetCurrentProcessWow64Process(0x7FFFLL, a2, v6, a4) )
    {
      return (unsigned int)IsHandleEntrySecureWorker(a1, v8);
    }
  }
  return v4;
}
