/*
 * XREFs of PspSetProcessAffinitySafe @ 0x140908724
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     PspApplyJobLimitsToProcess @ 0x1406F509C (PspApplyJobLimitsToProcess.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 *     PspUpdateSingleProcessAffinity @ 0x140908930 (PspUpdateSingleProcessAffinity.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     KeSetAffinityProcess @ 0x1403CB43C (KeSetAffinityProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     KeIsSubsetAffinityEx @ 0x140513880 (KeIsSubsetAffinityEx.c)
 */

__int64 __fastcall PspSetProcessAffinitySafe(__int64 a1, char a2, unsigned __int16 *a3, __int64 *a4, int *a5)
{
  int v9; // ebp
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rdx
  char v13; // si
  __int64 v14; // rbx
  int v15; // eax
  _QWORD v17[22]; // [rsp+20h] [rbp-F8h] BYREF

  memset(v17, 0, 0xA8uLL);
  v9 = 0;
  v10 = 1;
  if ( a4 )
  {
    LODWORD(v17[0]) = 1310721;
    memset((char *)v17 + 4, 0, 0xA4uLL);
    v11 = *((unsigned __int16 *)a4 + 4);
    v12 = *a4;
    if ( (_WORD)v11 )
      LOWORD(v17[0]) = v11 + 1;
    v17[v11 + 1] |= v12;
    a3 = (unsigned __int16 *)v17;
    v13 = 1;
  }
  else
  {
    v13 = 0;
    if ( (a2 & 2) != 0 )
      v13 = 2;
  }
  if ( (a2 & 1) != 0 || (*(_DWORD *)(a1 + 2172) & 0x1000) != 0 )
  {
    v14 = 0LL;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 1296);
    if ( v14 )
    {
      ExAcquireResourceSharedLite((PERESOURCE)(v14 + 56), 1u);
      v15 = *(_DWORD *)(v14 + 848);
      if ( (v15 & 0x10) != 0
        && ((v15 & 0x4000) == 0 || !(unsigned int)KeIsSubsetAffinityEx(a3, (unsigned __int16 *)(v14 + 616))) )
      {
        v10 = 0;
        goto LABEL_16;
      }
    }
  }
  v9 = KeSetAffinityProcess(a1, v13, a3);
LABEL_16:
  if ( v14 )
    ExReleaseResourceLite((PERESOURCE)(v14 + 56));
  if ( v9 >= 0 )
    *a5 = v10;
  return (unsigned int)v9;
}
