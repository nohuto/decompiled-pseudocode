/*
 * XREFs of ObpCreateDefaultObjectTypeSD @ 0x14080D1E8
 * Callers:
 *     ObpInitObjectTypeSD @ 0x14080D154 (ObpInitObjectTypeSD.c)
 * Callees:
 *     RtlLengthSid @ 0x140245EC0 (RtlLengthSid.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlpAddKnownAce @ 0x1406D3290 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1406DB640 (RtlCreateAcl.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpCreateDefaultObjectTypeSD(__int64 *a1)
{
  ULONG v2; // ebx
  ULONG v3; // ebx
  ULONG v4; // eax
  __int64 v5; // rdi
  ULONG v6; // ebp
  __int64 Pool2; // rax
  __int64 v8; // rbx
  int v9; // esi
  int Acl; // edi

  v2 = RtlLengthSid(SeWorldSid);
  v3 = RtlLengthSid(SeAliasAdminsSid) + v2;
  v4 = RtlLengthSid(SeLocalSystemSid);
  v5 = v3 + v4 + 44;
  v6 = v3 + v4 + 44;
  Pool2 = ExAllocatePool2(256LL, v5 + 20, 1818452292LL);
  v8 = Pool2;
  if ( Pool2 )
  {
    v9 = Pool2 + 20;
    *(_OWORD *)Pool2 = 0LL;
    *(_DWORD *)(Pool2 + 16) = 0;
    *(_BYTE *)Pool2 = 1;
    memset((void *)(Pool2 + 20), 0, v6);
    Acl = RtlCreateAcl((PACL)(v8 + 20), v5, 2u);
    if ( Acl < 0
      || (Acl = RtlpAddKnownAce(v8 + 20, 2u, 0, 983041, (unsigned __int8 *)SeWorldSid, 0), Acl < 0)
      || (Acl = RtlpAddKnownAce(v8 + 20, 2u, 0, 983041, (unsigned __int8 *)SeAliasAdminsSid, 0), Acl < 0)
      || (Acl = RtlpAddKnownAce(v8 + 20, 2u, 0, 983041, (unsigned __int8 *)SeLocalSystemSid, 0), Acl < 0) )
    {
      ExFreePoolWithTag((PVOID)v8, 0);
    }
    else
    {
      *(_WORD *)(v8 + 2) |= 0x8004u;
      *(_DWORD *)(v8 + 16) = v9 - v8;
      *a1 = v8;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
