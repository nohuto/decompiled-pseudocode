void __fastcall OUTPUTDUPL_MGR::InitializePacketHeader(OUTPUTDUPL_MGR *this, struct _DXGK_DIAG_OUTPUTDUPL_HEADER *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 CurrentProcess; // rax
  __int128 v6; // xmm0
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  *(_DWORD *)a2 = 15;
  v3 = MEMORY[0xFFFFF78000000320];
  *((_QWORD *)a2 + 1) = v3 * KeQueryTimeIncrement();
  CurrentProcess = PsGetCurrentProcess(v4);
  v6 = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
  *((_DWORD *)a2 + 9) &= ~0x80000000;
  *((_OWORD *)a2 + 1) = v6;
  *((_DWORD *)a2 + 9) ^= (*((_DWORD *)a2 + 9) ^ PsGetCurrentProcessSessionId(v8, v7, v9, v10)) & 0x7FFFFFFF;
  *((_DWORD *)a2 + 8) = (unsigned int)PsGetCurrentThreadId();
}
