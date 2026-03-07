char __fastcall CcWriteBehindReleaseFile(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  v1 = *(_QWORD *)(a1 + 256);
  if ( *(_DWORD *)(v1 + 128) == 2 )
  {
    v3 = *(_QWORD *)(v1 + 16);
    v4 = *(_QWORD *)(v3 + 536);
  }
  else
  {
    v3 = *(_QWORD *)(v1 + 24);
    v4 = *(_QWORD *)(v1 + 136);
  }
  CcApplyLowIoPriorityToThread(v4, 0LL, v3);
  _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v3 + 512) + 196LL), -*(_DWORD *)(a1 + 244));
  if ( (*(_DWORD *)(v3 + 152) & 0x1000000) != 0 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v3 + 512) + 200LL), -*(_DWORD *)(a1 + 244));
  v5 = *(_QWORD *)(v3 + 512);
  *(_QWORD *)(v5 + 288) += *(unsigned int *)(v5 + 196);
  v6 = *(_QWORD *)(v5 + 296);
  if ( v6 <= *(unsigned int *)(*(_QWORD *)(v3 + 512) + 196LL) )
    v6 = *(unsigned int *)(*(_QWORD *)(v3 + 512) + 196LL);
  ++*(_QWORD *)(v5 + 304);
  *(_QWORD *)(v5 + 296) = v6;
  *(_QWORD *)(v5 + 312) += *(unsigned int *)(*(_QWORD *)(v3 + 512) + 200LL);
  v7 = *(_QWORD *)(v5 + 320);
  if ( v7 <= *(unsigned int *)(*(_QWORD *)(v3 + 512) + 200LL) )
    v7 = *(unsigned int *)(*(_QWORD *)(v3 + 512) + 200LL);
  ++*(_QWORD *)(v5 + 328);
  *(_QWORD *)(v5 + 320) = v7;
  v8 = *(_QWORD *)(v3 + 216);
  v9 = *(_QWORD *)(v3 + 224);
  if ( (*(_DWORD *)(v3 + 156) & 1) != 0 )
    (*(void (__fastcall **)(__int64))(v8 + 16))(v9);
  else
    (*(void (__fastcall **)(__int64))(v8 + 8))(v9);
  return 1;
}
