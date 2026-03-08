/*
 * XREFs of IpmiOpRegionHandler @ 0x1C0031A50
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 */

__int64 __fastcall IpmiOpRegionHandler(__int64 a1, UCHAR *a2, _BYTE *a3)
{
  UCHAR *v5; // rsi
  bool v6; // zf
  unsigned int *v7; // rdi
  unsigned int v8; // r14d
  __int64 Pool2; // rax
  __int64 InOutBuffer; // r15
  NTSTATUS v11; // ebx
  unsigned int v12; // eax
  unsigned int *v13; // rax
  __int64 v14; // rcx
  ULONG v15; // eax
  UCHAR *v16; // rax
  unsigned __int8 v17; // r8
  ULONG OutBufferSize; // [rsp+30h] [rbp-20h] BYREF
  PVOID DataBlockObject; // [rsp+38h] [rbp-18h] BYREF
  struct _UNICODE_STRING InstanceName; // [rsp+40h] [rbp-10h] BYREF
  ULONG InOutBufferSize; // [rsp+90h] [rbp+40h] BYREF
  _BYTE *v23; // [rsp+A0h] [rbp+50h]

  v23 = a3;
  InstanceName = 0LL;
  v5 = 0LL;
  InOutBufferSize = 0;
  v6 = *(_BYTE *)(a1 + 9) == 5;
  v7 = 0LL;
  DataBlockObject = 0LL;
  OutBufferSize = 0;
  if ( !v6 || *(_BYTE *)(a1 + 10) != 1 )
  {
    v11 = -1073741823;
    goto LABEL_28;
  }
  v8 = a2[1] + 8;
  Pool2 = ExAllocatePool2(256LL, v8, 1299211073LL);
  InOutBuffer = Pool2;
  if ( !Pool2 )
  {
    v11 = -1073741670;
    goto LABEL_28;
  }
  *(_BYTE *)Pool2 = (unsigned __int16)(*(_WORD *)(a1 + 16) + *(_WORD *)(a1 + 24)) >> 8;
  *(_WORD *)(Pool2 + 1) = 0x2000;
  *(_BYTE *)(Pool2 + 3) = *(_BYTE *)(a1 + 16) + *(_BYTE *)(a1 + 24);
  v12 = a2[1];
  *(_DWORD *)(InOutBuffer + 4) = v12;
  if ( (_BYTE)v12 )
    memmove((void *)(InOutBuffer + 8), a2 + 2, v12);
  if ( *(_BYTE *)(a1 + 8) && *(_BYTE *)(a1 + 8) == 1 )
  {
    v11 = IoWMIOpenBlock(&GUID_IPMI_WMI, 0x11u, &DataBlockObject);
    if ( v11 >= 0 )
    {
      if ( DataBlockObject )
      {
        v11 = IoWMIQueryAllData(DataBlockObject, &InOutBufferSize, 0LL);
        if ( v11 == -1073741789 )
        {
          v13 = (unsigned int *)ExAllocatePool2(64LL, InOutBufferSize, 1299211073LL);
          v7 = v13;
          if ( !v13 )
          {
LABEL_13:
            v11 = -1073741670;
            goto LABEL_25;
          }
          v11 = IoWMIQueryAllData(DataBlockObject, &InOutBufferSize, v13);
          if ( v11 >= 0 )
          {
            v14 = *(unsigned int *)((char *)v7 + v7[14]);
            InstanceName.Buffer = (wchar_t *)((char *)v7 + v14 + 2);
            InstanceName.MaximumLength = *(_WORD *)((char *)v7 + v14);
            InstanceName.Length = InstanceName.MaximumLength;
            v11 = IoWMIExecuteMethod(DataBlockObject, &InstanceName, 1u, v8, &OutBufferSize, (PUCHAR)InOutBuffer);
            if ( v11 == -1073741789 )
            {
              v15 = OutBufferSize;
              if ( v8 <= OutBufferSize )
              {
                InOutBufferSize = OutBufferSize;
              }
              else
              {
                InOutBufferSize = v8;
                v15 = v8;
              }
              v16 = (UCHAR *)ExAllocatePool2(256LL, v15, 1299211073LL);
              v5 = v16;
              if ( v16 )
              {
                memmove(v16, (const void *)InOutBuffer, v8);
                v11 = IoWMIExecuteMethod(DataBlockObject, &InstanceName, 1u, v8, &OutBufferSize, v5);
                if ( v11 >= 0 )
                {
                  *a2 = *v5;
                  v17 = *v23 - 2;
                  if ( *((_DWORD *)v5 + 1) <= (unsigned int)(*(_DWORD *)v23 - 2) )
                    v17 = *((_DWORD *)v5 + 1);
                  a2[1] = v17;
                  memmove(a2 + 2, v5 + 8, v17);
                }
                goto LABEL_25;
              }
              goto LABEL_13;
            }
          }
        }
      }
    }
  }
  else
  {
    v11 = -1073741823;
  }
LABEL_25:
  ExFreePoolWithTag((PVOID)InOutBuffer, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
LABEL_28:
  if ( DataBlockObject )
    ObfDereferenceObject(DataBlockObject);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v11;
}
