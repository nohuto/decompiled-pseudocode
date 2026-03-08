/*
 * XREFs of PspQueryPooledQuotaLimits @ 0x1409AC410
 * Callers:
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PspQueryPooledQuotaLimits(ULONG_PTR BugCheckParameter1, __int64 a2, int a3, _DWORD *a4, char a5)
{
  __int64 result; // rax
  PVOID *v10; // rcx
  PVOID v11; // r8
  PVOID v12; // rsi
  PVOID v13; // rbx
  PVOID v14; // rdx
  PVOID v15; // rdi
  PVOID v16; // r10
  PVOID v17; // rax
  PVOID v18; // r11
  PVOID v19; // r9
  PVOID Object[12]; // [rsp+40h] [rbp-68h] BYREF

  Object[0] = 0LL;
  memset(&Object[2], 0, 0x48uLL);
  if ( a3 != 72 )
    return 3221225476LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             4096,
             (__int64)PsProcessType,
             a5,
             0x79517350u,
             Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v10 = (PVOID *)*((_QWORD *)Object[0] + 173);
    v11 = v10[24];
    v12 = v10[16];
    Object[3] = v12;
    v13 = v10[17];
    v14 = v10[8];
    v15 = *v10;
    Object[6] = *v10;
    v16 = v10[1];
    v17 = v10[40];
    v18 = v10[32];
    Object[9] = v18;
    v19 = v10[33];
    if ( v11 <= v12 )
      v11 = v12;
    Object[4] = v11;
    if ( v14 <= v15 )
      v14 = v15;
    Object[7] = v14;
    if ( v17 <= v18 )
      v17 = v18;
    Object[10] = v17;
    if ( v13 <= v12 )
      v13 = v12;
    Object[2] = v13;
    if ( v16 <= v15 )
      v16 = v15;
    Object[5] = v16;
    if ( v19 <= v18 )
      v19 = v18;
    Object[8] = v19;
    ObfDereferenceObjectWithTag(Object[0], 0x79517350u);
    *(_OWORD *)a2 = *(_OWORD *)&Object[2];
    *(_OWORD *)(a2 + 16) = *(_OWORD *)&Object[4];
    *(_OWORD *)(a2 + 32) = *(_OWORD *)&Object[6];
    *(_OWORD *)(a2 + 48) = *(_OWORD *)&Object[8];
    *(PVOID *)(a2 + 64) = Object[10];
    if ( a4 )
      *a4 = 72;
    return 0LL;
  }
  return result;
}
