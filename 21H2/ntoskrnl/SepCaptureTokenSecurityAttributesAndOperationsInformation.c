/*
 * XREFs of SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x140600E20
 * Callers:
 *     NtSetInformationToken @ 0x140694530 (NtSetInformationToken.c)
 * Callees:
 *     SepCaptureTokenSecurityOperations @ 0x14023B028 (SepCaptureTokenSecurityOperations.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140600F9C (SepCaptureTokenSecurityAttributesInformation.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x140611B90 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall SepCaptureTokenSecurityAttributesAndOperationsInformation(_QWORD *a1, char a2, _QWORD *a3)
{
  _DWORD *v5; // rax
  unsigned int v6; // r14d
  __int64 v7; // rbx
  _DWORD *v8; // rdi
  NTSTATUS result; // eax
  int v10; // r9d
  int v11; // edi
  _QWORD *PoolWithTag; // rax
  PVOID v13; // rbx
  PVOID v14; // rcx
  PVOID P; // [rsp+80h] [rbp+18h] BYREF
  PVOID v16; // [rsp+88h] [rbp+20h] BYREF

  v16 = 0LL;
  P = 0LL;
  *a3 = 0LL;
  if ( !a2 )
  {
    if ( !a1[1] )
      return -1073741811;
    *a3 = a1;
    return 0;
  }
  if ( ((unsigned __int8)a1 & 3) != 0 )
    goto LABEL_12;
  v5 = (_DWORD *)a1[1];
  if ( !v5 )
    return -1073741811;
  if ( ((unsigned __int8)v5 & 3) != 0 )
    goto LABEL_12;
  v6 = 0;
  v7 = *a1;
  if ( *a1 )
  {
    if ( (*a1 & 3) == 0 )
    {
      v7 = *a1;
      v6 = *(_DWORD *)(*a1 + 4LL);
      v8 = (_DWORD *)a1[1];
      goto LABEL_8;
    }
LABEL_12:
    ExRaiseDatatypeMisalignment();
  }
  v8 = (_DWORD *)a1[1];
  if ( *v5 != 1 )
    return -1073741811;
LABEL_8:
  result = SepCaptureTokenSecurityOperations(v8, v6, a2, &P);
  if ( result >= 0 )
  {
    if ( v7
      && (LOBYTE(v10) = a2,
          v11 = SepCaptureTokenSecurityAttributesInformation(v7, (_DWORD)v8, v6, v10, 1, (__int64)&v16),
          v11 < 0) )
    {
      v13 = 0LL;
      v14 = P;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x6F416553u);
      v13 = v16;
      v14 = P;
      if ( !PoolWithTag )
      {
        v11 = -1073741801;
        goto LABEL_26;
      }
      PoolWithTag[1] = P;
      *PoolWithTag = v13;
      *a3 = PoolWithTag;
      v11 = 0;
    }
    if ( v11 >= 0 )
      return v11;
LABEL_26:
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    if ( v13 )
      SepFreeCapturedTokenSecurityAttributesInformation(v13);
    return v11;
  }
  return result;
}
