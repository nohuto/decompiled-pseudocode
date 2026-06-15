/*
 * XREFs of sub_18004BA74 @ 0x18004BA74
 * Callers:
 *     sub_18004B2D0 @ 0x18004B2D0 (sub_18004B2D0.c)
 *     sub_180065320 @ 0x180065320 (sub_180065320.c)
 *     sub_180065E24 @ 0x180065E24 (sub_180065E24.c)
 *     sub_18011FF30 @ 0x18011FF30 (sub_18011FF30.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_18004BA74(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  char v4; // bl
  unsigned int v6; // r8d
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rax
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 40);
  v11 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v4 = 0;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(v2, &unk_18015C498, pvar) >= 0
    && LOWORD(pvar[0]) == 65
    && LODWORD(pvar[1]) >= 0xC )
  {
    v6 = *(_DWORD *)(v11 + 8);
    if ( LODWORD(pvar[1]) == 16LL * v6 + 12 )
    {
      v7 = 0;
      if ( v6 )
      {
        while ( 1 )
        {
          v8 = 16LL * v7;
          v9 = *a2 - *(_QWORD *)(v8 + v11 + 12);
          if ( *a2 == *(_QWORD *)(v8 + v11 + 12) )
            v9 = a2[1] - *(_QWORD *)(v8 + v11 + 20);
          if ( !v9 )
            break;
          if ( ++v7 >= v6 )
            goto LABEL_3;
        }
        v4 = 1;
      }
    }
  }
LABEL_3:
  PropVariantClear(pvar);
  return v4;
}
