__int64 __fastcall DwmAsyncSendTouchContacts(PVOID Object, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // r14d
  int v9; // r15d
  __int64 v10; // rax
  void *v11; // rbx
  _OWORD *v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int128 v15; // xmm1

  v8 = -1073741823;
  if ( Object && a2 && a4 )
  {
    v9 = 40 * a4;
    v10 = Win32AllocPoolZInit(40 * a4 + 60, 1951225668LL);
    v11 = (void *)v10;
    if ( v10 )
    {
      v12 = (_OWORD *)(v10 + 60);
      *(_DWORD *)(v10 + 40) = 1073741888;
      *(_QWORD *)(v10 + 52) = a3;
      *(_DWORD *)(v10 + 44) = a4;
      *(_DWORD *)(v10 + 48) = v9;
      *(_WORD *)v10 = 40 * a4 + 20;
      v13 = a2 - (v10 + 60);
      *(_WORD *)(v10 + 2) = 40 * a4 + 100;
      *(_WORD *)(v10 + 4) = 0x8000;
      v14 = a4;
      do
      {
        *v12 = *(_OWORD *)((char *)v12 + v13);
        v15 = *(_OWORD *)((char *)v12 + v13 + 16);
        v12 = (_OWORD *)((char *)v12 + 40);
        *(_OWORD *)((char *)v12 - 24) = v15;
        *((_QWORD *)v12 - 1) = *(_QWORD *)((char *)v12 + v13 - 8);
        --v14;
      }
      while ( v14 );
      v8 = LpcRequestPort(Object, v11);
      Win32FreePool(v11);
    }
    ObfDereferenceObject(Object);
  }
  return v8;
}
