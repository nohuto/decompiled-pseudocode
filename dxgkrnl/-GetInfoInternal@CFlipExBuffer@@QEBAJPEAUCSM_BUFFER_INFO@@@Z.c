__int64 __fastcall CFlipExBuffer::GetInfoInternal(CFlipExBuffer *this, struct CSM_BUFFER_INFO *a2)
{
  unsigned int v4; // eax
  void *v6; // rax
  PROCESSINFOCLASS v7; // edi
  NTSTATUS v8; // eax
  const wchar_t **v9; // rax
  const wchar_t **v10; // rbx
  wchar_t *v11; // rax
  wchar_t *v12; // rdx
  _WORD *v13; // rcx
  __int64 v14; // r8
  signed __int64 v15; // rdx
  __int16 v16; // ax
  _WORD *v17; // rax
  struct _CLIENT_ID ClientId; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ProcessInformationLength; // [rsp+A0h] [rbp+30h] BYREF
  void *ProcessHandle; // [rsp+A8h] [rbp+38h] BYREF

  *(_DWORD *)a2 = 2;
  *((_QWORD *)a2 + 1) = *((_QWORD *)this + 2);
  *((_OWORD *)a2 + 1) = *((_OWORD *)this + 3);
  *((_OWORD *)a2 + 2) = *((_OWORD *)this + 4);
  *((_OWORD *)a2 + 3) = *((_OWORD *)this + 5);
  *((_OWORD *)a2 + 4) = *((_OWORD *)this + 6);
  *((_OWORD *)a2 + 5) = *((_OWORD *)this + 7);
  *((_OWORD *)a2 + 6) = *((_OWORD *)this + 8);
  *((_OWORD *)a2 + 7) = *((_OWORD *)this + 9);
  *((_OWORD *)a2 + 8) = *((_OWORD *)this + 10);
  *((_OWORD *)a2 + 9) = *((_OWORD *)this + 11);
  *((_QWORD *)a2 + 145) = *((_QWORD *)this + 40);
  *((_QWORD *)a2 + 146) = 0LL;
  *((_QWORD *)a2 + 147) = 0LL;
  *((_DWORD *)a2 + 40) = 0;
  *((_DWORD *)a2 + 41) = *((_DWORD *)this + 68);
  v4 = *((_DWORD *)this + 68);
  if ( v4 )
  {
    if ( v4 <= 1 )
      goto LABEL_3;
    v6 = (void *)*((unsigned int *)this + 158);
    if ( !(_DWORD)v6 )
      goto LABEL_3;
    ProcessHandle = 0LL;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ClientId.UniqueProcess = v6;
    ClientId.UniqueThread = 0LL;
    if ( ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) < 0 )
      goto LABEL_3;
    v7 = ProcessImageFileNameWin32;
    ProcessInformationLength = 0;
    v8 = ZwQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, 0LL, 0, &ProcessInformationLength);
    if ( v8 < 0 )
    {
      if ( v8 == -1073741820 )
        goto LABEL_11;
      v7 = ProcessImageFileName;
      v8 = ZwQueryInformationProcess(ProcessHandle, ProcessImageFileName, 0LL, 0, &ProcessInformationLength);
    }
    if ( v8 != -1073741820 )
    {
LABEL_25:
      ZwClose(ProcessHandle);
LABEL_3:
      *((_DWORD *)a2 + 40) = *(_DWORD *)(*((_QWORD *)this + 32) + 16LL);
      return 0LL;
    }
LABEL_11:
    if ( ProcessInformationLength > 0x10 )
    {
      v9 = (const wchar_t **)operator new[](ProcessInformationLength + 2LL, 0x624D5343u, 256LL);
      v10 = v9;
      if ( v9 )
      {
        if ( ZwQueryInformationProcess(ProcessHandle, v7, v9, ProcessInformationLength, 0LL) >= 0 )
        {
          v11 = wcsrchr_0(v10[1], 0x5Cu);
          if ( v11 )
            v12 = v11 + 1;
          else
            v12 = (wchar_t *)v10[1];
          v13 = (_WORD *)((char *)a2 + 1184);
          v14 = 64LL;
          v15 = (char *)v12 - ((char *)a2 + 1184);
          do
          {
            if ( v14 == -2147483582 )
              break;
            v16 = *(_WORD *)((char *)v13 + v15);
            if ( !v16 )
              break;
            *v13++ = v16;
            --v14;
          }
          while ( v14 );
          v17 = v13 - 1;
          if ( v14 )
            v17 = v13;
          *v17 = 0;
        }
        ExFreePoolWithTag(v10, 0);
      }
    }
    goto LABEL_25;
  }
  return 0LL;
}
