/*
 * XREFs of ??3@YAXPEAX@Z @ 0x140005FB8
 * Callers:
 *     ??3@YAXPEAX_K@Z @ 0x140005940 (--3@YAXPEAX_K@Z.c)
 *     ??_Ebad_alloc@std@@UEAAPEAXI@Z @ 0x140006130 (--_Ebad_alloc@std@@UEAAPEAXI@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x1400061F0 (--_Gtype_info@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
