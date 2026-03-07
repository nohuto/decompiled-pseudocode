struct HOBJ__ *__fastcall hfontCreate(_DWORD *Src, int a2, int a3, __int64 a4, unsigned int a5)
{
  unsigned int v9; // eax
  unsigned int v10; // ebp
  _DWORD *Object; // rax
  struct OBJECT *v12; // rbx
  Gre::Base *v13; // rcx
  int v14; // eax
  unsigned int v15; // r9d
  struct HOBJ__ *v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v23; // rbx
  __int64 ProcessWow64Process; // rax
  __int64 v25; // rdx
  int v26; // ecx
  __int64 v27; // [rsp+50h] [rbp+8h] BYREF

  if ( !Src )
    return 0LL;
  v9 = Src[88];
  if ( v9 > 0x10 )
    return 0LL;
  v10 = 4 * v9 + 356;
  Object = (_DWORD *)AllocateObject(4 * v9 + 632, 10LL);
  v12 = (struct OBJECT *)Object;
  if ( !Object )
    return 0LL;
  Object[6] = a2;
  Object[7] = a3;
  Object[68] = v10;
  memmove(Object + 69, Src, v10);
  *((_DWORD *)v12 + 8) = 0;
  *((_DWORD *)v12 + 9) = *(_DWORD *)(*((_QWORD *)Gre::Base::Globals(v13) + 241) + 1573016LL);
  cCapString((char *)v12 + 208, Src + 7, 32LL);
  v14 = lNormAngle((unsigned int)Src[3]);
  v15 = a5;
  v27 = 0LL;
  Src[3] = v14;
  v16 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v27, v12, 0xAu, v15);
  if ( !v16 )
  {
    FreeObject(v12, 10LL);
    if ( v27 )
      _InterlockedDecrement((volatile signed __int32 *)(v27 + 12));
    return 0LL;
  }
  v18 = HmgPentryFromPobj(v12);
  if ( a4 )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v17);
    v23 = CurrentProcessWin32Process;
    if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
      KeBugCheckEx(0x164u, 0x29uLL, 0LL, 0LL, 0LL);
    ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
    v25 = *((unsigned int *)v23 + 73);
    v26 = *((_DWORD *)v23 + 73);
    if ( ProcessWow64Process )
      v19 = (unsigned int)__ROR4__(a4 ^ v25, v26 & 0x1F);
    else
      v19 = __ROR8__(a4 ^ v25, v26 & 0x3F);
  }
  else
  {
    v19 = 0LL;
  }
  v20 = v27;
  *(_QWORD *)(v18 + 16) = v19;
  if ( v20 )
    _InterlockedDecrement((volatile signed __int32 *)(v20 + 12));
  return v16;
}
