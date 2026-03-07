__int64 __fastcall DMMVIDEOPRESENTTARGET::Initialize(DMMVIDEOPRESENTTARGET *this)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx

  v2 = operator new[](0xB0uLL, 0x4E506456u, 64LL);
  *((_QWORD *)this + 67) = v2;
  if ( v2
    && (*(_QWORD *)(v2 + 160) = 0LL,
        *(_BYTE *)(*((_QWORD *)this + 67) + 168LL) = 0,
        *(_BYTE *)(*((_QWORD *)this + 67) + 172LL) = 0,
        *(_DWORD *)(*((_QWORD *)this + 67) + 152LL) = 0,
        KeInitializeTimer((PKTIMER)(*((_QWORD *)this + 67) + 16LL)),
        KeInitializeDpc(
          (PRKDPC)(*((_QWORD *)this + 67) + 80LL),
          (PKDEFERRED_ROUTINE)DMMVIDEOPRESENTTARGET::LinkTrainingTimeoutDpc,
          *((PVOID *)this + 67)),
        (*(_QWORD *)(*((_QWORD *)this + 67) + 144LL) = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject)) != 0LL) )
  {
    if ( !*((_QWORD *)this + 5) )
      WdLogSingleEntry0(1LL);
    v3 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
    if ( !*(_QWORD *)(v3 + 8) )
      WdLogSingleEntry0(1LL);
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL);
    _InterlockedIncrement64((volatile signed __int64 *)(v4 + 24));
    *(_QWORD *)(*((_QWORD *)this + 67) + 8LL) = this;
    **((_QWORD **)this + 67) = v4;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(6LL, *((unsigned int *)this + 6), -1073741670LL);
    return 3221225626LL;
  }
}
