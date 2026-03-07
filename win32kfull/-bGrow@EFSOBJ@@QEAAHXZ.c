__int64 __fastcall EFSOBJ::bGrow(EFSOBJ *this)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rdi
  size_t v10; // rbx
  size_t v11; // rax
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  v3 = (*(_QWORD *)(*(_QWORD *)this + 48LL) - *(_QWORD *)this - 68LL) >> 3;
  if ( (int)v3 + 16 < (unsigned int)v3 )
    return 0LL;
  v13 = *(_DWORD *)(v1 + 24);
  EFSMEMOBJ::EFSMEMOBJ(
    (EFSMEMOBJ *)v12,
    *(struct DCOBJ **)(v1 + 32),
    v3 + 16,
    *(_DWORD *)(v1 + 8),
    *(void **)(v1 + 16),
    &v13);
  v7 = v12[0];
  v8 = 0;
  if ( v12[0] )
  {
    v9 = *(_QWORD *)this;
    v10 = 8LL * (unsigned int)((*(_QWORD *)(*(_QWORD *)this + 40LL) - *(_QWORD *)this - 68LL) >> 3);
    memmove((void *)(v12[0] + 68LL), (const void *)(*(_QWORD *)this + 68LL), v10);
    v11 = v10 + v7 + 68;
    v8 = 1;
    *(_QWORD *)(v7 + 40) = v11;
    *(_DWORD *)(v7 + 64) = *(_DWORD *)(v9 + 64);
    *(_DWORD *)(v7 + 28) = *(_DWORD *)(v9 + 28);
    v12[0] = *(_QWORD *)this;
    *(_QWORD *)this = v7;
  }
  EFSMEMOBJ::~EFSMEMOBJ((EFSMEMOBJ *)v12, v5, v6);
  return v8;
}
