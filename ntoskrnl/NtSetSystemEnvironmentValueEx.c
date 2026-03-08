/*
 * XREFs of NtSetSystemEnvironmentValueEx @ 0x1409FD460
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403D4010 (_wcsnicmp.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PsIsProcessAppContainer @ 0x140781158 (PsIsProcessAppContainer.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1409F8BC0 (ExSetFirmwareEnvironmentVariable.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409F9A04 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1409FB114 (ExpSetFirmwareEnvironmentVariable.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetSystemEnvironmentValueEx(const void **a1, __int128 *a2, unsigned __int64 a3, int a4, int a5)
{
  unsigned __int16 v8; // ax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  size_t *Pool2; // rax
  size_t *v12; // rdi
  __int64 v13; // rcx
  unsigned int v14; // ebx
  char v15; // [rsp+30h] [rbp-78h]
  unsigned int v16; // [rsp+38h] [rbp-70h]
  void *Src[2]; // [rsp+48h] [rbp-60h]
  __int128 v18; // [rsp+68h] [rbp-40h] BYREF

  v18 = 0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return ExSetFirmwareEnvironmentVariable(a1, (int)a2, a3, a4, a5);
  if ( dword_140C316F0 != 2 )
    return 3221225474LL;
  if ( ((unsigned __int8)a1 & 3) != 0 )
    goto LABEL_31;
  *(_OWORD *)Src = *(_OWORD *)a1;
  v8 = _mm_cvtsi128_si32(*(__m128i *)a1);
  if ( !v8 )
    return 3221225477LL;
  if ( ((__int64)Src[1] & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = (unsigned __int64)Src[1] + v8;
  if ( v9 > 0x7FFFFFFF0000LL || (void *)v9 < Src[1] )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( ((unsigned __int8)a2 & 3) != 0 )
LABEL_31:
    ExRaiseDatatypeMisalignment();
  v16 = a3 != 0 ? a4 : 0;
  if ( v16 )
  {
    v10 = a3 + (a4 & (unsigned int)-(a3 != 0));
    if ( v10 > 0x7FFFFFFF0000LL || v10 < a3 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v15 = SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, 1);
  if ( v15 )
    goto LABEL_23;
  if ( PsIsProcessAppContainer((__int64)KeGetCurrentThread()->ApcState.Process) )
    v15 = ExpFirmwareAccessAppContainerCheck(2);
  if ( !v15 )
    return 3221225569LL;
LABEL_23:
  v18 = *a2;
  Pool2 = (size_t *)ExAllocatePool2(64LL, LOWORD(Src[0]) + 2LL, 1920364101LL);
  v12 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, Src[1], LOWORD(Src[0]));
  *((_WORD *)v12 + ((unsigned __int64)LOWORD(Src[0]) >> 1)) = 0;
  v13 = v18 - ExpSecureBootVendorGuid;
  if ( (_QWORD)v18 == ExpSecureBootVendorGuid )
    v13 = *((_QWORD *)&v18 + 1) - 0x4B788FE7F42860BDLL;
  if ( v13 || wcsnicmp((const wchar_t *)v12, L"Kernel_", 7uLL) )
  {
    v14 = ExpSetFirmwareEnvironmentVariable(v12, (__int64)&v18, a3, v16, a5, 1);
    ExFreePoolWithTag(v12, 0);
    return v14;
  }
  else
  {
    ExFreePoolWithTag(v12, 0);
    return 3221225506LL;
  }
}
