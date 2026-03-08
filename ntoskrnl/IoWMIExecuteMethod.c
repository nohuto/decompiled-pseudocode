/*
 * XREFs of IoWMIExecuteMethod @ 0x1409DBE40
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     WmipQuerySetExecuteSI @ 0x14069C72C (WmipQuerySetExecuteSI.c)
 *     WmipAllocateSingleInstanceWnode @ 0x1409DC6D4 (WmipAllocateSingleInstanceWnode.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoWMIExecuteMethod(
        PVOID DataBlockObject,
        PUNICODE_STRING InstanceName,
        ULONG MethodId,
        ULONG InBufferSize,
        PULONG OutBufferSize,
        PUCHAR InOutBuffer)
{
  PULONG v6; // rsi
  ULONG v9; // r8d
  int SingleInstanceWnode; // eax
  _QWORD *v13; // rdi
  NTSTATUS SetExecuteSI; // ebx
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // r12d
  unsigned __int16 *v18; // rcx
  ULONG v19; // eax
  PUCHAR v21; // rcx
  int v22; // [rsp+40h] [rbp-10h] BYREF
  int v23; // [rsp+44h] [rbp-Ch] BYREF
  PVOID P; // [rsp+48h] [rbp-8h] BYREF
  __int64 v25; // [rsp+98h] [rbp+48h] BYREF

  v6 = OutBufferSize;
  LODWORD(v25) = 0;
  v23 = 0;
  v22 = 0;
  v9 = *OutBufferSize;
  P = 0LL;
  if ( InBufferSize > v9 )
    v9 = InBufferSize;
  SingleInstanceWnode = WmipAllocateSingleInstanceWnode(
                          68,
                          (_DWORD)InstanceName,
                          v9,
                          (unsigned int)&v22,
                          (__int64)&v23,
                          (__int64)&v25,
                          (__int64)&P);
  v13 = P;
  SetExecuteSI = SingleInstanceWnode;
  if ( SingleInstanceWnode >= 0 )
  {
    v15 = v22;
    v16 = v25;
    *((_DWORD *)P + 11) = 0x8000;
    v13[2] = 0LL;
    *(_DWORD *)v13 = v16;
    *((_DWORD *)v13 + 3) = 0;
    *((_DWORD *)v13 + 14) = MethodId;
    v17 = v23;
    *((_DWORD *)v13 + 12) = v15;
    *((_DWORD *)v13 + 15) = v17;
    *((_DWORD *)v13 + 16) = InBufferSize;
    v18 = (unsigned __int16 *)((char *)v13 + *((unsigned int *)v13 + 12));
    *v18 = InstanceName->Length;
    memmove(v18 + 1, InstanceName->Buffer, InstanceName->Length);
    memmove((char *)v13 + *((unsigned int *)v13 + 15), InOutBuffer, InBufferSize);
    LODWORD(v25) = *(_DWORD *)v13;
    SetExecuteSI = WmipQuerySetExecuteSI(DataBlockObject, 0LL, 0, 9u, (__int64)v13, v16, (unsigned int *)&v25);
    if ( SetExecuteSI >= 0 )
    {
      if ( (*((_DWORD *)v13 + 11) & 0x20) != 0 )
      {
        v19 = *((_DWORD *)v13 + 12) - v17;
LABEL_7:
        SetExecuteSI = -1073741789;
        *v6 = (v19 + 7) & 0xFFFFFFF8;
        goto LABEL_8;
      }
      v19 = *((_DWORD *)v13 + 16);
      if ( *v6 < v19 )
        goto LABEL_7;
      v21 = InOutBuffer;
      *v6 = v19;
      memmove(v21, (char *)v13 + *((unsigned int *)v13 + 15), *((unsigned int *)v13 + 16));
    }
  }
LABEL_8:
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  return SetExecuteSI;
}
