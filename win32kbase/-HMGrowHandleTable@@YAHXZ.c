/*
 * XREFs of ?HMGrowHandleTable@@YAHXZ @ 0x1C00ADCB4
 * Callers:
 *     HMAllocObjectEx @ 0x1C00122BC (HMAllocObjectEx.c)
 *     HMCreateHandleForObject @ 0x1C0088D60 (HMCreateHandleForObject.c)
 *     HMInitHandleTable @ 0x1C031F424 (HMInitHandleTable.c)
 * Callees:
 *     CommitReadOnlyMemory @ 0x1C00ADE80 (CommitReadOnlyMemory.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 HMGrowHandleTable(void)
{
  char *v0; // rax
  __int64 v1; // rbx
  __int64 v2; // rdx
  _QWORD *v3; // r8
  _WORD *v4; // rcx
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)gpsi + 1) == 65534LL )
    return 0LL;
  v0 = (char *)qword_1C02D0E08 + *((unsigned int *)gpsi + 216);
  if ( v0 >= gpvSharedAlloc )
    return 0LL;
  v6 = 4096LL;
  if ( (int)CommitReadOnlyMemory(ghSectionShared, &v6, (unsigned int)((_DWORD)v0 - (_DWORD)gpvSharedBase), 0LL) < 0
    || (int)MmCommitSessionMappedView((char *)gpKernelHandleTable + 24 * *((_QWORD *)gpsi + 1), v6) < 0 )
  {
    return 0LL;
  }
  *((_DWORD *)gpsi + 216) += 4096;
  *((_QWORD *)gpsi + 1) = (unsigned __int64)*((unsigned int *)gpsi + 216) >> 5;
  if ( *((_QWORD *)gpsi + 1) > 0xFFFEuLL )
    *((_QWORD *)gpsi + 1) = 65534LL;
  v1 = gHandlePages;
  memset((char *)qword_1C02D0E08 + 32 * gHandlePages, 0, 32LL * (*((_QWORD *)gpsi + 1) - gHandlePages));
  memset((char *)gpKernelHandleTable + 24 * v1, 0, 24 * (*((_QWORD *)gpsi + 1) - v1));
  v2 = *((_QWORD *)gpsi + 1) - 1LL;
  v3 = (char *)gpKernelHandleTable + 24 * v2;
  if ( v2 >= v1 )
  {
    v4 = (_WORD *)((char *)qword_1C02D0E08 + 32 * *((_QWORD *)gpsi + 1) - 6);
    do
    {
      *v4 = 1;
      if ( (v2 & 1) != 0 )
      {
        *v3 = qword_1C02D0D50;
        qword_1C02D0D50 = v2;
      }
      else
      {
        *v3 = qword_1C02D0D48;
        qword_1C02D0D48 = v2;
      }
      --v2;
      v4 -= 16;
      v3 -= 3;
    }
    while ( v2 >= v1 );
  }
  result = 1LL;
  gHandlePages = *((_QWORD *)gpsi + 1);
  return result;
}
