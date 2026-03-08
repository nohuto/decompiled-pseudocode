/*
 * XREFs of PopFxVerifyDependencies @ 0x140983190
 * Callers:
 *     PopFxRegisterDeviceWorker @ 0x14083714C (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxVerifyDependencies(_DWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // ebx
  _DWORD *Pool2; // r11
  unsigned int v8; // edx
  unsigned int v9; // ebp
  _DWORD *v10; // r12
  __int64 v11; // rcx
  int v12; // r15d
  unsigned int *v13; // r9
  unsigned int v14; // eax
  unsigned int v15; // r10d
  __int64 v16; // r14
  unsigned int v17; // eax
  unsigned int v19; // r8d
  unsigned int v20; // r14d
  __int64 v21; // r10
  int v22; // eax
  __int64 v23; // rax

  v6 = 0;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 4LL * a3, 1297630800LL);
  if ( Pool2 )
  {
    v8 = 0;
    v9 = 0;
    if ( a3 )
    {
      v10 = a1;
      while ( 1 )
      {
        if ( !*v10 )
        {
          Pool2[v8++] = v9;
          if ( v8 )
            break;
        }
LABEL_26:
        ++v9;
        v10 += 3;
        if ( v9 >= a3 )
          goto LABEL_17;
      }
      while ( 1 )
      {
        v11 = (unsigned int)Pool2[v8 - 1];
        if ( (unsigned int)v11 >= a3 )
          break;
        v12 = a1[3 * v11];
        if ( v12 == 2 )
          break;
        _mm_lfence();
        v13 = *(unsigned int **)(*(_QWORD *)(*(_QWORD *)(a2 + 832) + 8 * v11) + 176LL);
        _mm_lfence();
        if ( v12 == 1 )
        {
          a1[3 * v11] = 2;
          --v8;
          v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 832) + 8LL * (unsigned int)v11) + 172LL);
          if ( v14 )
          {
            v15 = a1[3 * v11 + 1];
            v16 = v14;
            do
            {
              v17 = a1[3 * *v13 + 1];
              if ( v17 > v15 )
              {
                v15 = a1[3 * *v13 + 1];
                a1[3 * v11 + 1] = v17;
              }
              v13 += 2;
              --v16;
            }
            while ( v16 );
            if ( ++a1[3 * v11 + 1] > 4u )
              break;
          }
        }
        else
        {
          a1[3 * v11] = 1;
          v19 = 0;
          v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 832) + 8LL * (unsigned int)v11) + 172LL);
          if ( v20 )
          {
            do
            {
              v21 = *v13;
              v22 = a1[3 * v21];
              if ( v22 == 1 )
                goto LABEL_16;
              if ( !v22 )
              {
                if ( v8 >= a3 )
                  goto LABEL_16;
                v23 = v8++;
                Pool2[v23] = v21;
              }
              ++v19;
              v13 += 2;
            }
            while ( v19 < v20 );
          }
        }
        if ( !v8 )
          goto LABEL_26;
      }
LABEL_16:
      v6 = -1073741811;
    }
LABEL_17:
    ExFreePoolWithTag(Pool2, 0x4D584650u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
