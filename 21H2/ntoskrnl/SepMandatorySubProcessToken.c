/*
 * XREFs of SepMandatorySubProcessToken @ 0x1402517DC
 * Callers:
 *     SeSubProcessToken @ 0x140603B5C (SeSubProcessToken.c)
 * Callees:
 *     RtlSidDominates @ 0x140252890 (RtlSidDominates.c)
 *     SepLocateTokenIntegrity @ 0x1402529CC (SepLocateTokenIntegrity.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     RtlFindAceByType @ 0x140352210 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     RtlCreateSecurityDescriptor @ 0x140603560 (RtlCreateSecurityDescriptor.c)
 *     ObQuerySecurityObject @ 0x140604B34 (ObQuerySecurityObject.c)
 *     PsReferenceProcessFilePointer @ 0x140604BE0 (PsReferenceProcessFilePointer.c)
 *     SeTokenIsAdmin @ 0x140717530 (SeTokenIsAdmin.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepMandatorySubProcessToken(_DWORD *Token, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v4; // r15d
  _QWORD *v5; // r14
  int v6; // eax
  NTSTATUS SecurityObject; // ebx
  void *v10; // r12
  _BYTE *v11; // rdi
  __int16 v12; // ax
  __int64 v13; // rax
  _BYTE *v14; // rcx
  __int64 AceByType; // rax
  _BYTE *PoolWithTag; // rax
  void *v18; // r14
  void **TokenIntegrity; // rax
  __int64 v20; // rax
  _QWORD *v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // eax
  __int64 *v25; // r8
  __int64 v26; // r11
  __int64 v27; // r10
  int v28; // ecx
  unsigned int v29; // r14d
  __int64 v30; // r9
  int v31; // edx
  unsigned int v32; // eax
  int v33; // eax
  _QWORD *v34; // rcx
  int v35; // eax
  unsigned int v36; // ecx
  int v37; // eax
  unsigned int v38; // eax
  _DWORD NumberOfBytes[3]; // [rsp+34h] [rbp-95h] BYREF
  void *v40; // [rsp+40h] [rbp-89h] BYREF
  _BYTE SecurityDescriptor[128]; // [rsp+50h] [rbp-79h] BYREF

  v4 = 0;
  *(_QWORD *)&NumberOfBytes[1] = a4;
  *a4 = 0LL;
  v5 = a4;
  v6 = *(_DWORD *)(a3 + 2172);
  v40 = 0LL;
  SecurityObject = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( (v6 & 1) != 0 || (*(_DWORD *)(a2 + 212) & 2) == 0 )
    goto LABEL_13;
  SecurityObject = PsReferenceProcessFilePointer(a3, &v40);
  if ( SecurityObject < 0
    || (NumberOfBytes[0] = 128,
        v11 = SecurityDescriptor,
        SecurityObject = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u),
        SecurityObject < 0) )
  {
    v10 = v40;
    goto LABEL_15;
  }
  v10 = v40;
  SecurityObject = ObQuerySecurityObject((_DWORD)v40, 16, (unsigned int)SecurityDescriptor, 128, (__int64)NumberOfBytes);
  if ( SecurityObject != -1073741789 )
  {
LABEL_6:
    if ( SecurityObject >= 0 && v11 )
    {
      v12 = *((_WORD *)v11 + 1);
      if ( (v12 & 0x10) != 0 )
      {
        if ( v12 >= 0 )
        {
          v14 = (_BYTE *)*((_QWORD *)v11 + 3);
LABEL_12:
          AceByType = RtlFindAceByType(v14, 17LL, 0LL);
          if ( AceByType )
          {
            v18 = (void *)(AceByType + 8);
            TokenIntegrity = (void **)SepLocateTokenIntegrity(a2);
            if ( TokenIntegrity )
            {
              SecurityObject = RtlSidDominates(*TokenIntegrity, v18);
              if ( SecurityObject < 0 )
                goto LABEL_15;
            }
            v5 = *(_QWORD **)&NumberOfBytes[1];
            v4 = 0;
          }
          goto LABEL_13;
        }
        v13 = *((unsigned int *)v11 + 3);
        if ( (_DWORD)v13 )
        {
          v14 = &v11[v13];
          goto LABEL_12;
        }
      }
      v14 = 0LL;
      goto LABEL_12;
    }
    SecurityObject = 0;
LABEL_13:
    if ( Token )
    {
      if ( (Token[50] & 0x1000) != 0 && !SeTokenIsAdmin(Token) )
      {
        *(_DWORD *)(a2 + 200) &= ~0x1000u;
        v20 = SepLocateTokenIntegrity(a2);
        v21 = (_QWORD *)v20;
        if ( v20 )
        {
          v22 = *(_QWORD *)(*(_QWORD *)(a2 + 216) + 48LL);
          if ( v22 )
          {
            v26 = SepLocateTokenIntegrity(v22);
            if ( v26 )
            {
              v27 = *v25;
              v28 = *(unsigned __int8 *)(*v25 + 1);
              v29 = (_BYTE)v28 ? *(_DWORD *)(v27 + 4LL * (unsigned int)(v28 - 1) + 8) : 0;
              v30 = *(_QWORD *)v26;
              v31 = *(unsigned __int8 *)(*(_QWORD *)v26 + 1LL);
              if ( (_BYTE)v31 )
              {
                v4 = *(unsigned __int8 *)(*(_QWORD *)v26 + 1LL);
                v32 = *(_DWORD *)(v30 + 4LL * (unsigned int)(v31 - 1) + 8);
              }
              else
              {
                v32 = 0;
              }
              if ( v29 > v32 )
              {
                if ( (_BYTE)v31 )
                  v33 = *(_DWORD *)(v30 + 4LL * (unsigned int)(v4 - 1) + 8);
                else
                  v33 = 0;
                v34 = *(_QWORD **)&NumberOfBytes[1];
                *(_DWORD *)(v27 + 8) = v33;
                *v34 = *v25;
                v35 = *(unsigned __int8 *)(*(_QWORD *)v26 + 1LL);
                if ( (_BYTE)v35 )
                  v36 = *(_DWORD *)(*(_QWORD *)v26 + 4LL * (unsigned int)(v35 - 1) + 8);
                else
                  v36 = 0;
                v37 = *(_DWORD *)(a2 + 200);
                if ( v36 >= 0x2000 )
                  v38 = v37 | 0x2000;
                else
                  v38 = v37 & 0xFFFFDFFF;
                *(_DWORD *)(a2 + 200) = v38;
              }
            }
          }
          else
          {
            v23 = *(_QWORD *)v20;
            v24 = *(unsigned __int8 *)(*(_QWORD *)v20 + 1LL);
            if ( (_BYTE)v24 && *(_DWORD *)(v23 + 4LL * (unsigned int)(v24 - 1) + 8) > 0x2000u )
            {
              *(_DWORD *)(v23 + 8) = 0x2000;
              *v5 = *v21;
            }
          }
        }
      }
    }
    goto LABEL_15;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x20206553u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    SecurityObject = -1073741801;
    goto LABEL_15;
  }
  SecurityObject = RtlCreateSecurityDescriptor(PoolWithTag, 1u);
  if ( SecurityObject >= 0 )
  {
    SecurityObject = ObQuerySecurityObject((_DWORD)v10, 16, (_DWORD)v11, NumberOfBytes[0], (__int64)NumberOfBytes);
    goto LABEL_6;
  }
LABEL_15:
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x746C6644u);
  if ( v11 && v11 != SecurityDescriptor )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)SecurityObject;
}
