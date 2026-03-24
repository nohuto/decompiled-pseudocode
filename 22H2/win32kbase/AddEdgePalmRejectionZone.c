/*
 * XREFs of AddEdgePalmRejectionZone @ 0x1C01ADC80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C006CB48 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ?AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z @ 0x1C01AC890 (-AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z.c)
 */

DelayZonePalmRejection *__fastcall AddEdgePalmRejectionZone(void *a1, int a2, struct tagRECT *a3)
{
  DelayZonePalmRejection *result; // rax
  struct tagRECT v7; // [rsp+20h] [rbp-18h] BYREF

  result = DelayZonePalmRejection::GetInstance();
  if ( result )
  {
    v7 = *a3;
    return (DelayZonePalmRejection *)DelayZonePalmRejection::AddEdgeZoneToList(result, a1, a2, &v7);
  }
  return result;
}
