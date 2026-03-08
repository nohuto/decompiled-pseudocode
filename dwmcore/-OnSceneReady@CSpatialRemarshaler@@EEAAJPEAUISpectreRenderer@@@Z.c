/*
 * XREFs of ?OnSceneReady@CSpatialRemarshaler@@EEAAJPEAUISpectreRenderer@@@Z @ 0x18024E780
 * Callers:
 *     <none>
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180098AA0 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 */

__int64 __fastcall CSpatialRemarshaler::OnSceneReady(CSpatialRemarshaler *this, struct ISpectreRenderer *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // r10
  unsigned int v5; // ecx
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( CNotificationResource::ShouldNotify((CSpatialRemarshaler *)((char *)this - 72)) )
  {
    v3 = *(_QWORD *)(v2 + 48);
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 1240LL) + 40LL);
    if ( v3 )
      v5 = *(_DWORD *)(v3 + 76);
    else
      v5 = 0;
    v7[0] = v5;
    v7[1] = *(unsigned int *)(v2 + 64);
    CoreUICallSend(v4, v7, 2LL, 15LL, 0, &unk_18033940E, v5);
  }
  return 0LL;
}
