/*
 * XREFs of HvpRecoverDataReadRoutine @ 0x1407FA940
 * Callers:
 *     <none>
 * Callees:
 *     CmpAllocatePool @ 0x140243878 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvpRecoverDataReadRoutine(unsigned int *a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  struct _PRIVILEGE_SET *Pool; // rdi
  __int64 v8; // r13
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // esi
  struct _PRIVILEGE_SET *v12; // rcx
  unsigned int *v13; // r15
  unsigned int v14; // ebp
  int v15; // esi
  unsigned int v17; // [rsp+78h] [rbp+10h]

  v4 = 0;
  Pool = 0LL;
  if ( a2 + a3 < a2 && a2 + a3 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)a1;
  v9 = *(_DWORD *)(*(_QWORD *)a1 + 136LL) << 9;
  v10 = ~(v9 - 1);
  v11 = (v10 & (a2 + v9 + a3 - 1)) - (a2 & v10);
  v17 = a2 & v10;
  if ( v11 < a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v12 = (struct _PRIVILEGE_SET *)*((_QWORD *)a1 + 1);
    v13 = a1 + 4;
    v14 = v11;
    if ( v11 < 0x10000 )
      v14 = 0x10000;
    if ( !v12 )
      goto LABEL_12;
    if ( *v13 < v14 )
    {
      CmSiFreeMemory(v12);
    }
    else
    {
      Pool = (struct _PRIVILEGE_SET *)*((_QWORD *)a1 + 1);
      v14 = *v13;
    }
    *((_QWORD *)a1 + 1) = 0LL;
    *v13 = 0;
    if ( !Pool )
    {
LABEL_12:
      Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(256LL, v11, 1867074883LL);
      if ( !Pool )
        return (unsigned int)-1073741801;
      v14 = v11;
    }
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct _PRIVILEGE_SET *, unsigned int))(v8 + 48))(
            v8,
            a1[5],
            v17,
            Pool,
            v11);
    if ( v15 < 0 )
    {
      CmSiFreeMemory(Pool);
      return (unsigned int)v15;
    }
    else
    {
      *((_QWORD *)a1 + 1) = Pool;
      *v13 = v14;
      *a4 = (char *)Pool + a2 % (*(_DWORD *)(v8 + 136) << 9);
    }
  }
  return v4;
}
