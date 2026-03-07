__int64 __fastcall NtQuerySystemEnvironmentValueEx(
        __m128i *a1,
        __int128 *a2,
        volatile void *a3,
        unsigned int *a4,
        _DWORD *a5)
{
  BOOLEAN v10; // bl
  __int64 v11; // rbx
  unsigned __int16 v12; // ax
  char *v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned __int64 v16; // rbx
  _WORD *Pool2; // rax
  _WORD *v18; // rsi
  int FirmwareEnvironmentVariable; // ebx
  int v20; // eax
  char v21; // cl
  char v22[4]; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-94h] BYREF
  int v24; // [rsp+38h] [rbp-90h]
  PVOID P; // [rsp+40h] [rbp-88h]
  int v26; // [rsp+48h] [rbp-80h] BYREF
  __m128i Src; // [rsp+50h] [rbp-78h]
  __int128 v28; // [rsp+70h] [rbp-58h] BYREF

  Src = 0LL;
  P = 0LL;
  v28 = 0LL;
  v23 = 0;
  v26 = 0;
  if ( !KeGetCurrentThread()->PreviousMode )
    return ExGetFirmwareEnvironmentVariable((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, (_DWORD)a4, (__int64)a5);
  v10 = SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, 1);
  if ( !v10 )
  {
    if ( (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
      v10 = ExpFirmwareAccessAppContainerCheck(1LL);
    if ( !v10 )
    {
      v22[0] = 0;
      v20 = RtlCheckTokenMembershipEx(0LL, SeExports->SeUserModeDriversSid, 0, v22);
      v21 = v22[0];
      if ( v20 < 0 )
        v21 = 0;
      v22[0] = v21;
      if ( !v21 )
      {
        FirmwareEnvironmentVariable = -1073741727;
        goto LABEL_39;
      }
    }
  }
  if ( dword_140C316F0 != 2 )
  {
    FirmwareEnvironmentVariable = -1073741822;
LABEL_39:
    v18 = P;
    goto LABEL_35;
  }
  if ( ((unsigned __int8)a1 & 3) != 0 )
LABEL_27:
    ExRaiseDatatypeMisalignment();
  v11 = 0x7FFFFFFF0000LL;
  Src = *a1;
  v12 = _mm_cvtsi128_si32(Src);
  if ( v12 )
  {
    if ( (Src.m128i_i8[8] & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = (char *)(Src.m128i_i64[1] + v12);
    if ( (unsigned __int64)v13 > 0x7FFFFFFF0000LL || (unsigned __int64)v13 < Src.m128i_i64[1] )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( ((unsigned __int8)a2 & 3) == 0 )
    {
      v14 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v14 = (__int64)a4;
      *(_DWORD *)v14 = *(_DWORD *)v14;
      v15 = *a4;
      v23 = *a4;
      if ( !a3 )
      {
        v23 = 0;
        v15 = 0;
      }
      if ( v15 )
        ProbeForWrite(a3, v15, 1u);
      if ( a5 )
      {
        if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
          v11 = (__int64)a5;
        *(_DWORD *)v11 = *(_DWORD *)v11;
      }
      v28 = *a2;
      v16 = Src.m128i_u16[0];
      Pool2 = (_WORD *)ExAllocatePool2(64LL, Src.m128i_u16[0] + 2LL, 1920364101LL);
      v18 = Pool2;
      P = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, (const void *)Src.m128i_i64[1], (unsigned int)v16);
        v18[v16 >> 1] = 0;
        FirmwareEnvironmentVariable = ExpGetFirmwareEnvironmentVariable(
                                        (_DWORD)v18,
                                        (unsigned int)&v28,
                                        (_DWORD)a3,
                                        (unsigned int)&v23,
                                        (__int64)&v26,
                                        1);
        v24 = FirmwareEnvironmentVariable;
        if ( (int)(FirmwareEnvironmentVariable + 0x80000000) < 0 || FirmwareEnvironmentVariable == -1073741789 )
          *a4 = v23;
        if ( a5 && FirmwareEnvironmentVariable >= 0 )
          *a5 = v26;
      }
      else
      {
        FirmwareEnvironmentVariable = -1073741670;
        v24 = -1073741670;
      }
      goto LABEL_35;
    }
    goto LABEL_27;
  }
  FirmwareEnvironmentVariable = -1073741819;
  v24 = -1073741819;
  v18 = P;
LABEL_35:
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  return (unsigned int)FirmwareEnvironmentVariable;
}
