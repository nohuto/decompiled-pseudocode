/*
 * XREFs of PopPreallocateHibernateMemory @ 0x1407FC7F4
 * Callers:
 *     PopEnableHiberFile @ 0x14082ADA4 (PopEnableHiberFile.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x140236718 (MmGetHighestPhysicalPage.c)
 *     MmObtainChargesToLockPagedPool @ 0x14085CC30 (MmObtainChargesToLockPagedPool.c)
 *     HvlpPreallocatePageListResources @ 0x14093E770 (HvlpPreallocatePageListResources.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 PopPreallocateHibernateMemory()
{
  __int64 v0; // rsi
  unsigned __int64 HighestPhysicalPage; // rax
  unsigned int v2; // r8d
  int v3; // r9d
  unsigned __int64 v4; // rdi
  unsigned int v5; // r8d
  unsigned int v6; // eax
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r12
  ULONG_PTR v10; // rbp
  __int64 Pool2; // rax
  char *v12; // rbx
  __int64 result; // rax
  __int64 v14; // [rsp+30h] [rbp-98h]
  __int64 v15; // [rsp+58h] [rbp-70h]
  __int64 v16; // [rsp+D0h] [rbp+8h]
  __int64 v17; // [rsp+D8h] [rbp+10h]
  __int64 v18; // [rsp+E0h] [rbp+18h]
  __int64 v19; // [rsp+E8h] [rbp+20h]

  if ( dword_140C316F0 == 2 )
    v0 = 102400LL;
  else
    v0 = v14;
  HighestPhysicalPage = MmGetHighestPhysicalPage(0);
  v4 = (HighestPhysicalPage + 32) & 0xFFFFFFFFFFFFFFE0uLL;
  if ( v4 < HighestPhysicalPage || v4 > 0xFFFFFFFF )
    return 3221225626LL;
  v16 = v2;
  v5 = ((unsigned int)v4 >> 3) + v2;
  v17 = v5;
  v18 = (v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8;
  v6 = ((((v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8) + 176;
  v19 = (((v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8;
  if ( v3 == 2 )
  {
    v7 = ((((v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8) + 176;
    v6 = ((((v5 + ((unsigned int)v4 >> 3) + 7) & 0xFFFFFFF8) + 247) & 0xFFFFFFF8) + 232;
  }
  else
  {
    v7 = v15;
  }
  v8 = v6;
  v9 = (v6 + 135) & 0xFFFFFFF8;
  if ( (HvlpFlags & 2) == 0 || (result = HvlpPreallocatePageListResources(), (int)result >= 0) )
  {
    v10 = ((((_DWORD)v9 + 4159) & 0xFFFFF000) + 0x3FFF) & 0xFFFFF000;
    Pool2 = ExAllocatePool2(256LL, v10, 1919052136LL);
    v12 = (char *)Pool2;
    if ( Pool2 )
    {
      if ( (unsigned int)MmObtainChargesToLockPagedPool(Pool2, v10) )
      {
        qword_140C3CAC8 = (__int64)(v12 + 4096);
        Length = v10;
        qword_140C3CAB0 = v12;
        qword_140C3CAC0 = (__int64)v12;
        if ( dword_140C316F0 == 2 )
          qword_140C3CB18 = (__int64)&v12[v0];
        else
          qword_140C3CB18 = 0LL;
        LODWORD(xmmword_140C3CAE0) = v4;
        *((_QWORD *)&xmmword_140C3CAE0 + 1) = &v12[v16];
        LODWORD(xmmword_140C3CAD0) = v4;
        *((_QWORD *)&xmmword_140C3CAD0 + 1) = &v12[v17];
        qword_140C3CAF0 = (__int64)&v12[v18];
        if ( dword_140C316F0 == 2 )
          qword_140C3CB20 = (__int64)&v12[v7];
        else
          qword_140C3CB20 = 0LL;
        qword_140C3CAF8 = &v12[v9];
        Address = &v12[((_DWORD)v9 + 4159) & 0xFFFFF000];
        qword_140C3CB08 = &v12[v8];
        qword_140C3CB10 = (__int64)&v12[v19];
        return 0LL;
      }
      ExFreePoolWithTag(v12, 0x72626968u);
    }
    return 3221225626LL;
  }
  return result;
}
