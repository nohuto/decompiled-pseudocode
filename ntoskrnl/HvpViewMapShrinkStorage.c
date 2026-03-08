/*
 * XREFs of HvpViewMapShrinkStorage @ 0x140A1A654
 * Callers:
 *     HvFreeHivePartial @ 0x14072DB74 (HvFreeHivePartial.c)
 *     HvpAddBin @ 0x14072F9F0 (HvpAddBin.c)
 * Callees:
 *     CmSiReleaseProcessLockedPagesCharge @ 0x14020C564 (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     RtlRbRemoveNode @ 0x14024C010 (RtlRbRemoveNode.c)
 *     CmSiUnmapViewOfSection @ 0x1402C0A9C (CmSiUnmapViewOfSection.c)
 *     HvcallpNoHypervisorPresent @ 0x1402C0AC0 (HvcallpNoHypervisorPresent.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x140880D20 (HvpViewMapMakeViewRangeInvalid.c)
 */

struct _PRIVILEGE_SET *__fastcall HvpViewMapShrinkStorage(__int64 a1, int a2)
{
  __int64 v2; // r12
  __int64 v3; // r15
  struct _PRIVILEGE_SET *p_Privileges; // rbx
  __int64 v5; // r8
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // r14
  unsigned __int64 *Luid; // rax
  __int64 v12; // rax
  void *v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  struct _PRIVILEGE_SET *result; // rax
  struct _PRIVILEGE_SET Privileges; // [rsp+20h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = (unsigned int)(a2 + 4096);
  p_Privileges = &Privileges;
  v5 = v3;
  Privileges.Privilege[0].Luid = (LUID)&Privileges;
  *(_QWORD *)&Privileges.PrivilegeCount = &Privileges;
  if ( v3 < v2 )
  {
    v7 = a1 + 40;
    do
    {
      v8 = *(_QWORD *)v7;
      if ( (*(_BYTE *)(v7 + 8) & 1) != 0 && v8 )
        v8 ^= v7;
      while ( v8 )
      {
        if ( v5 >= *(_QWORD *)(v8 + 40) )
        {
          if ( v5 < *(_QWORD *)(v8 + 48) )
            break;
          v9 = *(_QWORD *)(v8 + 8);
        }
        else
        {
          v9 = *(_QWORD *)v8;
        }
        if ( (*(_BYTE *)(v7 + 8) & 1) != 0 && v9 )
          v8 ^= v9;
        else
          v8 = v9;
      }
      v10 = *(_QWORD *)(v8 + 48);
      HvpViewMapMakeViewRangeInvalid(a1, (_QWORD *)v8, v5, v10);
      if ( *(_QWORD *)(v8 + 40) == *(_QWORD *)(v8 + 48) )
      {
        RtlRbRemoveNode((unsigned __int64 *)v7, v8);
        Luid = (unsigned __int64 *)Privileges.Privilege[0].Luid;
        if ( **(struct _PRIVILEGE_SET ***)&Privileges.Privilege[0].Luid != &Privileges )
          goto LABEL_22;
        *(LUID *)(v8 + 8) = Privileges.Privilege[0].Luid;
        *(_QWORD *)v8 = &Privileges;
        *Luid = v8;
        Privileges.Privilege[0].Luid = (LUID)v8;
      }
      v5 = v10;
    }
    while ( v10 < v2 );
    p_Privileges = *(struct _PRIVILEGE_SET **)&Privileges.PrivilegeCount;
  }
  *(_QWORD *)(a1 + 8) = v3;
  v12 = *(_QWORD *)&p_Privileges->PrivilegeCount;
  if ( (struct _PRIVILEGE_SET *)p_Privileges->Privilege[0].Luid != &Privileges )
LABEL_22:
    __fastfail(3u);
  while ( 1 )
  {
    if ( *(struct _PRIVILEGE_SET **)(v12 + 8) != p_Privileges )
      goto LABEL_22;
    *(_QWORD *)&Privileges.PrivilegeCount = v12;
    *(_QWORD *)(v12 + 8) = &Privileges;
    result = &Privileges;
    if ( p_Privileges == &Privileges )
      return result;
    v13 = *(void **)&p_Privileges[2].Privilege[0].Attributes;
    if ( v13 )
    {
      CmSiUnmapViewOfSection((__int64)&Privileges, *(HANDLE **)(a1 + 24), v13);
      if ( *(_QWORD *)&p_Privileges[3].Control )
      {
        v14 = HvcallpNoHypervisorPresent();
        CmSiReleaseProcessLockedPagesCharge(*(_QWORD **)(a1 + 24), v15 * v14);
      }
    }
    CmSiFreeMemory(p_Privileges);
    p_Privileges = *(struct _PRIVILEGE_SET **)&Privileges.PrivilegeCount;
    if ( *(struct _PRIVILEGE_SET **)(*(_QWORD *)&Privileges.PrivilegeCount + 8LL) != &Privileges )
      goto LABEL_22;
    v12 = **(_QWORD **)&Privileges.PrivilegeCount;
  }
}
