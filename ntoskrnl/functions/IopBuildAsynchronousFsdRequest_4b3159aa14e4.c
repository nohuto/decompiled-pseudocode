__int64 __fastcall IopBuildAsynchronousFsdRequest(
        unsigned int a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 a6)
{
  size_t v6; // r13
  __int64 v8; // rsi
  __int64 Irp; // rbx
  __int64 v11; // r9
  unsigned __int8 *v12; // rdi
  int v13; // eax
  int v15; // eax
  __int64 Mdl; // rax
  int v18; // edx
  void *Pool2; // rax
  int v20; // eax

  v6 = a4;
  v8 = a2;
  LOBYTE(a2) = *(_BYTE *)(a2 + 76);
  Irp = IopAllocateIrpExReturn(v8, a2, 0LL);
  if ( Irp )
  {
    *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
    v12 = (unsigned __int8 *)(*(_QWORD *)(Irp + 184) - 72LL);
    *v12 = a1;
    if ( a1 <= 0x1B )
    {
      v13 = 138478080;
      if ( _bittest(&v13, a1) )
      {
LABEL_4:
        *(_DWORD *)(Irp + 16) = *(_DWORD *)(Irp + 16) & 0xFFF1FFFF | (((unsigned int)PsGetIoPriorityThread(*(_QWORD *)(Irp + 152))
                                                                     + 1) << 17);
        *(_QWORD *)(Irp + 72) = a6;
        return Irp;
      }
    }
    v15 = *(_DWORD *)(v8 + 48);
    if ( (v15 & 4) != 0 )
    {
      Pool2 = (void *)ExAllocatePool2(72LL, v6, 1112764233LL);
      *(_QWORD *)(Irp + 24) = Pool2;
      if ( Pool2 )
      {
        if ( a1 == 4 )
        {
          memmove(Pool2, a3, v6);
          v20 = 48;
        }
        else
        {
          *(_QWORD *)(Irp + 112) = a3;
          v20 = 112;
        }
        *(_DWORD *)(Irp + 16) = v20;
        LODWORD(v6) = a4;
        goto LABEL_8;
      }
    }
    else
    {
      if ( (v15 & 0x10) == 0 )
      {
        *(_QWORD *)(Irp + 112) = a3;
LABEL_8:
        *((_DWORD *)v12 + 2) = v6;
        if ( a5 )
          *((_QWORD *)v12 + 3) = *a5;
        if ( *(_DWORD *)(v8 + 72) == 7
          || *(_DWORD *)(v8 + 72) == 8
          || *(_DWORD *)(v8 + 72) == 9
          || *(_DWORD *)(v8 + 72) == 36 )
        {
          IoSetDiskIoAttributionFromThread(Irp, *(struct _KTHREAD **)(Irp + 152));
        }
        goto LABEL_4;
      }
      Mdl = IopAllocateMdl((__int64)a3, v6, 0, v11, 0LL, 0);
      *(_QWORD *)(Irp + 8) = Mdl;
      if ( Mdl )
      {
        IopProbeAndLockPages(Mdl, v18, a1 == 3, v8, *v12);
        goto LABEL_8;
      }
    }
    IoFreeIrp((PIRP)Irp);
  }
  return 0LL;
}
