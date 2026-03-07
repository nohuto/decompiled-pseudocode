__int64 __fastcall bInitBrush(int a1, int a2, unsigned int a3, struct HOBJ__ ***a4, int a5)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  struct HOBJ__ **v11; // rbx
  __int64 v12; // r14
  unsigned int v13; // edi
  struct HOBJ__ **v15[2]; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+40h] [rbp-18h]

  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v15, a2, a3, 0, 0);
  v8 = SGDGetSessionState(v7);
  v11 = v15[0];
  v12 = *(_QWORD *)(v8 + 24);
  if ( v15[0] )
  {
    v13 = 1;
    v16 = 1;
    BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v15, v9, v10);
    if ( a5 )
      *((_DWORD *)v11 + 10) |= 4u;
    if ( a4 )
      *a4 = v11;
    bSetStockObject((unsigned __int64)*v11, a1, 0);
    if ( !a1 )
      *(_QWORD *)(v12 + 472) = *v11;
  }
  else
  {
    v13 = 0;
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ(v15);
  return v13;
}
