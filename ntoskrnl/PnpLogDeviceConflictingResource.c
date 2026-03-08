/*
 * XREFs of PnpLogDeviceConflictingResource @ 0x140801FA0
 * Callers:
 *     IopTestConfiguration @ 0x1408038E0 (IopTestConfiguration.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

void __fastcall PnpLogDeviceConflictingResource(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    v5 = *(_QWORD *)(v2 + 32);
    if ( v5 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
      if ( v6 )
      {
        if ( !*(_QWORD *)(v6 + 712) )
          *(_QWORD *)(v6 + 712) = ExAllocatePool2(256LL, 128LL, 1650807376LL);
        v7 = *(_QWORD *)(v6 + 712);
        if ( v7 )
        {
          if ( !*(_QWORD *)(v7 + 112) )
          {
            *(_BYTE *)(v7 + 104) = *(_BYTE *)(a1 + 16);
            *(_DWORD *)(v7 + 108) = *(_DWORD *)(v2 + 16);
            *(_QWORD *)(v7 + 112) = *(_QWORD *)(v2 + 24);
            *(_QWORD *)(v7 + 120) = a2;
          }
        }
      }
    }
  }
}
