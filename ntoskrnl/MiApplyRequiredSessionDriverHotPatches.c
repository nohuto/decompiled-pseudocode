/*
 * XREFs of MiApplyRequiredSessionDriverHotPatches @ 0x1407F6F6C
 * Callers:
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 * Callees:
 *     MiGetSessionVm @ 0x14036C17C (MiGetSessionVm.c)
 *     MiSessionLookupImage @ 0x14036C7B8 (MiSessionLookupImage.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiEnumerateBasePatches @ 0x1407F7420 (MiEnumerateBasePatches.c)
 */

__int64 __fastcall MiApplyRequiredSessionDriverHotPatches(__int64 a1)
{
  unsigned int v2; // edx
  unsigned __int64 SessionVm; // rax
  unsigned __int64 v4; // rcx
  _QWORD v6[2]; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v7; // [rsp+30h] [rbp-88h]
  int v8; // [rsp+34h] [rbp-84h]
  _QWORD v9[15]; // [rsp+40h] [rbp-78h] BYREF

  memset(v9, 0, 0x68uLL);
  v2 = *(_DWORD *)(a1 + 64);
  v9[0] = a1;
  LODWORD(v9[3]) = (v2 >> 12) + ((v2 & 0xFFF) != 0);
  SessionVm = MiGetSessionVm();
  v4 = *(_QWORD *)(a1 + 48);
  v8 = 0;
  v7 = 0;
  v9[2] = SessionVm;
  v6[0] = v9;
  v6[1] = MiSessionLookupImage(v4);
  MiEnumerateBasePatches(a1, MiApplySingleSessionPatch, v6);
  return v7;
}
