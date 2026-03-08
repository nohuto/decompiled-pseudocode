/*
 * XREFs of AddPalmRejectionDelayZone @ 0x1C0216F34
 * Callers:
 *     NtUserCreatePalmRejectionDelayZone @ 0x1C016E080 (NtUserCreatePalmRejectionDelayZone.c)
 * Callees:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0096A80 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C0214F18 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 */

__int64 __fastcall AddPalmRejectionDelayZone(void *a1, struct tagRECT *a2, void *a3, struct tagRECT *a4, int a5)
{
  unsigned int v9; // ebx
  DelayZonePalmRejection *Instance; // rcx
  struct tagRECT v11; // xmm1
  struct tagRECT v13; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v14; // [rsp+40h] [rbp-18h] BYREF

  v9 = 0;
  Instance = DelayZonePalmRejection::GetInstance((__int64)a1, (__int64)a2, (__int64)a3, (__int64)a4);
  if ( Instance )
  {
    v11 = *a2;
    v13 = *a4;
    v14 = v11;
    return (unsigned int)DelayZonePalmRejection::AddDelayZoneToList(Instance, a1, &v14, a3, &v13, a5);
  }
  return v9;
}
