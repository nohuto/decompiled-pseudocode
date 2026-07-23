/*
 * XREFs of NtFilterBootOption @ 0x140923DF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckTokenMembership @ 0x140348440 (RtlCheckTokenMembership.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     SepSecureBootCorrectBcd @ 0x140924238 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x140924804 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __cdecl NtFilterBootOption(
        FILTER_BOOT_OPTION_OPERATION FilterOperation,
        ULONG ObjectType,
        ULONG ElementType,
        PVOID Data,
        ULONG DataSize)
{
  ULONG v6; // esi
  FILTER_BOOT_OPTION_OPERATION v7; // r12d
  NTSTATUS v8; // edi
  ULONG v9; // r15d
  int v10; // eax
  int v11; // eax
  PVOID v12; // rsi
  unsigned int v13; // edx
  unsigned int *v14; // rcx
  int v15; // eax
  __int16 v16; // r9
  __int64 v17; // rcx
  BOOLEAN IsMember[4]; // [rsp+20h] [rbp-58h] BYREF
  int v20; // [rsp+24h] [rbp-54h]
  PVOID P; // [rsp+28h] [rbp-50h]
  _QWORD v22[9]; // [rsp+30h] [rbp-48h] BYREF

  v6 = ObjectType;
  v7 = FilterOperation;
  P = 0LL;
  v22[0] = 0LL;
  IsMember[0] = SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode);
  if ( !IsMember[0] && (RtlCheckTokenMembership(0LL, SeAliasAdminsSid, IsMember) < 0 || !IsMember[0]) )
  {
    v8 = -1073741790;
    goto LABEL_58;
  }
  if ( !qword_140CF5110 )
  {
    v8 = -2143092730;
    goto LABEL_58;
  }
  if ( v7 )
  {
    if ( v7 == FilterBootOptionOperationSetElement )
    {
      if ( v6 )
      {
        if ( ElementType )
        {
          if ( Data )
          {
            v9 = DataSize;
            if ( DataSize )
            {
              v11 = dword_140CFA3A8;
              if ( !_bittest(&v11, HIBYTE(ElementType) & 0xF) )
              {
LABEL_22:
                v8 = 0;
                goto LABEL_58;
              }
              if ( KeGetCurrentThread()->PreviousMode )
              {
                if ( (unsigned __int64)Data + DataSize > 0x7FFFFFFF0000LL || (char *)Data + DataSize < Data )
                  MEMORY[0x7FFFFFFF0000] = 0;
                if ( DataSize > 8 )
                {
                  P = ExAllocatePoolWithTag(PagedPool, DataSize, 0x62536553u);
                  if ( !P )
                  {
                    v8 = -1073741801;
                    v20 = -1073741801;
                    goto LABEL_58;
                  }
                  v12 = P;
                  memmove(P, Data, DataSize);
                  Data = v12;
                  v6 = ObjectType;
                }
                else
                {
                  memmove(v22, Data, DataSize);
                  Data = v22;
                }
                v7 = FilterOperation;
              }
              goto LABEL_33;
            }
          }
        }
      }
    }
    else
    {
      if ( v7 != FilterBootOptionOperationDeleteElement )
      {
        v8 = -1073741585;
        goto LABEL_58;
      }
      if ( v6 )
      {
        if ( ElementType )
        {
          if ( !Data )
          {
            v9 = DataSize;
            if ( !DataSize )
            {
              v10 = dword_140CFA3A8;
              if ( !_bittest(&v10, HIBYTE(ElementType) & 0xF) )
                goto LABEL_22;
LABEL_33:
              v13 = 0;
              v8 = 0;
              if ( *((_WORD *)qword_140CF5110 + 18) )
              {
                v14 = (unsigned int *)(qword_140CFA3A0 + 8);
                while ( 1 )
                {
                  if ( *(v14 - 1) == ElementType )
                  {
                    v15 = *(v14 - 2);
                    if ( !v15 || v15 == v6 )
                    {
                      v16 = *(_WORD *)(*v14 + qword_140CFA3B0);
                      if ( ((v16 & 0x20) == 0 || (dword_140C5463C & 4) != 0)
                        && ((v16 & 0x40) == 0 || (dword_140C5463C & 0x10) != 0) )
                      {
                        break;
                      }
                    }
                  }
                  ++v13;
                  v14 += 3;
                  if ( v13 >= *((unsigned __int16 *)qword_140CF5110 + 18) )
                    goto LABEL_22;
                }
                if ( v7 == FilterBootOptionOperationSetElement )
                {
                  v8 = SepSecureBootValidateBcdDataAgainstBcdRule(qword_140CFA3A0 + 12LL * v13, Data, v9);
                }
                else
                {
                  v8 = 0;
                  v17 = *(unsigned int *)(qword_140CFA3A0 + 12LL * v13 + 8);
                  if ( (*(_BYTE *)(v17 + qword_140CFA3B0) & 0x1F) != 8 || *(_WORD *)(v17 + qword_140CFA3B0 + 2) )
                    v8 = -1069350910;
                }
              }
              goto LABEL_58;
            }
          }
        }
      }
    }
LABEL_57:
    v8 = -1073741811;
    goto LABEL_58;
  }
  if ( v6 || ElementType || Data || DataSize )
    goto LABEL_57;
  v20 = 0;
  if ( !_InterlockedCompareExchange(&dword_140CFA3AC, 0, 0) )
  {
    v8 = SepSecureBootCorrectBcd((unsigned int)v7);
    v20 = v8;
    if ( v8 < 0 )
      goto LABEL_58;
    _InterlockedExchange(&dword_140CFA3AC, 1);
  }
  v8 = v20;
LABEL_58:
  if ( P )
    ExFreePoolWithTag(P, 0x62536553u);
  return v8;
}
