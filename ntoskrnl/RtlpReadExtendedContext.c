/*
 * XREFs of RtlpReadExtendedContext @ 0x1407EDC30
 * Callers:
 *     KiContinuePreviousModeUser @ 0x1403647F4 (KiContinuePreviousModeUser.c)
 *     KyRaiseException @ 0x140576670 (KyRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x14057E274 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspWow64GetContextThread @ 0x14077BF00 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x14077C1CC (PspWow64SetContextThread.c)
 *     PspSetContextThreadInternal @ 0x1407EE340 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407EE524 (PspGetContextThreadInternal.c)
 * Callees:
 *     RtlpCopyExtendedContext @ 0x140364B00 (RtlpCopyExtendedContext.c)
 *     RtlpValidateContextFlags @ 0x1403650A0 (RtlpValidateContextFlags.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlpReadExtendedContextLayout @ 0x1407EE7F0 (RtlpReadExtendedContextLayout.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpReadExtendedContext(__int64 a1, char a2, __int64 a3, unsigned int a4, __int64 a5, _OWORD *a6)
{
  int v7; // esi
  __int64 v8; // rdi
  _OWORD *v9; // r15
  __int64 result; // rax
  int v11; // ecx
  char v12; // r12
  __int64 v13; // rdx
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  __int64 v16; // rdi
  unsigned int v17; // r8d
  unsigned int *v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8
  __int64 v26; // [rsp+20h] [rbp-88h]
  int v28; // [rsp+38h] [rbp-70h] BYREF
  int v29; // [rsp+3Ch] [rbp-6Ch]
  __int64 v30; // [rsp+40h] [rbp-68h]
  __int64 v31; // [rsp+48h] [rbp-60h]
  _OWORD v32[2]; // [rsp+50h] [rbp-58h] BYREF

  v31 = a3;
  v28 = 0;
  v7 = 0;
  memset(v32, 0, sizeof(v32));
  v8 = 0LL;
  v30 = 0LL;
  v9 = v32;
  if ( a6 )
    v9 = a6;
  result = RtlpValidateContextFlags(a4, &v28);
  if ( (int)result >= 0 )
  {
    v12 = v28;
    if ( (v28 & 4) != 0 )
      return 3221225659LL;
    result = RtlpReadExtendedContextLayout(v11, a4, a5, v28, (__int64)v9);
    v29 = result;
    if ( (int)result >= 0 )
    {
      if ( (a4 & 0x10000) != 0 )
      {
        v7 = 4;
        v8 = a5 + 716;
      }
      else
      {
        if ( (a4 & 0x100000) != 0 )
        {
          v8 = a5 + 1232;
        }
        else
        {
          if ( (a4 & 0x200000) != 0 )
          {
            v7 = 8;
            v8 = a5 + 416;
            goto LABEL_10;
          }
          if ( (a4 & 0x400000) == 0 )
            goto LABEL_11;
          v8 = a5 + 912;
        }
        v7 = 16;
      }
LABEL_10:
      v30 = v8;
LABEL_11:
      if ( (v12 & 1) != 0 )
      {
        v13 = *((unsigned int *)v9 + 3);
        if ( (_DWORD)v13 )
        {
          v14 = *((int *)v9 + 2);
          if ( ((unsigned int)(v7 - 1) & (unsigned __int64)(v14 + v8)) != 0 )
            ExRaiseDatatypeMisalignment();
          v15 = v8 + v14 + v13;
          if ( v15 > 0x7FFFFFFF0000LL || v15 < v14 + v8 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      if ( (v12 & 2) != 0 )
      {
        v22 = *((unsigned int *)v9 + 5);
        if ( (_DWORD)v22 )
        {
          v23 = *((int *)v9 + 4);
          v24 = v23 + v8;
          if ( (((_BYTE)v23 + (_BYTE)v8) & 0x3F) != 0 )
            ExRaiseDatatypeMisalignment();
          v25 = v8 + v22 + v23;
          if ( v25 > 0x7FFFFFFF0000LL || v25 < v24 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      v26 = v8;
      v16 = v31;
      result = RtlpCopyExtendedContext(a2, v31, 0LL, a4, v26, (__int64)v9);
      v17 = result;
      v29 = result;
      if ( (int)result < 0 )
        return result;
      v18 = (unsigned int *)(v16 + *(int *)(v16 + 8));
      if ( (a4 & 0x10000) == 0 )
      {
        if ( (a4 & 0x100000) != 0 )
        {
          v18[12] = a4;
LABEL_21:
          if ( (v12 & 2) != 0 )
          {
            v19 = v16 + *(int *)(v16 + 16);
            v20 = *(_QWORD *)v19 & (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0xFFFFFFFFFFFFFFFCuLL;
            *(_QWORD *)v19 = v20;
            if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
            {
              v21 = *(_QWORD *)(v19 + 8) & (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708] | 0x8000000000000000uLL);
              *(_QWORD *)(v19 + 8) = v21;
              if ( (~v21 & v20) != 0 )
                return 3221225485LL;
            }
            else
            {
              *(_QWORD *)(v19 + 8) = 0LL;
            }
            *(_OWORD *)(v19 + 16) = 0LL;
            *(_OWORD *)(v19 + 32) = 0LL;
            *(_OWORD *)(v19 + 48) = 0LL;
          }
          return v17;
        }
        if ( (a4 & 0x200000) == 0 && (a4 & 0x400000) == 0 )
          goto LABEL_21;
      }
      *v18 = a4;
      goto LABEL_21;
    }
  }
  return result;
}
