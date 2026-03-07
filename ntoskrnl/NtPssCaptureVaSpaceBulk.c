__int64 __fastcall NtPssCaptureVaSpaceBulk(ULONG_PTR a1, unsigned __int64 a2, __int128 *a3, SIZE_T a4, __int64 *a5)
{
  ULONG v5; // r10d
  __int128 *MappedSystemVa; // r14
  unsigned int v7; // ebx
  struct _MDL *v8; // r15
  int VirtualMemory; // edi
  char PreviousMode; // r12
  __int64 v12; // rcx
  ULONG_PTR v13; // r13
  struct _MDL *Mdl; // rax
  unsigned __int64 v15; // r12
  _QWORD *v16; // r13
  unsigned __int64 v17; // [rsp+58h] [rbp-F0h]
  __int64 v18; // [rsp+60h] [rbp-E8h]
  PVOID Object; // [rsp+88h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v23; // [rsp+98h] [rbp-B0h]
  ULONG_PTR v24; // [rsp+A8h] [rbp-A0h]
  unsigned __int64 v25; // [rsp+B0h] [rbp-98h]
  __int128 *v26; // [rsp+B8h] [rbp-90h]
  SIZE_T v27; // [rsp+C0h] [rbp-88h]
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-80h]
  $115DCDF994C6370D29323EAB0E0C9502 v29; // [rsp+D0h] [rbp-78h] BYREF

  v5 = a4;
  MappedSystemVa = a3;
  v17 = a2;
  v24 = a1;
  v25 = a2;
  v26 = a3;
  v27 = a4;
  Object = 0LL;
  memset(&v29, 0, sizeof(v29));
  v22 = 0LL;
  v18 = 0LL;
  v7 = 0;
  v8 = 0LL;
  VirtualMemory = 0;
  if ( a4 < 0x10 )
    return 3221225476LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v23 = 0LL;
    ProbeForWrite(a3, a4, 8u);
    if ( a5 )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a5;
      *(_QWORD *)v12 = *(_QWORD *)v12;
    }
    v23 = *MappedSystemVa;
    a2 = v17;
    v5 = a4;
    v13 = a1;
  }
  else
  {
    v23 = *a3;
    v13 = a1;
  }
  if ( (_DWORD)v23 )
  {
    if ( (v23 & 0xFFFFFFFC) != 0 )
    {
      VirtualMemory = -1073741637;
    }
    else
    {
      if ( a2 <= 0x7FFFFFFEFFFFLL )
      {
        if ( PreviousMode )
        {
          Mdl = IoAllocateMdl(MappedSystemVa, v5, 0, 0, 0LL);
          v8 = Mdl;
          if ( !Mdl
            || ((MmProbeAndLockPages(Mdl, 0, IoWriteAccess), v7 = 2, (v8->MdlFlags & 5) == 0)
              ? (MappedSystemVa = (__int128 *)MmMapLockedPagesSpecifyCache(v8, 0, MmCached, 0LL, 0, 0x40000010u))
              : (MappedSystemVa = (__int128 *)v8->MappedSystemVa),
                !MappedSystemVa) )
          {
            VirtualMemory = -1073741670;
            goto LABEL_44;
          }
        }
        else
        {
          v8 = 0LL;
        }
        if ( v13 != -1LL )
        {
          VirtualMemory = ObpReferenceObjectByHandleWithTag(
                            v13,
                            4096,
                            (__int64)PsProcessType,
                            PreviousMode,
                            0x41737350u,
                            &Object,
                            0LL,
                            0LL);
          if ( VirtualMemory < 0 )
            goto LABEL_44;
          if ( (*((_DWORD *)Object + 543) & 0x1000) != 0 )
          {
            ObfDereferenceObjectWithTag(Object, 0x41737350u);
            VirtualMemory = -1073741790;
            goto LABEL_44;
          }
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v29);
          v7 |= 1u;
        }
        if ( PreviousMode )
        {
          VirtualMemory = ZwPssCaptureVaSpaceBulk(-1LL, v17);
        }
        else
        {
          *((_DWORD *)MappedSystemVa + 1) = 0;
          v18 = 16LL;
          v15 = a4 - 16;
          v16 = MappedSystemVa + 1;
          while ( v15 >= 0x30 )
          {
            if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
            {
              VirtualMemory = -1073741749;
              goto LABEL_44;
            }
            VirtualMemory = MmQueryVirtualMemory(
                              0xFFFFFFFFFFFFFFFFuLL,
                              v17,
                              0,
                              (unsigned __int64)v16,
                              0x30uLL,
                              (__int64)&v22,
                              2);
            if ( VirtualMemory < 0 )
            {
              if ( *((_DWORD *)MappedSystemVa + 1) )
                VirtualMemory = 0;
              break;
            }
            v15 -= v22;
            v18 += v22;
            v17 = *v16 + v16[3];
            v16 += 6;
            ++*((_DWORD *)MappedSystemVa + 1);
            *((_QWORD *)MappedSystemVa + 1) = v17;
          }
          if ( VirtualMemory >= 0 && *((_QWORD *)MappedSystemVa + 1) != 0x7FFFFFFF0000LL )
            VirtualMemory = 261;
        }
        goto LABEL_44;
      }
      VirtualMemory = -1073741503;
    }
  }
  else
  {
    VirtualMemory = -1073741811;
  }
LABEL_44:
  if ( (v7 & 1) != 0 )
    KiUnstackDetachProcess(&v29);
  if ( v8 )
  {
    if ( v7 >= 2 )
      MmUnlockPages(v8);
    IoFreeMdl(v8);
  }
  if ( a5 )
    *a5 = v18;
  return (unsigned int)VirtualMemory;
}
