__int64 __fastcall PopReadPagesFromHiberFile(unsigned int a1, unsigned int a2, PVOID *a3)
{
  struct _MDL *v4; // rsi
  char v5; // r15
  unsigned __int64 v6; // rax
  ULONG v7; // r12d
  signed int Status; // edi
  unsigned __int128 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // r10
  unsigned __int64 v12; // r11
  void *Pool2; // rax
  struct _MDL *Mdl; // rax
  struct _MDL *v16; // [rsp+30h] [rbp-58h] BYREF
  LARGE_INTEGER StartingOffset; // [rsp+38h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-38h] BYREF

  v16 = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v4 = 0LL;
  v5 = 0;
  if ( !BYTE8(PopCapabilities)
    || (char *)PopHiberInfo - 1 > (char *)0xFFFFFFFFFFFFFFFDLL
    || (char *)FileObject - 1 > (char *)0xFFFFFFFFFFFFFFFDLL
    || qword_140C3CA70 < 0x1000 )
  {
    Status = -1073741637;
    goto LABEL_26;
  }
  v6 = (unsigned __int64)a2 << 12;
  v7 = -1;
  if ( v6 <= 0xFFFFFFFF )
    v7 = a2 << 12;
  Status = v6 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v6 <= 0xFFFFFFFF )
  {
    StartingOffset.QuadPart = 0LL;
    v9 = a1 * (unsigned __int128)0x1000u;
    v10 = -1LL;
    if ( (v9 & 0x8000000000000000uLL) == 0LL )
    {
      if ( !*((_QWORD *)&v9 + 1) )
      {
LABEL_13:
        v10 = v9;
        StartingOffset.QuadPart = v9;
        Status = 0;
        goto LABEL_14;
      }
    }
    else if ( *((_QWORD *)&v9 + 1) == -1LL )
    {
      goto LABEL_13;
    }
    StartingOffset.QuadPart = -1LL;
    Status = -1073741675;
LABEL_14:
    if ( Status >= 0 )
    {
      Status = RtlLongLongAdd(v10, v7, (unsigned __int64 *)&v16);
      if ( Status >= 0 )
      {
        if ( (unsigned __int64)v16 <= v12 )
        {
          Pool2 = (void *)ExAllocatePool2(256LL, v11, 544040269LL);
          *a3 = Pool2;
          if ( Pool2 )
          {
            Mdl = IoAllocateMdl(Pool2, v7, 0, 0, 0LL);
            v4 = Mdl;
            v16 = Mdl;
            if ( Mdl )
            {
              MmProbeAndLockPages(Mdl, 0, IoReadAccess);
              v5 = 1;
              KeInitializeEvent(&Event, NotificationEvent, 0);
              Status = IoPageRead((PFILE_OBJECT)FileObject, v4, &StartingOffset, &Event, &IoStatusBlock);
              if ( Status == 259 )
              {
                Status = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                if ( Status >= 0 )
                  Status = IoStatusBlock.Status;
              }
            }
            else
            {
              Status = -1073741670;
            }
          }
          else
          {
            Status = -1073741801;
          }
        }
        else
        {
          Status = -1073741807;
        }
      }
    }
  }
LABEL_26:
  if ( v5 )
    MmUnlockPages(v4);
  if ( v4 )
    IoFreeMdl(v4);
  if ( Status < 0 && *a3 )
  {
    ExFreePoolWithTag(*a3, 0x206D654Du);
    *a3 = 0LL;
  }
  return (unsigned int)Status;
}
