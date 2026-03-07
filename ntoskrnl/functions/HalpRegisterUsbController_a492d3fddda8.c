__int64 __fastcall HalpRegisterUsbController(__int64 a1, int a2, char a3, char a4)
{
  int v7; // ebp
  __int64 result; // rax
  __int64 *v9; // rcx

  v7 = a1;
  result = HalpMmAllocCtxAlloc(a1, 32LL);
  if ( result )
  {
    *(_OWORD *)result = 0LL;
    *(_OWORD *)(result + 16) = 0LL;
    *(_DWORD *)(result + 16) = v7;
    *(_DWORD *)(result + 20) = a2;
    *(_BYTE *)(result + 26) = a3;
    *(_BYTE *)(result + 25) = a4;
    v9 = (__int64 *)qword_140C5FE08;
    if ( *(__int64 **)qword_140C5FE08 != &HalpUsbControllerList )
      __fastfail(3u);
    *(_QWORD *)result = &HalpUsbControllerList;
    *(_QWORD *)(result + 8) = v9;
    *v9 = result;
    qword_140C5FE08 = result;
  }
  return result;
}
