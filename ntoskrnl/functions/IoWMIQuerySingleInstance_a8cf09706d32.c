NTSTATUS __stdcall IoWMIQuerySingleInstance(
        PVOID DataBlockObject,
        PUNICODE_STRING InstanceName,
        PULONG InOutBufferSize,
        PVOID OutBuffer)
{
  ULONG v5; // ebp
  unsigned int v6; // edi
  _DWORD *Pool2; // rbx
  NTSTATUS SetExecuteSI; // edi
  int v12; // eax
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF

  v5 = *InOutBufferSize;
  v6 = (InstanceName->Length + 73) & 0xFFFFFFF8;
  Pool2 = OutBuffer;
  if ( !OutBuffer || v5 < v6 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, v6, 1885957463LL);
    v5 = v6;
    if ( !Pool2 )
      return -1073741670;
  }
  memset(Pool2, 0, 0x40uLL);
  *((_QWORD *)Pool2 + 2) = 0LL;
  Pool2[3] = 0;
  Pool2[11] = 2;
  *Pool2 = v6;
  Pool2[12] = 64;
  Pool2[14] = v6;
  *((_WORD *)Pool2 + 32) = InstanceName->Length;
  memmove((char *)Pool2 + 66, InstanceName->Buffer, InstanceName->Length);
  LODWORD(v14) = *Pool2;
  SetExecuteSI = WmipQuerySetExecuteSI(DataBlockObject, 0LL, 0, 1u, (__int64)Pool2, v5, (unsigned int *)&v14);
  if ( SetExecuteSI < 0 )
  {
LABEL_10:
    if ( Pool2 == OutBuffer )
      return SetExecuteSI;
LABEL_11:
    ExFreePoolWithTag(Pool2, 0);
    return SetExecuteSI;
  }
  v12 = Pool2[11];
  if ( (v12 & 0x100) != 0 )
  {
    SetExecuteSI = -1073741637;
    goto LABEL_10;
  }
  if ( (v12 & 0x20) != 0 )
  {
    SetExecuteSI = -1073741789;
    *InOutBufferSize = Pool2[12];
    goto LABEL_10;
  }
  *InOutBufferSize = v14;
  if ( Pool2 != OutBuffer )
  {
    SetExecuteSI = -1073741789;
    goto LABEL_11;
  }
  return SetExecuteSI;
}
