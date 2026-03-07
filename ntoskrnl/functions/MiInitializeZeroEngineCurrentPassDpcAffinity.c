__int64 __fastcall MiInitializeZeroEngineCurrentPassDpcAffinity(_QWORD *a1, unsigned int a2)
{
  _QWORD *v2; // rdi
  unsigned int v3; // ebx
  __int64 v5; // rdx
  unsigned int v6; // r8d
  __int64 v7; // r15
  __int64 v8; // rdx
  _QWORD *v9; // rax
  int v10; // esi
  int v11; // r12d
  int v12; // ecx
  unsigned int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // esi
  int v20; // eax
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v22; // r8
  _OWORD v24[3]; // [rsp+20h] [rbp-38h] BYREF
  int v25; // [rsp+60h] [rbp+8h]

  v2 = (_QWORD *)*a1;
  v3 = 0;
  if ( *(_DWORD *)*a1 )
  {
    v5 = v2[21];
    v6 = 0;
    v7 = *(_QWORD *)(qword_140C65720 + 376LL * *(unsigned int *)(v5 + 56) + 368);
    v25 = *(_DWORD *)(v5 + 92);
    if ( *(_WORD *)(v7 + 8) )
    {
      do
      {
        v8 = v6++;
        v8 *= 2LL;
        *(_OWORD *)(v2[18] + 8 * v8) = *(_OWORD *)(v2[17] + 8 * v8);
        *(_QWORD *)(v2[18] + 8 * v8) = 0LL;
      }
      while ( v6 < *(unsigned __int16 *)(v7 + 8) );
    }
    v9 = v2;
    v10 = 0;
    v11 = 0;
    if ( a2 )
    {
      v12 = v25;
      do
      {
        v13 = 0;
        if ( *(_WORD *)(v7 + 8) )
        {
          do
          {
            v24[0] = *(_OWORD *)(v9[17] + 16LL * v13);
            if ( *(_QWORD *)&v24[0] )
            {
              while ( 1 )
              {
                v14 = KiProcessorBlock[(unsigned int)KeFindFirstSetRightGroupAffinity((__int64)v24)];
                v15 = *(_QWORD *)(v14 + 200);
                v16 = *(_QWORD *)&v24[0] & ~v15;
                *(_QWORD *)&v24[0] = v16;
                if ( *(_DWORD *)(v14 + 34872) == v10 )
                {
                  v17 = v2[18];
                  v18 = *(_QWORD *)(v17 + 16LL * v13);
                  if ( (v18 & v15) == 0 )
                    break;
                }
                if ( !v16 )
                  goto LABEL_13;
              }
              *(_QWORD *)(v17 + 16LL * v13) = v15 | v18;
              ++v11;
            }
LABEL_13:
            if ( v11 == a2 )
              break;
            ++v13;
            v9 = v2;
          }
          while ( v13 < *(unsigned __int16 *)(v7 + 8) );
          v12 = v25;
        }
        v19 = v10 + 1;
        v20 = 0;
        if ( v19 != v12 )
          v20 = v19;
        v10 = v20;
        v9 = v2;
      }
      while ( v11 != a2 );
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( *(_WORD *)(v7 + 8) )
    {
      v22 = v2[18];
      while ( CurrentPrcb->Group != *(_WORD *)(v22 + 16LL * v3 + 8)
           || (*(_QWORD *)(v22 + 16LL * v3) & CurrentPrcb->GroupSetMember) == 0 )
      {
        if ( ++v3 >= *(unsigned __int16 *)(v7 + 8) )
          return 0LL;
      }
      return 1LL;
    }
  }
  else if ( KeGetPcr()->Prcb.Number < a2 )
  {
    return 1LL;
  }
  return 0LL;
}
