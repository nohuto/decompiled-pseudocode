/*
 * XREFs of AlpcpCaptureHandleAttributeInternal @ 0x140710ED0
 * Callers:
 *     AlpcpCaptureHandleAttribute @ 0x140710E7C (AlpcpCaptureHandleAttribute.c)
 *     AlpcpCaptureHandleAttribute32 @ 0x140977C14 (AlpcpCaptureHandleAttribute32.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObCaptureObjectStateForDuplication @ 0x1407111A4 (ObCaptureObjectStateForDuplication.c)
 *     AlpcpDereferenceBlobEx @ 0x14071550C (AlpcpDereferenceBlobEx.c)
 *     AlpcpAllocateBlob @ 0x1407CBB50 (AlpcpAllocateBlob.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcpCaptureHandleAttributeInternal(__int64 a1, __int64 a2)
{
  char PreviousMode; // r12
  __int64 v4; // rsi
  ULONG_PTR v5; // rdi
  char *Pool2; // r14
  void *Blob; // rax
  _KPROCESS *Process; // r13
  int v9; // ebx
  __int64 j; // r12
  int v11; // ecx
  unsigned __int64 v13; // r10
  __int64 v14; // rbx
  __int64 i; // r9
  int v16; // ecx
  char *v17; // [rsp+58h] [rbp-50h]
  int *v18; // [rsp+60h] [rbp-48h]
  char v19; // [rsp+B0h] [rbp+8h]
  __int64 v21; // [rsp+C0h] [rbp+18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v19 = PreviousMode;
  if ( (*(_DWORD *)a1 & 0xFFF0FFFF) != 0 )
    return 3221225485LL;
  LODWORD(v4) = 1;
  v5 = 0LL;
  Pool2 = 0LL;
  if ( (*(_DWORD *)a1 & 0x40000) != 0 )
  {
    v4 = *(unsigned int *)(a1 + 16);
    if ( (unsigned int)v4 > 0x200 )
      return 3221227298LL;
    if ( (unsigned int)v4 > 1 )
    {
      Pool2 = (char *)ExAllocatePool2(64LL, 24 * v4, 1214476364LL);
      if ( !Pool2 )
        return 3221225495LL;
      v13 = *(_QWORD *)(a1 + 8);
      if ( KeGetCurrentThread()->PreviousMode )
      {
        v14 = 16LL * (unsigned int)v4;
        if ( v14 )
        {
          if ( (v13 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v14 + v13 > 0x7FFFFFFF0000LL || v14 + v13 < v13 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      for ( i = 0LL; (unsigned int)i < (unsigned int)v4; i = (unsigned int)(i + 1) )
      {
        v17 = &Pool2[24 * i];
        v18 = (int *)(v13 + 16LL * (unsigned int)i);
        v16 = *v18;
        *(_DWORD *)v17 = *v18;
        *((_QWORD *)v17 + 1) = (unsigned int)v18[1];
        *((_DWORD *)v17 + 4) = v18[2];
        *((_DWORD *)v17 + 5) = v18[3];
        if ( (v16 & 0xFFF4FFFF) != 0 )
        {
          v9 = -1073741811;
          goto LABEL_12;
        }
      }
      goto LABEL_3;
    }
    return 3221225485LL;
  }
LABEL_3:
  Blob = (void *)AlpcpAllocateBlob(AlpcHandleDataType, 48LL * (unsigned int)v4);
  v5 = (ULONG_PTR)Blob;
  if ( Blob )
  {
    memset(Blob, 0, 48LL * (unsigned int)v4);
    *(_DWORD *)(v5 + 4) = v4;
    if ( PreviousMode )
      Process = KeGetCurrentThread()->ApcState.Process;
    else
      Process = PsInitialSystemProcess;
    v9 = 0;
    for ( j = 0LL; ; j = (unsigned int)(j + 1) )
    {
      if ( (unsigned int)j >= (unsigned int)v4 )
      {
        *(_QWORD *)(a2 + 48) = v5;
        v5 = 0LL;
        goto LABEL_12;
      }
      v21 = 48 * j;
      v9 = ObCaptureObjectStateForDuplication(Process, v19, v5 + 48 * j + 8);
      if ( v9 >= 0 )
      {
        v11 = *(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(*(_QWORD *)(v21 + v5 + 24)
                                                                                                - 24LL) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(*(_QWORD *)(v21 + v5 + 24) - 48) >> 8)]
                        + 68);
        *(_DWORD *)(v21 + v5) = v11;
        if ( (v11 & 0xFFD) == 0 )
          break;
      }
    }
    v9 = -1073741790;
  }
  else
  {
    v9 = -1073741670;
  }
LABEL_12:
  if ( v5 )
    AlpcpDereferenceBlobEx(v5);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x4863704Cu);
  return (unsigned int)v9;
}
