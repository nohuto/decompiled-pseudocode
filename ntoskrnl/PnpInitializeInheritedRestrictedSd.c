/*
 * XREFs of PnpInitializeInheritedRestrictedSd @ 0x14078E748
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 * Callees:
 *     _PnpSetObjectProperty @ 0x140686C8C (_PnpSetObjectProperty.c)
 *     PnpGetObjectProperty @ 0x1406CEE90 (PnpGetObjectProperty.c)
 *     RtlValidSecurityDescriptor @ 0x14075F860 (RtlValidSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpInitializeInheritedRestrictedSd(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r8
  int ObjectProperty; // eax
  unsigned int v8; // edi
  int v9; // esi
  PSECURITY_DESCRIPTOR v10; // rbx
  __int64 v11; // rcx
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+60h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+A0h] [rbp+8h] BYREF
  int v14; // [rsp+B8h] [rbp+20h] BYREF

  v14 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  v13 = 0;
  SecurityDescriptor = 0LL;
  ObjectProperty = PnpGetObjectProperty(
                     0x75737050u,
                     0x200u,
                     *(_QWORD *)(v4 + 48),
                     1,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_EffectiveRestrictedSD,
                     (__int64)&v14,
                     &SecurityDescriptor,
                     &v13,
                     0);
  if ( ObjectProperty == -1073741275 && a3 )
  {
    v10 = SecurityDescriptor;
  }
  else
  {
    v8 = v13;
    v9 = 19;
    v10 = SecurityDescriptor;
    if ( ObjectProperty < 0 || v14 != 19 || v13 < 0x28 || !RtlValidSecurityDescriptor(SecurityDescriptor) )
    {
      if ( v10 )
        ExFreePoolWithTag(v10, 0x75737050u);
      v10 = 0LL;
    }
    if ( v10 )
    {
      v11 = (__int64)v10;
    }
    else
    {
      v8 = 0;
      v11 = 0LL;
      v9 = 0;
    }
    PnpSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1u,
      a2,
      0LL,
      (__int64)&DEVPKEY_Device_InheritedRestrictedSD,
      v9,
      v11,
      v8,
      a3 != 0 ? 0x20000 : 0);
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0x75737050u);
}
