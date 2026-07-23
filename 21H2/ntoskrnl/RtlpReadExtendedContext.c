/*
 * XREFs of RtlpReadExtendedContext @ 0x14063CFF0
 * Callers:
 *     KiContinuePreviousModeUser @ 0x1402649A0 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x1405220D0 (KiRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1405253D4 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     PspWow64SetContextThread @ 0x1405F5270 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1405F561C (PspWow64GetContextThread.c)
 *     PspSetContextThreadInternal @ 0x14063CA8C (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14063CC44 (PspGetContextThreadInternal.c)
 * Callees:
 *     RtlpCopyExtendedContext @ 0x140264850 (RtlpCopyExtendedContext.c)
 *     RtlpValidateContextFlags @ 0x140264CD0 (RtlpValidateContextFlags.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlpReadExtendedContextLayout @ 0x14063D2F0 (RtlpReadExtendedContextLayout.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpReadExtendedContext(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int128 *a6)
{
  int v7; // r13d
  __int64 v8; // rsi
  __int128 *v9; // r15
  __int64 result; // rax
  int v11; // ecx
  char v12; // di
  __int64 v13; // rdx
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  int v16; // edi
  __int64 v17; // rsi
  unsigned int v18; // edx
  unsigned int *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r8
  __int64 v25; // [rsp+20h] [rbp-78h]
  int v27; // [rsp+38h] [rbp-60h] BYREF
  int v28; // [rsp+3Ch] [rbp-5Ch]
  __int64 v29; // [rsp+40h] [rbp-58h]
  __int64 v30; // [rsp+48h] [rbp-50h]
  __int128 v31; // [rsp+50h] [rbp-48h] BYREF
  __int64 v32; // [rsp+60h] [rbp-38h]

  v30 = a3;
  v27 = 0;
  v7 = 0;
  v31 = 0LL;
  v32 = 0LL;
  v8 = 0LL;
  v29 = 0LL;
  v9 = &v31;
  if ( a6 )
    v9 = a6;
  result = RtlpValidateContextFlags(a4, &v27);
  if ( (int)result < 0 )
    return result;
  v12 = v27;
  result = RtlpReadExtendedContextLayout(v11, a4, a5, v27, (__int64)v9);
  v28 = result;
  if ( (int)result < 0 )
    return result;
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
        goto LABEL_9;
      }
      if ( (a4 & 0x400000) == 0 )
        goto LABEL_10;
      v8 = a5 + 912;
    }
    v7 = 16;
  }
LABEL_9:
  v29 = v8;
LABEL_10:
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
  v16 = v12 & 2;
  if ( v16 )
  {
    v21 = *((unsigned int *)v9 + 5);
    if ( (_DWORD)v21 )
    {
      v22 = *((int *)v9 + 4);
      v23 = v22 + v8;
      if ( (((_BYTE)v22 + (_BYTE)v8) & 0x3F) != 0 )
        ExRaiseDatatypeMisalignment();
      v24 = v8 + v21 + v22;
      if ( v24 > 0x7FFFFFFF0000LL || v24 < v23 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  v25 = v8;
  v17 = v30;
  result = RtlpCopyExtendedContext(a2, v30, 0LL, a4, v25, (__int64)v9);
  v18 = result;
  v28 = result;
  if ( (int)result >= 0 )
  {
    v19 = (unsigned int *)(v17 + *(int *)(v17 + 8));
    if ( (a4 & 0x10000) == 0 )
    {
      if ( (a4 & 0x100000) != 0 )
      {
        v19[12] = a4;
LABEL_20:
        if ( v16 )
        {
          v20 = v17 + *(int *)(v17 + 16);
          *(_QWORD *)v20 &= (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
            *(_QWORD *)(v20 + 8) &= MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708] | 0x8000000000000000uLL;
          else
            *(_QWORD *)(v20 + 8) = 0LL;
          *(_OWORD *)(v20 + 16) = 0LL;
          *(_OWORD *)(v20 + 32) = 0LL;
          *(_OWORD *)(v20 + 48) = 0LL;
        }
        return v18;
      }
      if ( (a4 & 0x200000) == 0 && (a4 & 0x400000) == 0 )
        goto LABEL_20;
    }
    *v19 = a4;
    goto LABEL_20;
  }
  return result;
}
