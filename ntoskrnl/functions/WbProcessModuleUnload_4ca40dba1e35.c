__int64 __fastcall WbProcessModuleUnload(__int64 a1, _QWORD *a2, unsigned int a3)
{
  int v5; // edi
  unsigned __int64 v6; // rax
  _DWORD *v7; // rcx
  _QWORD *v8; // rbx
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  if ( a3 >= 0x10 && *a2 == 9LL )
  {
    v5 = WbAlloc(0x10u, &P);
    if ( v5 >= 0 )
    {
      v6 = a2[1];
      if ( v6 + 16 > 0x7FFFFFFF0000LL || v6 + 16 < v6 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v7 = P;
      *(_OWORD *)P = *(_OWORD *)a2[1];
      if ( *v7 )
      {
        v5 = -1073741811;
      }
      else
      {
        v8 = P;
        WbHeapExecutionUnloadModule(a1, *((_QWORD *)P + 1));
        WbInPlaceEncryptionUnloadModule(a1, v8[1]);
      }
    }
  }
  else
  {
    v5 = -1073741811;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v5;
}
