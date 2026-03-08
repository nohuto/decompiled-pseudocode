/*
 * XREFs of NtFilterBootOption @ 0x1409CD700
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckTokenMembership @ 0x1402BDFD0 (RtlCheckTokenMembership.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     SepSecureBootCorrectBcd @ 0x1409CDB74 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1409CE184 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtFilterBootOption(int a1, int a2, unsigned int a3, _QWORD *a4, size_t Size)
{
  int v7; // r15d
  int v8; // edi
  unsigned int v9; // r14d
  int v10; // eax
  int v11; // eax
  _QWORD *v12; // rsi
  unsigned int v13; // r8d
  unsigned int *v14; // rdx
  int v15; // eax
  __int16 v16; // r10
  __int64 v17; // rcx
  BOOLEAN v19; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v20[3]; // [rsp+21h] [rbp-47h] BYREF
  int v21; // [rsp+24h] [rbp-44h]
  PVOID P; // [rsp+28h] [rbp-40h]
  _QWORD v23[2]; // [rsp+30h] [rbp-38h] BYREF

  v7 = a1;
  P = 0LL;
  v20[0] = 0;
  v23[0] = 0LL;
  v19 = SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode);
  if ( !v19 && ((int)RtlCheckTokenMembership(0LL, SeAliasAdminsSid, &v19) < 0 || !v19) )
  {
    v8 = -1073741790;
    goto LABEL_61;
  }
  v21 = 0;
  v8 = 0;
  if ( !qword_140D17BD0 )
  {
    v8 = -2143092730;
    goto LABEL_61;
  }
  if ( !v7 )
  {
    if ( !a2 && !a3 && !a4 && !(_DWORD)Size )
    {
      if ( !_InterlockedCompareExchange(&dword_140D1BC2C, 0, 0) )
      {
        v8 = SepSecureBootCorrectBcd(v20);
        v21 = v8;
        if ( v8 < 0 || !byte_140D1BC30 && v20[0] )
          goto LABEL_61;
        _InterlockedExchange(&dword_140D1BC2C, 1);
      }
      v8 = v21;
      goto LABEL_61;
    }
    goto LABEL_49;
  }
  if ( v7 == 1 )
  {
    if ( a2 )
    {
      if ( a3 )
      {
        if ( a4 )
        {
          v9 = Size;
          if ( (_DWORD)Size )
          {
            v11 = dword_140D1BC40;
            if ( !_bittest(&v11, HIBYTE(a3) & 0xF) )
            {
LABEL_21:
              v8 = 0;
              goto LABEL_61;
            }
            if ( KeGetCurrentThread()->PreviousMode )
            {
              if ( (unsigned __int64)a4 + (unsigned int)Size > 0x7FFFFFFF0000LL
                || (_QWORD *)((char *)a4 + (unsigned int)Size) < a4 )
              {
                MEMORY[0x7FFFFFFF0000] = 0;
              }
              if ( (unsigned int)Size > 8 )
              {
                P = (PVOID)ExAllocatePool2(256LL, (unsigned int)Size, 1649632595LL);
                if ( !P )
                {
                  v8 = -1073741801;
                  v21 = -1073741801;
                  goto LABEL_61;
                }
                v12 = P;
                memmove(P, a4, (unsigned int)Size);
                a4 = v12;
              }
              else
              {
                memmove(v23, a4, (unsigned int)Size);
                a4 = v23;
              }
              v8 = v21;
              v7 = a1;
            }
            else
            {
              v8 = v21;
            }
            goto LABEL_33;
          }
        }
      }
    }
LABEL_49:
    v8 = -1073741811;
    goto LABEL_61;
  }
  if ( v7 != 2 )
  {
    v8 = -1073741585;
    goto LABEL_61;
  }
  if ( !a2 )
    goto LABEL_49;
  if ( !a3 )
    goto LABEL_49;
  if ( a4 )
    goto LABEL_49;
  v9 = Size;
  if ( (_DWORD)Size )
    goto LABEL_49;
  v10 = dword_140D1BC40;
  if ( !_bittest(&v10, HIBYTE(a3) & 0xF) )
    goto LABEL_21;
LABEL_33:
  v13 = 0;
  if ( *((_WORD *)qword_140D17BD0 + 18) )
  {
    v14 = (unsigned int *)(qword_140D1BC38 + 8);
    while ( 1 )
    {
      if ( *(v14 - 1) == a3 )
      {
        v15 = *(v14 - 2);
        if ( !v15 || v15 == a2 )
        {
          v16 = *(_WORD *)(*v14 + qword_140D1BC48);
          if ( ((v16 & 0x20) == 0 || (dword_140C70C04 & 4) != 0) && ((v16 & 0x40) == 0 || (dword_140C70C04 & 0x10) != 0) )
            break;
        }
      }
      ++v13;
      v14 += 3;
      if ( v13 >= *((unsigned __int16 *)qword_140D17BD0 + 18) )
        goto LABEL_61;
    }
    if ( v7 == 1 )
    {
      v8 = SepSecureBootValidateBcdDataAgainstBcdRule(qword_140D1BC38 + 12LL * v13, a4, v9);
    }
    else
    {
      v8 = 0;
      v17 = *(unsigned int *)(qword_140D1BC38 + 12LL * v13 + 8);
      if ( (*(_BYTE *)(v17 + qword_140D1BC48) & 0x1F) != 8 || *(_WORD *)(v17 + qword_140D1BC48 + 2) )
        v8 = -1069350910;
    }
  }
LABEL_61:
  if ( P )
    ExFreePoolWithTag(P, 0x62536553u);
  return (unsigned int)v8;
}
