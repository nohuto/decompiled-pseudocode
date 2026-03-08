/*
 * XREFs of MiSessionObjectCreate @ 0x140757A78
 * Callers:
 *     MiSessionCreate @ 0x140756EC8 (MiSessionCreate.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140208BFC (RtlStringCchPrintfW.c)
 *     RtlLengthSid @ 0x140245EC0 (RtlLengthSid.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     KeGetSchedulingGroupSize @ 0x1402F1604 (KeGetSchedulingGroupSize.c)
 *     KeInsertSchedulingGroup @ 0x1402F161C (KeInsertSchedulingGroup.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D26A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1406D3290 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1406DB5A0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406DB640 (RtlCreateAcl.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS MiSessionObjectCreate()
{
  NTSTATUS result; // eax
  ULONG v1; // ebx
  ULONG v2; // edi
  ACL *Pool; // rax
  ACL *v4; // rbx
  int Acl; // edi
  ACL *v6; // rcx
  unsigned __int64 v7; // rdi
  int Object; // esi
  NTSTATUS v9; // ebx
  unsigned int SchedulingGroupSize; // eax
  PVOID v11; // rax
  __int64 v12; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v13[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v14; // [rsp+78h] [rbp-90h]
  UNICODE_STRING *p_DestinationString; // [rsp+80h] [rbp-88h]
  int v16; // [rsp+88h] [rbp-80h]
  int v17; // [rsp+8Ch] [rbp-7Ch]
  _OWORD *v18; // [rsp+90h] [rbp-78h]
  __int64 v19; // [rsp+98h] [rbp-70h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v22; // [rsp+D0h] [rbp-38h]
  wchar_t pszDest[128]; // [rsp+D8h] [rbp-30h] BYREF

  v12 = 0LL;
  v13[1] = 0;
  v17 = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v22 = 0LL;
  DestinationString = 0LL;
  result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( result >= 0 )
  {
    v1 = RtlLengthSid(SeAliasAdminsSid);
    v2 = v1 + RtlLengthSid(SeLocalSystemSid) + 32;
    Pool = (ACL *)MiAllocatePool(256, v2, 0x6C636144u);
    v4 = Pool;
    if ( !Pool )
      return -1073741670;
    Acl = RtlCreateAcl(Pool, v2, 2u);
    v6 = v4;
    if ( Acl >= 0 )
    {
      Acl = RtlpAddKnownAce((__int64)v4, 2u, 0, 983043, (unsigned __int8 *)SeAliasAdminsSid, 0);
      v6 = v4;
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce((__int64)v4, 2u, 0, 983043, (unsigned __int8 *)SeLocalSystemSid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v4, 0);
          if ( Acl >= 0 )
          {
            v7 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
            Object = RtlStringCchPrintfW(pszDest, 0x80uLL, L"\\KernelObjects\\Session%d", *(unsigned int *)(v7 + 8));
            if ( Object < 0 )
            {
              ExFreePoolWithTag(v4, 0);
            }
            else
            {
              RtlInitUnicodeString(&DestinationString, pszDest);
              p_DestinationString = &DestinationString;
              v13[0] = 48;
              v18 = SecurityDescriptor;
              v14 = 0LL;
              v16 = 512;
              v19 = 0LL;
              Object = ObCreateObjectEx(0, (_DWORD)MmSessionObjectType, (unsigned int)v13, 0);
              ExFreePoolWithTag(v4, 0);
              if ( Object >= 0 )
              {
                MEMORY[0x18] = v7;
                KeInitializeEvent(0LL, NotificationEvent, 0);
                MEMORY[0x20] = 0LL;
                if ( !PsCpuFairShareEnabled || !*(_DWORD *)(v7 + 8) )
                  goto LABEL_10;
                SchedulingGroupSize = KeGetSchedulingGroupSize();
                v11 = MiAllocatePool(72, SchedulingGroupSize, 0x70724753u);
                MEMORY[0x20] = v11;
                if ( v11 )
                {
                  KeInsertSchedulingGroup((__int64)v11, 5LL, 0LL);
LABEL_10:
                  result = ObInsertObjectEx(0LL, 0LL, 0, 0LL, (__int64)&v12);
                  v9 = result;
                  if ( result >= 0 )
                  {
                    *(_DWORD *)(v7 + 4) |= 8u;
                    _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
                    *(_QWORD *)(v7 + 56) = v12;
                    *(_QWORD *)(v7 + 48) = 0LL;
                    *(_DWORD *)(v7 + 752) = 2;
                    *(_DWORD *)(v7 + 756) = 1;
                    KeInitializeEvent((PRKEVENT)(v7 + 760), SynchronizationEvent, 1u);
                    return v9;
                  }
                  return result;
                }
                ObfDereferenceObject(0LL);
                return -1073741670;
              }
            }
            return Object;
          }
        }
        v6 = v4;
      }
    }
    ExFreePoolWithTag(v6, 0);
    return Acl;
  }
  return result;
}
