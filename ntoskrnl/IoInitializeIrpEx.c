/*
 * XREFs of IoInitializeIrpEx @ 0x1403CAE50
 * Callers:
 *     <none>
 * Callees:
 *     IoInitializeIrp @ 0x1402CABC0 (IoInitializeIrp.c)
 */

void __fastcall IoInitializeIrpEx(__int64 a1, __int64 a2, USHORT a3, CCHAR a4)
{
  IoInitializeIrp((PIRP)a1, a3, a4);
  if ( a2 && (a2 == -1 || (*(_DWORD *)(a2 + 48) & 0x8000000) != 0) )
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 184);
}
