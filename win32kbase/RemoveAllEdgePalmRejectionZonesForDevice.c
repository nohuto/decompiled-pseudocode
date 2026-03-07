DelayZonePalmRejection *__fastcall RemoveAllEdgePalmRejectionZonesForDevice(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  DelayZonePalmRejection *result; // rax
  unsigned int v6; // ebx

  result = DelayZonePalmRejection::GetInstance((__int64)a1, a2, a3, a4);
  v6 = 0;
  if ( result )
  {
    LOBYTE(v6) = DelayZonePalmRejection::RemoveEdgeZonesForDevice(result, a1) != 0;
    return (DelayZonePalmRejection *)v6;
  }
  return result;
}
