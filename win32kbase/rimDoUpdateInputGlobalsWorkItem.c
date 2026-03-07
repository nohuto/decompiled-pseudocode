char __fastcall rimDoUpdateInputGlobalsWorkItem(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  int v5; // eax
  unsigned int v6; // eax

  v1 = *(_QWORD *)(a1 + 56);
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 1108LL);
  v2 = v1 + 256;
  if ( !v1 )
    v2 = 184LL;
  v3 = v1 + 544;
  v4 = *(_DWORD *)v2;
  if ( !v1 )
    v3 = 472LL;
  v5 = RIMGetPointerInputType(*(_QWORD *)v3);
  v6 = LINPSourceFromPointerType(v5);
  return CInputGlobals::UpdateInputGlobals(
           (__int64)gpInputGlobals,
           (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
           v6,
           0,
           0,
           (v4 & 0x2000 | 0x800u) >> 10);
}
