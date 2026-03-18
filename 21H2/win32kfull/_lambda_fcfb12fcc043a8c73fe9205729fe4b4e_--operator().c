/*
 * XREFs of _lambda_fcfb12fcc043a8c73fe9205729fe4b4e_::operator() @ 0x1C015C28C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 * Callees:
 *     DereferenceClass @ 0x1C005FE40 (DereferenceClass.c)
 *     DwmAsyncChildDestroy @ 0x1C0098E78 (DwmAsyncChildDestroy.c)
 *     ClassUnlock @ 0x1C01E3888 (ClassUnlock.c)
 */

__int64 __fastcall lambda_fcfb12fcc043a8c73fe9205729fe4b4e_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rbx
  void *v9; // rax
  _DWORD *v10; // rax
  _DWORD *v11; // rcx
  _DWORD *v12; // rax
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  int v15; // eax

  result = ThreadUnlock1(a1, a2, a3);
  v5 = result;
  if ( result )
  {
    v6 = *(_QWORD *)(result + 280);
    if ( v6 )
      Win32FreePool(v6);
    if ( (unsigned int)IsWindowDesktopComposed(v5) )
    {
      v8 = *(_QWORD *)v5;
      v9 = (void *)ReferenceDwmApiPort(v7);
      DwmAsyncChildDestroy(v9, v8);
    }
    *(_QWORD *)(*(_QWORD *)(v5 + 40) + 48LL) = 0LL;
    HMAssignmentUnlock(v5 + 104);
    v10 = *(_DWORD **)(v5 + 296);
    if ( v10 )
    {
      --*v10;
      v11 = *(_DWORD **)(v5 + 296);
      if ( !*v11 )
        Win32FreePool(v11);
      *(_QWORD *)(v5 + 296) = 0LL;
    }
    v12 = *(_DWORD **)(v5 + 288);
    if ( v12 )
    {
      --*v12;
      v13 = *(_DWORD **)(v5 + 288);
      if ( !*v13 )
        Win32FreePool(v13);
      *(_QWORD *)(v5 + 288) = 0LL;
    }
    v14 = **(_QWORD **)(a1 + 24);
    --*(_DWORD *)(v14 + 896);
    v15 = *(_DWORD *)(v5 + 320);
    if ( (v15 & 0x20000000) != 0 )
    {
      *(_DWORD *)(v5 + 320) = v15 & 0xDFFFFFFF;
      --*(_DWORD *)(v14 + 904);
    }
    ClassUnlock(***(struct tagCLS ****)(a1 + 8));
    DereferenceClass(*(struct tagPROCESSINFO **)(**(_QWORD **)(a1 + 24) + 424LL), v5);
    return HMFreeObject(v5);
  }
  return result;
}
