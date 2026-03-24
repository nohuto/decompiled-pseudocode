/*
 * XREFs of ?SetForeground@CActivationObjectManager@@AEAAJ_NW4ACTIVATIONOBJECTSTATECHANGE_REASON@@PEAVCActivationObject@@@Z @ 0x1C0127FDC
 * Callers:
 *     ?NotifyActivationObjectStateOnCleanup@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C00031A8 (-NotifyActivationObjectStateOnCleanup@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 *     ?SetState@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_STATE@@2@Z @ 0x1C0128158 (-SetState@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_RE.c)
 * Callees:
 *     ?notifyISM@CActivationObject@@QEBAXW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@AEBU_LUID@@2AEBUACTIVATION_GROUP_ID@@@Z @ 0x1C0098460 (-notifyISM@CActivationObject@@QEBAXW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@W4ACTIVATIONOBJECTSTAT.c)
 *     ?GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z @ 0x1C009DC5C (-GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z.c)
 *     MarkQueuesForKeyStateUpdate @ 0x1C01AEAC0 (MarkQueuesForKeyStateUpdate.c)
 *     PostEvent @ 0x1C01AEB98 (PostEvent.c)
 */

__int64 __fastcall CActivationObjectManager::SetForeground(CActivationObjectManager *a1, char a2, int a3, __int64 a4)
{
  __int64 v8; // rdi
  int v9; // ecx
  char v10; // al
  struct CActivationObject *ActivationObjectFromLuid; // rax
  int v12; // edx
  __int64 v13; // rcx
  struct _LUID v14; // [rsp+78h] [rbp+20h] BYREF

  if ( !a4 )
    return 3221225485LL;
  v8 = *(_QWORD *)(a4 + 24);
  if ( !v8 )
    return 3221226021LL;
  if ( a2 )
  {
    v9 = *(_DWORD *)(a4 + 80);
    v10 = v9 & 1;
    if ( a3 == 1 && (v9 & 2) != 0 )
      v10 = 0;
    if ( !v10 )
      goto LABEL_17;
    v14 = *(struct _LUID *)(v8 + 20);
    *(_QWORD *)(v8 + 20) = *(_QWORD *)(a4 + 64);
    ActivationObjectFromLuid = CActivationObjectManager::GetActivationObjectFromLuid(a1, &v14);
    if ( ActivationObjectFromLuid )
    {
      *((_DWORD *)ActivationObjectFromLuid + 20) &= ~4u;
      PostEvent(*((_QWORD *)ActivationObjectFromLuid + 11), 0, 6, 0, 0LL);
    }
    *(_DWORD *)(a4 + 80) |= 4u;
    if ( !a3 )
    {
      PostEvent(*(_QWORD *)(a4 + 88), 0, 6, 3, 0LL);
      PostEvent(*(_QWORD *)(a4 + 88), 0, 6, 1, 0LL);
    }
    v12 = 7;
  }
  else
  {
    *(_QWORD *)(v8 + 20) = 0LL;
    *(_DWORD *)(a4 + 80) &= ~4u;
    v13 = *(_QWORD *)(a4 + 88);
    v14 = 0LL;
    PostEvent(v13, 0, 6, 0, 0LL);
    v12 = 8;
  }
  CActivationObject::notifyISM(a4, v12);
LABEL_17:
  MarkQueuesForKeyStateUpdate(0LL, 0LL, 0LL);
  return 0LL;
}
