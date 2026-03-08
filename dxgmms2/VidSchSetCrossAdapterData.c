/*
 * XREFs of VidSchSetCrossAdapterData @ 0x1C00B4D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchSetCrossAdapterData(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 1720) = a2;
}
