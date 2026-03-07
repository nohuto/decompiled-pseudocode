__int64 __fastcall RGNOBJ::bCopy(RGNOBJ *this, struct RGNOBJ *a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v3 = (*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL);
  v4 = 112;
  v5 = *(_DWORD *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL));
  v6 = *(_DWORD *)(v3 + 24);
  if ( v5 < v6 && *(_DWORD *)v3 > 0x70u || v5 > 0x70 && *(_DWORD *)v3 <= 0x70u )
  {
    if ( v6 > 0x70 )
      v4 = *(_DWORD *)(v3 + 24);
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v14, v4);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v14);
    if ( !v14 )
    {
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v14);
      return 0LL;
    }
    RGNOBJ::vSwap(this, (struct RGNOBJ *)&v14);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v14);
  }
  v7 = *(_QWORD *)this;
  v8 = v7 + 48;
  if ( !v7 )
    v8 = 24LL;
  v9 = v7 + 32;
  *(_DWORD *)v8 = *(_DWORD *)(v3 + 24);
  v10 = v7 + 52;
  if ( !v7 )
    v10 = 28LL;
  *(_DWORD *)v10 = *(_DWORD *)(v3 + 28);
  v11 = v7 + 56;
  if ( !v7 )
    v11 = 32LL;
  *(_OWORD *)v11 = *(_OWORD *)(v3 + 32);
  if ( !v7 )
    v9 = 8LL;
  memmove(*(void **)v9, *(const void **)(v3 + 8), *(unsigned int *)(v3 + 24));
  v12 = v7 + 40;
  if ( !v7 )
    v12 = 16LL;
  *(_QWORD *)v12 = *(_QWORD *)v9 + *(_DWORD *)(v3 + 16) - *(_DWORD *)(v3 + 8);
  return 1LL;
}
