/*
 * XREFs of BasepGetVolumeDosLetterNameFromNTName @ 0x14000F84C
 * Callers:
 *     GetFinalPathNameByHandleW @ 0x14000FCC0 (GetFinalPathNameByHandleW.c)
 * Callees:
 *     DeviceIoControl @ 0x14000FBD8 (DeviceIoControl.c)
 *     CreateFileW @ 0x140010898 (CreateFileW.c)
 *     CloseHandle @ 0x1400109A8 (CloseHandle.c)
 *     memcpy_0 @ 0x140011B67 (memcpy_0.c)
 *     memmove_0 @ 0x140011B73 (memmove_0.c)
 */

__int64 __fastcall BasepGetVolumeDosLetterNameFromNTName(const wchar_t *Src, _QWORD *a2)
{
  _QWORD *v4; // rdi
  _DWORD *v5; // rax
  _DWORD *v6; // rcx
  unsigned int v7; // esi
  __int64 result; // rax
  __int64 v9; // rbx
  void *FileW; // r12
  __int64 v11; // rax
  _WORD *Heap; // rax
  void *v13; // r14
  unsigned __int16 v14; // bx
  unsigned int v15; // ebx
  _QWORD *v16; // rax
  WCHAR *v17; // r15
  unsigned int v18; // eax
  unsigned __int64 v19; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  __int64 v21; // [rsp+90h] [rbp+18h] BYREF

  v4 = 0LL;
  LODWORD(v21) = _wcsnicmp(Src, L"\\Device\\MUP", 0xBuLL);
  if ( (_DWORD)v21 )
  {
    v9 = -1LL;
    FileW = (void *)CreateFileW();
    if ( FileW != (void *)-1LL )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( Src[v11] );
      Heap = RtlAllocateHeap(
               *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
               KernelBaseGlobalData,
               (unsigned int)(2 * v11 + 4));
      v13 = Heap;
      if ( Heap )
      {
        do
          ++v9;
        while ( Src[v9] );
        v14 = 2 * v9;
        *Heap = v14;
        memcpy_0(Heap + 1, Src, v14);
        v15 = 536;
        while ( 1 )
        {
          if ( v4 )
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v4);
          v16 = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), KernelBaseGlobalData, v15);
          v4 = v16;
          if ( !v16 )
            goto LABEL_41;
          v17 = (WCHAR *)(v16 + 1);
          v7 = DeviceIoControl(FileW, 0x6D0030u, (__int64)(v16 + 1), v15 - 8, (__int64)&v21);
          v15 = *(_DWORD *)v17 + 16;
          if ( v7 )
            break;
          if ( LODWORD(KeGetPcr()->NtTib.Self[1].Self) != 234 )
          {
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v4);
LABEL_18:
            v4 = 0LL;
            goto LABEL_43;
          }
        }
        RtlInitUnicodeString(&DestinationString, v17 + 2);
        if ( DestinationString.Length != 96 && (DestinationString.Length != 98 || DestinationString.Buffer[48] != 92)
          || *DestinationString.Buffer != 92
          || DestinationString.Buffer[1] != 63 && DestinationString.Buffer[1] != 92
          || DestinationString.Buffer[2] != 63
          || DestinationString.Buffer[3] != 92
          || DestinationString.Buffer[4] != 86
          || DestinationString.Buffer[5] != 111
          || DestinationString.Buffer[6] != 108
          || DestinationString.Buffer[7] != 117
          || DestinationString.Buffer[8] != 109
          || DestinationString.Buffer[9] != 101
          || DestinationString.Buffer[10] != 123
          || DestinationString.Buffer[19] != 45
          || DestinationString.Buffer[24] != 45
          || DestinationString.Buffer[29] != 45
          || DestinationString.Buffer[34] != 45
          || DestinationString.Buffer[47] != 125 )
        {
          v18 = *(_DWORD *)v17;
          *a2 = v4;
          *v4 = 0x5C003F005C005CLL;
          v19 = v18;
          memmove_0(v17, v17 + 2, v18);
          *((_WORD *)v4 + (v19 >> 1) + 4) = 0;
          goto LABEL_18;
        }
        RtlSetLastWin32Error(3u);
      }
      else
      {
LABEL_41:
        RtlSetLastWin32Error(8u);
      }
      v7 = 0;
LABEL_43:
      CloseHandle(FileW);
      if ( v4 )
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v4);
      if ( v13 )
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v13);
      return v7;
    }
  }
  else
  {
    v5 = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), KernelBaseGlobalData, 0x10uLL);
    *a2 = v5;
    v6 = v5;
    if ( v5 )
    {
      *(_QWORD *)v5 = *(_QWORD *)L"\\\\?\\UNC";
      v5[2] = *(_DWORD *)L"UNC";
      *((_WORD *)v5 + 6) = aUnc[6];
      result = 1LL;
      *((_WORD *)v6 + 7) = 0;
      return result;
    }
    RtlSetLastWin32Error(8u);
  }
  return 0;
}
