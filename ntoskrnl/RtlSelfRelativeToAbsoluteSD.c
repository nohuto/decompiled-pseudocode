/*
 * XREFs of RtlSelfRelativeToAbsoluteSD @ 0x14086FDF0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlpQuerySecurityDescriptor @ 0x14074E794 (RtlpQuerySecurityDescriptor.c)
 */

NTSTATUS __stdcall RtlSelfRelativeToAbsoluteSD(
        PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor,
        PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor,
        PULONG AbsoluteSecurityDescriptorSize,
        PACL Dacl,
        PULONG DaclSize,
        PACL Sacl,
        PULONG SaclSize,
        PSID Owner,
        PULONG OwnerSize,
        PSID PrimaryGroup,
        PULONG PrimaryGroupSize)
{
  const void *v14; // rcx
  PULONG v15; // rax
  PULONG v16; // rdx
  PULONG v17; // r8
  PULONG v18; // r9
  unsigned int v19; // r10d
  unsigned int v20; // r11d
  unsigned int v21; // r14d
  unsigned int v22; // r15d
  unsigned __int8 *v23; // rdx
  PSID v24; // rbx
  PSID v25; // rbx
  NTSTATUS result; // eax
  PACL v27; // rbx
  ULONG v28; // [rsp+50h] [rbp-30h] BYREF
  ULONG v29; // [rsp+54h] [rbp-2Ch] BYREF
  void *Src; // [rsp+58h] [rbp-28h] BYREF
  void *v31; // [rsp+60h] [rbp-20h] BYREF
  void *v32; // [rsp+68h] [rbp-18h] BYREF
  void *v33; // [rsp+70h] [rbp-10h] BYREF
  ULONG v34; // [rsp+B0h] [rbp+30h] BYREF
  ULONG v35; // [rsp+B8h] [rbp+38h] BYREF

  v34 = 0;
  v35 = 0;
  v28 = 0;
  v29 = 0;
  Src = 0LL;
  v31 = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  if ( *((__int16 *)SelfRelativeSecurityDescriptor + 1) >= 0 )
    return -1073741593;
  RtlpQuerySecurityDescriptor((__int64)SelfRelativeSecurityDescriptor, &Src, &v28, &v31, &v29, &v33, &v34, &v32, &v35);
  v15 = PrimaryGroupSize;
  v16 = OwnerSize;
  v17 = SaclSize;
  v18 = DaclSize;
  v19 = v34;
  v20 = v35;
  v21 = v28;
  v22 = v29;
  if ( AbsoluteSecurityDescriptor
    && *AbsoluteSecurityDescriptorSize >= 0x28
    && v28 <= *OwnerSize
    && v34 <= *DaclSize
    && v35 <= *SaclSize
    && v29 <= *PrimaryGroupSize )
  {
    memmove(AbsoluteSecurityDescriptor, v14, 0x14uLL);
    v23 = (unsigned __int8 *)Src;
    *((_WORD *)AbsoluteSecurityDescriptor + 1) &= ~0x8000u;
    *((_QWORD *)AbsoluteSecurityDescriptor + 1) = 0LL;
    *((_QWORD *)AbsoluteSecurityDescriptor + 2) = 0LL;
    *((_QWORD *)AbsoluteSecurityDescriptor + 3) = 0LL;
    *((_QWORD *)AbsoluteSecurityDescriptor + 4) = 0LL;
    if ( v23 )
    {
      v24 = Owner;
      memmove(Owner, v23, 4LL * v23[1] + 8);
      *((_QWORD *)AbsoluteSecurityDescriptor + 1) = v24;
    }
    if ( v31 )
    {
      v25 = PrimaryGroup;
      memmove(PrimaryGroup, v31, 4LL * *((unsigned __int8 *)v31 + 1) + 8);
      *((_QWORD *)AbsoluteSecurityDescriptor + 2) = v25;
    }
    if ( v32 )
    {
      v27 = Sacl;
      memmove(Sacl, v32, *((unsigned __int16 *)v32 + 1));
      *((_QWORD *)AbsoluteSecurityDescriptor + 3) = v27;
    }
    if ( v33 )
    {
      memmove(Dacl, v33, *((unsigned __int16 *)v33 + 1));
      *((_QWORD *)AbsoluteSecurityDescriptor + 4) = Dacl;
    }
    return 0;
  }
  else
  {
    *AbsoluteSecurityDescriptorSize = 40;
    *v15 = v22;
    result = -1073741789;
    *v16 = v21;
    *v17 = v20;
    *v18 = v19;
  }
  return result;
}
