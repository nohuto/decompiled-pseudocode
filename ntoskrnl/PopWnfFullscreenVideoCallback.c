/*
 * XREFs of PopWnfFullscreenVideoCallback @ 0x140981610
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x1402D1F40 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1402D1FF0 (PoFxSendSystemLatencyUpdate.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x140793060 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopWnfFullscreenVideoCallback(__int64 a1)
{
  int v1; // ebx
  unsigned int v3; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+28h] [rbp-20h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h] BYREF

  v3 = 8;
  v1 = ExQueryWnfStateData(a1, &v4, &v5, &v3);
  if ( v1 >= 0 )
  {
    if ( v3 < 8 )
      return 0;
    PpmAcquireLock(&PopFxSystemLatencyLock);
    if ( byte_140C3D4CE )
    {
      if ( (v5 & 2) != 0 )
      {
LABEL_9:
        PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
        return (unsigned int)v1;
      }
    }
    else if ( (v5 & 2) == 0 )
    {
      goto LABEL_9;
    }
    byte_140C3D4CE = (v5 & 2) != 0;
    PoFxSendSystemLatencyUpdate();
    goto LABEL_9;
  }
  return (unsigned int)v1;
}
