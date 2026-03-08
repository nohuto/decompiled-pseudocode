/*
 * XREFs of KiIntRedirectConnnect @ 0x14057E3D8
 * Callers:
 *     KiIntSteerChooseInitialTargetProcessors @ 0x14028F130 (KiIntSteerChooseInitialTargetProcessors.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall KiIntRedirectConnnect(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 Pool2; // rax
  unsigned int v7; // r9d
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // rcx

  v3 = a2;
  Pool2 = ExAllocatePool2(64LL, 24LL, 1380541771LL);
  v7 = 0;
  v8 = Pool2;
  if ( Pool2 )
  {
    *(_WORD *)(Pool2 + 8) = *(_WORD *)(a3 + 32);
    *(_QWORD *)Pool2 = *(_QWORD *)(a3 + 24);
    *(_BYTE *)(Pool2 + 16) = 0;
    if ( (_DWORD)v3 )
    {
      v9 = v3;
      do
      {
        v10 = *a1++;
        *(_QWORD *)(v10 + 272) = v8;
        --v9;
      }
      while ( v9 );
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
