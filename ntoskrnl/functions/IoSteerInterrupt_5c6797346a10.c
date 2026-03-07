__int64 __fastcall IoSteerInterrupt(__int64 a1, __int64 a2)
{
  unsigned int v3; // r8d
  int v4; // r9d
  __int64 v5; // rcx
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int16 v9; // dx
  __int64 v11; // rcx
  _WORD *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx

  v3 = -1073741823;
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  if ( !a1 || !a2 )
    goto LABEL_62;
  if ( !*(_DWORD *)a1 )
  {
    v4 = *(_DWORD *)a2;
    if ( *(int *)a2 < 2 && (v4 != 1 || *(_QWORD *)(a2 + 16)) )
    {
      v5 = *(_QWORD *)(a1 + 16);
      if ( v5 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
        if ( v6 && (*(_DWORD *)(v6 + 396) & 0x20000) == 0 )
        {
          if ( *(_DWORD *)(a1 + 8) != 1 )
          {
            if ( *(_DWORD *)(a1 + 8) == 2 )
            {
              v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 296LL) + 112LL;
              goto LABEL_21;
            }
            if ( *(_DWORD *)(a1 + 8) == 3 )
            {
              v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
              goto LABEL_21;
            }
            if ( *(_DWORD *)(a1 + 8) != 4 )
              return (unsigned int)-1073741637;
          }
          v7 = *(_QWORD *)(a1 + 24);
LABEL_21:
          if ( *(_DWORD *)(*(_QWORD *)(v7 + 392) + 88LL) == *(_DWORD *)(v7 + 88) )
          {
            if ( v4 == 1 )
            {
              v8 = *(_QWORD *)(a2 + 16);
              v9 = *(_WORD *)(a2 + 8);
            }
            else
            {
              if ( v4 )
                return v3;
              v9 = 0;
              v8 = 0LL;
            }
            return (unsigned int)KeIntSteerAssignCpuSet(*(_QWORD *)(v7 + 392), v9, v8);
          }
LABEL_62:
          __fastfail(5u);
        }
        IoAddTriageDumpDataBlock(v5, (PVOID)*(unsigned __int16 *)(v5 + 2));
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
        if ( v11 )
        {
          IoAddTriageDumpDataBlock(v11, (PVOID)(unsigned int)*(__int16 *)(v11 + 2));
          v12 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 56LL);
          if ( *v12 )
          {
            IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 56LL));
          }
        }
        v13 = *(_QWORD *)(a1 + 16);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 312);
          if ( *(_QWORD *)(v14 + 40) )
          {
            v15 = *(_QWORD *)(v14 + 40);
            IoAddTriageDumpDataBlock(v15, (PVOID)0x388);
            if ( *(_WORD *)(v15 + 40) )
            {
              IoAddTriageDumpDataBlock(v15 + 40, (PVOID)2);
              IoAddTriageDumpDataBlock(*(_QWORD *)(v15 + 48), (PVOID)*(unsigned __int16 *)(v15 + 40));
            }
            v16 = *(_QWORD *)(a1 + 16);
            v17 = v16 + 312;
            if ( v16 )
              v18 = *(_QWORD *)(*(_QWORD *)v17 + 40LL);
            else
              v18 = 0LL;
            if ( *(_WORD *)(v18 + 56) )
            {
              if ( v16 )
                v19 = *(_QWORD *)(*(_QWORD *)v17 + 40LL);
              else
                LODWORD(v19) = 0;
              IoAddTriageDumpDataBlock(v19 + 56, (PVOID)2);
              v20 = *(_QWORD *)(a1 + 16);
              if ( v20 )
              {
                v21 = *(_QWORD *)(*(_QWORD *)(v20 + 312) + 40LL);
                v22 = v21;
              }
              else
              {
                v21 = 0LL;
                v22 = 0LL;
              }
              IoAddTriageDumpDataBlock(*(_QWORD *)(v22 + 64), (PVOID)*(unsigned __int16 *)(v21 + 56));
            }
            v23 = *(_QWORD *)(a1 + 16);
            v24 = v23 + 312;
            if ( v23 )
              v25 = *(_QWORD *)(*(_QWORD *)v24 + 40LL);
            else
              v25 = 0LL;
            if ( *(_QWORD *)(v25 + 16) )
            {
              v26 = v23 ? *(_QWORD *)(*(_QWORD *)v24 + 40LL) : 0LL;
              if ( *(_WORD *)(*(_QWORD *)(v26 + 16) + 56LL) )
              {
                if ( v23 )
                  v27 = *(_QWORD *)(*(_QWORD *)v24 + 40LL);
                else
                  v27 = 0LL;
                IoAddTriageDumpDataBlock(*(_QWORD *)(v27 + 16) + 56, (PVOID)2);
                v28 = *(_QWORD *)(a1 + 16);
                if ( v28 )
                {
                  v29 = *(_QWORD *)(*(_QWORD *)(v28 + 312) + 40LL);
                  v30 = v29;
                }
                else
                {
                  v29 = 0LL;
                  v30 = 0LL;
                }
                IoAddTriageDumpDataBlock(
                  *(_QWORD *)(*(_QWORD *)(v30 + 16) + 64LL),
                  (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v29 + 16) + 56LL));
              }
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, *(_QWORD *)(a1 + 16), 0LL, 0LL);
    }
  }
  return (unsigned int)-1073741811;
}
