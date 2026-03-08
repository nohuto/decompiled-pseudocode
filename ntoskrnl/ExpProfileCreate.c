/*
 * XREFs of ExpProfileCreate @ 0x140A01038
 * Callers:
 *     NtCreateProfile @ 0x140A01750 (NtCreateProfile.c)
 *     NtCreateProfileEx @ 0x140A01830 (NtCreateProfileEx.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     KeVerifyGroupAffinity @ 0x140290374 (KeVerifyGroupAffinity.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExIsRestrictedCaller @ 0x14078A078 (ExIsRestrictedCaller.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ExpProfileCreate(
        __int64 *a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        volatile void *a6,
        unsigned int Length,
        int a8,
        unsigned __int16 a9,
        unsigned __int64 a10,
        char a11)
{
  __int128 *v14; // rbx
  __int64 result; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r15
  char PreviousMode; // di
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  int inserted; // ebx
  char *v23; // rdi
  __int64 Tag; // [rsp+20h] [rbp-218h]
  int v25; // [rsp+54h] [rbp-1E4h] BYREF
  PVOID Object; // [rsp+58h] [rbp-1E0h] BYREF
  unsigned __int64 v27; // [rsp+60h] [rbp-1D8h]
  PVOID v28; // [rsp+68h] [rbp-1D0h] BYREF
  volatile void *Address; // [rsp+70h] [rbp-1C8h]
  __int64 v30; // [rsp+78h] [rbp-1C0h] BYREF
  __int64 *v31; // [rsp+80h] [rbp-1B8h]
  __int128 v32; // [rsp+88h] [rbp-1B0h] BYREF
  __int128 v33; // [rsp+A0h] [rbp-198h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-188h]
  __int128 v35; // [rsp+B8h] [rbp-180h] BYREF
  __int128 v36; // [rsp+C8h] [rbp-170h]
  __int128 v37; // [rsp+D8h] [rbp-160h]
  _DWORD v38[68]; // [rsp+F0h] [rbp-148h] BYREF

  v27 = a3;
  v31 = a1;
  Address = a6;
  v14 = (__int128 *)a10;
  memset(&v38[2], 0, 0x100uLL);
  v32 = 0LL;
  v30 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  *(_QWORD *)&v37 = 0LL;
  DWORD2(v37) = 0;
  Object = 0LL;
  v28 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  if ( !Length )
    return 3221225717LL;
  if ( (unsigned int)(a5 - 2) > 0x1D )
    return 3221225485LL;
  v16 = (a4 >> a5) + 1;
  if ( !(a4 % (1LL << a5)) )
    v16 = a4 >> a5;
  if ( v16 > (unsigned __int64)Length >> 2 )
    return 3221225507LL;
  v17 = a3 + a4;
  if ( a3 + a4 < a4 )
    return 2147483653LL;
  LODWORD(v33) = a8;
  v25 = 0;
  if ( ((int (__fastcall *)(__int64, __int64, __int128 *, int *))off_140C020E8[0])(1LL, 24LL, &v33, &v25) < 0
    || v25 != 24
    || !BYTE4(v33) )
  {
    return 3221225659LL;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v19 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v31 < 0x7FFFFFFF0000LL )
      v19 = (__int64)v31;
    *(_QWORD *)v19 = *(_QWORD *)v19;
    ProbeForWrite(Address, Length, 4u);
    if ( !a11 )
    {
      v20 = 16LL * a9;
      if ( v20 )
      {
        if ( (a10 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v20 + a10 > 0x7FFFFFFF0000LL || v20 + a10 < a10 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  v38[0] = 2097153;
  memset(&v38[1], 0, 0x104uLL);
  while ( a9 )
  {
    if ( !PreviousMode || a11 )
      v32 = *v14;
    else
      v32 = *v14;
    if ( !KeVerifyGroupAffinity((__int64)&v32, 0) )
      return 3221225485LL;
    if ( LOWORD(v38[0]) <= WORD4(v32) )
    {
      if ( HIWORD(v38[0]) <= WORD4(v32) )
        goto LABEL_34;
      LOWORD(v38[0]) = WORD4(v32) + 1;
    }
    *(_QWORD *)&v38[2 * WORD4(v32) + 2] |= v32;
LABEL_34:
    --a9;
    ++v14;
  }
  if ( a2 )
  {
    result = ObpReferenceObjectByHandleWithTag(
               a2,
               1024,
               (__int64)PsProcessType,
               PreviousMode,
               0x66507845u,
               &Object,
               0LL,
               0LL);
    if ( (int)result >= 0 )
    {
      v21 = v27;
      goto LABEL_43;
    }
  }
  else
  {
    v21 = v27;
    if ( v27 <= 0x7FFFFFFEFFFFLL && PreviousMode && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, PreviousMode) )
      return 3221225569LL;
    Object = 0LL;
LABEL_43:
    if ( (unsigned int)ExIsRestrictedCaller(PreviousMode) && a4 && (v17 > 0x7FFFFFFF0000LL || v17 < v21) )
      MEMORY[0x7FFFFFFF0000] = 0;
    LODWORD(v35) = 48;
    *((_QWORD *)&v35 + 1) = 0LL;
    DWORD2(v36) = 32;
    *(_QWORD *)&v36 = 0LL;
    v37 = 0LL;
    inserted = ObCreateObjectEx(0, ExProfileObjectType, (__int64)&v35, PreviousMode, Tag, 336, 0, 952, &v28, 0LL);
    if ( inserted < 0 )
    {
      if ( Object )
        ObfDereferenceObjectWithTag(Object, 0x66507845u);
    }
    else
    {
      v23 = (char *)v28;
      *(_QWORD *)v28 = Object;
      *((_QWORD *)v23 + 1) = v21;
      *((_QWORD *)v23 + 2) = a4;
      *((_QWORD *)v23 + 3) = Address;
      *((_DWORD *)v23 + 8) = Length;
      *((_DWORD *)v23 + 9) = a5;
      *((_QWORD *)v23 + 6) = 0LL;
      *((_DWORD *)v23 + 16) = 0;
      *((_DWORD *)v23 + 17) = a8;
      *((_QWORD *)v23 + 9) = 2097153LL;
      memset(v23 + 80, 0, 0x100uLL);
      KiCopyAffinityEx((__int64)(v23 + 72), *((_WORD *)v23 + 37), (unsigned __int16 *)v38);
      inserted = ObInsertObjectEx(v23, 0LL, 1u, 0, 0, 0LL, &v30);
      LODWORD(v27) = inserted;
      if ( inserted >= 0 )
        *v31 = v30;
    }
    return (unsigned int)inserted;
  }
  return result;
}
