int __fastcall KeInitializePriQueue(__int64 a1, int a2)
{
  __int64 v3; // r8
  _QWORD *v4; // rax
  _DWORD *v5; // rcx

  *(_WORD *)a1 = 21;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_BYTE *)(a1 + 2) = -84;
  *(_QWORD *)(a1 + 680) = a1 + 672;
  *(_QWORD *)(a1 + 672) = a1 + 672;
  v3 = 32LL;
  *(_DWORD *)(a1 + 4) = 0;
  v4 = (_QWORD *)(a1 + 24);
  v5 = (_DWORD *)(a1 + 536);
  do
  {
    v4[1] = v4;
    *v4 = v4;
    v4 += 2;
    *v5++ = 0;
    --v3;
  }
  while ( v3 );
  if ( !a2 )
  {
    LODWORD(v4) = KeQueryActiveProcessorCountEx(0xFFFFu);
    a2 = (int)v4;
  }
  *(_DWORD *)(a1 + 664) = a2;
  return (int)v4;
}
