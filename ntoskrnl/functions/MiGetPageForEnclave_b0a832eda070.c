unsigned __int64 __fastcall MiGetPageForEnclave(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rax
  __int64 EnclavePages; // rax
  __int64 v6; // rbx

  v2 = *(_QWORD *)(a1 + 104);
  if ( v2 )
  {
    v3 = *(_QWORD **)(a1 + 96);
    *(_QWORD *)(a1 + 96) = *v3;
    *(_QWORD *)(a1 + 104) = v2 - 1;
    return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v3 + 0x44000000000LL) >> 4);
  }
  else
  {
    EnclavePages = MiAllocateEnclavePages(
                     a2,
                     *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192)
                                         + 138LL),
                     0,
                     1LL);
    v6 = EnclavePages;
    if ( EnclavePages )
    {
      MiSetPfnBlink(EnclavePages, 0LL, 0);
      return 0xAAAAAAAAAAAAAAABuLL * ((v6 + 0x220000000000LL) >> 4);
    }
    else
    {
      return -1LL;
    }
  }
}
