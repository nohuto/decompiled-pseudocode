/*
 * XREFs of SepMandatorySubProcessToken @ 0x140297F20
 * Callers:
 *     SeSubProcessToken @ 0x14070B29C (SeSubProcessToken.c)
 * Callees:
 *     SepLocateTokenIntegrity @ 0x14030FEA8 (SepLocateTokenIntegrity.c)
 *     RtlSidDominates @ 0x14030FF10 (RtlSidDominates.c)
 *     RtlFindAceByType @ 0x1403100D0 (RtlFindAceByType.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlCreateSecurityDescriptor @ 0x1406DB5A0 (RtlCreateSecurityDescriptor.c)
 *     PsReferenceProcessFilePointer @ 0x14074C940 (PsReferenceProcessFilePointer.c)
 *     ObQuerySecurityObject @ 0x14074F0EC (ObQuerySecurityObject.c)
 *     SeTokenIsAdmin @ 0x1407819E0 (SeTokenIsAdmin.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepMandatorySubProcessToken(_DWORD *Token, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // r14d
  _QWORD *v5; // r15
  int v6; // eax
  NTSTATUS SecurityObject; // ebx
  void *v10; // r12
  _BYTE *v11; // rdi
  __int16 v12; // ax
  __int64 v13; // rax
  _BYTE *v14; // rcx
  __int64 AceByType; // rax
  _BYTE *Pool2; // rax
  void *v18; // r14
  void **TokenIntegrity; // rax
  __int64 v20; // rax
  _QWORD *v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // eax
  __int64 *v25; // r8
  __int64 v26; // r11
  __int64 v27; // r9
  int v28; // ecx
  __int64 v29; // r10
  int v30; // edx
  __int64 v31; // rcx
  unsigned int v32; // eax
  int v33; // eax
  int v34; // eax
  unsigned int v35; // ecx
  int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // [rsp+34h] [rbp-95h] BYREF
  void *v39; // [rsp+38h] [rbp-91h] BYREF
  _QWORD *v40; // [rsp+40h] [rbp-89h]
  _BYTE SecurityDescriptor[128]; // [rsp+50h] [rbp-79h] BYREF

  v4 = 0;
  v40 = a4;
  *a4 = 0LL;
  v5 = a4;
  v6 = *(_DWORD *)(a3 + 2172);
  v39 = 0LL;
  SecurityObject = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( (v6 & 1) != 0 || (*(_DWORD *)(a2 + 212) & 2) == 0 )
    goto LABEL_13;
  SecurityObject = PsReferenceProcessFilePointer(a3, &v39);
  if ( SecurityObject < 0
    || (v38 = 128,
        v11 = SecurityDescriptor,
        SecurityObject = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u),
        SecurityObject < 0) )
  {
    v10 = v39;
    goto LABEL_14;
  }
  v10 = v39;
  SecurityObject = ObQuerySecurityObject((_DWORD)v39, 16, (unsigned int)SecurityDescriptor, 128, (__int64)&v38);
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
                goto LABEL_14;
            }
            v5 = v40;
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
              if ( (_BYTE)v28 )
                v4 = *(_DWORD *)(v27 + 4LL * (unsigned int)(v28 - 1) + 8);
              v29 = *(_QWORD *)v26;
              v30 = *(unsigned __int8 *)(*(_QWORD *)v26 + 1LL);
              v31 = (unsigned int)(v30 - 1);
              if ( (_BYTE)v30 )
                v32 = *(_DWORD *)(v29 + 4 * v31 + 8);
              else
                v32 = 0;
              if ( v4 > v32 )
              {
                v33 = 0;
                if ( (_BYTE)v30 )
                  v33 = *(_DWORD *)(v29 + 4 * v31 + 8);
                *(_DWORD *)(v27 + 8) = v33;
                *v5 = *v25;
                v34 = *(unsigned __int8 *)(*(_QWORD *)v26 + 1LL);
                if ( (_BYTE)v34 )
                  v35 = *(_DWORD *)(*(_QWORD *)v26 + 4LL * (unsigned int)(v34 - 1) + 8);
                else
                  v35 = 0;
                v36 = *(_DWORD *)(a2 + 200);
                if ( v35 >= 0x2000 )
                  v37 = v36 | 0x2000;
                else
                  v37 = v36 & 0xFFFFDFFF;
                *(_DWORD *)(a2 + 200) = v37;
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
    goto LABEL_14;
  }
  Pool2 = (_BYTE *)ExAllocatePool2(256LL, v38, 538994003LL);
  v11 = Pool2;
  if ( !Pool2 )
  {
    SecurityObject = -1073741801;
    goto LABEL_14;
  }
  SecurityObject = RtlCreateSecurityDescriptor(Pool2, 1u);
  if ( SecurityObject >= 0 )
  {
    SecurityObject = ObQuerySecurityObject((_DWORD)v10, 16, (_DWORD)v11, v38, (__int64)&v38);
    goto LABEL_6;
  }
LABEL_14:
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x746C6644u);
  if ( v11 && v11 != SecurityDescriptor )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)SecurityObject;
}
