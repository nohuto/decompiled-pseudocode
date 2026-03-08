/*
 * XREFs of VidMmGetProcessAdapterInfo @ 0x1C0018AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmGetProcessAdapterInfo(__int64 a1, unsigned int a2)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * a2);
}
