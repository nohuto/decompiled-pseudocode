/*
 * XREFs of ?SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@PEAVForegroundChangeTracker@1@@Z @ 0x1C0156108
 * Callers:
 *     ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@W4ACTIVATION_OBJECT_STATE@@3@Z @ 0x1C00C2680 (-ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z @ 0x1C01562F8 (-SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C004E3B0 (W32GetThreadWin32Thread.c)
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@@Z @ 0x1C005B770 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@@Z.c)
 *     ?NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJECT_NOTIFICATION_ACTION@@U_tagActivationObjectNotificationForegroundData@@@Z @ 0x1C00839F8 (-NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJE.c)
 *     ?GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z @ 0x1C00C2770 (-GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z.c)
 *     ??0ActivationObjectDescriptor@CActivationObjectManager@@QEAA@PEBVCActivationObject@@@Z @ 0x1C0155C70 (--0ActivationObjectDescriptor@CActivationObjectManager@@QEAA@PEBVCActivationObject@@@Z.c)
 *     PostEvent @ 0x1C02181A8 (PostEvent.c)
 */

__int64 __fastcall CActivationObjectManager::SetForeground(
        CActivationObjectManager *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5)
{
  const struct _LUID *v5; // rdi
  __int64 v8; // rbx
  struct CActivationObject *ActivationObjectFromLuid; // rax
  int v11; // ecx
  CActivationObjectManager::ActivationObjectDescriptor *v12; // rax
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // rax
  CActivationObjectManager::ActivationObjectDescriptor *v20; // rax
  __int64 v21; // xmm1_8
  __int64 result; // rax
  _BYTE v23[20]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v24; // [rsp+44h] [rbp-2Ch]
  __int128 v25; // [rsp+50h] [rbp-20h] BYREF
  __int64 v26; // [rsp+60h] [rbp-10h]
  int v27; // [rsp+68h] [rbp-8h]
  int v28; // [rsp+A8h] [rbp+38h] BYREF
  int v29; // [rsp+ACh] [rbp+3Ch]

  v5 = (const struct _LUID *)(a2 + 60);
  v8 = a2;
  if ( *(_QWORD *)(a2 + 60) )
  {
    ActivationObjectFromLuid = CActivationObjectManager::GetActivationObjectFromLuid(a1, v5);
    if ( ActivationObjectFromLuid )
      v8 = (__int64)ActivationObjectFromLuid;
    else
      *v5 = 0LL;
  }
  v11 = *(_DWORD *)(v8 + 56);
  if ( (v11 & 4) == 0 && (a3 != 1 || (v11 & 2) == 0) && (v11 & 1) != 0 )
  {
    v12 = CActivationObjectManager::ActivationObjectDescriptor::ActivationObjectDescriptor(
            (CActivationObjectManager::ActivationObjectDescriptor *)v23,
            *(PEPROCESS **)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 32LL));
    v13 = a5;
    *(_OWORD *)(a5 + 24) = *(_OWORD *)v12;
    *(_QWORD *)(v13 + 40) = *((_QWORD *)v12 + 2);
    v14 = *((_QWORD *)a1 + 4);
    if ( v14 )
    {
      *(_DWORD *)(v14 + 56) &= ~4u;
      ThreadWin32Thread = W32GetThreadWin32Thread(*(_QWORD *)(v14 + 32));
      ForegroundBoost::SetForegroundPriority(ThreadWin32Thread, 0);
    }
    *(_DWORD *)(v8 + 56) |= 4u;
    *((_QWORD *)a1 + 4) = v8;
    v16 = W32GetThreadWin32Thread(*(_QWORD *)(v8 + 32));
    ForegroundBoost::SetForegroundPriority(v16, 1);
    v28 = 0;
    v18 = (__int64 *)(v14 + 40);
    v29 = 0;
    if ( !v14 )
      v18 = (__int64 *)&v28;
    v19 = *v18;
    v24 = 0LL;
    *(_QWORD *)&v23[4] = v19;
    *(_QWORD *)&v23[12] = *(_QWORD *)(v8 + 40);
    *(_DWORD *)v23 = a3;
    v27 = 0;
    v26 = *(unsigned int *)&v23[16];
    v25 = *(_OWORD *)v23;
    CActivationObjectManager::NotifySystemSateChanged(v17, v8, 2, (unsigned int *)&v25);
    if ( a4 == 1 )
      goto LABEL_22;
    if ( a3 == 1 )
    {
      if ( !v14 || *(_QWORD *)(v14 + 24) == *(_QWORD *)(v8 + 24) )
        goto LABEL_22;
    }
    else if ( !v14 )
    {
      goto LABEL_20;
    }
    PostEvent(*(_QWORD *)(v14 + 72), 0, 6, 0, 0LL);
LABEL_20:
    if ( !a3 )
    {
      PostEvent(*(_QWORD *)(v8 + 72), 0, 6, 3, 0LL);
      PostEvent(*(_QWORD *)(v8 + 72), 0, 6, 1, 0LL);
    }
LABEL_22:
    v20 = CActivationObjectManager::ActivationObjectDescriptor::ActivationObjectDescriptor(
            (CActivationObjectManager::ActivationObjectDescriptor *)v23,
            *(PEPROCESS **)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 32LL));
    *(_OWORD *)v13 = *(_OWORD *)v20;
    v21 = *((_QWORD *)v20 + 2);
    result = 0LL;
    *(_QWORD *)(v13 + 16) = v21;
    return result;
  }
  return 3221266435LL;
}
