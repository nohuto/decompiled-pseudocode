void __fastcall ExFreePool2(ULONG_PTR BugCheckParameter2, unsigned int a2, _QWORD *a3, unsigned int a4)
{
  ULONG_PTR BugCheckParameter4; // rdi
  int v7; // edx
  ULONG_PTR v8; // rsi
  __int64 v9; // rcx
  ULONG_PTR v10; // r9

  BugCheckParameter4 = a4;
  v7 = 0;
  v8 = (ULONG_PTR)a3;
  if ( a4 )
  {
    do
    {
      if ( (unsigned __int8)*a3 != 2LL )
        KeBugCheckEx(0xC2u, 0xA0uLL, BugCheckParameter2, v8, (unsigned __int8)*a3);
      v9 = a3[1];
      v10 = *(_QWORD *)(v9 + 8);
      if ( v10 || *(_DWORD *)(v9 + 24) || (_DWORD)BugCheckParameter4 != 1 )
        KeBugCheckEx(0xC2u, 0xA1uLL, (ULONG_PTR)a3, v10, *(unsigned int *)(v9 + 24));
      ++v7;
      a3 += 2;
    }
    while ( !v7 );
    if ( (int)VslSecurePoolFree(*(_QWORD *)v9, a2, BugCheckParameter2, *(_QWORD *)(v9 + 16)) < 0 )
      KeBugCheckEx(0xC2u, 0xA3uLL, BugCheckParameter2, v8, BugCheckParameter4);
  }
  else
  {
    ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
  }
}
