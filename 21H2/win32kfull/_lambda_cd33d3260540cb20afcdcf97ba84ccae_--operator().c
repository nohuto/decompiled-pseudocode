/*
 * XREFs of _lambda_cd33d3260540cb20afcdcf97ba84ccae_::operator() @ 0x1C01698B8
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 * Callees:
 *     DereferenceClass @ 0x1C0079C50 (DereferenceClass.c)
 *     DwmAsyncChildDestroy @ 0x1C00EA520 (DwmAsyncChildDestroy.c)
 *     ClassUnlock @ 0x1C01E9294 (ClassUnlock.c)
 */

__int64 __fastcall lambda_cd33d3260540cb20afcdcf97ba84ccae_::operator()(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  void *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rax
  _DWORD *v11; // rcx
  _DWORD *v12; // rax
  _DWORD *v13; // rcx
  int v14; // eax

  result = ThreadUnlock1(a1);
  v3 = result;
  if ( result )
  {
    v4 = *(void **)(result + 280);
    if ( v4 )
      Win32FreePool(v4);
    if ( (unsigned int)IsWindowDesktopComposed(v3) )
    {
      v7 = (void *)ReferenceDwmApiPort(v6, v5);
      DwmAsyncChildDestroy(v7, *(_QWORD *)v3, v8, v9);
    }
    *(_QWORD *)(*(_QWORD *)(v3 + 40) + 48LL) = 0LL;
    HMAssignmentUnlock(v3 + 104);
    v10 = *(_DWORD **)(v3 + 296);
    if ( v10 )
    {
      --*v10;
      v11 = *(_DWORD **)(v3 + 296);
      if ( !*v11 )
        Win32FreePool(v11);
      *(_QWORD *)(v3 + 296) = 0LL;
    }
    v12 = *(_DWORD **)(v3 + 288);
    if ( v12 )
    {
      --*v12;
      v13 = *(_DWORD **)(v3 + 288);
      if ( !*v13 )
        Win32FreePool(v13);
      *(_QWORD *)(v3 + 288) = 0LL;
    }
    --*(_DWORD *)(**(_QWORD **)(a1 + 24) + 896LL);
    v14 = *(_DWORD *)(v3 + 324);
    if ( (v14 & 0x20000000) != 0 )
    {
      *(_DWORD *)(v3 + 324) = v14 & 0xDFFFFFFF;
      --*(_DWORD *)(**(_QWORD **)(a1 + 24) + 904LL);
    }
    ClassUnlock(***(struct tagCLS ****)(a1 + 8));
    DereferenceClass(*(struct tagPROCESSINFO **)(**(_QWORD **)(a1 + 24) + 424LL), v3);
    return HMFreeObject(v3);
  }
  return result;
}
