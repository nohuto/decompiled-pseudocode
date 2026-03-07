__int64 __fastcall HalpInterruptRegisterLine(__int64 a1)
{
  unsigned int v1; // edi
  int v3; // ebx
  int v4; // r14d
  int v5; // r12d
  int v6; // r13d
  ULONG_PTR *v7; // rax
  ULONG_PTR *v8; // rsi
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // ebp
  unsigned int v12; // r14d
  unsigned int v13; // ebp
  _DWORD *MemoryInternal; // rax
  _DWORD *v15; // rbx
  int v16; // r8d
  int v17; // r10d
  int v18; // eax
  int v19; // r9d
  char *v20; // rdx
  int v21; // ecx
  int v22; // eax
  ULONG_PTR *v23; // rsi
  ULONG_PTR **v24; // rax
  unsigned int v26; // eax
  ULONG_PTR *v27; // rax
  ULONG_PTR *v28; // rdx

  v1 = 0;
  if ( !HalpInterruptRegistrationAllowed || KeGetPcr()->Prcb.Number )
  {
    return (unsigned int)-1073741431;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 4);
    v4 = *(_DWORD *)(a1 + 8);
    if ( v3 < v4 && (v5 = *(_DWORD *)(a1 + 12)) != 0 )
    {
      v6 = *(_DWORD *)a1;
      v7 = HalpInterruptLookupController(*(_DWORD *)a1);
      v8 = v7;
      if ( v7 )
      {
        if ( v5 != 6 )
        {
          v9 = *((_DWORD *)v7 + 74);
          v10 = *((_DWORD *)v7 + 75);
          if ( v9 != v10 && v4 > v9 && v3 < v10 )
          {
            v27 = (ULONG_PTR *)v8[33];
            while ( v27 != v8 + 33 )
            {
              v28 = v27;
              v27 = (ULONG_PTR *)*v27;
              if ( v3 < *((_DWORD *)v28 + 6) && v4 > *((_DWORD *)v28 + 5) )
                return (unsigned int)-1073741182;
            }
          }
        }
        v11 = *(_DWORD *)(a1 + 24);
        if ( v11 == -1 || !HalpInterruptFindLinesForGsiRange(v11, v4 + v11 - v3) )
        {
          v12 = v4 - v3;
          if ( *((_DWORD *)v8 + 60) == 2 && v11 != -1 )
          {
            v26 = 0;
            if ( HalpInterruptIoApicCount )
            {
              while ( *(_DWORD *)(HalpInterruptIoApic + 16LL * v26) != v6
                   || v12 <= *(_DWORD *)(HalpInterruptIoApic + 16LL * v26 + 12) )
              {
                if ( ++v26 >= HalpInterruptIoApicCount )
                  goto LABEL_12;
              }
              v12 = *(_DWORD *)(HalpInterruptIoApic + 16LL * v26 + 12);
            }
          }
LABEL_12:
          if ( v5 == 7 )
            v13 = (((v12 + 31) >> 3) + 7) & 0xFFFFFFF8;
          else
            v13 = 0;
          MemoryInternal = (_DWORD *)HalpMmAllocateMemoryInternal(v13 + 8 * (v12 + 8 * v12 + 11), 1LL);
          v15 = MemoryInternal;
          if ( MemoryInternal )
          {
            memset(MemoryInternal, 0, v13 + 8 * (v12 + 8 * v12 + 11));
            if ( v13 )
            {
              v15[18] = v12;
              *((_QWORD *)v15 + 10) = v15 + 22;
            }
            v16 = *(_DWORD *)(a1 + 4);
            v17 = *(_DWORD *)(a1 + 12);
            v18 = *(_DWORD *)(a1 + 24);
            v15[5] = v16;
            v15[7] = v18;
            v19 = v16 + v12;
            v15[6] = v16 + v12;
            v15[8] = v17;
            if ( v17 == 7 )
            {
              *((_QWORD *)v15 + 7) = *(_QWORD *)(a1 + 32);
              v15[16] = *(_DWORD *)(a1 + 40);
              v15[9] = *(_DWORD *)(a1 + 16);
            }
            v20 = (char *)v15 + v13 + 88;
            *((_QWORD *)v15 + 5) = v20;
            *((_QWORD *)v15 + 6) = &v20[56 * v12];
            if ( v17 == 6 )
            {
              v23 = v8 + 35;
              v15[4] = *(_DWORD *)(a1 + 20);
            }
            else
            {
              v15[4] = *((_DWORD *)v8 + 64);
              v21 = *((_DWORD *)v8 + 74);
              v22 = *((_DWORD *)v8 + 75);
              if ( v21 == v22 )
              {
                *((_DWORD *)v8 + 74) = v16;
                *((_DWORD *)v8 + 75) = v15[6];
              }
              else if ( v16 >= v21 )
              {
                if ( v19 > v22 )
                  *((_DWORD *)v8 + 75) = v19;
              }
              else
              {
                *((_DWORD *)v8 + 74) = v16;
              }
              v23 = v8 + 33;
            }
            v24 = (ULONG_PTR **)v23[1];
            if ( *v24 != v23 )
              __fastfail(3u);
            *(_QWORD *)v15 = v23;
            *((_QWORD *)v15 + 1) = v24;
            *v24 = (ULONG_PTR *)v15;
            v23[1] = (ULONG_PTR)v15;
          }
          else
          {
            return (unsigned int)-1073741670;
          }
        }
        else
        {
          return (unsigned int)-1073741182;
        }
      }
      else
      {
        return (unsigned int)-1073741275;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v1;
}
