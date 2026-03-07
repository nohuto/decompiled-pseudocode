DelayZonePalmRejection *__fastcall AddEdgePalmRejectionZone(void *a1, __int64 a2, struct tagRECT *a3, __int64 a4)
{
  int v5; // edi
  DelayZonePalmRejection *result; // rax
  struct tagRECT v8; // [rsp+20h] [rbp-18h] BYREF

  v5 = a2;
  result = DelayZonePalmRejection::GetInstance((__int64)a1, a2, (__int64)a3, a4);
  if ( result )
  {
    v8 = *a3;
    return (DelayZonePalmRejection *)DelayZonePalmRejection::AddEdgeZoneToList(result, a1, v5, &v8);
  }
  return result;
}
