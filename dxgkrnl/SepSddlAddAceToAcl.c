/*
 * XREFs of SepSddlAddAceToAcl @ 0x1C0392894
 * Callers:
 *     SepSddlGetAclForString @ 0x1C0392A80 (SepSddlGetAclForString.c)
 * Callees:
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

NTSTATUS __fastcall SepSddlAddAceToAcl(
        const void **a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        ACCESS_MASK AccessMask,
        int a6,
        PSID Sid)
{
  struct _ACL *v7; // rsi
  size_t v10; // rbp
  ULONG v11; // ebx
  int v12; // r15d
  unsigned int v13; // ebx
  struct _ACL *PoolWithTag; // rax
  struct _ACL *v15; // rdi

  v7 = (struct _ACL *)*a1;
  v10 = (unsigned int)*a2;
  v11 = RtlLengthSid(Sid) + 8;
  v12 = v11 + v10;
  if ( v11 + (unsigned int)v10 > v7->AclSize )
  {
    v13 = v10 + a6 * v11;
    PoolWithTag = (struct _ACL *)ExAllocatePoolWithTag(PagedPool, v13, 0x6C416553u);
    v15 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    memset(PoolWithTag, 0, v13);
    memmove(v15, *a1, v10);
    v15->AclSize = v13;
    ExFreePoolWithTag(v7, 0);
    *a1 = v15;
    v7 = v15;
  }
  *a2 = v12;
  return RtlAddAccessAllowedAce(v7, 2u, AccessMask, Sid);
}
