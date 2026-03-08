/*
 * XREFs of IoWMISetSingleItem @ 0x1409DC2E0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     WmipQuerySetExecuteSI @ 0x14069C72C (WmipQuerySetExecuteSI.c)
 *     WmipAllocateSingleInstanceWnode @ 0x1409DC6D4 (WmipAllocateSingleInstanceWnode.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoWMISetSingleItem(
        PVOID DataBlockObject,
        PUNICODE_STRING InstanceName,
        ULONG DataItemId,
        ULONG Version,
        ULONG ValueBufferSize,
        PVOID ValueBuffer)
{
  NTSTATUS SingleInstanceWnode; // ebx
  _QWORD *v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rax
  int v16; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v17; // [rsp+44h] [rbp-1Ch] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-10h] BYREF

  P[0] = 0LL;
  v16 = 0;
  v17 = 0;
  LODWORD(v18) = 0;
  SingleInstanceWnode = WmipAllocateSingleInstanceWnode(
                          68,
                          (_DWORD)InstanceName,
                          ValueBufferSize,
                          (unsigned int)&v17,
                          (__int64)&v18,
                          (__int64)&v16,
                          (__int64)P);
  if ( SingleInstanceWnode >= 0 )
  {
    v11 = P[0];
    v12 = v17;
    v13 = v16;
    *((_DWORD *)P[0] + 11) = 4;
    v11[2] = 0LL;
    *(_DWORD *)v11 = v13;
    *((_DWORD *)v11 + 3) = 0;
    *((_DWORD *)v11 + 2) = Version;
    *((_DWORD *)v11 + 14) = DataItemId;
    *((_DWORD *)v11 + 12) = v12;
    *(_WORD *)((char *)v11 + v12) = InstanceName->Length;
    memmove((char *)v11 + v12 + 2, InstanceName->Buffer, InstanceName->Length);
    v14 = (unsigned int)v18;
    *((_DWORD *)v11 + 16) = ValueBufferSize;
    *((_DWORD *)v11 + 15) = v14;
    memmove((char *)v11 + v14, ValueBuffer, ValueBufferSize);
    LODWORD(v18) = *(_DWORD *)v11;
    SingleInstanceWnode = WmipQuerySetExecuteSI(DataBlockObject, 0LL, 0, 3u, (__int64)v11, v13, (unsigned int *)&v18);
    ExFreePoolWithTag(v11, 0);
  }
  return SingleInstanceWnode;
}
