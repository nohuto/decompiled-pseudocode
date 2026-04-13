/*
 * XREFs of ?get_PhoneLinkEnabled@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z @ 0x180012670
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloudExperienceHostCreateOOBEUserObject@@YAJAEBU_GUID@@0PEAPEAX@Z @ 0x18000E898 (-CloudExperienceHostCreateOOBEUserObject@@YAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::MobilityExperienceSettings::get_PhoneLinkEnabled(
        const struct _GUID *this,
        const struct _GUID *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  v3 = CloudExperienceHostCreateOOBEUserObject(this, a2, &v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 785LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_7;
  }
  v3 = (*(__int64 (__fastcall **)(void *, const struct _GUID *))(*(_QWORD *)v8 + 56LL))(v8, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 786LL;
    goto LABEL_5;
  }
  v4 = 0;
LABEL_7:
  if ( v8 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  return v4;
}
