char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_66f16f058a7148ecab2826ea000753f1___lambda_45b02998bed050691e5b6850ccebf4aa___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        unsigned int *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r12
  void *v11; // r11
  unsigned __int64 v12; // r15
  char *v13; // rcx
  _QWORD *v14; // r8
  unsigned int v15; // r9d
  __int64 v16; // rdx
  void *v18; // [rsp+58h] [rbp+10h] BYREF

  v6 = a6;
  while ( 1 )
  {
    v11 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    v18 = v11;
    if ( (unsigned __int64)v11 < 0x1C )
      break;
LABEL_5:
    v12 = a4 - *a3;
    if ( v12 >= ((unsigned __int64)v11 - 20) >> 3 )
      LODWORD(v12) = ((unsigned __int64)v11 - 20) >> 3;
    v18 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(8 * v12 + 20), &v18);
    v13 = (char *)v18;
    *(_DWORD *)v18 = 8 * v12 + 20;
    v14 = v13 + 20;
    *(_OWORD *)(v13 + 4) = 0LL;
    *((_DWORD *)v13 + 1) = 346;
    *((_DWORD *)v13 + 2) = *(_DWORD *)(a1 + 32);
    *((_DWORD *)v13 + 4) = 8 * v12;
    v15 = 0;
    for ( v13[12] = *a3 != 0; v15 < (unsigned int)v12; ++v14 )
    {
      ++v15;
      v16 = *a3;
      *a3 = v16 + 1;
      *v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 72LL) + 8 * v16);
    }
    if ( *a3 >= a4 )
      return 1;
  }
  if ( DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v18) )
  {
    v11 = v18;
    goto LABEL_5;
  }
  return 0;
}
