__int64 __fastcall ReadFieldObj(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebp
  int *v6; // rdi
  int *v7; // rcx
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // r9d
  __int64 v13; // r8
  unsigned int v14; // ecx
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // rcx

  v3 = a3;
  if ( !a3 )
  {
    v6 = (int *)(a2 + 16);
    v7 = (int *)(a2 + 16);
    switch ( *(_DWORD *)(a2 + 16) & 0xF )
    {
      case 0:
        goto LABEL_7;
      case 1:
        goto LABEL_10;
      case 2:
        while ( 1 )
        {
          if ( *(_DWORD *)(a2 + 80) )
          {
            WriteSystemMem(*(void **)(a2 + 40), *(unsigned int *)(a2 + 56));
            *(_QWORD *)(a2 + 40) += *(unsigned int *)(a2 + 56);
            if ( *(_QWORD *)(a2 + 40) >= *(_QWORD *)(a2 + 48) )
            {
              ++*v6;
              goto LABEL_22;
            }
          }
          v12 = *(_DWORD *)(a2 + 72);
          v13 = *(_QWORD *)(a2 + 88) >> *(_DWORD *)(a2 + 76);
          v14 = *(_DWORD *)(a2 + 104);
          *(_QWORD *)(a2 + 88) = v13;
          if ( v14 < v12 )
            *(_QWORD *)(a2 + 88) = v13 & (((1LL << v14) & -(__int64)(v14 < 0x40)) - 1);
          WriteSystemMem(*(void **)(a2 + 40), *(unsigned int *)(a2 + 56));
          v15 = *(_DWORD *)(a2 + 100);
          v16 = *(_DWORD *)(a2 + 56);
          *(_DWORD *)(a2 + 96) += v16;
          ++*(_DWORD *)(a2 + 80);
          *(_DWORD *)(a2 + 100) = 0;
          v17 = *v6;
          v18 = v15 - 8 * v16;
          v19 = *(_DWORD *)(a2 + 80);
          *(_DWORD *)(a2 + 104) += v18;
          v7 = v6;
          if ( v19 >= *(_DWORD *)(a2 + 60) )
          {
            *v6 = v17 + 1;
            goto LABEL_22;
          }
          *v6 = v17 - 2;
LABEL_7:
          v8 = *v7;
          if ( *(_DWORD *)(a2 + 80) >= *(_DWORD *)(a2 + 60) )
            break;
          *v7 = v8 + 1;
          v9 = *(_QWORD *)(a2 + 32);
          if ( *(_WORD *)(v9 + 2) == 5 )
          {
            v10 = **(_QWORD **)(v9 + 32);
            if ( *(_WORD *)(v10 + 66) == 132 )
              return (unsigned int)PushAccFieldObj(
                                     a1,
                                     (int)WriteFieldObj,
                                     **(_QWORD **)(v10 + 96) + 64LL,
                                     *(_QWORD *)(**(_QWORD **)(v10 + 96) + 96LL) + 8LL,
                                     a2 + 96,
                                     4u);
          }
LABEL_10:
          v11 = *(_QWORD *)(a2 + 32);
          ++*v6;
          v3 = AccessFieldData(a1, v11, (unsigned int *)(a2 + 96), (unsigned int *)(a2 + 88), 1);
          if ( v3 || a2 != *(_QWORD *)(a1 + 416) )
            return v3;
        }
        *v7 = v8 + 3;
        break;
      case 3:
        break;
      default:
        return v3;
    }
  }
LABEL_22:
  v20 = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = *(_QWORD *)(v20 + 8);
  HeapFree(v20);
  return v3;
}
