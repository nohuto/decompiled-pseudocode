struct PFE *__fastcall ppfeGetPFEFromUFIInternal(struct _UNIVERSAL_FONT_ID *a1, int a2, int a3)
{
  __int64 v6; // rsi
  int v7; // ebp
  struct Gre::Base::SESSION_GLOBALS *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  struct _HASHBUCKET *v12; // rax
  _QWORD *i; // rdi
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  int v17; // r8d
  struct _KTHREAD *v18; // rcx
  int v19; // eax
  int v20; // ecx
  _QWORD v22[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v23; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0LL;
  v7 = -1;
  v8 = Gre::Base::Globals(a1);
  v10 = SGDGetSessionState(v9);
  if ( a2 )
    v11 = *((_QWORD *)v8 + 796);
  else
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 20272LL);
  if ( v11 )
  {
    v22[0] = v11 + 16;
    v22[1] = *(_QWORD *)(v11 + 16);
    v12 = FHOBJ::pbktSearch((FHOBJ *)v22, 0LL, 0LL, a1, 0);
    if ( v12 )
    {
      for ( i = (_QWORD *)*((_QWORD *)v12 + 1); ; i = (_QWORD *)*i )
      {
        if ( !i )
          return (struct PFE *)v6;
        v14 = i[1];
        v15 = *(_DWORD *)a1;
        v23 = v14;
        if ( *(_DWORD *)(v14 + 84) == v15 && *(_DWORD *)(v14 + 88) == *((_DWORD *)a1 + 1) )
        {
          v16 = v14;
          if ( a3 )
          {
            if ( !(unsigned int)PFEOBJ::SameProccess((PFEOBJ *)&v23) )
              continue;
            v16 = i[1];
          }
          v17 = *(_DWORD *)(v14 + 12);
          if ( (v17 & 2) == 0 )
          {
            v18 = *(struct _KTHREAD **)(v14 + 96);
            if ( !v18 || v18 == KeGetCurrentThread() )
              v19 = 2;
            else
              v19 = 0;
            v20 = v19 + 1;
            if ( (v17 & 8) != 0 )
              v20 = v19;
            if ( v20 > v7 )
            {
              v6 = v16;
              v7 = v20;
            }
          }
        }
      }
    }
  }
  return 0LL;
}
