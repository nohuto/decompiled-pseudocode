/*
 * XREFs of ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAX_KAEAU_LUID@@@Z @ 0x1C0097538
 * Callers:
 *     NtUserCreateActivationObject @ 0x1C00A1950 (NtUserCreateActivationObject.c)
 * Callees:
 *     ?Destroy@CActivationObject@@SAJPEAV1@@Z @ 0x1C0003168 (-Destroy@CActivationObject@@SAJPEAV1@@Z.c)
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     ?notifyISM@CActivationObject@@QEBAXW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@AEBU_LUID@@2AEBUACTIVATION_GROUP_ID@@@Z @ 0x1C00976A0 (-notifyISM@CActivationObject@@QEBAXW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@W4ACTIVATIONOBJECTSTAT.c)
 *     ?GetGroupFromGroupId@CActivationObjectManager@@AEBAPEAVCActivationGroup@@AEBUACTIVATION_GROUP_ID@@@Z @ 0x1C00977CC (-GetGroupFromGroupId@CActivationObjectManager@@AEBAPEAVCActivationGroup@@AEBUACTIVATION_GROUP_ID.c)
 *     ?AddActivationObjectToHashTable@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C00978D8 (-AddActivationObjectToHashTable@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 *     ?Create@CActivationObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@PEAPEAV1@@Z @ 0x1C0097B9C (-Create@CActivationObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActivationObjectManager::CreateActivationObject(
        CActivationObjectManager *this,
        struct _OBJECT_ATTRIBUTES *a2,
        struct _OBJECT_ATTRIBUTES *a3,
        char a4,
        char a5,
        void *a6,
        unsigned __int64 a7,
        struct _LUID *a8)
{
  CActivationObjectManager *v8; // rbp
  int v9; // eax
  int v10; // ebx
  struct CActivationObject *v11; // rdi
  const struct ACTIVATION_GROUP_ID *v12; // rdx
  struct CActivationGroup *GroupFromGroupId; // rax
  _QWORD *v14; // rcx
  char *v15; // rax
  __int64 v16; // rdx
  struct CActivationObject *v18; // [rsp+60h] [rbp+8h] BYREF
  HWND v19; // [rsp+70h] [rbp+18h] BYREF

  v18 = this;
  v19 = 0LL;
  v8 = qword_1C0251778;
  if ( qword_1C0258B70 )
    v9 = qword_1C0258B70(this, a2, a3);
  else
    v9 = -1073741637;
  if ( v9 < 0 )
  {
    v10 = -1073741811;
  }
  else if ( qword_1C0258B78 )
  {
    v10 = qword_1C0258B78(a6, &v19);
  }
  else
  {
    v10 = 0;
  }
  if ( v10 >= 0 )
  {
    v18 = 0LL;
    v10 = CActivationObject::Create((char)this, a2, (unsigned int)a3, a4, v19, a7, a8, &v18);
    if ( v10 >= 0 )
    {
      RIMLockExclusive((__int64)&qword_1C0255590);
      v11 = v18;
      v10 = CActivationObjectManager::AddActivationObjectToHashTable(v8, v18);
      if ( v10 < 0 )
      {
        CActivationObject::Destroy(v11);
      }
      else
      {
        GroupFromGroupId = CActivationObjectManager::GetGroupFromGroupId(v8, v12);
        *((_QWORD *)v11 + 3) = GroupFromGroupId;
        v14 = (_QWORD *)((char *)v11 + 32);
        v15 = (char *)GroupFromGroupId + 32;
        v16 = *(_QWORD *)v15;
        if ( *(char **)(*(_QWORD *)v15 + 8LL) != v15 )
          __fastfail(3u);
        *v14 = v16;
        v10 = 0;
        *((_QWORD *)v11 + 5) = v15;
        *(_QWORD *)(v16 + 8) = v14;
        *(_QWORD *)v15 = v14;
        CActivationObject::notifyISM(v11, 0LL);
      }
      qword_1C0255598 = 0LL;
      ExReleasePushLockExclusiveEx(&qword_1C0255590, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  return (unsigned int)v10;
}
