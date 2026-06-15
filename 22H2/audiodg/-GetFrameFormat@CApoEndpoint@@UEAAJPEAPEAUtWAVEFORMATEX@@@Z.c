/*
 * XREFs of ?GetFrameFormat@CApoEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14003CF50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApoEndpoint::GetFrameFormat(const struct tWAVEFORMATEX **this, struct tWAVEFORMATEX **a2)
{
  return CloneWaveFormat(this[4], a2);
}
