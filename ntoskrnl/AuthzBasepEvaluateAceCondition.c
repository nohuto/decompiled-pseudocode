/*
 * XREFs of AuthzBasepEvaluateAceCondition @ 0x140246980
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140206FC0 (SepCommonAccessCheckEx.c)
 *     SepMaximumAccessCheck @ 0x140208450 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x140208E18 (SepNormalAccessCheckEx.c)
 *     SepFilterCheck @ 0x140263850 (SepFilterCheck.c)
 *     SeAccessCheckWithHint @ 0x1402653A0 (SeAccessCheckWithHint.c)
 *     SepNormalAccessCheck @ 0x140267220 (SepNormalAccessCheck.c)
 *     SeAccessCheckByType @ 0x14033BB40 (SeAccessCheckByType.c)
 *     SepMaximumAccessCheckEx @ 0x1403C8AF0 (SepMaximumAccessCheckEx.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1405B5D24 (SepVerifyDesktopAppxPackageName.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 *     SeExamineSacl @ 0x1408A18B0 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1409CB8C4 (SepExamineSaclEx.c)
 * Callees:
 *     AuthzBasepPushResult @ 0x140245DC0 (AuthzBasepPushResult.c)
 *     AuthzBasepResetOperands @ 0x140247000 (AuthzBasepResetOperands.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1402472F0 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     SepPotentialGlobalTableAttribute @ 0x14024799C (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402B8730 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepIsValidExpression @ 0x1402DA698 (AuthzBasepIsValidExpression.c)
 *     AuthzBasepEvaluateAttribute @ 0x1402E2940 (AuthzBasepEvaluateAttribute.c)
 *     AuthzBasepGetConstantOperand @ 0x1402E9A60 (AuthzBasepGetConstantOperand.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x140365960 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     AuthzBasepEvaluateExpression @ 0x140366314 (AuthzBasepEvaluateExpression.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     __report_rangecheckfailure @ 0x1404FBCCC (__report_rangecheckfailure.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1405B710C (SepValidateAndCopyGlobalEntry.c)
 *     AuthzBasepComputeExpression @ 0x14066D244 (AuthzBasepComputeExpression.c)
 *     AuthzBasepDeviceMemberOf @ 0x14066D2CC (AuthzBasepDeviceMemberOf.c)
 *     AuthzBasepMemberOf @ 0x14066D410 (AuthzBasepMemberOf.c)
 *     AuthzBasepPopResult @ 0x14066D538 (AuthzBasepPopResult.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepEvaluateAceCondition(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8,
        unsigned int a9,
        char a10,
        char a11,
        _DWORD *a12)
{
  _DWORD *v12; // r14
  int SecurityAttributeAndValues; // r15d
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  char v17; // r12
  __int64 v18; // rsi
  unsigned int v19; // ebx
  __int64 v20; // rdi
  int v21; // edi
  int v22; // r8d
  __int64 v23; // rbx
  unsigned int v24; // ecx
  unsigned int v25; // ebx
  __int64 v26; // r14
  PVOID *v27; // r14
  void *v28; // rax
  PVOID *v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // r8d
  __int64 v34; // rdi
  int v35; // eax
  _BYTE *v36; // rbx
  PVOID *v37; // rdi
  _BYTE *v39; // rax
  int v40; // eax
  __int64 v41; // r10
  int v42; // eax
  PVOID v43; // rbx
  char v44; // [rsp+30h] [rbp-D0h]
  char v45[3]; // [rsp+31h] [rbp-CFh] BYREF
  _WORD v46[2]; // [rsp+34h] [rbp-CCh] BYREF
  int v47; // [rsp+38h] [rbp-C8h] BYREF
  char v48; // [rsp+3Ch] [rbp-C4h]
  char v49; // [rsp+3Dh] [rbp-C3h]
  unsigned int v50; // [rsp+40h] [rbp-C0h]
  _DWORD *v51; // [rsp+48h] [rbp-B8h]
  int v52; // [rsp+50h] [rbp-B0h] BYREF
  char v53; // [rsp+54h] [rbp-ACh]
  bool v54; // [rsp+55h] [rbp-ABh]
  int v55; // [rsp+58h] [rbp-A8h]
  int v56; // [rsp+5Ch] [rbp-A4h]
  __int64 v57; // [rsp+60h] [rbp-A0h]
  _OWORD v58[5]; // [rsp+70h] [rbp-90h] BYREF
  int v59; // [rsp+C0h] [rbp-40h]
  __int64 v60; // [rsp+C8h] [rbp-38h]
  unsigned int v61; // [rsp+D0h] [rbp-30h]
  void *v62; // [rsp+D8h] [rbp-28h]
  PVOID v63[2]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE *v64; // [rsp+F0h] [rbp-10h]
  __int64 v65; // [rsp+F8h] [rbp-8h]
  __int64 v66; // [rsp+100h] [rbp+0h]
  __int64 v67; // [rsp+108h] [rbp+8h]
  __int64 v68; // [rsp+110h] [rbp+10h]
  __int64 v69; // [rsp+118h] [rbp+18h]
  PCUNICODE_STRING String2; // [rsp+120h] [rbp+20h]
  __int128 v71; // [rsp+128h] [rbp+28h] BYREF
  __int128 v72; // [rsp+138h] [rbp+38h]
  char *v73; // [rsp+148h] [rbp+48h]
  __int128 v74; // [rsp+150h] [rbp+50h] BYREF
  PVOID P[16]; // [rsp+160h] [rbp+60h] BYREF
  _DWORD v76[256]; // [rsp+1E0h] [rbp+E0h] BYREF

  v12 = a12;
  SecurityAttributeAndValues = 0;
  v65 = a5;
  v68 = a6;
  v69 = a3;
  v62 = a2;
  v60 = a1;
  v67 = a7;
  v66 = a4;
  v51 = a12;
  v52 = 0;
  LODWORD(v74) = 0;
  *((_QWORD *)&v74 + 1) = 0LL;
  memset(P, 0, sizeof(P));
  LOWORD(v58[0]) = 0;
  BYTE4(v58[0]) = 0;
  memset((char *)v58 + 5, 0, 0x4BuLL);
  v47 = -1;
  v73 = 0LL;
  v17 = 0;
  v63[1] = (PVOID)-1LL;
  v55 = 0;
  v56 = 0;
  v18 = 2LL;
  v59 = 0;
  v46[0] = 0;
  v49 = 0;
  v48 = 0;
  v45[0] = 0;
  v53 = 0;
  v44 = 0;
  v63[0] = 0LL;
  *a12 = -1;
  P[1] = 0LL;
  P[10] = 0LL;
  v71 = 0LL;
  HIDWORD(v71) = 1;
  v72 = 0LL;
  if ( !a1 || !a8 )
  {
    SecurityAttributeAndValues = -1073741811;
    goto LABEL_34;
  }
  v54 = KeGetCurrentIrql() >= 2u;
  if ( a9 < 4 || *a8 != 2020897377 )
  {
    *a12 = 1;
    SecurityAttributeAndValues = -2147483601;
    goto LABEL_73;
  }
  AuthzBasepResetOperands(v58, v46);
  v19 = 4;
  v50 = 0;
  v16 = 0LL;
  if ( a9 <= 4 )
  {
LABEL_73:
    v17 = 0;
    goto LABEL_34;
  }
  while ( 1 )
  {
    v15 = 0x140000000uLL;
    v20 = *((unsigned __int8 *)a8 + v19);
    if ( (_DWORD)v20 != 248 )
      break;
    v23 = v19 + 1;
    if ( (_DWORD)v16 == 2 )
    {
      if ( HIDWORD(v58[0]) == 1 )
        goto LABEL_69;
      v47 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v58[1], 0x140000000uLL);
      SecurityAttributeAndValues = AuthzBasepPushResult((__int64)v76, &v52, v47);
      if ( SecurityAttributeAndValues < 0 )
        goto LABEL_52;
      if ( LOBYTE(v46[0]) )
        ExFreePoolWithTag(*(PVOID *)(v41 + 24), 0);
      v74 = *(_OWORD *)&P[7];
      *(_OWORD *)P = *(_OWORD *)&P[9];
      *(_OWORD *)&P[2] = *(_OWORD *)&P[11];
      P[6] = P[15];
      *(_OWORD *)&P[4] = *(_OWORD *)&P[13];
      *(_OWORD *)((char *)&v58[1] + 8) = v58[4];
      *(_QWORD *)&v58[1] = &v74;
      v46[0] = HIBYTE(v46[0]);
      v58[0] = *(_OWORD *)((char *)&v58[2] + 8);
      *(_OWORD *)((char *)&v58[2] + 8) = 0LL;
      *((_QWORD *)&v58[4] + 1) = 0LL;
      *(_OWORD *)((char *)&v58[3] + 8) = 0LL;
      memset(&P[7], 0, 0x48uLL);
      v16 = 1LL;
      v50 = 1;
    }
    if ( a9 - (unsigned int)v23 < 4 )
      goto LABEL_69;
    v24 = *(_DWORD *)((char *)a8 + v23);
    v25 = v23 + 4;
    v61 = v24;
    if ( a9 - v25 < v24 )
      goto LABEL_69;
    if ( v24 > 0xFFFE )
    {
      SecurityAttributeAndValues = -1073741562;
LABEL_52:
      v12 = v51;
      v17 = v44;
      goto LABEL_34;
    }
    DWORD2(v72) = v24;
    v73 = (char *)a8 + v25;
    v64 = (char *)v46 + (unsigned int)v16;
    v26 = 9LL * (unsigned int)v16;
    v57 = v26 * 8;
    String2 = (PCUNICODE_STRING)&P[v26];
    SecurityAttributeAndValues = AuthzBasepUnicodeStringFromOperandValue(&v71, 0LL, &P[v26], v64);
    if ( SecurityAttributeAndValues < 0 )
      goto LABEL_52;
    v27 = &P[v26 - 2];
    v28 = v62;
    *(_DWORD *)v27 = 2;
    v29 = (PVOID *)((char *)&P[-1] + v57);
    v30 = v50;
    *(PVOID *)((char *)&P[-1] + v57) = v28;
    v31 = 9 * v30;
    P[v31 + 5] = 0LL;
    P[v31 + 6] = 0LL;
    SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues(v27);
    if ( SecurityAttributeAndValues != -1073741275 )
      goto LABEL_28;
    if ( *(_DWORD *)v27 == 2 )
    {
      v15 = *((unsigned int *)SepSingletonGlobal + 4);
      if ( (v15 & 1) != 0
        && (*(_DWORD *)(v60 + 200) & 0x20000) == 0
        && (unsigned __int8)SepPotentialGlobalTableAttribute(String2)
        && !v53 )
      {
        if ( v44 )
          goto LABEL_65;
        v42 = SepValidateAndCopyGlobalEntry(v62, v63);
        SecurityAttributeAndValues = v42;
        if ( v42 >= 0 )
        {
          v44 = 1;
LABEL_65:
          *v29 = v63[0];
          SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues(v27);
          if ( SecurityAttributeAndValues != -1073741275 )
            goto LABEL_28;
          *v29 = v62;
          goto LABEL_25;
        }
        v53 = 1;
        if ( v42 != -1073741275 )
        {
LABEL_44:
          if ( SecurityAttributeAndValues != -1073741275 )
            goto LABEL_52;
LABEL_45:
          v33 = v50;
          SecurityAttributeAndValues = 0;
          v34 = 40LL * v50;
          v39 = v64;
          *(_WORD *)((char *)v58 + v34) = 0;
          *(_DWORD *)((char *)v58 + v34 + 4) = 0;
          *(_QWORD *)((char *)&v58[1] + v34) = 0LL;
          if ( *v39 )
          {
            ExFreePoolWithTag(*(PVOID *)((char *)&P[1] + v57), 0);
            v33 = v50;
            if ( v50 >= 2 )
              _report_rangecheckfailure();
            *v64 = 0;
          }
          goto LABEL_30;
        }
      }
    }
LABEL_25:
    if ( v54 || *(_DWORD *)v27 != 2 )
      goto LABEL_45;
    *(_DWORD *)v27 = 7;
    *v29 = 0LL;
    SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues(v27);
LABEL_28:
    if ( SecurityAttributeAndValues < 0 )
      goto LABEL_44;
    v32 = v57;
    v33 = v50;
    v34 = 40LL * v50;
    *(_WORD *)((char *)v58 + v34) = *(_WORD *)((char *)&P[2] + v57);
    *(_DWORD *)((char *)v58 + v34 + 4) = *(_DWORD *)((char *)&P[3] + v32);
    *(_QWORD *)((char *)&v58[1] + v34) = v27;
LABEL_30:
    v35 = *(_DWORD *)v27;
    v16 = v33 + 1;
    v19 = v61 + v25;
    *(_DWORD *)((char *)&v58[1] + v34 + 8) = 0;
    *(_QWORD *)((char *)&v58[2] + v34) = 0LL;
    *(_DWORD *)((char *)v58 + v34 + 8) = 0;
    *(_DWORD *)((char *)v58 + v34 + 12) = v35;
    v50 = v16;
LABEL_31:
    if ( v19 >= a9 )
    {
      if ( v52 == 1 )
      {
        v12 = v51;
        v17 = v44;
        *v51 = v76[0];
        goto LABEL_34;
      }
      if ( !v52 && (_DWORD)v16 == 1 )
      {
        v40 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v58[1], v15);
        v12 = v51;
        v17 = v44;
        *v51 = v40;
        goto LABEL_34;
      }
      goto LABEL_52;
    }
  }
  if ( (_DWORD)v20 == 162 )
  {
    ++v19;
    if ( !(unsigned __int8)AuthzBasepIsValidExpression(162LL, v58, v16, v45) )
      goto LABEL_69;
    if ( (_DWORD)v16 == 1 )
    {
      v47 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v58[1], v15);
      v21 = v47;
      AuthzBasepResetOperands(v58, v46);
    }
    else
    {
      SecurityAttributeAndValues = AuthzBasepPopResult(v76, &v52, &v47);
      if ( SecurityAttributeAndValues < 0 )
        goto LABEL_52;
      v21 = v47;
    }
    if ( v21 == -1 )
      v22 = -1;
    else
      v22 = v21 == 0;
    SecurityAttributeAndValues = AuthzBasepPushResult((__int64)v76, &v52, v22);
    if ( SecurityAttributeAndValues < 0 )
      goto LABEL_52;
    AuthzBasepResetOperands(v58, v46);
    v16 = 0LL;
    v50 = 0;
    goto LABEL_31;
  }
  if ( (unsigned int)v20 <= 0xFC )
    __asm { jmp     rcx }
LABEL_69:
  v12 = v51;
  SecurityAttributeAndValues = -1073741406;
  v17 = v44;
LABEL_34:
  v36 = v46;
  v37 = &P[1];
  do
  {
    if ( *v36 )
      ExFreePoolWithTag(*v37, 0);
    ++v36;
    v37 += 9;
    --v18;
  }
  while ( v18 );
  if ( v17 )
  {
    v43 = v63[0];
    if ( v63[0] )
    {
      AuthzBasepFreeSecurityAttributesList(v63[0], v15, v16);
      ExFreePoolWithTag(v43, 0x74416553u);
    }
  }
  if ( SecurityAttributeAndValues < 0 )
    *v12 = -1;
  return (unsigned int)SecurityAttributeAndValues;
}
