/*
 * XREFs of MiComparePages @ 0x14034B2A0
 * Callers:
 *     MiConfirmCombinePageContents @ 0x14034B140 (MiConfirmCombinePageContents.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiComparePages(__int64 a1, __int64 a2)
{
  unsigned int i; // eax
  __int64 v3; // rbx
  __int64 v4; // r11
  __int64 v5; // r9
  __int64 v6; // r10

  for ( i = 505; i != -7; i -= 8 )
  {
    v3 = 8LL * (i + 2);
    v4 = 8LL * (i + 3);
    v5 = 8LL * (i + 4);
    v6 = *(_QWORD *)(8LL * (i - 1) + a2) ^ *(_QWORD *)(8LL * (i - 1) + a1) | *(_QWORD *)(8LL * (i + 1) + a2) ^ *(_QWORD *)(8LL * (i + 1) + a1) | *(_QWORD *)(v3 + a2) ^ *(_QWORD *)(v3 + a1) | *(_QWORD *)(v4 + a2) ^ *(_QWORD *)(v4 + a1) | *(_QWORD *)(v5 + a2) ^ *(_QWORD *)(v5 + a1) | *(_QWORD *)(8LL * (i + 5) + a2) ^ *(_QWORD *)(8LL * (i + 5) + a1) | *(_QWORD *)(a2 + 8LL * (i + 6)) ^ *(_QWORD *)(a1 + 8LL * (i + 6)) | *(_QWORD *)(8LL * i + a2) ^ *(_QWORD *)(8LL * i + a1);
    if ( v6 )
      break;
  }
  return v6 == 0;
}
