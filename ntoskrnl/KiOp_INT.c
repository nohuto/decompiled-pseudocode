/*
 * XREFs of KiOp_INT @ 0x14057D4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KiOp_INT(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( (KiBugCheckActive & 3) != 0 && VslVsmEnabled && !*(_BYTE *)(a1 + 81) )
  {
    v1 = *(_QWORD *)(a1 + 72);
    if ( v1 == 44 )
    {
      v6 = *(_QWORD *)(a1 + 24);
      ++KiOpInt2C;
      *(_BYTE *)(a1 + 97) = 1;
      v7 = *(_QWORD *)(a1 + 32);
      *(_DWORD *)v7 = -1073740768;
      *(_DWORD *)(v7 + 24) = 0;
      *(_QWORD *)(v7 + 16) = *(_QWORD *)(v6 + 248);
    }
    else if ( v1 == 45 )
    {
      v2 = *(_QWORD *)(a1 + 24);
      v3 = *(_QWORD *)(a1 + 32);
      *(_BYTE *)(a1 + 97) = 1;
      v4 = *(_DWORD *)(v2 + 48);
      *(_QWORD *)(v2 + 248) += 2LL;
      if ( (v4 & 0x100080) == 0x100080 )
        *(_QWORD *)(*(int *)(v2 + 1256) + v2 + 1240) += 2LL;
      *(_DWORD *)v3 = -2147483645;
      *(_DWORD *)(v3 + 24) = 1;
      *(_QWORD *)(v3 + 32) = *(_QWORD *)(v2 + 120);
      v5 = *(_QWORD *)(v2 + 248) + 1LL;
      ++KiOpInt2D;
      *(_QWORD *)(v3 + 16) = v5;
    }
  }
  return 0LL;
}
